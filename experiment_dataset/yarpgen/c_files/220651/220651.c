/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_2 - 3] [i_1] [i_1] = (min(((((((arr_7 [i_0 + 1]) | (arr_3 [i_1])))) ? (arr_8 [i_0 + 1] [i_0 + 1] [i_2 - 2] [i_2 - 2]) : (min((arr_4 [i_0 + 1]), var_15)))), ((min(var_1, (arr_4 [i_2]))))));
                    arr_12 [i_0] [i_1] [i_2] = (((max((arr_4 [i_1]), (arr_3 [i_0]))) ^ (((((((arr_4 [i_0]) ? (arr_9 [i_2] [i_1] [i_1] [i_0]) : var_10))) ? 23024 : (arr_8 [i_1] [i_0 + 1] [i_0 + 1] [i_2 + 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] [i_0 - 1] [i_0 + 1] [i_0] = (max(((var_14 || (arr_13 [i_0 - 1] [i_0] [i_4 - 1] [i_1] [i_0 + 1] [i_1]))), (((arr_13 [i_0] [i_0] [i_4 + 2] [i_1] [i_0 - 1] [i_0]) || var_0))));
                                var_16 = ((((max((arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_1] [i_2 - 4]), 23021))) && (((((max((arr_3 [i_0]), 1))) << ((max((arr_6 [i_2]), (arr_6 [i_0])))))))));
                                var_17 = (arr_3 [i_0 - 1]);
                            }
                        }
                    }
                    var_18 = (min(var_18, ((min(609, (arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1] [18] [i_0 + 1] [i_2 - 3]))))));
                }
            }
        }
    }
    var_19 = var_10;
    #pragma endscop
}
