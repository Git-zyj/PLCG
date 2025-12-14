/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 ^= (~(((arr_5 [i_1] [i_2 - 2] [i_1]) ? 1 : (arr_5 [i_1] [i_2 - 2] [i_1]))));
                    var_17 ^= ((arr_5 [i_1] [i_2 - 2] [i_1]) ^ ((16881953909184111760 ? (arr_5 [i_1] [i_2 + 1] [i_1]) : (arr_4 [i_1] [i_2 - 1] [i_1]))));
                    var_18 = (max(1564790164525439860, (arr_7 [i_0] [8] [i_0] [i_1 + 1])));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        arr_11 [0] [i_1] [i_2] [i_1 + 1] [i_1] [i_0] |= (((arr_7 [i_1] [i_1 + 1] [i_2 + 1] [i_3 + 1]) ? var_15 : 1564790164525439856));
                        var_19 = ((((-(arr_3 [i_0])))) ? (~var_2) : ((6310708388239899166 ? 29072 : -6688080961611735916)));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_20 = (min((((arr_2 [2] [i_2 - 2]) ? (arr_15 [i_0] [i_2 - 2] [i_0] [i_1 - 1] [i_2 - 2] [2]) : (arr_2 [i_1] [i_2 - 2]))), ((((arr_2 [8] [i_2 - 2]) && (arr_15 [i_0] [i_2 - 2] [i_0] [i_1 - 1] [i_4] [3]))))));
                        arr_16 [i_0] [i_1] [i_2] [i_4] = (((arr_10 [3] [i_0]) ? ((36464 + ((min((arr_4 [i_0] [i_1 - 1] [i_2]), 6069))))) : (max((arr_2 [i_0] [i_1]), (((arr_0 [i_0]) + 17234))))));
                        var_21 = (max(var_21, ((((-6688080961611735916 + 9223372036854775807) << (((7558975780193461697 || ((min(7558975780193461676, 36463)))))))))));
                    }
                }
            }
        }
    }
    var_22 = -290519911;
    var_23 = ((((((!var_5) < ((-290519912 ? var_15 : 12355722638080295293))))) + ((var_9 + ((-4 ? 70 : var_14))))));
    var_24 = (max(var_24, (!16698974617833741157)));
    #pragma endscop
}
