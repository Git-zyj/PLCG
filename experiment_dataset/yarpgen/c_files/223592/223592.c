/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 &= var_13;

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_3] = 0;
                        arr_11 [i_0] [i_1] [i_2] [i_3] = (((((1 ? 160 : -23779))) ? -23782 : (9275042445913231177 - 23761)));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_2] [i_4] = (((!var_5) / 41887));
                        var_16 = (~((((14192 >> (1938251271 - 1938251263))))));
                    }
                }
            }
        }
    }
    var_17 = (((((-(var_3 - -23786)))) ? var_9 : var_13));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {

                /* vectorizable */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_18 ^= (((arr_12 [i_5] [i_6] [i_7] [i_8] [i_9]) / 2731324368));
                                arr_33 [i_5] [i_6] [i_7] [i_8] [i_9] &= (105 % var_6);
                                var_19 ^= (((arr_30 [i_5] [i_6] [i_7] [i_8] [i_9] [i_9]) ? 3250526439098268017 : (arr_24 [i_9] [i_7] [i_6])));
                            }
                        }
                    }
                    var_20 = (max(var_20, 1));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_21 = var_10;
                                var_22 = -var_8;
                            }
                        }
                    }
                }
                var_23 = var_8;

                /* vectorizable */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    var_24 = (((arr_12 [i_6] [i_6] [i_6] [i_6] [i_6]) ? 26221 : ((((var_6 == (arr_24 [i_5] [i_6] [i_12])))))));
                    var_25 = (21720 / 1563642928);
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 11;i_14 += 1)
                    {
                        {
                            var_26 = (max(var_26, ((max((((arr_37 [i_5] [i_5] [i_6] [i_6] [i_13] [i_14] [i_14]) ? (arr_37 [i_5] [i_6] [i_13] [i_13] [i_13] [i_14] [i_14 - 1]) : (arr_37 [i_5] [i_5] [i_6] [i_13] [i_13] [i_13] [i_14 + 3]))), (41409 == -122))))));
                            var_27 = (max((max((arr_39 [i_14] [i_13] [i_5]), 105)), (var_9 || 8431257005785042971)));
                        }
                    }
                }
                arr_46 [i_5] = (max((118 % 43), var_10));
            }
        }
    }
    #pragma endscop
}
