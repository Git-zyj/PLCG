/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(max(-7530694334694767809, var_3))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_16 = (min(var_16, ((max(-1532729465966656583, (max(var_8, var_4)))))));
        arr_4 [i_0] = min(6475027688130677018, 0);
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            arr_9 [i_1] = (~6475027688130677018);
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            arr_19 [i_1] [i_2] [6] [6] [i_5] &= (min(134217696, 1093029009718706341));
                            var_17 = ((max((max(6865085386485551433, var_6)), ((6680252541405612402 ? -1 : 8192)))));
                        }
                        arr_20 [i_1 - 1] [2] [i_1 - 1] |= 2047;
                    }
                }
            }
            arr_21 [i_1 - 2] = -var_12;
        }
        var_18 = (max(var_18, ((max(((-((min(1, 13810))))), var_10)))));
        arr_22 [0] [9] = (min((max((max(6475027688130677018, 32640)), 4096)), (min((min(var_14, var_12)), 7564614336676733948))));
        arr_23 [i_1] = 532563096417856214;
        var_19 = max((min(6121956169647356525, ((72057594029539328 ? -12260172187434679 : var_7)))), -8743161774973628718);
    }
    for (int i_6 = 4; i_6 < 17;i_6 += 1) /* same iter space */
    {
        arr_26 [0] [i_6] = (max((((max(34552, 7056)))), 8649988417043188365));
        var_20 = min(63289, -8712356271742333381);
        arr_27 [i_6] [i_6 + 1] = ((~(!35184371564544)));
    }
    for (int i_7 = 4; i_7 < 17;i_7 += 1) /* same iter space */
    {
        arr_32 [i_7 - 2] = -4182861459852005418;
        arr_33 [i_7 - 4] = (~11017);
        arr_34 [i_7] [i_7 - 2] = (((!((max(var_12, var_11))))));
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                {
                    var_21 = min(((var_7 ? 47051 : 448)), -2665200362837568650);
                    var_22 = 0;
                    arr_44 [i_8] [i_9] [i_9] = -1;
                }
            }
        }
        var_23 &= (min((min((~1016), -var_11)), -6475027688130677017));

        /* vectorizable */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                var_24 -= var_4;
                arr_51 [i_8] [i_11] [i_11] = (!1);
                arr_52 [i_11] = var_0;
            }
            for (int i_13 = 3; i_13 < 15;i_13 += 1)
            {
                var_25 = -1;
                var_26 = var_13;
                arr_55 [i_11] [i_11] [i_8] = 1;
            }
            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {
                var_27 = (max(var_27, 0));
                var_28 = (~var_8);
                var_29 = var_11;
                var_30 -= -13184;
            }
            var_31 = var_0;
        }
        for (int i_15 = 1; i_15 < 15;i_15 += 1)
        {
            var_32 -= min(((max((max(-23530, 1)), 1))), -5003191702661688719);
            arr_62 [i_8] [i_8] = max((min(-1152921229728940032, ((max(1, 33430))))), -22200);
        }
    }
    for (int i_16 = 1; i_16 < 19;i_16 += 1)
    {
        arr_65 [i_16] [i_16] = ((min((max(7481600550274616515, 144110790029344768)), var_14)));
        var_33 = (max(var_33, var_1));
        arr_66 [1] = min(((var_0 ? -15 : -1)), (~11313));
    }
    #pragma endscop
}
