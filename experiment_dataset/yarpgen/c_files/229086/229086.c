/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((~((((arr_0 [i_0]) > (((arr_2 [9]) ? (arr_1 [9] [8]) : (arr_1 [21] [21]))))))));
                var_18 = (min((~var_7), (((arr_2 [i_0 - 2]) % (arr_0 [i_0 - 2])))));
            }
        }
    }
    var_19 = ((((((!(var_12 < -12684))))) >= ((-6561288530277403868 ? ((var_7 ? var_9 : var_17)) : (min(var_3, -6561288530277403868))))));
    var_20 = (((min((var_2 / var_9), 6561288530277403868)) <= (90 <= 1950179697812161423)));

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_21 = (arr_7 [14]);
        var_22 += (max((((arr_4 [i_2] [i_2] [i_2]) - (((arr_1 [i_2] [i_2]) / (arr_6 [i_2]))))), (((max((arr_0 [i_2]), (arr_2 [i_2])))))));
    }
    var_23 = var_5;
    #pragma endscop
}
