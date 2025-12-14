/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (-127 - 1);
                    var_21 *= (((min(var_17, (arr_10 [20] [i_2 - 1] [i_2] [i_1]))) > (((arr_10 [i_0] [i_2 - 1] [i_2 + 1] [i_0]) >> (arr_7 [19] [i_2 - 1] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_22 -= (arr_15 [9] [i_1] [i_3 - 2] [i_2 - 1] [i_4]);
                                arr_18 [i_0] = (((arr_2 [i_0] [2]) ? (max(-37, var_17)) : var_13));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_7;
    var_24 = (((((-105 * (0 / var_9)))) ? var_3 : ((((((60442 ? 785670565 : 0))) ? (2271700783 || var_10) : var_11)))));
    #pragma endscop
}
