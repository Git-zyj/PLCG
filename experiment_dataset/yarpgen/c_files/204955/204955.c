/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_2 + 1] [i_1] [i_1] [i_3] [i_2] = (max(var_0, (max(((((arr_10 [i_0]) ? (arr_11 [i_0] [i_1 - 1] [10] [i_3] [i_4] [i_3]) : var_3))), ((10 ? (arr_12 [0] [i_1 - 1]) : (arr_12 [i_0] [i_0])))))));
                                var_12 ^= ((((-var_6 ? (arr_5 [i_3 - 1] [i_4] [i_4] [i_4]) : 109)) <= (arr_12 [i_1] [i_1 - 1])));
                                var_13 = (((arr_1 [i_0]) ? var_6 : ((((arr_0 [i_0] [i_0]) ? 317 : 127)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 |= ((((((var_8 == var_5) ? 1397961296205535882 : var_5))) ? ((((var_6 ? var_1 : var_0)))) : ((-var_2 ? (-94 + -1397961296205535867) : (((var_2 >> (1941836676 - 1941836652))))))));
    var_15 = var_6;
    var_16 = (max(((12335301305517183925 ? 60 : 1397961296205535867)), var_0));
    #pragma endscop
}
