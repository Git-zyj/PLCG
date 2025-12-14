/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = (max(var_20, (((((((35933343 ? 69 : var_15)))) ? -35933344 : (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = (((max(-35933365, 3182709002)) - ((((((arr_1 [14]) ^ var_8)) + 43189)))));
                    arr_8 [i_0] [i_1 + 2] |= var_0;

                    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        arr_12 [5] [i_1] [i_2] [i_3] = -17969911097397501538;
                        var_22 += (32765 ? ((max((arr_1 [i_1 + 4]), (arr_1 [i_1 + 4])))) : ((((var_7 > var_11) >= (32765 / 255)))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_4] [18] [i_1] [9] = var_6;
                        arr_18 [11] = ((((min(-var_11, (arr_3 [i_2] [i_1])))) + (((arr_9 [i_1] [i_1] [i_1 - 1] [i_1]) ? (arr_9 [i_1] [i_1] [i_1 + 4] [i_1 + 4]) : 186))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_23 -= (((arr_10 [i_1] [i_1 + 2] [i_1] [i_2]) >= (arr_16 [i_1 + 2] [i_1 - 1] [i_1] [i_1])));
                        arr_22 [i_0] [i_1] [i_2] [i_2] [i_5] = (((arr_19 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 3]) || var_9));
                    }
                    arr_23 [8] [i_1] [i_2] [10] = (arr_16 [8] [i_1] [i_2] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
