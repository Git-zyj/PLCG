/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = (max((((1763277428 & (~32767)))), ((((max(var_6, var_9))) ? var_7 : 0))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] &= (max(((((32505856 + (arr_0 [i_0]))))), ((((min(var_0, var_6))) ? 32505835 : 0))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
            {
                var_12 = (arr_5 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_1] [i_4] [i_3 - 1] [i_4] = -3;
                            var_13 = (min(var_13, ((max(((((arr_7 [i_3 + 1]) <= 289502435))), (((((4262461460 ? -1 : (arr_13 [i_0] [i_1] [i_2] [i_3 + 1] [i_4])))) / ((~(arr_6 [i_4] [i_3 - 1] [i_0]))))))))));
                            var_14 = -4262461475;
                            var_15 = (arr_12 [i_0] [i_3 + 1] [i_0]);
                        }
                    }
                }
                arr_16 [i_0] = (4262461475 != 61440);
                var_16 = (~663015262);
                arr_17 [i_2] [i_1] [i_0] = ((!(arr_1 [i_2])));
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
            {
                var_17 &= (arr_2 [i_5]);
                var_18 = (max(var_18, (arr_19 [i_0] [i_1] [i_5] [i_5])));
            }
            for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
            {
                var_19 = (max(var_19, (~-32505835)));
                arr_22 [i_0] [i_0] [i_0] = var_9;
                arr_23 [i_0] [i_1] [i_6] = 4262461460;
                var_20 = -13;
            }
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                var_21 = (65535 ? (-127 - 1) : 32505835);
                var_22 -= 18014398508957696;
            }
            var_23 &= (((!var_5) * 63));
        }
        arr_26 [i_0] = (max(-1479754730, 8064));
        arr_27 [i_0] [i_0] = (((((((-8065 ? 1 : 8064))) && (arr_18 [i_0] [i_0] [i_0]))) && var_7));
        var_24 -= ((~(~1)));
    }

    /* vectorizable */
    for (int i_8 = 1; i_8 < 10;i_8 += 1)
    {
        arr_30 [i_8 + 1] |= 14255433079582951889;
        var_25 = ((-46 & (48529 && 67)));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    var_26 = 1;
                    var_27 = (max(var_27, (((!(arr_0 [i_8 + 1]))))));
                    arr_35 [i_10] [i_8 - 1] [i_10] [i_9] = (arr_33 [i_9] [i_8 + 1]);
                }
            }
        }
    }
    for (int i_11 = 4; i_11 < 16;i_11 += 1)
    {
        var_28 &= max((arr_2 [i_11 - 4]), (min(18243162860122449735, 6468372552159555756)));
        arr_38 [i_11 - 1] [i_11 - 1] = var_7;
    }
    for (int i_12 = 1; i_12 < 13;i_12 += 1)
    {
        var_29 = ((!((((arr_40 [i_12 - 1]) ? var_3 : (((4262461460 ? (arr_25 [i_12 + 4] [i_12 + 3] [i_12 + 3] [i_12 + 1]) : 4262461484))))))));
        var_30 = (min(var_30, (60682 / 8073)));
        var_31 *= ((!(arr_13 [i_12 + 3] [i_12 + 1] [i_12 + 1] [i_12 + 3] [i_12 + 3])));
    }
    var_32 = (!var_5);
    #pragma endscop
}
