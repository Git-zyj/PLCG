/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_6 <= ((var_2 ? (((min(0, var_17)))) : ((254 ? 15569812189198230112 : 1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_21 = var_17;
                    var_22 = ((+(min((arr_6 [i_0] [i_0]), 15569812189198230119))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_23 = (max(var_23, (((var_17 ? 1 : ((((((arr_12 [i_3] [i_3] [i_2] [i_1] [i_0] [20]) - (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (max(-559334164014755304, 284573843)) : ((((arr_2 [i_0]) ? var_19 : 1))))))))));
                                var_24 = (min(var_17, (((arr_6 [i_3 - 1] [i_3 + 1]) ? 9009863003621358038 : (arr_6 [i_3 + 1] [i_3 - 1])))));
                                var_25 = ((max(((2251799813685247 ? 1 : var_0)), ((min((arr_2 [i_2]), var_12))))));
                            }
                        }
                    }
                    var_26 = ((-(((var_18 <= (((arr_2 [1]) | 9009863003621358038)))))));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_27 = (arr_7 [i_5] [5] [i_5] [7]);
                            var_28 = (arr_8 [i_5] [i_5] [i_5]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    var_29 = (max(var_29, ((min(((((((arr_21 [i_8] [i_9]) ? 1 : 1))) | ((var_18 ? -2814110508788654094 : var_18)))), (arr_20 [i_9]))))));
                    var_30 = (arr_14 [i_7] [i_7]);
                }
            }
        }
    }
    var_31 = (var_16 % var_10);
    #pragma endscop
}
