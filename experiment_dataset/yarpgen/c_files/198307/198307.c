/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((!(var_17 & var_17)))) > (((var_10 == (var_7 == var_9)))));

    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_21 ^= (((((var_4 + 0) - (0 + 45))) + (((-(arr_1 [i_0] [i_0]))))));
        arr_2 [i_0 - 1] = (~-3994701980876378903);
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1 + 2] = (~186);
        var_22 ^= (43 >= (1 != 1));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            arr_8 [i_1] = ((~(arr_1 [i_2 - 1] [i_1])));
            var_23 = ((~31) != (((!(arr_4 [11] [7])))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] = ((((((!(711480714 && 25))))) >= (((var_11 + 9223372036854775807) << ((((((-(arr_6 [i_1] [i_1]))) + 856678360)) - 44))))));
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_20 [i_5 - 1] [i_5 - 1] [12] [i_5] [i_1 + 2] [i_3] [i_4] |= (((((+((((arr_9 [i_4 - 1]) == var_4)))))) > ((-(((arr_1 [i_5] [i_3]) ^ -7879435841200348553))))));
                            arr_21 [5] [i_3] [i_4 - 1] [i_5 + 3] [i_3] [i_6] = ((((!(1 ^ 62)))) == ((~(~-2044439250))));
                            var_24 *= ((!(((-(129 + var_17))))));
                            arr_22 [i_1] [i_1 - 3] [i_3] [i_1 - 3] [16] = ((!1) + (((!(var_7 != 249)))));
                            arr_23 [1] [1] [i_3] [i_5] [i_5] = (((~28) > ((-4039647067 * (((arr_11 [i_4] [i_6]) / var_9))))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
        {
            var_25 = (((~1) == ((var_6 << (var_0 - 23)))));
            var_26 *= (((-52 + 2147483647) << (670605241 - 670605241)));
            arr_27 [i_7] = ((~(((arr_4 [i_7] [9]) + (arr_3 [i_7])))));
        }
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 18;i_8 += 1) /* same iter space */
    {
        var_27 = ((((((arr_10 [i_8] [0]) << (var_14 - 17522)))) < (3605062859 * 14380885769825954874)));
        arr_30 [1] = (711707733 != 7);
        var_28 ^= ((var_0 >> (((~var_17) + 31))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                {
                    arr_36 [i_8] [i_9] [i_10] |= ((((621203071 << (((arr_17 [1] [i_8] [i_9] [14] [i_10]) - 12676187319242884790)))) + (var_3 == var_17)));
                    arr_37 [i_8] [i_8 + 2] [i_8 + 2] = ((22626 / ((-(arr_6 [i_9] [i_9])))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_40 [i_11] [i_11] = ((~((-(arr_28 [i_11] [1])))));
        arr_41 [i_11] = (((~var_15) ^ (~219)));
        arr_42 [10] |= (!-var_10);
    }
    #pragma endscop
}
