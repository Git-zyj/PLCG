/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_4;
    var_18 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_19 = (((((-(arr_7 [i_0] [i_0] [i_2 - 1] [i_2])))) ? (max(((0 ? var_10 : (arr_2 [i_0]))), (var_8 + var_14))) : 15928793457796029201));
                            var_20 = (((((var_14 ? (arr_7 [i_0] [i_1] [10] [1]) : var_3))) ? ((((arr_9 [i_2 - 2] [i_0] [i_2 - 3] [i_2] [i_2 + 1] [i_2 - 2]) >= (arr_7 [i_0] [5] [1] [i_0])))) : (((arr_9 [i_2 - 3] [i_0] [i_2 - 3] [1] [1] [i_2 - 2]) + (arr_7 [i_0] [i_0] [i_0] [i_2])))));
                            arr_11 [i_0] [10] [i_0] [i_0] [i_0] [i_3] = ((((((arr_5 [i_0] [i_2 - 1]) ? (arr_7 [i_0] [i_2 - 2] [i_2 - 2] [i_0]) : (arr_7 [i_0] [i_2 - 3] [i_2 - 3] [i_2 - 3])))) ? ((((var_13 * var_15) >= var_9))) : (((-(arr_9 [5] [i_0] [i_2] [i_0] [i_3] [5]))))));
                        }
                    }
                }
                arr_12 [9] [i_0] = (((min(((((arr_1 [i_0] [i_0]) + var_7))), (max(var_4, (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))))) - (max((arr_3 [i_0]), var_15))));
                var_21 = (min((arr_4 [i_0] [i_1]), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])));
                arr_13 [14] [i_1] |= (min((max((arr_9 [10] [4] [i_0] [10] [i_1] [i_0]), var_16)), ((((arr_3 [i_1]) >= var_1)))));
                var_22 -= (((((arr_0 [i_0] [i_1]) < var_16)) ? var_14 : (((max((arr_0 [i_0] [i_0]), 0)) ? (((arr_2 [i_1]) ? var_7 : var_8)) : ((((arr_4 [i_0] [i_1]) << (133 - 124))))))));
            }
        }
    }
    var_23 = ((~(((((var_14 ? var_14 : var_15))) ? var_12 : (var_4 & var_16)))));
    #pragma endscop
}
