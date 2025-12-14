/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 |= ((!(((((~(arr_1 [i_0]))) * var_10)))));
        var_20 = (max((min((min(var_14, (arr_3 [i_0]))), ((min(39904, (arr_3 [i_0])))))), (((((28104 ? (arr_0 [i_0] [11]) : (arr_3 [i_0]))) != (28104 >= 28104))))));
        var_21 = ((var_15 != (878062713 && var_15)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = max(var_9, (!1241241378));
                                var_22 = (min(var_22, ((((arr_3 [i_1]) != (arr_10 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]))))));
                                var_23 = (((min(var_7, var_4))) ? (min((var_14 | 0), (((arr_5 [18] [i_0] [i_0]) ? 18446744073709551615 : var_1)))) : ((var_5 & (arr_0 [i_3] [i_2]))));
                            }
                        }
                    }
                    var_24 += (((min(var_17, (arr_5 [i_0] [i_1] [5]))) * -var_13));
                    var_25 = (((max(var_17, var_14))) ? ((~(arr_1 [i_2]))) : (((arr_5 [i_0] [i_1] [i_2]) & (arr_5 [19] [i_1] [i_2]))));
                }
            }
        }
    }
    var_26 = (((var_1 && var_10) ? -1 : 1241241378));
    #pragma endscop
}
