/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((min(var_8, var_8)) | ((min(((16648 ? 1903892422 : 4680)), (max(var_2, var_9))))));
                    var_10 = (min(var_10, ((min(-var_4, ((var_6 ? -var_2 : (((var_7 ? var_5 : var_5))))))))));
                    var_11 = var_6;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [16] [10] [i_0] [i_0] [i_1 - 2] [i_0] = ((((((min(var_1, var_7))) ? ((var_4 ? var_3 : var_8)) : (((var_9 >> (var_4 - 1366879350))))))) ? (3298534883328 * -4670) : (((-var_0 ? var_6 : -var_2))));
                                arr_14 [i_0] [i_0] [2] = ((-((((((max(4669, 4677)))) >= var_2)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = (min(var_12, ((max((max(-var_9, (min(var_7, var_8)))), ((((var_1 / var_0) ? ((-4452116910864034372 ? -4670 : -4670)) : (var_8 > var_2)))))))));
    #pragma endscop
}
