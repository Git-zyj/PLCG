/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max((var_1 & var_10), var_2));
    var_12 = (((((max(34, 31865)))) <= (max((max(1060353872, var_8)), ((min(var_10, var_7)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = (max((arr_3 [i_0] [i_1]), (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
                    var_13 += 31881;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_14 = ((7987520343544169047 ? (((1 >= (arr_8 [i_3 - 2])))) : ((var_9 ? ((max((arr_7 [i_3 + 3]), (arr_9 [i_4] [11])))) : (arr_7 [2])))));
                var_15 -= (arr_7 [5]);
            }
        }
    }
    #pragma endscop
}
