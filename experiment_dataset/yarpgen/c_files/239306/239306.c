/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_14;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_15 = ((((((26672 / 100198311) / 1))) ? -16305 : (max(16304, (((arr_0 [i_0]) ? (arr_2 [i_0]) : -690812759188903752))))));
            var_16 = (max(var_16, ((((arr_2 [i_1]) ? var_5 : -16294)))));
        }
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            var_17 &= (min(((((max(-16304, (arr_7 [i_0] [i_0] [i_0])))) ? (max(var_9, (arr_8 [i_2 + 1]))) : (16305 != var_8))), var_2));
            var_18 = 16302;
            var_19 -= (1 + 0);
        }
        var_20 = (((arr_8 [i_0]) + (((~var_9) ? ((0 + (arr_1 [i_0]))) : var_5))));
        var_21 = (min(var_21, (arr_0 [7])));
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        {
                            arr_24 [i_3] [i_3] [i_5] [i_6] [6] [i_7 - 1] [0] = (((-8634 + 2147483647) << (min((arr_7 [i_4] [i_5] [i_7]), ((min(15467, var_5)))))));
                            var_22 = ((-(((var_6 - -102) ? (max(var_8, (arr_20 [i_3] [i_3] [i_5]))) : (var_8 + var_6)))));
                            arr_25 [i_3] = 19;
                        }
                    }
                }
            }
            var_23 = ((min(-4245522655342245574, -28879)));
            arr_26 [i_3] = (((((748594874162509166 ? 11085382913638180917 : var_6))) ? ((min(var_7, var_1))) : (min(4294967295, 1))));
            var_24 = var_14;
            var_25 = ((1 ? 0 : -17147));
        }
        var_26 = ((-(min(var_2, (((~(arr_19 [i_3] [1] [i_3]))))))));
    }
    var_27 = ((-(((var_12 | var_9) ? ((var_1 ? var_12 : var_5)) : (((7361361160071370699 ? 2047 : -8528)))))));
    var_28 = ((((var_4 ? var_5 : ((84 ? 233 : -16307)))) | -19));
    var_29 += var_10;
    #pragma endscop
}
