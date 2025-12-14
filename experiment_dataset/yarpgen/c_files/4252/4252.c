/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((max(85, (min(-33, -104))))) * 33));
                arr_7 [i_1] [i_1] [i_1] = (((-84 + 2147483647) << (((arr_5 [i_0] [i_1]) - 26))));
                var_15 *= min(63, (min(-67, 107)));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_16 *= ((-((((~(arr_4 [i_1]))) ^ (!var_11)))));
                        var_17 = ((-(67 | 90)));
                        var_18 = arr_4 [i_3];
                        arr_13 [i_0] [0] [i_0] = var_14;
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        arr_16 [i_1] [i_0] = var_10;
                        var_19 = (min(var_19, (((-18 ? ((63 ? -39 : -113)) : -87)))));
                        var_20 = (~var_2);
                    }
                    var_21 *= min(113, 115);
                    var_22 *= max(var_6, (max(var_10, (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    var_23 |= (((arr_5 [i_0] [i_1]) ? 120 : (arr_5 [i_0] [i_0])));
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    var_24 *= (((((~(arr_15 [i_1] [i_1] [i_1] [i_1] [i_1])))) ? ((max(7, -102))) : ((((!var_14) >= ((var_6 ? 22 : var_1)))))));
                    arr_19 [i_5] [i_5] = (max((min(((var_0 ? var_7 : (arr_12 [i_1] [i_1] [i_1] [i_1]))), (~86))), (~var_0)));
                }
            }
        }
    }
    var_25 = (((((!(!var_5)))) >> (((((var_6 && var_4) | var_10)) + 8))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            {
                var_26 += max(((((~29) && (arr_23 [i_7])))), (arr_21 [i_6]));
                var_27 = (min(var_27, (103 & var_3)));
            }
        }
    }
    #pragma endscop
}
