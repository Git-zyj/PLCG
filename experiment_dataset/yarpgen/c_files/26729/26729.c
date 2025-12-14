/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_20 = 44024;
                    var_21 = (((((-11014 ? 64157 : var_11))) ? 13 : ((max(var_14, 0)))));
                    var_22 -= ((-(-var_5 >= 165)));
                    arr_11 [i_0] [i_0] [i_1] [i_2] = 128;
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_15 [i_1] [i_1] [i_1] = (((((max((arr_4 [i_1] [i_1]), (18 > 4))))) ^ 15110317502583490843));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [10] [i_0] [i_0] = arr_1 [i_0] [i_0];
                                var_23 = (max(var_23, (arr_0 [i_3])));
                                var_24 = 1;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    var_25 = 3;
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_26 = ((55 << (var_8 == 12178391284035542)));
                                arr_27 [i_0] [i_0] [i_1] [i_0] [i_1] [1] = var_0;
                            }
                        }
                    }
                    arr_28 [i_1] [i_1] [i_1] = var_8;
                }
                arr_29 [i_1] [i_1] = (max((arr_19 [i_1 + 1] [7] [2] [i_1] [i_1]), 32767));
                var_27 = (arr_16 [4] [i_1] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_0]);
            }
        }
    }

    for (int i_9 = 2; i_9 < 12;i_9 += 1)
    {
        var_28 -= var_11;
        var_29 = (max(var_29, 7042));
        arr_33 [9] = (((((((arr_5 [i_9]) && (~255))))) < (max(var_1, (arr_26 [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1] [i_9])))));
    }
    #pragma endscop
}
