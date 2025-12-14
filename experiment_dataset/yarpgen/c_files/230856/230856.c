/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 7681781864928854831;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_1] = var_7;
                arr_7 [i_1] = var_9;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_0 - 2] = 1930;
                                var_21 = ((47 ? (((arr_0 [i_0 - 1] [i_1]) ? ((var_5 ? var_7 : 16370090870566692400)) : (max(9223372036854767616, var_18)))) : (min((arr_12 [i_0] [i_1]), 1))));
                            }
                        }
                    }
                }
                var_22 = (((((2076653203142859215 >> (((arr_13 [i_0 + 2] [i_0 - 2] [i_0 + 2] [i_1] [i_1]) - 1624143106117337098))))) ? ((18446744073709551615 ? var_1 : (arr_9 [i_0] [i_0] [i_0] [i_0]))) : (arr_9 [i_1] [i_1] [i_0 - 2] [i_0 + 1])));
                var_23 = (min(var_19, (!16370090870566692403)));
            }
        }
    }
    #pragma endscop
}
