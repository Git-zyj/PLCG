/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_19 = (arr_0 [i_0] [i_1]);
            var_20 ^= ((!(arr_2 [i_1 + 1] [i_1 + 1])));
        }
        for (int i_2 = 3; i_2 < 19;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 4; i_3 < 16;i_3 += 1)
            {
                var_21 = (((arr_1 [i_0]) || 709974574));
                var_22 = (arr_6 [i_3 - 4] [i_2 - 3] [i_2 - 3] [i_2 - 3]);
            }
            var_23 = (max(var_23, ((((709974574 / -709974579) ? -32756 : (arr_5 [i_0] [i_0] [i_2]))))));
            var_24 = (arr_6 [i_2 + 1] [i_2 - 2] [i_2 - 3] [i_2 - 3]);
        }

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_25 |= -1;

            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                var_26 += (arr_9 [19] [i_4] [i_5]);

                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    var_27 = (arr_14 [i_6 - 1] [i_6 + 1] [i_5]);
                    var_28 &= (arr_2 [i_5 - 1] [i_5 - 1]);
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_29 = ((3699748741 >= (arr_9 [i_0] [i_0] [i_5])));
                    var_30 = ((!(var_3 * 16256)));
                    var_31 |= ((709974578 ? 506138721 : -11));
                }
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_32 = (0 / -5065652834724123010);
                        var_33 = var_18;
                        var_34 = (max(var_34, 18446744073709551615));
                        var_35 = (((arr_16 [i_5] [i_4]) <= var_6));
                    }
                    var_36 = (min(var_36, (arr_22 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1])));
                }
            }
            var_37 = (((((var_6 ? (arr_19 [i_4] [i_0] [i_4]) : (arr_13 [i_4] [8] [i_0] [i_0])))) ? (((arr_8 [1] [i_0] [i_0]) & var_0)) : (((arr_14 [i_4] [i_0] [i_4]) ? (arr_14 [i_0] [i_4] [i_4]) : (arr_8 [i_0] [i_4] [i_0])))));

            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                var_38 = (arr_21 [i_0] [13] [i_4] [i_10]);
                var_39 = (~-709974604);
                var_40 = ((35 > (arr_10 [i_10] [i_0])));
            }
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                var_41 = (max(var_41, ((((arr_17 [i_0] [i_11] [i_4] [i_0] [i_11]) ? -18 : (arr_19 [i_11] [i_4] [i_11]))))));
                var_42 = (((arr_19 [i_0] [i_4] [i_4]) - ((7 ? 3907464563 : (arr_2 [i_0] [i_0])))));
                var_43 = ((var_16 ^ (arr_21 [i_0] [i_0] [i_4] [i_11])));
                var_44 = ((0 ? 0 : 5509135509714634563));
            }
        }
        var_45 = (arr_3 [i_0]);
    }
    for (int i_12 = 2; i_12 < 10;i_12 += 1)
    {
        var_46 = (max(var_46, 709974578));
        var_47 = (max((arr_10 [i_12] [i_12]), ((((-115 | (arr_26 [i_12]))) ^ var_8))));
        var_48 = (((((((arr_26 [i_12]) ? var_15 : 7)))) ? ((var_12 ? (!112438825) : (arr_3 [i_12 + 1]))) : (((~(arr_24 [i_12 + 1] [16] [i_12] [i_12]))))));
        var_49 = (max(var_49, var_6));
    }

    for (int i_13 = 0; i_13 < 15;i_13 += 1)
    {
        var_50 ^= (max(((((!(arr_10 [i_13] [i_13]))))), (max((min(11125655386995722195, -45)), (((~(arr_17 [i_13] [i_13] [i_13] [i_13] [i_13]))))))));
        var_51 = ((-(arr_20 [i_13] [i_13] [i_13] [i_13])));
        var_52 |= (arr_24 [i_13] [i_13] [i_13] [i_13]);
    }
    for (int i_14 = 0; i_14 < 12;i_14 += 1)
    {
        var_53 = (max(var_53, (!0)));
        var_54 = ((-904971186 ? -96 : 3768366994));
        var_55 = (arr_21 [i_14] [i_14] [i_14] [i_14]);
        var_56 = (((max((arr_36 [i_14]), (arr_25 [i_14]))) >> (((max((((506138722 ? 100 : -8446))), (arr_10 [i_14] [i_14]))) - 3185035760689176132))));
    }
    var_57 = var_0;
    var_58 = var_8;
    #pragma endscop
}
