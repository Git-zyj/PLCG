/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((-(max(var_15, var_0)))), ((max(var_15, (~var_15))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, ((-(((arr_6 [i_0] [10]) ? ((-(arr_10 [8] [i_1] [8]))) : var_1))))));
                            var_20 = (max(var_20, var_12));
                            var_21 = (max((arr_12 [i_2] [i_2] [i_1] [i_1] [3]), (min((arr_1 [i_1 - 2]), 181))));
                            arr_13 [i_0] [i_0] [i_2] [7] = ((((((28085 ? (arr_6 [i_2] [i_0]) : 53659)) != (11880 - var_16))) ? var_15 : (((((954940612 ? var_7 : 10128898960787762601)) <= (arr_12 [i_3] [i_2] [i_1] [i_0] [11]))))));
                        }
                    }
                }
                var_22 = ((var_17 ? (arr_1 [i_1 + 2]) : (((-(-70 != var_1))))));
                arr_14 [i_0] [10] [i_0] = (min(((var_15 / (max(var_4, 1628210023)))), var_13));
                var_23 ^= (max(((~(11877 ^ var_8))), ((min((min((arr_3 [1]), (arr_5 [i_1 + 3] [i_0] [i_0]))), ((((arr_0 [12]) >= var_2))))))));
            }
        }
    }
    var_24 = var_0;
    var_25 = (~var_3);
    #pragma endscop
}
