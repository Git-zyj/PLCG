/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((~((((3912515436625450180 ? 7533147758038260504 : 2333991124))))));
                    var_18 = (~1960976171);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3] [i_3] [i_2] [10] [i_3] [i_0] = ((((((arr_5 [i_2] [i_4 + 1] [i_2] [i_3]) << (((arr_5 [i_0] [i_4 - 2] [i_4 - 2] [5]) - 11910794066257961288))))) ? (arr_5 [1] [i_4 - 1] [0] [i_3]) : (arr_2 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                                var_19 = (min((arr_3 [i_0] [i_0] [13]), ((1 ? 1 : 2333991118))));
                                var_20 = ((~(((-9223372036854775807 - 1) ? -122 : (((arr_11 [i_0] [13] [0] [1] [5]) ? (arr_5 [i_0] [i_1] [i_2] [i_3]) : (arr_9 [12] [i_1] [1] [i_3])))))));
                                var_21 = (((((var_6 ? (arr_8 [i_0] [i_1] [i_2] [i_3 - 1] [i_4]) : 3))) ? var_0 : 95));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_21 [i_5] [i_1] [10] = (((((((((45 ? 94 : -45))) ? -94 : var_6)) + 2147483647)) >> (((((var_3 ? var_8 : (arr_16 [i_0] [3] [0] [i_5])))) + 22005))));
                                var_22 = (max((arr_2 [i_6] [i_2] [i_0]), 1));
                                arr_22 [i_0] [i_0] [i_2] [i_5] [i_5] [i_5] = (-1 - 1);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (((min((min(var_0, var_17)), var_13)) | ((var_17 ? var_9 : (max(var_17, var_10))))));
    var_24 = var_2;
    var_25 = var_11;
    #pragma endscop
}
