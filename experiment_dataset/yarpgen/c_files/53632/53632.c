/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((max(var_13, ((max(var_5, 54663))))), var_10));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = ((arr_4 [5]) * (var_9 / var_15));
                var_19 *= ((((max((var_15 + var_8), 2))) ? (((((var_16 ? var_16 : var_0))) ? (max(var_10, (arr_2 [i_0] [i_0] [i_1]))) : var_7)) : ((var_2 ? (arr_4 [i_0 - 2]) : var_13))));
                var_20 = ((((~(arr_4 [i_0 - 1])))) ? ((((var_13 ? 6993544214584825669 : -1)))) : ((4261412864 ? (((arr_4 [i_0]) ? 127 : var_8)) : var_5)));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_0] [i_1 + 1] [i_3] [i_4 - 1] [i_1] [i_2] = (max((var_15 != var_9), ((!(arr_11 [i_1 - 1] [2])))));
                                var_21 = (max(((((!var_4) + var_13))), ((var_3 ? ((max(var_12, var_15))) : (max(var_6, var_9))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (((var_4 + 2147483647) << (((max(((var_5 ? var_2 : var_8)), var_10)) - 14186))));
    var_23 *= ((!(var_16 % 1127545492)));
    var_24 = (min(var_24, -var_15));
    #pragma endscop
}
