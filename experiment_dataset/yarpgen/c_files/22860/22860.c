/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= ((min(8473, 1023)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 += var_6;
                                arr_14 [i_0] [i_0] [i_4] [i_0] [2] = var_2;
                            }
                        }
                    }
                    var_18 = ((((((min(68719476608, 1))) ? -641270908 : ((8473 ? 0 : 111)))) < (arr_11 [i_2] [i_1] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_19 = ((var_7 + ((-var_16 ? 8473 : var_3))));
    var_20 = (((((var_14 ? 1 : 0))) ? var_4 : (-2147483647 - 1)));
    var_21 -= ((-((min(var_13, var_1)))));
    #pragma endscop
}
