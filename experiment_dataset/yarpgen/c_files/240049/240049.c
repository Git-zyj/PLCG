/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_3 & ((-((-(-32767 - 1))))))))));
    var_17 = (32748 & 52901);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((1 ? 32767 : 0)))));
                    arr_8 [i_2] [i_1] [i_1] [i_2] = (max((var_10 == 32767), ((var_6 + ((1 ? 42707 : -32764))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_1] = (((((65535 ? 32755 : 101))) ? (min(-48, 932014868390009044)) : (((190 ? 1 : 32762)))));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_16 [i_1] [i_1] = (max(var_14, (((!(((3251518174933181419 ? 63 : 190))))))));
                            var_19 = (max(var_19, ((((((((!(arr_15 [i_0] [i_1] [i_1] [i_4] [i_0] [i_1]))))) | (var_6 | 144080003703767040)))))));
                            arr_17 [i_1] [i_1] [8] [i_2 + 2] [i_1] = var_9;
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            var_20 = (arr_11 [i_0] [i_1]);
                            var_21 = ((144080003703767040 ? 49921 : 5927296337391661343));
                            var_22 *= (((((19994 ? 124 : 255))) ? ((var_8 ? var_1 : (arr_11 [i_5] [i_1]))) : -1));
                            var_23 = (max(var_23, (arr_15 [i_2] [10] [i_2 - 1] [i_2] [i_0] [i_3])));
                            arr_20 [i_0] [i_1] [i_0] [4] [i_1] = (arr_18 [i_1]);
                        }
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            var_24 = (((((((min((arr_21 [i_0] [i_0] [i_2] [i_1] [i_6 - 1] [i_1]), (-127 - 1)))) ^ (arr_9 [i_0] [i_1] [i_6 - 2] [i_3] [i_6] [i_1])))) ? (min(((((-32767 - 1) && 0))), 0)) : ((((!-19) ? ((3 ? var_8 : 1376155608)) : (arr_9 [i_0] [i_0] [i_2 - 3] [i_3] [1] [i_1]))))));
                            var_25 += ((18304425330349020719 <= (-32767 - 1)));
                            var_26 = var_4;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
