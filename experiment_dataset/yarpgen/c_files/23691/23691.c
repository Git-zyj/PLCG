/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((~((+(((arr_0 [i_0] [i_1]) ? 0 : var_4))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = var_15;
                                var_21 = 88;
                                arr_14 [i_4] [i_3] [i_3] [i_2] [i_1] [i_1] [i_0] = 108;
                                var_22 ^= (((((!((((arr_9 [i_0]) - 1918299335))))))) * (max((-73 & -930099085213699835), (max(var_14, (arr_5 [i_2]))))));
                                arr_15 [i_1] [14] [i_3] [i_4] = ((+((((((arr_11 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0]) >= (arr_4 [i_1] [i_4 - 1])))) & -257164111))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 &= var_11;
    var_24 = (max(var_24, var_9));
    #pragma endscop
}
