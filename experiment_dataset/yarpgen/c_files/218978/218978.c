/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_13;
    var_19 = 208;
    var_20 = (max(var_20, ((max((~var_17), var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [6] = (arr_1 [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_1] [i_0 + 1] [i_2] = arr_10 [i_4] [1] [1];
                                var_21 = (min(var_21, ((max((arr_12 [i_2] [i_1] [2] [i_0 + 1] [i_0]), (~var_12))))));
                                arr_16 [i_2 + 1] [i_3] [i_2] = ((~((~((var_6 ? 37 : var_14))))));
                                var_22 = var_17;
                                arr_17 [i_0] [i_1] [i_2 + 1] [i_3] [i_2] = (163 & 0);
                            }
                        }
                    }
                }
                arr_18 [i_0 + 2] [i_1] [i_1] = arr_2 [i_0];
            }
        }
    }
    #pragma endscop
}
