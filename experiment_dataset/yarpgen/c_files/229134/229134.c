/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 ^= ((((((var_17 ? var_19 : 706233263)) * (arr_3 [i_0])))) ^ (((arr_2 [i_1 + 2]) ? (~var_2) : (((((arr_0 [i_1] [i_2]) == -75)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 -= ((~((max(1, (1 && 1))))));
                                var_23 = (!0);
                                var_24 = ((+(((var_12 && var_5) ? (arr_8 [i_0] [i_2] [i_2]) : (3588734032 >= var_3)))));
                                var_25 = ((((((arr_0 [i_1 + 2] [i_3 + 1]) - (arr_0 [i_1 - 2] [i_3 + 1])))) ? (((((max(511, -16)))) + 706233263)) : (((((min((arr_11 [i_0]), var_0))) ? var_17 : ((var_4 - (arr_1 [i_0]))))))));
                            }
                        }
                    }
                    var_26 = (((0 * (arr_8 [i_0] [i_2] [i_2 + 1]))));
                    var_27 *= (var_11 ? (((171579454 && (((var_8 ? (arr_2 [9]) : (arr_12 [i_0] [i_1 - 1] [i_2 - 1] [i_2] [i_2]))))))) : (!var_15));
                }
            }
        }
    }
    #pragma endscop
}
