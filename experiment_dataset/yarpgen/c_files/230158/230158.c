/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 -= (arr_3 [i_0] [i_0] [i_0]);

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_18 -= (((max(1, (min(1, 1))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] = (((var_11 != 1) || ((!(var_3 / 1)))));
                                var_19 = (max(var_19, ((((((min((arr_7 [i_1] [i_2 + 2] [i_3] [i_2 + 2]), (arr_7 [i_0] [i_1] [i_2] [i_0]))))) + var_4)))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0] = (254 + var_13);
                }
                var_20 = ((2776477196 ? ((4249640464528419693 | (arr_11 [i_0] [i_0] [i_1]))) : ((-(arr_1 [i_0])))));
            }
        }
    }
    var_21 = ((~((max((0 > 1), var_10)))));
    var_22 ^= -1383706497;
    #pragma endscop
}
