/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_17 = ((((min((-32767 - 1), 0))) ? ((-(!var_16))) : ((1 ? 1 : 1))));
                            arr_12 [15] [18] [i_3] [i_3 + 4] = ((((max(1, 10))) ? (min(((var_9 ? var_1 : var_1)), var_6)) : ((var_16 ? var_14 : var_16))));
                            arr_13 [i_0] [i_0] [i_2 - 3] [i_3] = (min((((-var_13 | ((var_6 ? var_0 : var_1))))), ((var_15 ? (min(var_16, var_15)) : ((var_1 ? var_1 : var_12))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_18 = (min(((var_7 ? (!var_8) : ((var_12 ? var_12 : var_8)))), (min(var_15, ((min(var_7, var_8)))))));
                            var_19 = (((((((max(var_3, var_5))) ? ((min(var_9, var_0))) : (var_11 | var_15)))) ? ((var_8 ? var_2 : (min(var_2, var_14)))) : (max(((var_7 ? var_0 : var_2)), ((var_2 ? var_1 : var_14))))));
                        }
                    }
                }
                var_20 = ((!((max((min(var_6, var_13)), ((min(var_16, var_1))))))));
                var_21 += (max((((((var_3 ? var_15 : var_5)) <= (min(var_12, var_0))))), (min(var_4, ((var_10 ? var_6 : var_7))))));
            }
        }
    }
    var_22 = (min((~-var_5), ((min(245, (min(1, 65535)))))));
    var_23 = min((max(var_9, var_5)), var_2);
    var_24 = ((((((((var_13 ? var_0 : var_3))) ? var_6 : ((var_5 ? var_16 : var_3))))) || ((min(((var_0 ? -1 : var_10)), 124)))));
    #pragma endscop
}
