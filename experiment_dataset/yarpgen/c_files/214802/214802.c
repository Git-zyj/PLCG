/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_5 || -29829) ? (((((-800206637 ? var_3 : 4024308863))) ? (((var_4 ? 4024308862 : var_1))) : ((var_0 ? var_6 : var_0)))) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (((arr_7 [i_0]) | (((arr_2 [i_0]) << (((arr_4 [i_0] [i_0] [i_0]) - 1456147153))))));
                var_12 = ((((-476 ? ((min(var_1, var_7))) : (4024308843 % var_4)))) ? (arr_1 [i_0]) : (arr_6 [i_0] [8] [i_1]));
                var_13 = (max(var_13, (((57344 ^ 3059874484) >> ((((((arr_0 [i_0]) % 800206631)) <= ((var_3 ? (arr_0 [i_1]) : var_1)))))))));
                var_14 = var_9;
                var_15 -= ((((((arr_3 [i_0]) ? ((((arr_2 [i_0]) ? (arr_5 [i_0] [i_1]) : (arr_7 [i_0])))) : (min((arr_3 [i_1]), 270658462))))) ? 1235092812 : var_2));
            }
        }
    }
    #pragma endscop
}
