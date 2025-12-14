/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_1 >= ((var_1 ? var_6 : var_6))));
    var_11 = ((((var_0 ? -var_3 : 3774392009)) != var_0));
    var_12 = (min(var_12, (((var_1 ? -32063 : (1 * -var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = (((((~(max(var_7, (arr_1 [3])))))) ? (((((var_5 ? (arr_6 [i_0] [i_1] [i_0] [i_0]) : var_8)) < (((-(arr_0 [1] [i_1]))))))) : (arr_0 [i_2] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [15] [i_0] [i_3] [i_2] [i_0] [i_0] = ((520575285 ? 3 : 33472));
                                var_14 = (min(var_14, ((max((((var_7 ? (((arr_1 [i_0]) ? 32063 : var_7)) : (33464 || 33495)))), (((((1942190736 ? 1172351024 : 1505160755))) ? (((arr_11 [i_0] [20] [i_2] [i_3] [i_4] [i_3]) + var_0)) : (((var_1 ? var_3 : var_5))))))))));
                                var_15 = ((var_0 ? 32049 : ((((0 ? var_0 : var_9)) * ((((arr_3 [9]) ? (arr_6 [2] [i_1] [i_3] [i_4]) : var_6)))))));
                                var_16 = (min(var_16, (((~((~(arr_4 [i_4] [i_4] [i_4]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
