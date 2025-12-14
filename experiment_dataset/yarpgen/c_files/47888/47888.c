/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_6 / (((var_8 ? var_3 : -1)))));
    var_15 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (min(var_16, -var_4));
        var_17 = (((arr_0 [i_0]) <= (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_18 = ((+(((arr_3 [i_1] [i_1]) * (var_3 * 0)))));
        var_19 = (arr_1 [i_1]);
        arr_4 [i_1] = ((-var_13 ? (min(var_9, (arr_2 [i_1]))) : (!var_1)));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_20 = (min(var_20, var_1));

            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                var_21 = (min((((~(arr_0 [i_3 - 2])))), ((191529205 ? 200 : 2520386501))));
                var_22 = (arr_5 [i_3] [6] [i_3 - 2]);
                var_23 &= 0;
            }
            var_24 = (((((((15 < (arr_7 [i_1] [i_1] [i_1])))))) ? (((~((1 ? -1777323669 : (arr_5 [i_1] [1] [i_2])))))) : ((((max(36, -12))) ? (max(var_11, 11052304156671640078)) : var_9))));
        }
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_25 = (((((arr_10 [i_4 - 1] [i_4 - 1] [i_5]) ? (arr_10 [i_4 + 2] [6] [i_5]) : var_5)) - (min((arr_10 [i_4 - 1] [i_4 - 1] [i_4 - 1]), (arr_12 [i_4 + 1] [i_4 + 1] [i_5])))));
                    var_26 = ((((min(-1, -1944069961))) ? (((arr_3 [9] [i_4 + 1]) ? (arr_3 [i_1] [i_4 - 3]) : (arr_12 [i_4] [i_4 - 1] [i_4 - 1]))) : (min((arr_3 [i_1] [i_4 - 1]), var_7))));
                    var_27 -= (((((((arr_12 [i_1] [i_4] [i_4 + 2]) != (arr_12 [i_1] [i_4 - 1] [i_4 + 2]))))) == (((arr_11 [i_4] [i_4 - 2]) ? 21 : (arr_11 [i_4] [i_4 + 1])))));
                    var_28 = ((var_0 * (((((var_7 ? (arr_11 [i_1] [i_1]) : 7)) >> ((((12079516691695412824 ? var_1 : (arr_14 [i_5] [8]))) - 814086796)))))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        var_29 -= (((!var_0) <= var_12));
        arr_21 [5] = arr_19 [i_6];

        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            var_30 = ((!((!((min(var_13, var_5)))))));
            var_31 &= (((((86 | (arr_5 [i_7 + 1] [i_7 + 1] [i_7 + 1])))) ? 2538851889399965104 : (var_10 <= 115)));
            var_32 ^= var_5;
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {

            for (int i_9 = 3; i_9 < 9;i_9 += 1)
            {
                var_33 = ((((((var_5 < var_9) + var_9))) ? (((0 ? -1398176806 : 3501026222))) : (max((((16 >= (arr_9 [i_6] [i_8])))), (min(var_9, 24499))))));

                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    var_34 = ((-3700754354987657104 ? 14802245630758867643 : 56));
                    var_35 &= (min((arr_15 [9] [11] [i_9 - 2]), var_13));
                }
                for (int i_11 = 3; i_11 < 9;i_11 += 1)
                {
                    var_36 = ((((((!7207247614068018809) ? (var_8 + var_12) : (((arr_25 [i_6]) ? var_1 : var_12))))) ? 11666 : ((~((((arr_11 [8] [2]) <= 56003)))))));
                    var_37 = var_10;
                }
                var_38 = ((((((var_7 ? ((14285387084718169773 ? -1944069961 : 245)) : ((var_2 ? (arr_18 [i_6] [i_8]) : (arr_24 [i_6] [i_6]))))) + 2147483647)) >> ((((((-(arr_32 [i_6] [i_8] [9] [i_8] [9] [i_6])))) >= (((arr_10 [i_6] [i_8] [i_6]) ? (arr_20 [i_9 + 2]) : var_9)))))));
            }
            for (int i_12 = 2; i_12 < 9;i_12 += 1)
            {
                var_39 = (arr_38 [i_6]);
                var_40 = ((((var_0 % -960902228) ? -3843 : ((-(arr_37 [i_6] [i_8]))))));
                var_41 |= ((((var_3 % var_0) ? (var_8 | var_1) : (~0))));
                arr_39 [i_12] = var_2;

                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {

                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        var_42 -= ((!(arr_43 [i_6] [0] [0] [i_13] [i_14])));
                        arr_45 [i_6] [i_12] [i_8] [10] [i_8] [i_14] = var_0;
                        arr_46 [i_12] [i_12] [i_12] [11] = (arr_29 [i_6] [i_6] [i_6] [i_6] [i_6]);
                    }
                    var_43 = ((var_4 / ((5329507949112553168 ? 22 : 1056495045))));
                }
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {

                    for (int i_16 = 3; i_16 < 9;i_16 += 1)
                    {
                        var_44 = (max((((((max(-16012, var_7))) && ((((arr_0 [i_6]) ? (arr_33 [i_12]) : var_3)))))), (min(var_6, var_1))));
                        arr_51 [i_12] = ((~(min((~28418), (arr_1 [i_6])))));
                        arr_52 [4] [i_16] [i_12] [i_8] [4] [2] |= min(-1, -var_9);
                    }
                    var_45 = (min(-30967416, 0));
                    var_46 *= (min((min(var_1, -960902211)), var_11));
                }
            }
            /* vectorizable */
            for (int i_17 = 2; i_17 < 10;i_17 += 1)
            {
                arr_55 [i_6] [i_8] [i_17] = var_7;
                var_47 = ((var_7 <= (arr_12 [i_6] [i_17 - 1] [i_17 + 2])));
            }
            arr_56 [11] [i_8] &= 0;
        }
    }
    var_48 = (((min(var_3, var_1))));
    #pragma endscop
}
