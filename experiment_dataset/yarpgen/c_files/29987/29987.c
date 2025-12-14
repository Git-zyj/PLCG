/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = ((min((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1]))));

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_19 = (arr_1 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = (((((+(max((arr_7 [i_4] [i_4] [i_4] [i_4]), var_9))))) && 131072));
                                arr_14 [13] [i_1] [13] [i_3] [i_2 + 1] = ((((arr_10 [i_2 + 2] [i_1] [i_2] [i_3] [i_4]) != (arr_10 [i_2 + 2] [5] [i_2 + 1] [i_2 + 1] [i_1]))));
                                var_21 &= ((-(min((var_14 - var_16), 131072))));
                                var_22 = (arr_8 [5] [i_3]);
                            }
                        }
                    }
                    arr_15 [8] = (arr_5 [13] [i_1] [i_1]);
                }
                arr_16 [i_0] [i_1] = (min((min(var_9, var_7)), (((!(!569))))));
            }
        }
    }
    var_23 = (max(var_23, ((min(var_9, (var_8 <= var_15))))));
    #pragma endscop
}
