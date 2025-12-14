/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 = ((((var_16 && (((var_15 ? var_2 : var_10))))) ? (min(1, (1 * var_3))) : ((((max(var_0, var_6)) <= ((min(255, 1))))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (min((arr_1 [i_0]), ((min(var_8, (((arr_0 [i_0]) - (arr_2 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        arr_12 [i_1] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 2] = (((6750060565140931610 || 122) ? var_6 : (((!(arr_5 [i_0] [i_1]))))));
                        arr_13 [i_0] [i_1] = (~3442);
                        arr_14 [i_0] [i_1] [i_2 + 3] [i_1] = ((!(((-2088910864819565045 ? 255 : var_14)))));
                        arr_15 [i_0] [i_0] [i_1] [i_0] [i_2] [i_0] = 6422;
                    }
                    arr_16 [i_1] [i_0] [i_1] [i_1] = (arr_6 [i_1]);
                    arr_17 [8] [i_0] [i_1] [12] = ((((min(var_15, var_11)) <= var_9)) ? ((((var_2 ? 8796093022207 : -8796093022201)) & (arr_8 [i_2] [i_2] [i_1] [i_0]))) : -8796093022189);
                    arr_18 [4] [4] [i_0] = ((-(arr_5 [i_0] [6])));

                    for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_1] [i_1] = var_12;
                        arr_24 [i_0] [i_2] [i_1] = ((((var_7 | (arr_5 [i_1 - 1] [i_1]))) << (((arr_5 [i_1 + 1] [i_1]) ? (arr_5 [i_1 - 1] [i_1]) : (arr_5 [i_1 - 1] [i_1])))));
                        arr_25 [i_1] [i_1] [i_2 + 2] [i_4] [i_1] [i_1] = 63;
                    }
                    for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        arr_29 [i_0] [i_0] [i_1] [i_0] [i_0] = ((arr_11 [i_0] [i_1] [i_2 + 2] [12]) ? (min((32767 | var_10), (8796093022200 / 1463590555))) : ((((min(33553920, (arr_1 [i_1])))) ? (((arr_7 [i_1]) ? -1 : (arr_11 [i_0] [i_1] [i_2] [i_5 - 2]))) : var_14)));
                        arr_30 [4] [i_1] [i_2 + 4] [i_1] [i_5 + 1] = var_4;
                        arr_31 [i_0] [i_1] [i_1] [i_0] = (((1 < (min(var_2, 2831376736)))));
                        arr_32 [i_1] [i_5] [i_1] [i_1] [i_0] = ((+(((arr_19 [i_1 - 1] [i_2 + 3]) | (((-4721711233978872703 + 9223372036854775807) << (8448509144251199542 - 8448509144251199542)))))));
                    }
                }
            }
        }
    }
    for (int i_6 = 2; i_6 < 21;i_6 += 1)
    {
        arr_35 [i_6] = (min(((117 / (arr_34 [i_6 + 1] [i_6]))), 0));
        arr_36 [i_6] = 1412867620;
    }
    for (int i_7 = 3; i_7 < 12;i_7 += 1)
    {
        arr_39 [i_7] [i_7] = ((8910404977543089630 ? 0 : -1926147107));
        arr_40 [i_7] = ((((arr_9 [i_7] [i_7 + 1] [i_7 - 3] [i_7]) ? -0 : (0 / 14340878972390609516))));
    }
    #pragma endscop
}
