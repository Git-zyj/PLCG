/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 = (min((max((arr_1 [i_2]), ((-12542 + (arr_8 [i_1] [i_2] [i_1]))))), (arr_7 [i_2] [i_2] [i_2])));
                            arr_10 [i_2] [i_1] [i_1] [8] = ((((min(-12530, (((arr_7 [i_2] [i_1 + 2] [i_2]) ? 123 : 165))))) ? ((((((arr_7 [i_2] [i_1 + 1] [i_1]) ? (arr_0 [i_3]) : (arr_3 [i_0] [i_2] [i_3])))) ? (arr_7 [i_2] [7] [i_1]) : (arr_9 [i_2] [3] [i_2] [i_3]))) : (((4194272 ? -12534 : 4)))));
                            arr_11 [i_0] [8] [i_0] [i_2] [0] = (((arr_8 [i_0] [i_0] [i_2]) && -19946));
                            var_20 = min((arr_9 [14] [i_1] [i_1 - 1] [i_1 + 3]), (min((max(3709111574326936421, (arr_4 [i_3] [i_2]))), (arr_3 [i_0] [i_1 + 1] [i_2]))));
                        }
                    }
                }
                arr_12 [i_1] [i_1] [i_0] = (max(472952735069160149, (((((14737632499382615194 >= (arr_8 [i_1] [i_1] [i_1]))) ? (((arr_8 [i_0 - 2] [i_0] [i_0]) - (arr_0 [i_0 + 2]))) : -64)))));
            }
        }
    }
    var_21 = (max(var_21, var_10));
    var_22 = (((((var_3 * ((var_4 ? var_4 : -32259))))) ? var_14 : (min(var_4, (var_18 + var_2)))));
    #pragma endscop
}
