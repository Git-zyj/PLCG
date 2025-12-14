/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_3] [i_0] = -14;
                                var_14 *= (((((arr_9 [i_0] [i_0] [i_0] [i_4 - 2]) && (arr_9 [i_1] [i_2 + 1] [1] [i_4]))) ? ((((arr_9 [i_1 - 1] [i_2 - 2] [i_1 - 1] [i_4]) || (arr_7 [i_0] [i_3] [i_4])))) : (arr_7 [i_0] [i_0] [i_0])));
                                var_15 = (max((((!(arr_4 [i_1 + 2])))), (((arr_4 [i_1 + 2]) ? (arr_4 [i_1 + 1]) : var_6))));
                            }
                        }
                    }
                    var_16 *= (((((((max((arr_13 [i_0] [i_0] [10] [i_1 + 3] [i_1 - 1] [1] [1]), (arr_2 [i_0] [i_1])))) || 6000602728653319801))) - (arr_7 [9] [i_1 + 3] [i_0])));
                    var_17 *= (arr_11 [i_0] [i_0] [i_2] [i_0] [2]);
                    arr_16 [i_0] [i_0] [3] [i_2 - 1] = 1;
                    var_18 *= max((((!(((-6000602728653319814 ? (arr_3 [13]) : -16456)))))), (((var_12 ? 1 : var_7))));
                }
            }
        }
    }
    var_19 -= (~var_9);
    #pragma endscop
}
