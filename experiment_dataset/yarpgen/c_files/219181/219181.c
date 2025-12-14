/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = (arr_0 [i_1]);
                arr_4 [i_0] = (((arr_1 [i_0] [i_1]) & -19768));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, (((!(((((min(1, (arr_10 [i_0] [i_1] [i_2 + 1] [i_3 - 2] [9])))) ? (var_10 * 1) : var_5))))))));
                                var_13 = (min(var_13, ((min((arr_8 [16] [16] [i_4 - 1] [i_2 - 2] [i_3 - 2]), (max((arr_6 [4] [4] [i_4 - 1]), (arr_6 [i_0] [i_3] [i_4 + 2]))))))));
                            }
                        }
                    }
                }
                var_14 = (max(var_14, ((min(((min(9753, 16384))), (max(9753, 1134)))))));
            }
        }
    }
    var_15 = var_7;
    #pragma endscop
}
