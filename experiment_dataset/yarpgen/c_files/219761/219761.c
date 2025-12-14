/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((44254 ^ var_5) ? ((min(0, -4014))) : 117)) & ((((min(var_10, 27469))) | ((9 ? -76 : -85))))));
    var_18 = ((((max(4, 30))) ? var_5 : -var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] = -20203;
                var_19 = (min(((((arr_2 [i_0]) & (arr_2 [i_1])))), var_6));
                arr_6 [i_0] = arr_3 [i_1];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_20 ^= (max(((((arr_9 [i_3] [3]) != ((((arr_12 [i_1] [i_2] [i_1]) ? 15872 : 16383)))))), 56));
                            var_21 = (min(var_4, (min(127, ((226 ? var_12 : (arr_1 [6])))))));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 12;i_4 += 1)
                            {
                                var_22 += (!-23);
                                arr_15 [i_0] [i_1] [1] [i_3] [i_1] [i_0] = (((((var_3 | (arr_4 [i_1] [i_4])))) ? (arr_13 [i_0] [i_4 + 2] [i_2] [i_0] [i_1] [i_0]) : (arr_10 [i_4 + 2])));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 14;i_5 += 1)
                            {
                                var_23 = (min(var_23, ((((arr_17 [i_0] [i_1] [i_2] [i_3]) % (arr_8 [i_0] [i_1] [i_0] [i_3]))))));
                                var_24 = (arr_11 [i_5] [i_3] [i_2] [i_1] [i_0]);
                                arr_19 [i_0] [i_1] [i_2] [i_1] [i_0] = ((~(arr_13 [i_0] [i_1] [3] [0] [i_3] [i_5])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (min(var_25, ((((((((!var_16) != ((-1953889459 ? var_0 : 82)))))) >= (max((37416 / 17051716150726214483), (var_15 / var_1))))))));
    var_26 = -63;
    #pragma endscop
}
