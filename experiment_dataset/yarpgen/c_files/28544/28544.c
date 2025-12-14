/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 25779;
    var_14 &= (max((((-((var_11 ? 57229 : 39758))))), var_10));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0 + 2] [i_1] [0] [i_3] = (min((((arr_1 [i_3] [i_2]) ? (((var_5 ? var_2 : (arr_5 [i_1] [i_2])))) : (max(var_9, (arr_8 [i_0] [i_2] [i_3]))))), ((min(6335, 7)))));
                        var_15 = (max(var_15, (((~var_0) ? (((arr_8 [i_0] [i_0 - 1] [i_0]) & -4294967290)) : (((((((arr_8 [3] [i_1] [i_3]) ? var_5 : var_10)) <= (arr_7 [i_2 + 1] [i_2 + 1] [i_2] [2])))))))));

                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_0] [2] [i_3] [12] = ((((max(var_9, (arr_14 [i_2] [i_2 - 1] [i_0 + 1] [6] [i_0] [i_0])))) ? ((((arr_11 [i_4 + 2] [i_2 - 2] [11] [i_2 - 2]) ? (arr_14 [i_3] [i_2 - 2] [i_0 - 1] [i_0] [i_0] [i_0]) : (arr_14 [i_4] [i_2 - 2] [i_0 + 2] [14] [i_0] [i_0])))) : ((3831896337041825688 ? 32767 : 14))));
                            var_16 *= (arr_6 [i_2] [5]);
                            var_17 &= ((var_1 ? (((~(arr_3 [i_0] [i_1])))) : ((((arr_5 [i_0 + 2] [i_2 - 2]) ? 88 : (arr_5 [i_0 - 1] [i_2 + 1]))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_20 [i_0] [0] [i_2 - 2] [i_2] [i_2] = ((57229 ? 31 : ((57242 ? var_0 : var_9))));
                            var_18 ^= (arr_5 [0] [i_0]);
                            var_19 = (((((arr_10 [5] [i_1] [i_1] [i_1] [i_1] [i_1]) / var_6)) >> (3941223667 - 3941223651)));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_20 ^= ((((-39756 ? ((28 ? 59183 : 15)) : 1)) / var_3));
                            arr_23 [i_0 - 1] [15] [i_0] [i_0 + 1] [i_0] = var_3;
                            var_21 = 1;
                            var_22 &= (max((((var_12 == (min((arr_21 [i_0] [i_0 + 1] [i_0 + 1] [i_2] [i_2] [11] [i_6]), var_4))))), (~var_3)));
                            arr_24 [i_0 + 2] [i_1] [i_2 - 1] [i_3] [1] [i_0] [i_6] = (min((arr_21 [i_2 - 2] [i_2] [9] [i_2 - 2] [i_2] [i_2 - 2] [4]), (((-1 - -31) ? (arr_13 [i_2]) : (((var_0 + 2147483647) >> (25788 - 25770)))))));
                        }
                    }
                    var_23 ^= var_6;
                    var_24 = (min(var_24, 1));
                    arr_25 [i_0] [i_0 + 1] [i_0] [i_0] = var_0;
                    var_25 = (max(var_25, (((((var_8 ? (arr_6 [i_0 + 2] [i_1]) : var_3)) <= var_8)))));
                }
            }
        }
    }
    #pragma endscop
}
