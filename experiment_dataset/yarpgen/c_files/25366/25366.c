/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((max((arr_3 [5]), var_5)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_3] [i_2] = (min((min((max((arr_10 [i_3] [i_3]), (arr_8 [i_1] [21] [i_1]))), -4096)), (arr_8 [i_3] [i_1] [i_2])));
                                var_15 = ((min(var_7, -1)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (min(((-(min(-1, 4121)))), ((min(var_3, var_11)))));
    var_17 = var_5;
    var_18 = (min(1520578440, 0));
    var_19 = var_10;
    #pragma endscop
}
