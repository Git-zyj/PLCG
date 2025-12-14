/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 |= ((~(min(((((arr_3 [i_0]) >> (((arr_2 [i_0]) + 1531244288137142481))))), (max((arr_9 [i_0] [i_0] [i_2]), (arr_7 [12] [i_1] [12] [12])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = ((!((((~var_6) ? (((267220497941142078 ? 267220497941142075 : 267220497941142070))) : (arr_10 [i_1 + 1] [i_1 + 1] [i_1 - 2]))))));
                                arr_15 [3] [i_2] [i_2] [i_2] [20] [i_3] [i_2] = (arr_12 [i_0]);
                                arr_16 [i_2] [i_1] [i_2] [i_2] [i_4] [i_4] = 267220497941142049;
                                var_13 = var_4;
                                var_14 = (min(-267220497941142083, 1));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
