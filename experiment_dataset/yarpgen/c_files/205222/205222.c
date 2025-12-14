/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (-127 - 1);
        var_10 = ((+((min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((!268435455) ? (((((6909671554873560005 ? -942483039 : 3850795849))) ? (max(var_2, var_8)) : ((((arr_6 [i_1]) ? var_1 : var_2))))) : (((~(arr_3 [i_1] [i_1]))))));
        arr_8 [i_1] = (min((arr_5 [i_1]), ((15435566474318353045 / (arr_1 [i_1])))));
        arr_9 [8] [i_1] = var_3;
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_11 += 13561450753825294269;

        for (int i_3 = 2; i_3 < 24;i_3 += 1)
        {
            arr_15 [20] = ((((~13561450753825294269) ? (arr_12 [i_3 - 1] [i_3 + 1] [i_3 + 1]) : -942483039)) % (-2147483647 - 1));
            arr_16 [i_3] [i_2] = ((((!(arr_14 [i_2] [i_3 - 2] [i_3])))) * var_3);
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            arr_21 [i_2] [i_4] = var_3;

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                arr_25 [i_2] [i_2] [i_2] = 3850795849;
                arr_26 [i_5] [i_2] [i_2] = ((~(arr_23 [4] [i_4] [i_5])));
                arr_27 [i_5] [i_4 - 1] [7] [i_2] = ((var_8 ? ((((arr_23 [i_4] [i_4] [i_4]) != 0))) : (arr_20 [13] [i_4 - 1] [i_4 - 1])));
                arr_28 [11] = (arr_19 [i_5]);
            }
            arr_29 [i_2] = (((arr_17 [i_4 + 2] [i_4 - 1]) ? var_3 : 32767));
            arr_30 [i_2] [i_4] = ((-646290381 ? (arr_18 [i_2] [i_4] [i_4]) : 13561450753825294265));
        }
        var_12 += (((((arr_24 [i_2] [19] [i_2] [i_2]) ? (((max(var_4, var_4)))) : (max(var_3, 2532217856046867885)))) + (arr_20 [i_2] [i_2] [i_2])));
        arr_31 [i_2] [i_2] |= (arr_11 [i_2]);
    }
    for (int i_6 = 2; i_6 < 18;i_6 += 1)
    {
        arr_34 [i_6] = (((max((arr_24 [i_6] [i_6] [i_6 + 1] [i_6]), -var_5)) <= (arr_24 [i_6] [i_6] [i_6] [12])));
        arr_35 [i_6] [i_6] = (22 + var_1);
    }
    var_13 = ((((max((min(15022908207552648746, 272740329)), var_7))) ? 167 : var_8));
    var_14 = (max(var_14, (min((max(6469868719183857866, (min(3950372663, 22)))), 4294967282))));
    var_15 = var_9;
    var_16 = (min((-15225 * 3100362818439980635), -16));
    #pragma endscop
}
