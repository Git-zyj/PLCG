/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_10 = (min((((var_3 < (((var_9 + 2147483647) >> (-109 + 119)))))), (min((((var_8 >> (60 - 57)))), (arr_6 [i_1])))));
                    var_11 = (i_1 % 2 == 0) ? ((((arr_1 [i_0] [i_1]) >> ((((((max(29899, var_9))) - (arr_5 [i_1] [i_1 + 1]))) - 53154))))) : ((((arr_1 [i_0] [i_1]) >> ((((((((max(29899, var_9))) - (arr_5 [i_1] [i_1 + 1]))) - 53154)) + 28331)))));
                    arr_10 [i_0] [i_0] [i_1] = (min(137438953471, 9223372036854775807));
                }
            }
        }
    }
    var_12 = (min(var_12, var_9));
    var_13 += 40239;
    var_14 = (((var_4 ? var_9 : ((2147483647 ? var_4 : var_4)))));
    #pragma endscop
}
