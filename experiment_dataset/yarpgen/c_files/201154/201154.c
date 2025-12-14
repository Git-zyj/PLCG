/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 -= (max(7, (arr_5 [i_0] [i_1])));
                    arr_8 [i_0] = 114;
                    var_20 = (max((-2147483647 - 1), (((-9223372036854775807 - 1) ^ -1117977073))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_2] [i_0] = (min((max((max(0, 0)), (arr_10 [i_0] [i_2] [i_3] [i_4]))), var_9));
                                var_21 = ((max(((var_15 ? (arr_13 [i_4] [i_3] [i_2] [i_1] [i_0]) : var_15)), 5)));
                                arr_15 [i_0] = (min((max(((-28450 ? 65535 : 172)), 10898)), 222));
                                arr_16 [i_4] [i_0] [i_2] [i_0] [i_0] = (((3896806543 % var_16) && var_4));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (((!514036654) ? ((((max(var_11, var_6))))) : ((var_6 ? var_17 : (~var_15)))));
    var_23 = var_9;
    var_24 = var_9;
    #pragma endscop
}
