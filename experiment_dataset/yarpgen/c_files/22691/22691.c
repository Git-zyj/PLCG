/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = var_1;
                var_15 = var_8;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_2] [i_0] [i_0] = var_5;
                            arr_12 [i_0] [i_1] [i_0] [i_2] [6] = (((((-(arr_4 [i_0] [i_0 + 1])))) ? (min((arr_4 [i_0] [i_0 + 1]), (arr_4 [i_0] [i_0 + 1]))) : (((((arr_4 [i_0] [i_0 + 1]) && (arr_4 [i_0 - 1] [i_0 + 1])))))));
                            arr_13 [i_0] = (max((min(45, (min(9223372036854775807, 9223372036854775807)))), (((((max(-9223372036854775807, -1983676607)) + 9223372036854775807)) >> ((((max(var_8, (arr_1 [i_3])))) - 163))))));
                            var_16 = (max((((-9223372036854775807 - 1) - -19613)), ((max((arr_0 [i_0] [i_0 - 1]), (((arr_5 [i_3]) ? (arr_5 [7]) : var_5)))))));
                        }
                    }
                }
                var_17 = (min(var_17, ((min((((arr_3 [i_0 + 1]) ? (arr_5 [i_0 + 1]) : var_5)), (min(76, 3845455599)))))));
            }
        }
    }
    #pragma endscop
}
