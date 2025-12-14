/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_18 = -742708249;
        var_19 = (((((!(arr_1 [i_0] [i_0])))) <= ((((!((((arr_0 [i_0 + 1] [2]) >> (var_8 - 27800))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 ^= (-(0 + 1));
                    var_21 ^= ((!(var_16 == 1)));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_22 = ((-((-(!0)))));
                        var_23 = (!0);
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 8;i_5 += 1)
                        {
                            var_24 = ((~((var_2 / (arr_5 [i_0] [i_1] [i_2] [i_5])))));
                            var_25 = (min(var_25, ((((0 * 0) >> (((var_13 * 1) + 3489)))))));
                        }
                        for (int i_6 = 4; i_6 < 7;i_6 += 1)
                        {
                            var_26 = (min(var_26, -var_17));
                            var_27 = (((-(30 / 1))));
                        }
                        arr_17 [i_0] [i_1] [i_1] [i_1] [6] = ((1 <= (~-var_17)));
                        var_28 = ((~(((((~1) + 2147483647)) >> 1))));
                        arr_18 [1] [i_1] [i_2] [i_4] &= (((((!((var_16 != (arr_10 [i_0])))))) & -1));
                        var_29 = ((-(((var_6 && (((arr_14 [i_0] [4] [i_0] [4] [i_1] [i_4]) || var_12)))))));
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                    {
                        var_30 = -var_2;
                        arr_21 [i_7] [i_7] = (((~(var_8 ^ 1))));
                        var_31 = (-((+((4101 << (((-1 + 20) - 13)))))));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_32 -= (((+-3) || (((((arr_3 [0] [0]) / var_10))))));
                            var_33 = (min(var_33, 4294967281));
                        }
                        for (int i_9 = 2; i_9 < 8;i_9 += 1)
                        {
                            var_34 ^= (((!33740) || 1));
                            var_35 = (max(var_35, (4101 & 2437999215773607350)));
                            var_36 = (1 != 3044505783);
                            var_37 = 10;
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_28 [i_0] [i_1] [i_2] [i_7] [i_10] = (!var_3);
                            var_38 = (max(var_38, ((((!(arr_22 [i_1])))))));
                        }
                        var_39 = (min(var_39, (((-(((-6974644696939166661 < 1) / 6)))))));
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        arr_31 [i_0 - 1] [i_1] [6] [i_11] = (((-2147483647 - 1) < ((-(arr_10 [i_11])))));
                        var_40 = (((((-(~4294967295)))) && (((-((((arr_16 [i_11] [i_1] [i_11] [i_11] [i_1]) == var_11))))))));
                        var_41 = (-73 < var_13);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 2; i_12 < 16;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 17;i_13 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 18;i_15 += 1)
                    {
                        {
                            var_42 = ((((((((!(arr_35 [i_13])))) < 4107))) > ((((((-(arr_32 [2]))) + 2147483647)) << (((-1 + 20) - 19))))));
                            var_43 *= ((~(((!(var_2 + var_5))))));
                        }
                    }
                }
                arr_43 [1] [i_13] = (((1 - 251) < ((-(!var_1)))));
            }
        }
    }
    #pragma endscop
}
