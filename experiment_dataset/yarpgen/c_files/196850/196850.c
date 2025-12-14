/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((((((var_1 ? var_2 : var_8))) ? ((var_8 ? var_7 : var_9)) : ((max(var_5, var_8))))), var_11));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [1] [i_0] = (((max(var_11, -1619762163)) << (((var_5 + var_11) - 2672179361))));
                                var_14 += ((!((((max(1, -1619762180)) ^ (((-39 < (arr_10 [4] [4] [i_1] [i_0 - 1])))))))));
                                arr_14 [i_0] [8] [i_2] [i_1 + 1] [i_0] = var_8;
                                arr_15 [i_4] [i_0] [i_2] [i_0] [i_0 + 3] = (min((min(1, ((var_10 ? var_8 : (arr_6 [i_3] [i_3 + 1] [i_3 - 2] [1]))))), ((((var_9 || var_4) || var_2)))));
                            }
                        }
                    }
                }
                arr_16 [i_0] = ((-(min(var_8, (arr_4 [i_0] [6])))));
            }
        }
    }
    var_15 = (max(var_15, var_4));
    var_16 = -var_5;
    #pragma endscop
}
