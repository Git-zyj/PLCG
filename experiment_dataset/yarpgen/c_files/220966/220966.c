/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((((var_9 == 0) ? (var_7 && 1062685544) : var_9)), var_10));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    var_13 &= (min((arr_1 [i_0 - 2] [i_2 - 1]), var_8));
                    var_14 = ((65535 | ((min(65535, var_0)))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_4] [i_0] = 15;
                                arr_20 [i_0] [i_4] [i_3 - 1] [i_0] [i_0] = 65521;
                            }
                        }
                    }
                    arr_21 [i_0] [i_1] = ((var_5 ? (((arr_3 [i_0] [i_0]) ^ 0)) : (255 + var_10)));
                }
                arr_22 [i_0] [i_0 + 2] [i_0 + 1] = (arr_2 [i_0]);
                var_15 = var_11;
            }
        }
    }
    #pragma endscop
}
