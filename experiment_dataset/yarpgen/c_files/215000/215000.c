/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = ((((((0 == (arr_0 [i_0]))) | (!0)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_18 = 1373138509;
                            var_19 = ((max((arr_6 [i_2] [i_2 - 1] [i_2] [i_1] [i_2]), (!255))) % ((0 ? var_2 : (arr_6 [i_2] [i_2 + 1] [i_2] [i_1] [i_1]))));
                        }
                    }
                }
                var_20 = (((arr_2 [i_1] [i_1]) == var_5));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_21 = (-2147483647 - 1);
                                var_22 = var_5;
                                var_23 |= var_6;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_24 = 1373138509;
                                var_25 = (((((arr_0 [i_9]) ? (((var_5 ? var_16 : 255))) : (min(2921828784, 65535)))) <= (((~(arr_18 [i_4] [i_4 - 2] [i_4] [i_4 - 1] [i_4]))))));
                                var_26 = (arr_2 [8] [8]);
                                var_27 = max(((0 ? 2147483647 : (arr_5 [1] [1]))), (arr_11 [i_9]));
                                var_28 = (max((((arr_4 [i_4 - 2] [i_6 - 1] [i_10] [i_10]) ? var_2 : (arr_4 [i_4 - 1] [i_6 - 2] [i_4 - 1] [i_6 - 2]))), (arr_4 [i_4 - 2] [i_6 - 3] [i_10] [i_10])));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_29 = (((var_1 ? 0 : var_1)));
                        var_30 = (((-2147483647 - 1) ? 8878220601011963588 : (!0)));

                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            var_31 = (arr_25 [i_4] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]);
                            var_32 = 17553;
                            var_33 = var_15;
                        }
                        var_34 = (((~268435455) ? var_5 : (~0)));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_35 = (min(var_35, (arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1])));
                        var_36 = (arr_11 [i_4]);
                        var_37 = ((1938925363567776011 ? (arr_19 [i_4 - 1] [8] [i_4 - 1] [8] [i_13]) : var_12));
                        var_38 = var_9;
                    }
                    var_39 &= (min(((!(arr_26 [i_4] [i_4 + 1] [i_4] [i_4] [i_4 - 2]))), (((arr_3 [i_4 + 1] [i_4 - 2]) && 4651678972926284046))));
                }
            }
        }
    }
    var_40 = ((((((min(var_7, 353262271)) << ((((var_10 ? 2234207627640832 : var_12)) - 90))))) ? (((((var_11 ? 31995 : var_15))) ? var_4 : (~4294967278))) : ((((min(var_1, (-32767 - 1)))) ? var_3 : 1408258789))));
    var_41 &= var_11;
    #pragma endscop
}
