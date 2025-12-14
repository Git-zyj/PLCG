/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (arr_3 [i_0] [i_0]);
                arr_5 [i_1] |= 9223372036854775807;
                var_17 = (min(var_17, 9223372036854775807));

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    var_18 = max((arr_4 [i_0] [9] [i_1]), 14733812770855942763);
                    var_19 = (arr_4 [11] [i_1] [i_1]);
                    var_20 = (min(var_20, (arr_1 [i_2])));
                    var_21 = ((((max(412316860416, (arr_0 [10] [i_1])))) ? (((arr_7 [i_0]) ? (((((arr_1 [i_2]) && (arr_7 [i_0]))))) : (max((arr_3 [i_0] [20]), 14912200029994878308)))) : -1328537311570528123));
                    var_22 = ((((~(-9223372036854775807 - 1))) != (!-3)));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    var_23 ^= (arr_0 [i_3 + 1] [i_3]);

                    for (int i_4 = 3; i_4 < 22;i_4 += 1)
                    {
                        arr_12 [i_0] [8] [8] [i_1] [8] [i_0] = (arr_2 [i_0] [i_4]);
                        var_24 = (max(var_24, (((var_3 ? (!var_4) : ((~(arr_6 [i_0 - 2]))))))));
                        var_25 = (((((arr_3 [i_0] [i_1]) & (arr_1 [5])))) ? (((~(arr_6 [i_0])))) : (arr_9 [i_0] [i_0]));
                        arr_13 [i_0 - 3] [i_0 + 2] [i_0] [i_0 + 1] [i_1] = ((-(arr_3 [i_0] [i_0])));
                    }
                }
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_21 [i_1] [i_0] = (((((-(arr_4 [i_1] [i_5 + 1] [i_6 - 1])))) ? (arr_6 [i_0]) : (max((arr_0 [i_0] [8]), var_4))));
                                var_26 = (min(var_26, 591666350675278099));
                            }
                        }
                    }
                    var_27 = ((~(~8869859148290751)));

                    for (int i_8 = 1; i_8 < 24;i_8 += 1)
                    {
                        var_28 = max(9223372036854775807, 14087378512734473024);
                        var_29 = 255;
                    }
                    var_30 = (max(var_30, (arr_22 [i_0] [i_0] [0] [i_1])));
                }
            }
        }
    }
    var_31 = max(var_11, var_12);
    var_32 = 3618482092706195532;
    var_33 -= 15241488225234483509;
    #pragma endscop
}
