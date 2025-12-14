/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = -8384347023916480157;
        var_17 = (max(var_17, -var_3));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_18 = (~31241);

        for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_19 = (!1);
            arr_9 [14] |= (-(arr_8 [10]));
        }
        for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_20 = (~65535);
            var_21 = (arr_4 [i_1]);
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_22 = (arr_18 [i_1] [i_4] [i_5] [i_6]);
                        var_23 = ((var_16 ? (arr_14 [i_1] [i_1 + 2] [8]) : 1));
                        var_24 = ((var_10 ? var_4 : (arr_5 [i_1 + 1])));
                    }
                }
            }
            var_25 *= 0;
            var_26 = (((arr_5 [i_1 + 1]) ? 1 : ((0 ? 0 : 72055395014672384))));
        }
        arr_22 [i_1] [i_1] = -31242;
        var_27 = 14580;
    }
    var_28 = max(-65535, ((var_3 ? (((max(1, -812)))) : (min(var_15, 20361)))));
    var_29 = (((min(var_2, var_3)) >> ((((max(31244, 1))) - 31231))));

    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        var_30 -= -31241;
        var_31 = (arr_25 [16]);
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    var_32 = (min(var_32, (arr_3 [i_9])));
                    arr_32 [i_8] [i_8] [i_10] = (arr_6 [i_8] [i_9] [i_10]);
                    var_33 = ((!(arr_11 [i_8] [i_9])));
                }
            }
        }
        var_34 = (((var_5 + 1) ? (arr_7 [i_8] [i_8] [i_8]) : (650218583 + var_9)));
        var_35 -= 3644748713;
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {
        var_36 = min((((max((arr_34 [14] [i_11]), (arr_33 [4]))) + (9019639540084761673 >= 8))), ((max((arr_33 [i_11]), var_13))));
        arr_36 [i_11] [12] &= (((((var_11 + 2147483647) >> (((((arr_33 [12]) ^ var_15)) - 1357255662))))) ? (!-4294967295) : var_4);
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 17;i_13 += 1)
            {
                {
                    var_37 = -3025283452870288561;
                    var_38 = (min(var_38, (((var_0 / (((((-1324591546131205144 ? -1 : 0))) ? (((max(29891, 0)))) : (arr_39 [i_11] [i_12] [i_12]))))))));
                }
            }
        }
    }
    #pragma endscop
}
