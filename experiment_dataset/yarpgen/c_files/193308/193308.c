/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!127);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((((((((var_13 ? var_6 : (arr_0 [i_0])))) ? (~0) : 0))) ? -18183 : var_0));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_1] = (arr_0 [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    {
                        var_16 = (min(11265826663190502339, 3604429721));
                        var_17 = ((1 ? 1 : -4777910998396321872));
                    }
                }
            }
            arr_12 [i_1] [i_1] = (((min(var_13, (max(41625, (-2147483647 - 1))))) * (((arr_11 [i_0] [4] [i_0] [i_1] [i_1] [i_1]) / var_10))));
        }
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        arr_15 [i_4] = (32767 + 1544848122633793183);
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 12;i_6 += 1)
            {
                {
                    arr_22 [i_5] [i_5] [i_5] = ((3736946662 ^ (!13459972889609190777)));

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_18 = (max(var_18, (!-22694)));
                        arr_26 [i_5] [i_5] [i_5] = ((-((~(var_6 | 67)))));

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            var_19 ^= var_10;
                            var_20 = (i_5 % 2 == 0) ? (((var_7 > ((var_1 >> (((arr_19 [i_5]) - 3757872520))))))) : (((var_7 > ((var_1 >> (((((arr_19 [i_5]) - 3757872520)) - 2663831141)))))));
                            arr_30 [i_4] [i_5] [i_4] [i_4] = (((arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) >= (arr_17 [i_6 + 1] [i_4 - 1])));
                            arr_31 [i_5] [i_5] [10] [i_7] [i_8] = (25567 ^ (-3121433497166425585 && -91));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_21 = (arr_27 [i_4] [i_4 + 1] [i_6 + 2] [i_9]);
                        var_22 = ((var_12 || (arr_6 [i_5 - 1])));
                        arr_36 [i_4] [0] [i_5] [i_9] [i_9] = ((!(128 != -18203)));
                        var_23 = (((((var_9 ? var_5 : (arr_32 [i_9] [i_5] [i_4])))) ? 255 : -1484173828));
                    }
                    for (int i_10 = 2; i_10 < 13;i_10 += 1)
                    {
                        arr_39 [i_5] [i_4] = -var_6;
                        var_24 = -12644;
                    }
                    var_25 = (min((~var_7), (arr_34 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_5 - 1] [i_6 + 1])));
                }
            }
        }
        arr_40 [i_4] [i_4] = ((!(arr_27 [i_4] [i_4] [i_4] [11])));
        var_26 = 3604429721;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        var_27 = (((var_9 / 25567) != 28));
        var_28 = ((-1738379134 ? 97 : 54962));
    }
    var_29 = ((var_6 ? ((~(min(var_11, var_14)))) : var_14));

    for (int i_12 = 1; i_12 < 18;i_12 += 1)
    {
        var_30 = (-((-(-32767 - 1))));
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 18;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 15;i_14 += 1)
            {
                {
                    arr_53 [i_13] [i_13] [i_13] [i_14] = var_4;
                    var_31 = (1228475743 - var_12);
                    var_32 = (min(var_32, (15 ^ 1)));
                }
            }
        }
        arr_54 [i_12] = ((((min(0, 0))) ? (!var_9) : (((arr_44 [i_12] [i_12]) / (65535 | var_11)))));
        var_33 = (max(var_33, var_13));
        arr_55 [i_12] = (max((((((max(1358217432, 17))) ? (arr_3 [i_12] [i_12]) : var_5))), (((((~(arr_43 [i_12] [i_12])))) ? var_12 : 18446744073709551615))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 12;i_15 += 1)
    {
        var_34 = ((~(var_4 ^ var_10)));
        var_35 = (((arr_17 [i_15] [i_15]) ? (arr_6 [i_15]) : 3));
        var_36 ^= ((~(-127 - 1)));
    }
    var_37 = var_1;
    #pragma endscop
}
