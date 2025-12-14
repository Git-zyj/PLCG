/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -14132;
    var_16 = ((((max(var_13, 14140) - (max(var_11, var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [11] [11] [i_1] = (((1406 ? (arr_4 [i_0]) : (arr_3 [i_1] [i_0]))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = (((((16314514312890188872 ? (arr_4 [i_2 + 4]) : 26299))) ? (((var_12 && (((~(arr_15 [11] [i_1] [i_1] [i_3] [6]))))))) : var_6));
                                var_18 = (max(var_18, ((min(((max(((((arr_5 [i_0] [i_0] [i_0]) || 7909000658193916950))), var_14))), var_9)))));
                                var_19 = max((9260284083878760217 % var_5), ((((arr_3 [i_2 + 4] [i_2 + 3]) <= 1406))));
                            }
                        }
                    }
                }
                arr_17 [i_1] [2] = ((14132 - (((var_10 == ((((arr_10 [i_0] [0] [i_1] [8]) && 0))))))));
            }
        }
    }
    #pragma endscop
}
