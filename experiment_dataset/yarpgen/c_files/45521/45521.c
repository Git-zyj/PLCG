/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1 + 2] [i_1] = var_6;
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [7] [1] [i_1] [i_3] [3] [i_3 - 2] = (((var_4 >= var_15) + ((var_0 ? var_1 : var_3))));
                                arr_15 [4] [i_4 - 2] [i_3] [i_1] [i_2 - 4] [i_1 + 1] [i_0] = ((var_4 ? (var_9 == var_13) : ((var_12 ? ((var_2 ? var_5 : var_4)) : var_3))));
                                arr_16 [13] [13] [i_2 - 1] [i_1] [10] = (((((var_7 ? var_10 : var_8))) ? var_14 : ((var_8 ? (((-127 - 1) ? 3842153215 : 3945410639316821204)) : (((var_5 ? var_9 : var_15)))))));
                            }
                        }
                    }
                }
                arr_17 [i_1] = (((((var_3 ? ((var_15 ? var_10 : var_6)) : var_3))) ? (var_15 & var_0) : (255 || 254)));
            }
        }
    }
    var_16 = var_12;
    var_17 = var_8;
    var_18 = ((var_2 & (((var_5 - var_11) & var_7))));
    var_19 = ((((((((0 ? 1 : 5101316925526346446))) ? var_8 : var_11))) ? ((2276119517 ? 255 : 3768935920)) : var_7));
    #pragma endscop
}
