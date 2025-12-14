/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((14229 ? ((-var_3 % (min(var_4, var_14)))) : -var_16))));
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((+(((arr_0 [i_1]) ? (var_15 && var_0) : (arr_4 [i_0 + 1] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 = ((~(((arr_5 [i_3 + 1] [i_1] [i_0 - 2]) ? (arr_5 [i_3 + 2] [i_3 + 2] [i_0 + 1]) : (arr_5 [i_3 - 1] [i_1] [i_0 - 2])))));
                            var_20 -= (min(((-(arr_2 [i_3 - 1] [i_2]))), (48765 + 1)));
                            var_21 = ((-var_8 ? (((!(arr_10 [i_0 + 1] [i_3 + 2] [i_3 - 1] [7])))) : ((max((arr_10 [i_0 - 1] [i_3 + 1] [i_3 + 2] [i_3 + 1]), (arr_10 [i_0 - 1] [i_3 + 1] [i_3 + 2] [i_3 + 2]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
