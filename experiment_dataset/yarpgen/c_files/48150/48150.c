/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (var_12 | var_10)));
    var_16 = (!1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = ((((var_2 ? (((39726 ? 25787 : -41))) : (((arr_9 [i_2] [i_2] [i_1]) ? var_9 : (arr_11 [i_0] [0] [2] [i_3] [i_4]))))) & ((((((var_0 ? var_4 : (arr_9 [2] [i_2] [2])))) ? (1 * var_13) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                                var_18 = (min(var_18, 1491157346));
                                var_19 = 16;
                                var_20 += ((2038 * ((((var_5 - -1179127734) <= (((!(arr_9 [i_3] [i_0] [i_1])))))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_0] &= (min(var_14, (arr_10 [i_0] [i_0] [i_2] [i_2] [i_2])));
                    arr_15 [i_2] [0] [i_1] [0] = ((2038 * (max(2890114939, 25809))));
                    var_21 = (max(var_21, (((((arr_6 [i_0] [i_1] [i_2 + 1]) * (((arr_1 [i_2]) << (var_10 - 1001627302)))))))));
                }
            }
        }
    }
    var_22 = var_10;
    #pragma endscop
}
