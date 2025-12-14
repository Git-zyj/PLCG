/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_20 += ((((arr_5 [i_1] [i_0]) >= 3)));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_21 = (min((min(16707230760310578998, 0)), ((((arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1] [7]) ? 114 : -1206837043126014851)))));
                    var_22 = (max((((!(arr_7 [i_1 + 1] [i_1 + 1] [i_1] [i_1])))), (-9223372036854775807 - 1)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [12] = ((min((arr_12 [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1]), (arr_12 [i_0] [i_2] [i_2] [i_0] [i_4]))));
                                var_23 = ((((((min((arr_10 [i_4] [i_3] [i_1 + 2] [4]), 0))) ? (((arr_6 [i_4 - 1]) | (arr_2 [i_2]))) : (((max(var_15, (arr_9 [i_3] [i_2] [i_1 + 2] [i_0]))))))) + 8109193768793006710));
                                var_24 ^= var_16;
                                arr_16 [i_0] [i_2] [i_2] [i_0] [i_4 - 1] = min(((((!173) ? 5 : 179))), -var_0);
                            }
                        }
                    }
                    var_25 = (min(var_25, 255));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_26 = var_9;
        var_27 = max(((((((var_19 ? -5836889873879917998 : 1973624000406991703))) && ((max((arr_18 [i_5] [i_5]), (arr_14 [i_5] [i_5] [i_5] [i_5] [i_5]))))))), (arr_1 [i_5]));
    }
    var_28 = (max(var_28, ((min((((141 + var_17) ? (var_2 && 119) : (min(241, 9223372036854775807)))), (((!(var_0 % var_11)))))))));
    #pragma endscop
}
