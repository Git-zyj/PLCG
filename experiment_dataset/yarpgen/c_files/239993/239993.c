/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_0] [2] [1] [8] &= ((((~(arr_0 [i_0] [i_1]))) >> (((~var_6) + 2514))));
                    arr_7 [i_0] [i_1] [i_1] = (((arr_4 [i_0] [i_1 - 3] [i_0] [i_1 - 2]) / (((-72 ? var_10 : -90)))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_3] = (((((~(arr_3 [i_0] [i_1 - 1] [i_3])))) ? -72 : (arr_1 [i_2 + 1] [i_0])));
                        var_12 = ((-932671217654189881 ? 108 : -63));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [7] = -110;
                    }
                }
            }
        }
        arr_13 [i_0] = 148;

        for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
        {
            arr_18 [i_0] = (i_0 % 2 == zero) ? (((((932671217654189880 ? var_9 : 50260)) >> (((arr_4 [i_0] [i_4 - 1] [i_0] [i_4]) - 1793411003))))) : (((((932671217654189880 ? var_9 : 50260)) >> (((((arr_4 [i_0] [i_4 - 1] [i_0] [i_4]) - 1793411003)) - 3288432270)))));
            var_13 = (((((arr_17 [i_0]) && (arr_0 [i_0] [i_0]))) ? 2991739904188084329 : (~var_10)));
            arr_19 [i_0] = (~var_10);
            var_14 = (min(var_14, ((((arr_5 [i_4 - 1] [11]) | (arr_5 [i_4 + 1] [11]))))));
        }
        for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
        {
            var_15 ^= (((arr_21 [1] [i_5 - 1]) - 170));
            arr_22 [i_0] = 932671217654189878;
            arr_23 [i_0] [i_0] [i_5] = (((((2155585005 ? var_8 : var_8))) ? 50260 : 197));

            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                var_16 = (min(var_16, (((!(var_7 / 170))))));

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    arr_28 [i_0] [i_0] [i_6] = ((9223372036854775807 <= ((15263 ? 50275 : 18014398505287680))));
                    var_17 = (max(var_17, (((var_1 ? -89 : var_8)))));
                    arr_29 [0] [0] [i_5] [i_6 - 2] [i_0] = 5245495776480484694;
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    arr_33 [i_0] [i_0] [6] [i_0] [i_0] [i_8] = (!(arr_1 [i_6 - 2] [i_0]));
                    var_18 = (max(var_18, (arr_26 [i_0] [i_5] [i_5] [i_8] [i_8])));
                    arr_34 [i_0] = (((((-932671217654189890 ? var_4 : 1))) <= var_2));
                }
            }
        }
        for (int i_9 = 2; i_9 < 14;i_9 += 1)
        {
            var_19 += (~0);
            arr_37 [i_0] [i_9 + 3] = var_6;
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_20 = (!var_6);
            var_21 = (var_1 == -932671217654189873);
        }
        var_22 = (min(var_22, (((15 ? -87 : 34537)))));
    }
    for (int i_11 = 1; i_11 < 15;i_11 += 1)
    {
        arr_43 [i_11] = 137;
        arr_44 [i_11] [i_11] = (!(118 == 75));
    }
    var_23 = ((var_5 && (((var_0 ? (!34537) : (!var_8))))));
    var_24 = (((!var_8) || (1 || 3546860538761411855)));
    #pragma endscop
}
