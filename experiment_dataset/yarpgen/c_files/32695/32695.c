/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = ((var_8 & ((((var_4 ? var_2 : var_2)) ^ (var_2 < 3008)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] |= ((-(((!((max(7307995479193234672, var_14))))))));
        var_20 = (arr_1 [1]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_21 = ((-(((arr_1 [i_1]) ? 1394189253480685688 : (arr_0 [i_1])))));
            var_22 += (~1);
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            arr_12 [9] [i_1] = (-32640 + ((var_11 ? ((min((arr_0 [17]), var_17))) : 29711)));
            var_23 = ((var_12 ? ((((arr_0 [i_3]) / -959062115))) : (((var_16 ^ (arr_10 [i_3] [i_1]))))));
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            arr_15 [i_1] = var_9;
            var_24 = ((((arr_6 [i_4] [i_4] [i_4]) || (arr_11 [i_1] [i_1] [i_1]))));

            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                var_25 = ((((!(arr_5 [i_5])))));
                arr_18 [i_1] [i_5] = (((max((((arr_10 [i_1] [1]) ? 21580 : var_11)), var_9)) > 32752));
                var_26 *= (((arr_8 [i_5] [i_4] [i_5]) == ((-(((arr_9 [i_1]) * (arr_8 [i_5] [i_1] [i_1])))))));
                var_27 = (max(var_27, ((((((var_2 ? -var_17 : (arr_4 [i_4] [i_5])))) ? 18446744073709551608 : ((((arr_13 [i_1] [i_4]) ? (arr_13 [i_4] [i_5]) : (arr_13 [i_4] [i_5])))))))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_24 [i_1] [i_4] [i_7] [3] [i_7] = (((((arr_10 [i_1] [i_4]) ? (arr_17 [i_4] [i_4] [i_4]) : var_0))));
                            var_28 ^= (((max(12, (arr_20 [i_6 - 2] [4] [i_6 + 1] [4] [i_6] [i_7]))) << (((!(arr_21 [i_4] [i_5] [i_6 + 1] [i_6 - 2] [i_6]))))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                var_29 = ((!(-1627131952 / var_0)));
                arr_28 [i_8] [i_8] = (((~var_15) > (arr_22 [1] [8] [i_1])));
            }
            arr_29 [i_1] [i_4] [i_4] = (1 && 0);
        }
        var_30 += (((!(var_0 | var_17))));
        arr_30 [i_1] = ((((((-72 ? var_7 : 9007182074871808)) ? (var_11 < var_9) : (max((arr_6 [i_1] [i_1] [i_1]), var_11))))));
    }
    for (int i_9 = 2; i_9 < 22;i_9 += 1)
    {
        arr_33 [i_9] = (((max((arr_32 [i_9 - 2]), (arr_31 [i_9 + 1]))) != ((((arr_32 [i_9 - 1]) ? var_6 : (arr_31 [i_9 - 1]))))));

        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            var_31 += var_14;
            var_32 *= ((((min((arr_35 [i_9] [6]), (arr_31 [i_9 - 2])))) << (((max((max((arr_32 [i_10]), var_16)), ((min(var_9, var_12))))) - 18446744073709551593))));
        }
        var_33 = (((max((((0 ? (arr_35 [i_9] [i_9 - 2]) : var_4))), ((2305843009213693951 & (arr_35 [i_9] [i_9]))))) & (~9223372036854775807)));
    }
    var_34 |= ((((((((var_8 ? var_9 : var_9))) ? var_8 : 48))) ? ((max(((max(var_9, 9))), var_17))) : ((0 >> (((~var_6) + 165780302))))));
    var_35 = var_1;
    #pragma endscop
}
