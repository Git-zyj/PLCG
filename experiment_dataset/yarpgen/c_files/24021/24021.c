/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((20123 ? (var_5 + var_3) : var_5))) ? (min((~125024420), (max(1, var_5)))) : var_0));
    var_18 = (min(var_18, (((((1 ? 1 : 1)) >> (((~var_1) - 13629776136268657272)))))));
    var_19 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [4] = (min((!var_11), (arr_4 [i_0] [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = (min(1, ((532559174 ? (arr_0 [i_0]) : var_16))));
                                var_21 = ((((-(arr_0 [i_3]))) >> (70368744177663 - 70368744177644)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_12;
    #pragma endscop
}
