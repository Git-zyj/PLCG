/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((max(((0 + ((var_7 ? 0 : 0)))), (var_13 < var_5))))));
    var_16 = (((min(var_7, (!var_1))) >> ((((-var_6 ? var_0 : (~var_13))) - 13401))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_17 ^= ((((min(0, (arr_3 [i_4 - 3])))) ? ((var_1 ? 0 : (((arr_11 [i_4] [i_3] [i_0] [i_0] [i_0]) ? var_7 : 32763)))) : var_3));
                                arr_13 [i_3] = arr_11 [i_2] [6] [i_4 - 2] [i_4] [i_4 - 3];
                                var_18 = ((!(!6)));
                                var_19 = (min(var_19, (((3889970187839990650 + (((min((arr_3 [i_4 - 2]), (arr_3 [i_4 + 2]))))))))));
                                var_20 = ((((arr_12 [i_4 - 1] [2] [i_4] [5] [i_4 - 3]) * (arr_9 [3] [i_4] [i_4 - 2] [i_4] [3] [i_4] [i_4 - 1]))));
                            }
                        }
                    }
                }
                var_21 = (max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), ((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_1]))))));
            }
        }
    }
    #pragma endscop
}
