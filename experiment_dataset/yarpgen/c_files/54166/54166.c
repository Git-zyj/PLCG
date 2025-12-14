/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((1 ? var_3 : var_0)) >= (var_19 && var_10))))) >= var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [15] [11] = ((arr_1 [i_0 + 1]) * var_9);
                arr_5 [i_1] [7] [5] = ((var_4 ? (((max((arr_0 [i_1]), var_18)) + ((min(-1486015310, 1486015325))))) : (((((240 >> (114 - 105))) << (((arr_0 [i_0 - 1]) - 2109143454)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_3] [i_2 + 3] [16] = (((1 > 2139022740199122370) << (((~1099511627520) - 18446742974197924072))));
                            arr_11 [i_3] = -1486015310;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_21 = (max(var_21, (((240 ? ((var_18 ? (var_13 % var_5) : (~var_2))) : var_4)))));
                            arr_16 [i_0] [i_0] [6] [i_4] [i_4] [i_0] = ((var_10 | (((-var_10 ? 1486015309 : (arr_15 [i_5] [i_5 - 1] [2] [i_5 - 2]))))));
                            var_22 = ((var_6 == (arr_12 [i_0 - 1] [i_0 - 1] [i_5 - 1])));
                        }
                    }
                }
                arr_17 [i_0 - 1] [13] = var_16;
            }
        }
    }
    var_23 = (min((((((max(var_16, var_8))) && (var_1 == 3704571899904113742)))), var_18));
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            {
                var_24 = 2128763050744890996;
                var_25 = (min(var_25, ((max((arr_18 [i_6 + 1]), (var_17 <= -var_7))))));
            }
        }
    }
    var_26 = (min((((var_1 <= var_14) ? (2088960 | var_11) : ((var_16 ? var_9 : var_16)))), var_4));
    #pragma endscop
}
