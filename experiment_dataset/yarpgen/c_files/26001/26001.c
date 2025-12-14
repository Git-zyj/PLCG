/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(-var_7 + var_4)));
    var_12 = ((-670575478 ? -86 : 1));
    var_13 = 1;
    var_14 = (max((var_8 ^ 13021862839299091590), ((-1 ? 1 : 31673))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (!65535);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_16 = (max(var_16, (((min(var_10, (~0)))))));
            arr_4 [i_1] [i_1] [i_0] = (min((max((arr_2 [i_1]), (arr_3 [i_1] [i_0] [i_0]))), var_5));
            var_17 *= (min((min(((var_3 ? var_0 : var_10)), (arr_0 [i_0]))), (((((1 ? (arr_3 [i_1] [i_0] [i_0]) : (arr_0 [i_0]))) | (arr_0 [i_0]))))));
            arr_5 [9] [7] [i_0] = ((!(((~(min(1, var_5)))))));
            var_18 = (1 / 9610);
        }

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_19 = 1920;
            var_20 = (max(((min(3093071215, 1))), ((min(17817514295601840751, 1099511627775)))));
        }
        var_21 *= ((arr_7 [i_0] [i_0] [i_0]) ? (min(((var_5 ? var_6 : (arr_2 [i_0]))), ((min((arr_0 [i_0]), var_0))))) : var_8);
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_22 = (min(var_22, (((!(((5 ? 220 : 1))))))));

        /* vectorizable */
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            var_23 = (min(var_23, (arr_10 [5] [i_4 + 2])));
            var_24 = (min(var_24, var_9));
            var_25 = (min(var_25, var_1));
            var_26 = (arr_1 [i_3] [i_4]);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_27 = (22883 + var_2);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_28 = (((((var_7 ? 1 : var_4))) ? var_9 : var_0));
                        arr_24 [i_3] [i_3] [i_3] [i_3] [i_7] = (((arr_11 [i_3]) ? (arr_11 [i_3]) : 15));
                        arr_25 [i_7] [i_5] [i_6] [i_5] [i_3] |= ((23 - ((-5460 ? (arr_14 [i_7]) : 1))));
                        var_29 = 219;
                    }
                }
            }
            var_30 &= 1;
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_31 = ((!((min(224, 245)))));
            var_32 = (min((arr_20 [i_3] [i_3] [i_3] [i_3]), -1));
            var_33 = (arr_11 [i_3]);
            var_34 = (((arr_20 [i_3] [i_3] [i_8] [i_8]) ? ((-(min(var_8, 239)))) : (((((arr_28 [i_3] [i_3] [i_8]) <= (!6290222245692792983)))))));
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
    {
        var_35 = (max(var_35, ((((arr_31 [i_9] [i_9]) % var_5)))));
        arr_32 [i_9] [i_9] = ((var_7 ? (arr_12 [i_9] [i_9] [i_9]) : 9936));
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            arr_38 [i_10] = (max(15, 1));
            var_36 = (((var_4 ? ((var_1 ? var_1 : (arr_36 [i_10])) : 2253244246))));

            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                var_37 = ((-(((!((min(var_10, (arr_7 [i_11] [i_11] [i_10])))))))));
                arr_41 [i_10] [i_10] [1] [i_12] = (min(63, (((arr_15 [i_10] [i_12]) ? 10350 : (arr_15 [i_10] [i_10])))));
                var_38 = (((((~(arr_40 [i_10] [i_11] [i_12])))) ? (((~(arr_40 [i_10] [i_10] [i_10])))) : (min((arr_1 [i_10] [i_11]), 1))));
                var_39 = (max((arr_36 [i_10]), ((((arr_36 [i_10]) && (arr_3 [i_10] [i_11] [i_12]))))));
            }
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        {
                            var_40 = ((-(7078 || 46978)));
                            var_41 = (min(var_41, ((min(((min((((arr_15 [i_11] [2]) ? 1 : -1108714060)), 46884))), (min(11003099223820956460, 22005)))))));
                        }
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            var_42 = (min((((1 ? var_0 : ((-456863093 ? 32761 : var_9))))), (arr_22 [i_16] [i_10] [i_10] [i_10] [i_10])));
            var_43 |= var_8;
            var_44 |= ((-((-((var_9 ? var_4 : (arr_49 [i_10] [i_10] [i_16])))))));
            /* LoopNest 2 */
            for (int i_17 = 3; i_17 < 8;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    {
                        var_45 -= ((min(3342699510, 22005)) << (((arr_51 [i_16]) + 550211182)));
                        var_46 &= (((((-(arr_21 [i_10] [i_16] [2] [i_18] [i_16])))) ? 39257 : var_4));
                        var_47 = (!var_3);
                    }
                }
            }
            var_48 = (max(var_48, (((((max((arr_12 [i_16] [8] [i_16]), 7569))) ? (~780395400) : (((min(var_2, 25389)))))))));
        }
        arr_58 [8] |= (arr_56 [4] [i_10]);
        var_49 &= ((~(((((36028797018963967 ? 224 : (arr_51 [4])))) ? var_7 : (arr_43 [i_10] [2] [i_10])))));
        arr_59 [i_10] [i_10] = ((-(arr_28 [i_10] [i_10] [i_10])));
        var_50 = (min(var_50, var_9));
    }
    #pragma endscop
}
