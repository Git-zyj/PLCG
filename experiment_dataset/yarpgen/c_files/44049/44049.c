/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            var_10 = (max(var_10, 536104350801322717));
            var_11 = 0;
            var_12 = ((var_8 ? var_3 : var_7));
            arr_7 [i_0] = var_4;
        }
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            arr_10 [i_0] [i_0] = 18196813767537803531;
            var_13 = ((32767 ? ((var_1 ? 12944883780327666499 : 127)) : var_2));
            arr_11 [i_0] = var_4;
            arr_12 [i_0] [i_0] = (--0);
            var_14 = (max(var_14, (((~58378) ? ((var_5 ? var_9 : var_0)) : 1))));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            var_15 = ((var_0 ? 2092257899 : (~var_6)));

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_16 = 12470879201494331551;
                arr_20 [i_0] [i_3] [i_0] = 32750;
            }
            arr_21 [0] [i_0] [i_3] = (((((var_3 ? 0 : var_1))) ? var_5 : var_5));
        }
        var_17 = ((3011569558350830608 ? var_2 : var_7));
        arr_22 [i_0] = (((((2092257901 ? var_7 : 32766))) ? var_8 : ((13137216967302219847 ? var_6 : 0))));
        arr_23 [i_0] [i_0] = ((var_8 ? -521792068527074881 : (((var_4 ? 1620564300 : var_6)))));
        var_18 = -var_6;
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_26 [i_5] = ((-521792068527074881 < ((((((var_4 ? -1142198667 : -6383709146775660626)) + 9223372036854775807)) << (((var_3 + 1830434808) - 22))))));
        var_19 = -var_1;
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_20 = ((((((((0 ? var_3 : -9223372036854775804))) ? (max(var_7, var_9)) : var_6))) ? -7045 : ((var_4 ? (!16507326803277344643) : 18446744073709551591))));
        var_21 = (min(var_3, -6383709146775660624));

        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            var_22 = (min(var_22, ((max(-881741760, 142)))));
            var_23 = 8236085361294544814;
            var_24 = ((max(-1620564306, 1926145641)));
            var_25 = ((max(var_6, var_1)));
            arr_33 [i_6] = (max(var_9, ((max(0, 23)))));
        }
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        arr_36 [i_8] [10] = -6383709146775660620;
        var_26 = var_4;
    }
    var_27 = -8;
    #pragma endscop
}
