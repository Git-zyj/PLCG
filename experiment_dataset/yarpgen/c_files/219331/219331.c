/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = ((arr_5 [i_2 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? var_2 : var_6);
                    var_13 &= arr_2 [i_1];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [1] [i_0] [i_0] [i_0] = ((((var_7 ? 8291534603051083174 : 17226)) + -8291534603051083183));
                                var_14 = (((arr_3 [i_0 - 1]) <= (arr_10 [i_1] [i_0 - 1] [i_2 + 2] [i_3] [i_4])));
                                var_15 |= ((-((var_11 ? (arr_9 [i_0 - 1] [i_3]) : (arr_10 [i_4] [i_1] [i_2] [i_1] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
        var_16 = (max(var_16, var_10));
    }
    var_17 = var_3;
    #pragma endscop
}
