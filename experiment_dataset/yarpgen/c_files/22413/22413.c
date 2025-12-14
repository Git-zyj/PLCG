/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~((-((min(var_0, -16160)))))));
    var_14 = (max(var_10, ((17488 ? ((min(-3922, var_1))) : var_9))));
    var_15 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [4] [9] = (min((((arr_4 [13] [5] [i_0 - 1]) ? -9945 : -22018)), (var_9 & var_10)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 -= (((((-28287 / var_12) ? ((((arr_16 [5] [10]) >= -28280))) : ((-12807 ? (arr_9 [1] [12] [13]) : -20527)))) ^ (-12545 ^ var_3)));
                                var_17 = (max(var_17, (((var_10 ? (arr_3 [5] [i_3 - 1] [i_4 + 3]) : (arr_3 [14] [i_3 - 2] [i_0 - 1]))))));
                                arr_17 [0] [i_4] [9] [7] [11] [i_4] [0] = ((((((((arr_3 [3] [7] [8]) && -4919))) ^ 4915)) / (((((var_9 ^ (arr_2 [10])))) ? (arr_4 [i_0 + 2] [i_3 + 1] [i_4 + 1]) : ((min(32753, var_8)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
