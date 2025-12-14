/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 *= ((-((~((-(arr_5 [7])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_3] [i_1] [i_1] [i_1] [i_0] |= (112 ? -1 : 2898784670);
                            var_13 = (-((var_0 ? ((min((arr_1 [i_0]), (arr_10 [i_2] [i_1] [i_1] [i_2] [i_3] [i_3])))) : var_8)));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_16 [i_4] = (arr_15 [i_4] [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_28 [i_4] [i_4] [i_5 + 1] [i_8] [i_8] [i_8] [i_5 - 2] = ((~(~212700951712033953)));
                                arr_29 [i_8] = var_5;
                                var_14 *= ((+(((((var_2 ? (arr_14 [i_6]) : (arr_23 [i_4] [i_5 - 1] [i_6 + 1] [i_7] [i_8])))) ? 8930558239801135439 : ((1851828673 ? (arr_15 [5] [5]) : (arr_20 [i_4] [i_5] [i_4])))))));
                                arr_30 [i_8] [i_8] [i_6] [i_8] [i_4] = ((min(var_10, var_6)));
                            }
                        }
                    }
                    arr_31 [i_4] [i_4] [i_6 - 2] &= ((!(arr_22 [5] [i_5] [i_6])));
                    var_15 = (min((min(var_8, var_1)), 2443138598));
                }
            }
        }
        var_16 = var_5;
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_17 = 65;
        arr_36 [i_9] [i_9] = (min((arr_22 [i_9] [i_9] [i_9]), (~var_6)));
        arr_37 [i_9] [i_9] = ((-93 ? -99 : 3214496631));
        var_18 = ((!((!(((var_0 ? 9883722303410730087 : 69)))))));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        var_19 = ((((min(1, var_4))) ? ((var_6 ? ((var_6 ? (arr_33 [i_10]) : (arr_10 [8] [i_10] [i_10] [i_10] [i_10] [8]))) : var_4)) : var_4));
        var_20 = (~65535);
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                {
                    arr_47 [i_12] [2] [i_12] &= (-((3631385475 ? ((((arr_24 [12] [3] [i_12] [i_11] [2]) ? (arr_7 [17]) : (arr_13 [i_11])))) : var_5)));
                    var_21 = var_10;
                    arr_48 [i_11] = ((((max((~187), var_6))) ? (((!((max(101, var_9)))))) : (!1074146261019945482)));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 9;i_15 += 1)
                        {
                            {
                                arr_53 [i_11] [i_11] = (9 ? -18 : 8);
                                arr_54 [7] [i_11] [1] = ((-(((!4041339508503141516) ? (((arr_52 [i_14] [i_14] [3] [i_14] [8]) ? 7 : (arr_41 [i_11] [i_12]))) : (((arr_27 [i_15] [8] [i_13] [i_12] [i_11]) ? 84842425 : var_0))))));
                                var_22 = -16;
                                arr_55 [i_11] [i_11] = (min((max(-2604492608478280273, (((var_0 ? -78 : (arr_21 [i_11] [8] [i_13])))))), (arr_27 [i_11] [i_12] [i_13] [i_12] [i_15 - 3])));
                                var_23 = min(((~(min(var_4, (arr_49 [i_11] [7] [i_13] [i_13] [i_15 - 1] [0]))))), (((!(!4540361504295957687)))));
                            }
                        }
                    }
                    var_24 |= max(((var_9 ? (min((arr_24 [i_11] [i_12] [i_12] [11] [i_13]), 3883396873040758063)) : ((min((arr_44 [i_11] [i_13]), var_5))))), (max((~var_8), (~-9))));
                }
            }
        }
        arr_56 [i_11] = 6677792475692927994;
    }
    #pragma endscop
}
