/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= -1;
    var_11 = (((((2927979018945454774 ? -6416590349950835802 : 306585225))) ? var_5 : var_7));
    var_12 = var_1;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (-5 <= 221);
        var_14 = ((min(((-46 ? var_2 : var_0)), var_7)));
        var_15 ^= (arr_1 [i_0]);
        var_16 += (-4186596323768810320 - 138);
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        var_17 = (((((min(var_0, -11422)))) ? var_9 : 181));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [i_2] = ((((((var_3 && 224) / 1))) >= (min(((max(var_2, var_3))), (min(var_6, var_5))))));
                    var_18 = var_1;
                    var_19 = (min(var_19, var_5));
                    arr_11 [i_2] [i_2] = ((((min((arr_7 [i_1] [1]), -82)) - 111)));
                }
            }
        }
        var_20 = var_7;
        arr_12 [i_1] [i_1] = (1 ? 125 : (-2147483647 - 1));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                var_21 = (max(var_21, var_9));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            arr_26 [i_4] [i_5] [i_5] [i_7] |= min(var_5, ((((var_3 * var_8) | var_8))));
                            var_22 = (((((((var_8 ? (arr_18 [i_5]) : var_2)) < (arr_18 [i_4])))) != ((-((min(var_6, var_6)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
