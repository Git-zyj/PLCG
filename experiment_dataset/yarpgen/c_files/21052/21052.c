/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_12 += 100;
                var_13 = (min((((0 / 24266) & var_4)), (min(((240 ? 1 : (arr_4 [i_0] [i_0 - 1] [17]))), 1))));
                var_14 = (min(var_14, ((min(((((((var_11 ? var_10 : 1))) ? ((((arr_4 [i_0] [i_1] [4]) && (arr_4 [i_0] [i_0] [i_0])))) : ((var_1 ? (arr_3 [i_1]) : (arr_1 [1])))))), (min((~21926), var_8)))))));
                var_15 = (min(var_15, ((min((var_5 && var_3), (min(-var_6, (arr_0 [i_0]))))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_16 += (((var_8 / (arr_4 [i_0 + 1] [i_0 - 1] [i_1 + 1]))) >= (((max(var_1, (arr_2 [18] [i_0 + 1] [i_1 + 2]))))));
                    var_17 = (max(var_17, (((((arr_2 [1] [1] [i_2]) + var_0))))));
                }
            }
        }
    }
    var_18 += var_5;
    #pragma endscop
}
