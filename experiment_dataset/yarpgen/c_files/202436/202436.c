/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((var_12 >= -1), var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [8] [i_1] = ((-(arr_1 [i_0])));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_7 [i_2] = ((var_1 + (((562949953421311 / var_1) + (arr_2 [1])))));

                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        arr_10 [3] [i_1] [i_0] = 93;
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = ((((arr_1 [i_2]) < (arr_1 [i_1]))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_14 *= (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_14 [i_4] = (min((min(((~(arr_0 [i_4] [i_0]))), ((min(0, 0))))), (((~(1 ^ var_3))))));
                    }
                }
            }
        }
    }
    var_15 = var_1;
    var_16 = var_7;
    var_17 = var_8;
    #pragma endscop
}
