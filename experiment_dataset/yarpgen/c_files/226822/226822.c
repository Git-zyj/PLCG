/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 = (min(var_19, (((var_15 ? (var_9 % var_10) : (((((min(-97, 214))) ? (0 / 1630) : ((var_14 ? var_13 : var_9))))))))));
    var_20 = 2874650724;
    var_21 *= (((var_8 & ((var_4 ? -131072 : -82)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_9 [6] [1] [0] [11] [9] [2] = (min((((arr_4 [2] [1] [i_2]) / (arr_4 [i_1] [7] [i_3]))), (arr_6 [i_2] [i_3])));
                        arr_10 [2] [5] [8] [4] = (arr_2 [0]);
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_22 = (((min(var_4, ((0 ? 81 : (arr_7 [4] [1] [6] [7] [11] [2]))))) - (min(((max(var_11, (arr_1 [2])))), (arr_7 [5] [1] [8] [8] [7] [6])))));
                        arr_14 [10] [1] [2] [8] [7] &= ((min(var_14, (arr_7 [5] [8] [1] [9] [10] [8]))));
                        var_23 ^= ((((+((0 ? (arr_5 [0] [7]) : 41360170)))) % 15));

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_24 |= (min(((min(((min(1638, 224))), (arr_13 [4] [8] [1] [9])))), ((((var_14 & (arr_15 [2] [7]))) * (min((arr_6 [8] [10]), var_15))))));
                            var_25 = (max(var_25, ((max(((((arr_4 [i_0] [1] [1]) ? (arr_17 [i_1]) : (!16810306118288543528)))), (((min((arr_7 [8] [4] [7] [1] [8] [4]), var_1)) + var_14)))))));
                        }
                    }
                    var_26 = ((((((((var_17 ? 41360170 : (arr_7 [4] [7] [10] [4] [0] [4])))) ? (~-41360160) : (min((arr_3 [5]), var_0))))) || (arr_1 [7])));
                }
            }
        }
    }
    #pragma endscop
}
