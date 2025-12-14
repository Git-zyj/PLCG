/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((min(var_0, (arr_0 [i_0]))));
                var_12 = (arr_0 [i_0 - 1]);
                arr_5 [i_0 + 1] [i_1 + 1] = ((~((~(arr_2 [i_1])))));
                arr_6 [i_0 - 2] [i_0 - 2] = (((arr_0 [i_1 + 2]) != (max(var_8, ((var_4 ? var_0 : (arr_0 [i_0])))))));
                var_13 = (max(((-(arr_1 [i_1 + 1] [i_0 - 2]))), (((arr_0 [i_0 + 2]) | (arr_0 [i_0 + 1])))));
            }
        }
    }
    var_14 = (((((var_7 ? var_6 : var_1)) | var_7)));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        var_15 = (arr_16 [i_2 + 3] [1] [i_3]);
                        arr_19 [5] [5] [i_4] [i_3] = 1;
                        var_16 = 60471;
                        arr_20 [i_5] [i_3] [i_3] [i_2] = (((arr_17 [i_3 + 2] [11] [i_3 + 3] [i_3] [i_3 + 2]) >= (arr_17 [5] [i_3] [1] [i_5 + 1] [i_5 + 1])));
                    }
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        var_17 = var_7;
                        arr_23 [i_3] = (arr_10 [i_2 + 2]);
                        var_18 = (arr_11 [i_3]);
                    }
                    var_19 = var_0;
                }
            }
        }
    }
    #pragma endscop
}
