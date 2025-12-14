/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        arr_11 [i_2] = var_11;
                        arr_12 [i_0] [i_1 - 2] [i_2] [i_0] [i_1] = var_9;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_16 [i_0] [i_2] [i_0] [i_4] [i_1] &= ((arr_7 [i_0 + 1] [i_0] [i_0 - 1] [i_0]) == (((~25) ? (arr_6 [i_2]) : ((-(arr_3 [i_0] [i_0] [i_2]))))));
                        arr_17 [2] [i_1] [i_2] [i_0] [i_4] = (max((((var_11 ? var_4 : (arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])))), (((arr_3 [i_1 - 2] [i_1 - 2] [i_0]) ? 25 : 14899476135172949923))));
                    }
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_0] = var_7;
                        arr_23 [i_5] [i_5] [i_5 + 1] [i_2] = -var_11;
                        arr_24 [i_0] [i_2] [i_1 - 1] [i_0] = ((28 != ((~(arr_6 [i_0])))));
                    }

                    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            arr_30 [i_0] [i_0] [2] [i_0] [i_6] [2] = (arr_15 [i_0 + 1]);
                            arr_31 [i_0] [i_0 - 1] [i_6] [i_0] [i_0] [i_0] = -25;
                            arr_32 [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] = (((arr_19 [i_0 + 1] [i_7] [i_7] [i_0 + 1] [i_7]) % (arr_8 [i_2])));
                            arr_33 [i_1] [i_1] [i_0] [i_0] [i_1] [i_7] [i_1] = ((2188518001 ? (var_5 + 867066682042488233) : (arr_15 [i_0])));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            arr_36 [i_8] [i_0] [i_0] [i_6] [i_8] [i_6] [i_6] = (arr_20 [i_0]);
                            arr_37 [i_0] [i_1] [i_0] [i_1] [i_1] = 7375124324531606267;
                            arr_38 [i_0] [3] [i_2] [i_1] [i_0] = (((var_4 == (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            arr_39 [i_8] [i_0] [i_2] [i_1 - 2] [i_2] [i_0] [i_0] = (~var_11);
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            arr_43 [i_0] = ((~(arr_19 [i_0] [i_0] [i_2] [i_6] [i_9])));
                            arr_44 [i_0 - 1] [i_0] [i_2] [i_2] [i_0 - 1] = 820352911;
                        }
                        arr_45 [i_0] [i_6] [i_2] [i_6] = 175;
                        arr_46 [i_0] [i_0] [i_2] [i_2] = (arr_13 [i_6] [1] [i_0] [i_1] [i_0]);
                        arr_47 [i_0] = ((((!((max(-47, (arr_27 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0]))))))));
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        arr_50 [i_2] = ((var_1 < (arr_42 [i_0 - 1] [i_1 - 2] [i_1 - 2] [i_2] [i_2] [i_1 - 2] [i_10])));
                        arr_51 [i_0] [i_0] [i_0] [i_10] = ((((((172 > 3463775940) ? -var_2 : (((arr_8 [i_0]) ? var_5 : 128))))) ? ((var_6 % (~var_3))) : ((((arr_5 [i_0] [i_0] [i_0]) & -83)))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        arr_54 [i_0] [i_0] [i_0] [i_0] = var_0;
                        arr_55 [i_0] [i_0] [i_0] [i_0] = (2106449299 ^ var_3);
                        arr_56 [i_0] [i_0] [i_11] [i_11] = var_3;
                    }
                }
            }
        }
    }
    #pragma endscop
}
