/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_13 = (arr_1 [i_0] [i_1]);
                    var_14 = (min(((((arr_0 [i_0]) ? var_9 : (arr_0 [i_0])))), (((arr_7 [i_0] [i_0] [5]) * (!var_4)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_3] [i_0] [i_0] = (((arr_9 [i_3] [i_2] [i_1] [5]) <= (arr_9 [i_2] [i_2] [i_2] [0])));
                        var_15 &= (arr_7 [i_0] [i_1] [i_3]);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_16 ^= var_2;
                                var_17 += arr_5 [i_0] [i_0];
                                var_18 *= (!((((arr_6 [10] [i_1] [i_2] [2]) ? (var_6 / var_4) : (((167 ? -1438846832 : var_2)))))));
                                arr_18 [i_0] [9] [i_2] [i_1] [9] = var_2;
                            }
                        }
                    }
                }
                var_19 |= ((var_4 ? (!1) : ((var_2 ^ (arr_5 [i_0] [i_0])))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_20 ^= -var_1;
                            var_21 ^= ((-((max((arr_14 [i_0] [i_1] [9] [i_7]), (arr_14 [2] [i_0] [i_6] [i_7]))))));
                            var_22 = ((((var_7 ? (arr_5 [8] [i_1]) : (arr_24 [i_1])))) ? var_5 : (((((arr_24 [i_6]) && var_2)))));
                            var_23 = (-((((var_2 <= var_9) && (arr_9 [i_0] [i_1] [i_6] [i_7])))));
                            var_24 = (max(var_24, var_4));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_25 ^= var_2;
                            var_26 ^= ((var_5 & (min((arr_25 [i_8] [i_1] [i_0]), var_6))));
                        }
                    }
                }
                arr_30 [i_1] = (min(var_7, (var_3 <= var_3)));
            }
        }
    }
    var_27 = ((101 ? 187 : var_6));
    var_28 |= (((64060 ? 1561971321 : 255)));
    var_29 = (var_1 / var_0);
    var_30 &= var_2;
    #pragma endscop
}
