/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((((min(var_14, var_6))) ? var_3 : var_0)), (!506203748)));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_16 = (((((-(arr_0 [i_0 + 2])))) ? (((min(var_12, var_10)))) : (((arr_2 [i_0 - 1]) ? (arr_0 [i_0 + 2]) : var_6))));
        var_17 = (max(var_17, ((-((-506203749 / (arr_2 [7])))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = var_8;
                    var_19 = (arr_6 [i_1]);
                    arr_10 [12] [8] |= (max(((max((max((arr_2 [i_0]), (arr_5 [12] [i_1] [1]))), (arr_1 [i_0 - 1])))), ((var_10 ? (arr_1 [i_0]) : (arr_4 [i_0 - 1] [i_0 + 1] [i_1 + 2])))));

                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        arr_13 [i_1] [i_1] [i_3] [i_3] [2] [i_0] = (((~(arr_5 [i_0] [i_1] [i_1]))));
                        var_20 ^= (var_6 <= var_1);
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_17 [i_4] [i_4] [i_4] [i_4] [i_1] = 506203748;
                        arr_18 [i_2 + 3] [i_1] [i_2] = ((-(1472654751 >= 1472654751)));
                        var_21 *= ((!((max((arr_9 [i_1] [i_0 + 2] [i_0]), (arr_5 [12] [i_1] [1]))))));
                        arr_19 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_1] = (min((max(((var_10 % (arr_7 [i_4]))), var_0)), (arr_9 [i_0] [i_0] [24])));
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_22 += ((((min((arr_21 [i_2 + 3] [1] [i_5]), (max(var_3, var_5))))) ^ (~var_14)));
                        var_23 = (arr_22 [i_1] [1] [i_1] [i_1]);
                        var_24 = (arr_8 [i_2] [i_1]);
                        var_25 = (1 - -506203749);
                    }
                }
            }
        }
    }
    var_26 = (((((~(min(0, var_3))))) == (max((var_5 ^ var_0), (((var_3 ? var_10 : 3384416553)))))));
    #pragma endscop
}
