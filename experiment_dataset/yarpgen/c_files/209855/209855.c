/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!-18446744073709551615);
    var_11 = -var_5;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = ((64 ? var_7 : ((var_5 ? var_9 : (((var_9 ? (arr_1 [i_0 + 1]) : (arr_2 [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [0] [0] = (arr_0 [i_0] [i_1]);
                    arr_10 [i_0] = (max((((!((min(var_9, (arr_2 [i_0]))))))), (((arr_1 [i_0]) << (arr_5 [i_0] [i_0 + 1])))));

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        var_12 = (((((var_8 ? 75 : (arr_12 [i_2])))) ? var_2 : (((arr_7 [i_3] [i_2]) << (((arr_7 [18] [i_2]) - 3085540302544453840))))));
                        var_13 = ((var_6 * (arr_8 [i_1] [i_3 - 1] [i_3 - 1] [i_1])));
                        var_14 = ((var_1 ? ((var_8 ? (arr_0 [i_0] [i_1]) : 66)) : (var_7 + var_5)));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_15 = 73;
                        var_16 = (min((((arr_12 [i_0 - 1]) && (arr_12 [i_0 - 1]))), (!4095)));
                        arr_16 [i_0] [i_2] [i_4] = ((128 ^ 61435) ? ((var_1 & (arr_13 [i_2] [17] [i_2] [i_4] [18] [i_2]))) : (arr_4 [i_1] [i_1] [4]));
                    }
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        var_17 = -183;
                        var_18 = ((((((((-9223372036854775807 - 1) ? 6150548887579882979 : (arr_13 [5] [i_1] [i_2] [i_2] [i_5 - 1] [i_5])))) ? ((((162 <= (arr_8 [i_0 + 1] [i_0] [4] [i_0]))))) : (~var_4))) | (((413263302 <= var_7) ? 74 : ((var_6 ? var_0 : var_6))))));
                    }
                }
            }
        }
        var_19 = ((((max((arr_17 [i_0] [i_0 - 1] [i_0] [i_0]), -112))) ? (((74 & var_0) ^ var_5)) : (((var_4 ? 73 : 34035)))));
        var_20 = (min(var_20, ((((~var_0) ? ((min(var_3, (arr_18 [16] [16] [16] [16])))) : (arr_12 [i_0 - 1]))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_21 = ((!(arr_21 [i_6])));
        var_22 = ((-20290 ? 161 : 20292));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        arr_24 [5] = ((-(!44204)));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            var_23 *= (((~var_5) ? 4111031692 : (((arr_7 [i_7] [i_8]) ? 18005502057699210869 : -836258876838502524))));
            arr_27 [i_7] [i_8] = (((arr_21 [i_8]) ? (~3881703994) : ((((!(arr_11 [i_8] [i_7] [i_8] [i_8])))))));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            var_24 *= 63117;
            arr_32 [i_7] [i_9] [i_9] = ((var_9 ? (arr_5 [i_9] [i_9]) : ((5094298519908270532 ? 18446744073709551615 : 1079956791))));
            arr_33 [i_7] [i_7] [i_7] = (arr_14 [i_9] [i_9] [18] [i_9]);
        }
        arr_34 [8] [i_7] = (((!74) >= var_4));
    }
    #pragma endscop
}
