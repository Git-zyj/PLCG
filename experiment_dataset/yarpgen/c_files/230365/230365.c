/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 *= (max(var_5, (~1)));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_11 [13] [i_3] [i_2] [i_1] [i_0] = (var_0 ^ var_5);
                                arr_12 [i_4] [1] [i_2] [i_1] [i_0] = (((~var_5) ^ var_11));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [21] = min((((min(var_16, var_15)) - var_14)), var_3);
                                var_18 = var_7;
                            }
                        }
                    }
                    arr_14 [i_1] [i_2] = 0;
                }
            }
        }
    }
    var_19 = var_3;
    var_20 = var_0;
    var_21 = (((((65517 < 11) == var_12))) <= (((((var_11 ? var_3 : var_8))) ? (18 ^ var_7) : 1385283230)));
    var_22 = var_6;
    #pragma endscop
}
