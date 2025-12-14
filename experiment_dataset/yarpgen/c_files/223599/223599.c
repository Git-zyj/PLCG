/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((min((arr_0 [i_1] [i_1]), (((arr_2 [i_0 + 3]) ? 67 : ((var_5 ? 87 : (arr_6 [i_1] [i_0]))))))))));
                arr_7 [i_1] [i_0] [i_0] = ((~(min(var_3, var_6))));
            }
        }
    }
    var_13 &= ((~(max(var_0, (min(var_2, 1))))));
    var_14 = (min(var_7, ((min((((-6170747459579920061 ? 134 : 1835008))), 2625160741)))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_15 = ((-(arr_10 [5])));
                var_16 = 1835008;
                var_17 = ((((((arr_10 [i_2 + 2]) ? (arr_0 [i_2] [i_3]) : 162145305))) + ((1 ? var_2 : 196))));
            }
        }
    }
    #pragma endscop
}
