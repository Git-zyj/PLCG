/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_10 *= (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_11 = (min(var_11, 8132));
                            var_12 = (0 ^ 3096330757);
                        }
                    }
                }
                arr_12 [8] &= ((((((arr_9 [i_0 + 2] [16]) ? (arr_6 [i_1] [4] [1]) : 1073741824))) ? ((((var_2 > (arr_8 [i_0] [i_0 + 1] [i_0] [i_0]))))) : (((arr_10 [i_1 + 2] [2] [i_0] [i_1] [i_1]) ? (arr_6 [8] [4] [i_0]) : var_4))));
                var_13 *= 35;

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_14 = 2;
                    var_15 = (min(var_15, (arr_4 [i_4] [i_0])));
                    var_16 = (arr_9 [i_0] [i_0]);
                    var_17 = (min(var_17, (arr_14 [i_4] [i_0] [i_0] [i_0])));
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_18 = ((((((arr_9 [i_0] [i_0]) ? (arr_9 [i_0] [i_0]) : (arr_15 [i_0 + 1] [i_0] [i_0] [i_0])))) ? ((((arr_9 [i_0 - 1] [i_0]) & (arr_3 [i_0] [8])))) : (max((var_8 * var_3), 2097151))));
                    arr_19 [6] &= (((arr_13 [i_0 + 2] [4] [i_5] [i_0 - 1]) ? (((((var_4 ? -8133 : (arr_10 [4] [8] [i_1] [8] [i_0 + 2])))) ? var_2 : ((max((arr_10 [i_0] [0] [0] [i_0] [i_0 + 2]), 273596677))))) : ((((((var_0 ? 35 : (arr_15 [i_5] [12] [12] [i_0]))) != (~var_7)))))));
                }
            }
        }
    }
    var_19 = (((((var_8 << (((max(var_4, var_9)) - 576719043))))) / (((max(var_8, var_2)) & var_7))));
    #pragma endscop
}
