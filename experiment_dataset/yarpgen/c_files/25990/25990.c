/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (var_1 == var_0)));
    var_19 = (min(var_19, var_9));
    var_20 -= 71;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_2] = (-((((-(arr_2 [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = var_13;
                                var_22 = (((((-(!1)))) ? ((((!(((-(arr_6 [i_0] [i_0] [i_0])))))))) : (((arr_11 [i_3]) ? (((arr_15 [i_0] [i_0] [i_3] [i_4]) ? 4294967295 : var_13)) : (((-(arr_15 [i_1] [4] [i_3] [i_4 - 1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_7;
    #pragma endscop
}
