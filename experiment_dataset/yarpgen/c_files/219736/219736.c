/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0 - 1] = ((~(min(-3, ((~(arr_0 [i_0 + 2])))))));
        arr_3 [i_0] = 1;
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] = (min(((262112 ? (min(-262112, 4854284634830732259)) : -119)), ((min((arr_5 [i_1]), (arr_5 [i_1]))))));
        arr_8 [i_1] = ((1 ? ((1 ? 0 : (arr_4 [i_1 + 4]))) : (arr_4 [i_1 + 1])));
        arr_9 [i_1] = (min((((~(arr_5 [i_1])))), (max((min(-4241013817057026363, 1)), (min(var_9, 3650929367393648175))))));
        arr_10 [i_1] [i_1] = (min(((min((arr_5 [i_1]), (arr_5 [i_1])))), (min((arr_5 [i_1]), var_2))));
        arr_11 [i_1] = ((!(arr_4 [i_1 + 4])));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        var_11 = (((((262112 ? 0 : (((1 * (arr_13 [i_2]))))))) ? (min(11, 1)) : ((min(0, (((arr_13 [11]) ? 1 : (arr_13 [i_2]))))))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_12 = (min(var_12, ((min(var_5, (((((1 ? 1 : 1))) ? (arr_14 [i_2 - 1] [1] [i_3]) : var_4)))))));

            /* vectorizable */
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                var_13 = -12;
                arr_22 [i_2] [i_2] [i_2] [i_2] = 1;
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_25 [6] [i_2] = (arr_20 [1] [1]);
                var_14 -= ((!1) < 0);
                var_15 = (min(((min((arr_12 [i_2]), var_3))), ((((max(var_0, var_7))) < 1))));
            }
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            arr_28 [i_2] [i_6 - 1] [i_2] = (min(((((~1) ? (!1) : var_4))), 8363479605793745283));
            arr_29 [i_2 + 1] [i_2 + 1] [i_2] = ((((((var_7 ? (arr_15 [i_2] [i_6] [i_2]) : 0)))) ? ((~((min(65535, 1))))) : 5304));
            arr_30 [i_2] [i_6] = ((((((((1 ? (arr_26 [i_2] [i_6]) : 1))) ? (max(1, var_8)) : (((max(var_7, (arr_17 [i_6])))))))) ? ((((1 - -1) ^ (~1)))) : 5));
            arr_31 [i_2 + 1] [i_2] = 1;
        }
        arr_32 [i_2] = 4854284634830732259;
        var_16 = ((!((((arr_23 [i_2] [i_2] [i_2 - 2]) + -4353577776500750563)))));
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        arr_35 [i_7] = (!((max(-1, 1))));
        arr_36 [i_7] [i_7] = ((~(~-7017363875291693622)));
        arr_37 [i_7] = (min(27437, ((-(arr_34 [i_7])))));
    }
    var_17 = ((var_1 ? ((var_1 ? (min(var_10, var_7)) : 1)) : -0));
    var_18 = var_0;
    var_19 = (0 && var_1);
    #pragma endscop
}
