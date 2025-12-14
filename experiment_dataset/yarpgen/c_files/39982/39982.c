/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] = -0;
        arr_5 [i_0] [i_0] = ((((max(11, ((max(9889, (arr_2 [i_0] [i_0]))))))) || ((((arr_1 [i_0 + 2]) ? (arr_2 [i_0] [i_0 - 2]) : var_11)))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_10 [i_0] [1] [i_0] = (min((max(var_14, (arr_2 [i_0] [i_0]))), ((((max(var_7, var_2))) ? (!var_9) : (((arr_7 [i_0] [i_0]) - var_4))))));
            arr_11 [i_0] = (((((((18446744073709551615 & (arr_3 [i_0])))) ? (((var_12 ? (arr_6 [i_0] [i_1]) : (arr_2 [i_0] [i_1])))) : (((arr_0 [i_0]) * var_13))))) && ((max((min(-26147, var_6)), (~var_13)))));
        }
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
            {
                arr_16 [i_0] [i_3] = var_9;
                arr_17 [3] [i_0] = ((var_0 < 1) == (((arr_12 [i_2] [i_2 + 1]) << (((-127 - 1) + 131)))));
                arr_18 [i_0] = (var_4 & var_5);
                arr_19 [2] [i_0] [i_0 + 1] = (max(var_1, (max((~var_7), (arr_15 [i_2 + 2] [i_2 + 1] [i_0 + 2])))));
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
            {
                arr_23 [i_0] [i_2 + 2] [i_4] = var_10;
                arr_24 [i_0] [i_2] [i_0] = var_15;
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_28 [8] [i_0] [i_5] [i_0 - 2] = ((~((((arr_9 [i_0 + 2]) && (arr_8 [i_0 - 2]))))));
                var_17 = (max((max((~var_6), var_9)), (((var_11 < ((19 ? var_4 : var_5)))))));
                var_18 = (((((arr_3 [i_0 + 2]) ? (arr_3 [i_0 + 2]) : var_3)) ^ (max((arr_3 [i_0 + 2]), var_0))));
            }
            var_19 = (arr_2 [i_0] [i_2]);
        }
        for (int i_6 = 2; i_6 < 7;i_6 += 1)
        {
            arr_31 [1] [i_0] [6] = ((((max((((arr_0 [i_0]) ? (arr_15 [i_0 + 2] [i_0] [i_0]) : 1)), (((var_13 < (arr_27 [3] [i_6] [i_0]))))))) ? (((min((arr_29 [i_0 + 2] [i_0 + 1] [i_6 - 1]), (arr_29 [i_0 - 2] [i_0 - 2] [i_6 - 2]))))) : (max((max(1, 18446744073709551603)), var_9))));
            arr_32 [i_0] [i_0] = ((~(max((var_14 + var_10), (((arr_26 [1] [i_6] [i_6]) - var_1))))));
            var_20 = (-((min(var_13, 245))));
            arr_33 [i_6] [i_6] [i_6] |= arr_0 [i_6];
            var_21 = ((((min((((arr_26 [i_0] [i_0] [i_0 - 2]) ? 2019449488 : 245)), (var_9 < 110)))) ? ((+(((arr_21 [i_6] [i_6] [i_6]) ? var_8 : var_6)))) : (!var_4)));
        }
        var_22 = (((((-(arr_2 [i_0] [i_0])))) & ((-(((arr_8 [i_0]) | (arr_26 [i_0] [1] [1])))))));
    }
    for (int i_7 = 1; i_7 < 22;i_7 += 1)
    {
        var_23 |= ((max((((arr_34 [i_7]) ^ (arr_34 [i_7]))), var_12)));
        var_24 ^= ((0 ? ((((arr_34 [i_7]) < (arr_37 [4] [i_7 - 1])))) : (~1)));
        var_25 = (((arr_37 [i_7] [i_7]) != (min(((var_3 ? var_12 : var_11)), (arr_37 [i_7] [i_7 - 1])))));
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        arr_41 [i_8] = ((((arr_39 [i_8]) >= (arr_39 [i_8]))) && var_12);

        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            arr_45 [i_9] [i_8] [i_8] = ((((max(var_10, (arr_36 [i_8])))) ? (!14811600278850690145) : (arr_36 [i_8])));
            arr_46 [2] = (max(1, var_14));
            var_26 += max(var_5, (((arr_37 [i_8] [i_8]) ? 1 : (arr_37 [i_8] [i_8]))));
            arr_47 [i_8] [i_8] [i_8] = (arr_36 [i_9]);
            var_27 = var_8;
        }
        var_28 ^= var_1;
        arr_48 [i_8] = max(102, 59);
    }
    for (int i_10 = 1; i_10 < 18;i_10 += 1)
    {
        var_29 -= (!((max((arr_35 [i_10 + 1] [i_10 - 1]), ((var_14 ? var_4 : var_0))))));
        var_30 = ((((max((max((arr_37 [10] [10]), var_9)), 1073863227))) && (arr_36 [i_10])));
        var_31 = (((((var_1 >= (arr_51 [i_10] [i_10 - 1]))))) - (min(var_9, var_8)));
    }
    var_32 = ((((((var_7 * var_9) ? (var_0 >= 8740) : var_15))) ? (((var_14 || var_14) ? (((var_1 ? var_8 : var_8))) : var_10)) : var_5));

    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        var_33 *= ((-6880521886720954194 / (max(var_5, var_9))));
        var_34 = min((arr_52 [i_11] [i_11]), (((((min(var_7, var_2))) ? ((max((arr_37 [22] [22]), var_14))) : ((max(var_5, (arr_37 [14] [14]))))))));
        arr_56 [i_11] = ((var_8 ? var_14 : (var_12 ^ var_9)));
    }
    var_35 = (max(var_35, -12107));
    #pragma endscop
}
