/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_0] = (-7701773331948058253 % 7701773331948058252);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_12 = (((((~var_6) & (min((arr_12 [i_0] [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_1])))))) ? ((((var_7 >= ((1 ? 1 : 7701773331948058268)))))) : (min(961499121, 0)));
                                var_13 = -4;
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_4] = (min(((((min(18446744073709551615, -37))) ? (!var_2) : var_8)), ((((var_6 ? var_7 : var_2))))));
                            }
                        }
                    }
                    var_14 *= ((((arr_1 [i_0]) + 7701773331948058268)));
                    arr_17 [i_0] [i_1] [i_1] [2] = ((var_0 - (((~(~-37))))));
                }
            }
        }
    }
    var_15 = -7701773331948058244;
    #pragma endscop
}
