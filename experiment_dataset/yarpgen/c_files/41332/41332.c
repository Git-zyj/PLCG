/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_3 [i_0 + 1]);
        var_13 ^= (((arr_3 [i_0 + 3]) || (arr_3 [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1 - 1] [i_1 - 1] = ((!46956) ? (arr_5 [i_1 - 1]) : ((((arr_5 [i_1]) >= (arr_5 [i_1])))));
        var_14 -= (((arr_5 [i_1 + 2]) & (!var_8)));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_15 = ((min((arr_9 [i_2]), (arr_8 [i_2]))));
        var_16 = 416688291;
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            var_17 = (min(var_17, ((((((arr_11 [i_4]) ? ((16256 ? -12426 : (arr_12 [i_3]))) : (1856013635 - -110)))) == (var_11 * 62)))));

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                arr_18 [i_3] [i_3] [i_4 + 2] [i_5] = 6132904800709106631;

                /* vectorizable */
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    arr_22 [i_3] = 18446744073709551615;

                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        var_18 = (arr_21 [i_4] [i_4 - 1] [i_6 + 2] [i_7 - 1]);
                        arr_25 [i_3] [i_4] [i_5] [i_6 + 1] [i_3] |= -12390;
                        arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] = (arr_9 [i_4 + 2]);
                        arr_27 [i_3] [i_4] [i_3] [i_6] [i_7] = (arr_9 [i_5]);
                        arr_28 [i_3] [i_4] [i_4] [i_6] [i_7] [i_7 + 2] [i_5] = var_11;
                    }
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        var_19 *= (((((0 ? (arr_20 [i_3] [i_4 - 2] [i_5] [i_4 - 2] [i_8]) : 1890384065))) ? 68 : (~4)));
                        arr_31 [i_3] [i_4] [i_5] [i_4] [i_4] = var_4;
                        var_20 = (arr_16 [i_6 + 1] [i_4 + 1] [i_4 - 2] [i_8]);
                        arr_32 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (arr_14 [i_8]);
                    }
                    var_21 -= (arr_23 [i_3] [i_5] [i_5] [i_6] [i_4]);
                }
            }
        }
        arr_33 [i_3] = 262142;
    }
    var_22 = (min(var_22, 2632482395208676029));
    var_23 = (min(var_23, (min((max(var_5, (min(-8066, var_2)))), var_5))));
    #pragma endscop
}
