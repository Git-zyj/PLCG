/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 += ((((((max(var_2, 7918))) ? var_7 : ((min(var_14, -13757))))) >> (((min(-468694619075891996, (max(var_13, 17494428826241213839)))) - 17494428826241213839))));
    var_19 = ((((((min(21085, var_7))) ? (((-20 ? (-32767 - 1) : 22))) : (min(var_4, var_2)))) ^ ((((min(18446744073709551615, 4294967278)))))));
    var_20 = var_15;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_21 = var_6;
        var_22 *= (((arr_0 [i_0 + 1]) % var_5));
        var_23 = (min(var_23, (((((var_3 ? var_7 : (arr_1 [1] [21]))) % 127)))));
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] = ((var_9 < ((max((arr_2 [i_1]), (arr_2 [i_1]))))));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_24 ^= (min(((((!(arr_3 [i_1]))) ? ((((arr_3 [i_1]) ? -9978 : var_9))) : (var_11 % 18446744073709551615))), ((((1151083127756188740 / (arr_8 [i_1] [i_1] [i_3])))))));
                var_25 = (min(var_25, -85));
                var_26 = 1;
                arr_13 [i_3] [6] [i_1] &= (min((arr_2 [i_3]), var_5));
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
            {
                var_27 = (arr_12 [i_1] [i_2] [i_1]);
                arr_17 [i_1] = 2305843008676823040;
                var_28 |= (arr_9 [i_4] [i_2] [i_1]);
            }
            for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_26 [i_1] [i_1] [i_1] [i_1] [i_7] = (((arr_11 [i_1] [i_1]) ? 54 : ((max((arr_25 [i_1] [i_2] [i_5] [i_6 + 2] [i_7]), 60838)))));
                            arr_27 [i_1] [i_2] [i_5 + 3] [i_6 - 1] [i_7] = ((!(((var_2 ? (arr_7 [i_7 + 1] [i_5 + 3]) : (arr_2 [i_1]))))));
                        }
                    }
                }
                var_29 = var_3;
            }

            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                arr_30 [i_1] [i_2] [i_1] = (((((min(43798, (arr_3 [i_1 - 2]))))) >= (((arr_3 [i_1 - 2]) & var_8))));
                arr_31 [i_1] [i_1] = (max(((((0 > var_3) ? (arr_10 [i_1 - 4] [i_2] [i_8] [i_1 - 3]) : ((1 ? (arr_21 [i_1] [i_1]) : 0))))), ((((566667972 | (arr_29 [i_1]))) & (max(var_1, 222))))));
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        {
                            arr_36 [i_1] [i_2] [0] [i_9] = (((arr_12 [i_1] [i_1 - 1] [i_1]) ? ((7405352232548839103 + (arr_20 [i_1] [i_9 + 1] [i_9] [i_10 + 1] [i_10 - 1]))) : (70368739983360 + var_3)));
                            var_30 = (max((arr_21 [i_8] [i_1]), ((((((-1 + 2147483647) >> (1725821941 - 1725821923)))) ? 10 : (arr_2 [i_1])))));
                        }
                    }
                }
                var_31 = (((16876453181551184052 * 18446744073709551611) ? (((max(1, (arr_8 [i_1] [i_1 - 2] [i_1]))))) : (min((((arr_24 [i_1 - 1] [i_2] [i_8] [i_1 - 1] [i_2] [i_8] [i_8]) ? 18446744073709551615 : var_14)), ((min(-1183476798, var_15)))))));
            }
            var_32 = ((((((((arr_21 [8] [i_1]) | (arr_12 [8] [i_2] [i_1])))) ? (((var_16 ? (arr_1 [i_2] [1]) : (arr_21 [i_1] [i_1])))) : var_7)) * ((((var_8 * 18446744073709551601) ? (arr_11 [i_1 + 3] [i_1]) : (((!(arr_22 [i_2] [i_2] [i_2] [i_1 + 1] [i_1 + 1] [i_1 - 1])))))))));
        }
        arr_37 [i_1] = (max((arr_10 [i_1] [i_1] [i_1] [i_1]), (arr_29 [i_1])));
        arr_38 [i_1] = ((((max(((var_3 ? var_1 : (arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1]))), (arr_16 [i_1] [i_1] [i_1])))) ? (((var_7 ? ((min(var_7, (arr_9 [14] [i_1] [i_1 + 3])))) : (min(65535, 824600943))))) : ((((min(var_4, var_3))) ? (var_8 * var_9) : 32767))));
        var_33 = (min(1, (min((arr_9 [i_1 + 2] [i_1 - 2] [i_1 + 2]), (arr_9 [i_1 + 1] [i_1 + 3] [i_1 + 2])))));
    }
    #pragma endscop
}
