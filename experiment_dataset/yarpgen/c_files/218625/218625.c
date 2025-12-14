/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [2] [i_2] = (arr_4 [4] [i_1 + 1] [i_2]);
                    arr_10 [i_0] [i_2] [i_2] [i_0] = (arr_4 [i_0] [i_1] [i_2]);
                    var_18 = (max((arr_7 [i_0]), (0 / 5)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_18 [i_4] [i_0] [9] [i_1 + 1] [i_0] [i_0] = -65;
                                arr_19 [i_0] = var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((-(min(var_12, 30720))));
    var_20 = var_7;
    var_21 = -2313569602657085481;
    var_22 = (min(((((243 ? var_8 : var_17)))), (((~242) ? var_12 : (0 ^ 4294936575)))));
    #pragma endscop
}
