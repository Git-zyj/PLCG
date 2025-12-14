/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!(((var_13 + (max(var_0, var_5)))))));
    var_16 = ((((min((~1), var_3))) ? var_1 : var_4));
    var_17 -= var_12;
    var_18 -= ((((((((var_5 ? var_6 : var_13))) ? var_13 : ((var_6 ? var_6 : var_4))))) > (((~1985000402) | (max(var_5, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 = ((((min((arr_1 [i_0] [i_0 - 2]), ((((arr_4 [i_0]) <= (arr_1 [i_0] [i_0]))))))) ? (((!((((-1985000424 + 2147483647) >> (((arr_10 [i_1] [i_1] [i_1] [i_2] [6]) - 6494206920190385696)))))))) : var_2));
                                var_20 = (arr_8 [i_4 + 2]);
                                var_21 = (min(var_21, (arr_4 [12])));
                            }
                        }
                    }
                }
                arr_15 [i_0] = (arr_14 [17] [i_1] [17]);
            }
        }
    }
    #pragma endscop
}
