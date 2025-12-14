/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_8 && 0) ? (((!(!var_3)))) : ((min(var_1, 44140)))));
    var_14 *= var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] = (min((max((arr_5 [i_0] [i_1] [i_2 + 1] [i_3 - 1]), ((min((arr_7 [i_0] [i_0]), var_7))))), 65535));
                            arr_10 [i_0] = var_11;
                        }
                    }
                }
                var_15 = (min(var_15, (((((((arr_7 [i_1] [i_0]) ? var_3 : (arr_2 [i_0 + 2] [i_0 - 1])))) ? (max(var_7, (((arr_1 [6]) ? var_7 : (arr_6 [i_0] [i_0] [i_0] [1]))))) : ((((5163 ? var_3 : var_4)) / (arr_2 [i_0 + 2] [i_1 + 1]))))))));
                var_16 = ((~(((-551138841032530351 <= var_5) ? (min((arr_3 [i_0] [i_0 - 1] [i_1]), (arr_8 [i_0] [i_0]))) : (((var_3 ? (arr_6 [4] [i_0 - 1] [i_0 - 1] [4]) : (arr_2 [i_0] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
