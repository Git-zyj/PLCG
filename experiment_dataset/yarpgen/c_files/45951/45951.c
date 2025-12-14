/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 4108033089;
    var_16 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] = (1 ^ var_4);
            arr_7 [10] [i_1] [i_1] = (((~1) < (arr_2 [i_0] [i_0])));
            arr_8 [i_1] = (((arr_4 [i_0] [i_1]) >= (arr_4 [i_0] [4])));
            var_17 = ((((14289 ? (arr_0 [i_0]) : 20318)) >> (((var_6 * var_9) - 14683072856110919447))));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_18 = (max(var_18, (((-(arr_0 [i_2]))))));
            var_19 = ((var_1 < ((-(arr_0 [i_2])))));
            arr_11 [i_0] [i_0] [i_2] = (arr_9 [i_0] [i_0]);
            var_20 = (max(var_20, (((~(-32767 - 1))))));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_18 [0] [i_3] [i_4] [i_5] = (!-2090409286);
                    arr_19 [i_5] = var_3;
                    var_21 = (min(var_21, var_10));
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    arr_23 [i_0] [2] [1] &= var_3;
                    var_22 = (min(var_22, 65535));
                }
                arr_24 [i_3] = var_12;
                var_23 = ((57528 ? (65508 > 12687) : ((1 ? 14410643745623918093 : (arr_12 [i_0])))));
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                var_24 *= var_3;
                arr_27 [i_0] [i_3] [i_3] [i_3] = (((arr_26 [i_0] [i_7]) ? 18446744073709551613 : (11 / 32767)));
            }
            arr_28 [3] = (var_5 % var_13);
            arr_29 [i_3] = (9476 <= 0);
            arr_30 [i_0] [i_3] [i_3] &= ((-1300398567811828236 ? (var_11 && var_6) : (16 + -8244268888391220992)));
        }
        var_25 = (min(var_25, (((var_14 ? (arr_15 [i_0] [14] [i_0] [i_0]) : (((((arr_13 [i_0] [i_0]) == var_9)))))))));
    }
    for (int i_8 = 3; i_8 < 8;i_8 += 1)
    {
        arr_34 [i_8] = 0;
        arr_35 [i_8] [i_8] = var_7;
    }
    for (int i_9 = 2; i_9 < 21;i_9 += 1)
    {
        arr_38 [i_9] [i_9] = var_10;
        var_26 = (max(var_26, (((!(arr_37 [22]))))));
    }
    var_27 = (var_5 ? (((-var_12 != (-8244268888391220992 || -1410192566)))) : 255);
    #pragma endscop
}
