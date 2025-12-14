/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_0;
        arr_3 [i_0] = (max(((((max(24, var_2))) ? ((((arr_1 [i_0]) || var_2))) : 255)), ((max(var_7, var_4)))));
        var_17 = (((((((arr_0 [i_0]) ? 191 : var_9)) - var_15))) ? (max(((var_10 + (arr_1 [i_0]))), ((max(227, var_8))))) : ((-62 / (max(var_13, (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_5;
        arr_7 [14] = var_1;
        var_18 = ((!(arr_1 [18])));
        arr_8 [i_1] = arr_0 [8];
    }

    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        arr_11 [i_2] = -var_15;

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_19 = (min(var_19, (((((!(arr_1 [i_3]))) ? (((!(arr_1 [i_3])))) : (arr_5 [i_2 + 1]))))));
            arr_14 [i_2] = ((73 > (((((arr_9 [8]) ^ (arr_10 [i_2]))) / (arr_10 [i_2])))));

            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                var_20 = var_7;
                arr_17 [i_2] [i_2] = ((min(2047, 14)));
                arr_18 [i_2] = var_10;
                arr_19 [i_2] = (min((max((min(175, var_1)), (arr_15 [i_2] [i_3] [i_4]))), ((((105 ? 126 : 18))))));
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                arr_24 [i_2] [i_3] [i_2] = (min(193, 876042190));
                var_21 |= -var_16;
                var_22 = max(((((arr_20 [9] [i_2 - 1] [i_2]) / (arr_0 [i_2])))), ((max(3, var_11))));
            }
            var_23 |= ((((((((790481133 ? (arr_22 [i_2 - 1] [i_3]) : var_11))) == 2540120999))) ^ ((((arr_22 [i_2 - 1] [i_3]) != (max((arr_23 [i_3] [i_3]), 222)))))));
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 3; i_7 < 12;i_7 += 1)
            {
                var_24 = (max(var_24, (~0)));
                arr_31 [i_2] = 9059849;
                var_25 *= var_10;

                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    arr_36 [i_2] [i_2] [i_7] [i_6] [i_2] [i_2] = (((-(arr_27 [i_2] [i_2] [0]))));
                    arr_37 [i_7 - 3] [i_6 + 2] [i_6] [i_2] [i_2] [i_7 - 3] = 175;

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_26 = (min(var_26, ((((arr_1 [6]) > (arr_1 [0]))))));
                        var_27 = ((!(arr_38 [i_2] [i_2] [i_2] [9] [i_2])));
                    }
                    for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
                    {
                        var_28 += (((arr_21 [i_7 - 2] [i_6 + 3] [i_10 + 1] [8]) == 255));
                        var_29 = ((arr_23 [i_2] [i_8]) + (!var_0));
                    }
                    for (int i_11 = 1; i_11 < 11;i_11 += 1) /* same iter space */
                    {
                        var_30 = arr_0 [i_2];
                        arr_45 [i_2] [3] [i_2] [i_8] [i_2] = 9;
                        arr_46 [i_2] [i_6 + 1] [i_7 - 3] [i_2] [i_6] = (13 + 2447755715);
                    }
                    arr_47 [i_2] [i_2] = ((var_10 < (!var_12)));
                }
                var_31 ^= (~var_5);
            }
            var_32 = (arr_43 [i_2] [i_2]);
            arr_48 [i_2] [i_2] [i_2] = (~((8 ? (arr_29 [i_2]) : 176)));
            arr_49 [i_2] [i_2] [i_6 + 2] = ((182 + ((255 ? var_5 : var_2))));
            var_33 = var_11;
        }
        /* vectorizable */
        for (int i_12 = 1; i_12 < 10;i_12 += 1) /* same iter space */
        {
            arr_53 [i_2] [i_12 + 1] [i_2] = ((-(arr_27 [i_2 + 1] [i_12 + 1] [i_12 + 2])));
            var_34 = (((arr_12 [i_2] [i_2 + 1] [i_12 - 1]) ? (167 + 213) : 2954214789));
            arr_54 [i_2] = (((var_10 ? var_11 : var_10)));
        }
    }
    var_35 |= (((max(122, 1673747054)) <= (((min(74, (!137)))))));
    #pragma endscop
}
