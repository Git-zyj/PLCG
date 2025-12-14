/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_13 = ((!(var_7 | var_6)));
                            var_14 = (min(var_14, (((((((var_3 & (arr_2 [i_0]))) & -var_12)) | ((((arr_9 [i_0] [i_1 - 1] [i_3 + 1] [i_3 + 2]) ? (arr_9 [i_1] [i_1 + 1] [i_2] [i_3 - 1]) : (arr_9 [i_0] [i_1 - 1] [i_2] [i_3 - 1])))))))));
                            arr_11 [i_3] = ((((((arr_7 [i_3 + 2]) && (arr_2 [i_1 + 2])))) & var_12));
                            var_15 = (((((-(arr_1 [i_0])))) ? (((1999707710729299046 | var_0) ? var_10 : var_3)) : (((arr_2 [i_3 - 2]) ? (arr_8 [i_0] [1] [i_2] [i_3]) : (arr_3 [i_0])))));
                        }
                    }
                }
                var_16 = (min(var_16, (arr_10 [i_0] [0] [0] [0])));
                arr_12 [i_0] [i_1] = 135;
                var_17 = (max(var_17, (((((var_5 | (arr_8 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1]))) & var_4)))));
            }
        }
    }
    var_18 = var_11;
    var_19 *= (((((3850484119 | (((max(var_10, 122))))))) | (((-7399703940569399528 & var_7) & var_8))));
    #pragma endscop
}
