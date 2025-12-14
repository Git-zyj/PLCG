/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min((var_14 || var_4), (min(var_1, var_16))))) | ((min(3326185620545278111, var_12)))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_21 = (((((min(2214463811, var_0)))) ? 4294967295 : (var_9 & var_0)));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_22 = (min(537581695, var_9));
            arr_6 [i_1] [i_1] [i_1] = ((-((4160496390892797107 ? -1 : -1164405856))));

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_23 = (arr_2 [i_1]);
                var_24 = -var_13;
                var_25 = (((((((-1164405837 ? (arr_0 [i_2]) : var_16)) & (((min(var_7, var_4))))))) ? (max(65535, ((var_4 & (arr_7 [i_0 - 1] [i_0] [i_0] [i_0]))))) : (((min((!var_7), 1164405856))))));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                arr_12 [i_1] [i_1] = (((var_7 && -1164405856) >> ((((var_15 ? 1164405845 : var_2)) - 1164405814))));
                arr_13 [i_1] = var_5;
                arr_14 [i_0] [i_1] [i_0] [2] = (((((arr_8 [i_0 + 4] [i_0 - 3]) + 2147483647)) >> (((arr_1 [i_0 + 4]) - 1384))));
            }
            var_26 = (((1164405852 && -1164405840) + ((((arr_3 [1]) && (arr_1 [i_0]))))));
        }
        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            arr_17 [i_0] [i_4 + 1] = ((1164405848 ? 1065353216 : 1164405873));
            arr_18 [i_4 + 1] [i_4] = ((-((var_10 ? var_15 : var_12))));
            var_27 = var_9;
            var_28 = (((((1164405823 ? 57 : 255))) ? (max((((!(arr_16 [i_0] [i_4])))), (max(var_12, (arr_16 [i_0] [i_4 - 1]))))) : (((((1164405823 ? 1164405867 : 3711944370)))))));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            arr_22 [11] [1] [i_0] = ((((((1109469197084813499 & 3229614063) / (((1164405845 ? var_10 : var_3)))))) ? (~35895) : 32073033));
            arr_23 [i_0] = (!-var_19);
        }
        var_29 = 0;
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_30 = (max((((((var_19 ? var_16 : var_2))) ? (((min(var_7, -22)))) : ((var_13 ? (arr_26 [i_6] [i_6]) : -1164405848)))), var_4));
        var_31 &= ((((((var_8 << (((-1 + 30) - 11)))))) || ((!(!var_15)))));
        var_32 = (((-1 / (min(1, var_18)))));
        var_33 -= var_2;
    }
    #pragma endscop
}
