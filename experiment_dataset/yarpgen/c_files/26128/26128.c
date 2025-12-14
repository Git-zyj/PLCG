/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = max(var_1, 1);
    var_17 = ((+(((var_13 / 9034059018282449840) ? ((min(-2614, 1))) : var_1))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (min(var_18, ((max((10 != 9223372036854775808), ((var_3 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [8]))))))));
        var_19 = (max(var_19, (((((((max(var_8, (arr_0 [2] [i_0])))))) / (((arr_2 [9]) + 9223372036854775811)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            arr_10 [i_2] [i_1] [i_1] = ((((arr_8 [i_1] [i_2 + 1] [i_1]) ? var_9 : (arr_8 [10] [i_2 + 1] [i_1]))));
            arr_11 [i_1] [i_2] = 35166307;
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_20 = (max(var_20, ((((((arr_12 [i_3] [i_3]) ^ 9223372036854775819)) * 9223372036854775811)))));

            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
            {
                arr_20 [17] [i_3] [i_4] = max((((arr_14 [i_1]) ? (arr_14 [i_3]) : 9223372036854775789)), (max(9223372036854775814, 9223372036854775834)));
                var_21 = (max(var_21, ((max(((((1 ? 9223372036854775784 : 9223372036854775821)))), var_2)))));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
            {
                arr_23 [i_1] [i_3] [i_5] = ((((((((arr_21 [i_3]) ? var_11 : var_0))) ? ((9223372036854775773 ? 9223372036854775835 : (arr_14 [i_1]))) : ((((var_3 || (arr_22 [i_1])))))))) || var_7);
                var_22 ^= ((arr_12 [i_1] [i_1]) == (arr_5 [i_1] [i_1]));
                var_23 = (((((min(8388607, (arr_6 [i_1] [i_3] [i_3]))) | var_7)) | (arr_7 [1])));
                arr_24 [i_1] &= (((arr_5 [i_1] [i_5]) ? (!68719476735) : var_6));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                arr_27 [i_1] [i_6] [i_6] [i_3] = (((max(var_3, (arr_25 [i_1] [i_1] [i_1] [i_6]))) / (((((arr_22 [i_6]) > var_6))))));
                var_24 ^= ((-var_14 ? (1 | var_3) : ((var_2 ? (arr_9 [22] [i_3]) : 9223372036854775808))));
                arr_28 [i_6] [i_6] [i_3] [1] = (((arr_17 [i_1] [i_6] [i_6]) - (((arr_26 [i_6]) + (arr_26 [i_6])))));
                var_25 = max((arr_21 [i_3]), (((arr_17 [i_1] [i_6] [8]) > (arr_17 [i_6] [i_6] [i_6]))));
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    arr_35 [i_7] [i_7] = ((!(~var_0)));
                    arr_36 [10] [20] [i_8] [6] |= ((((((arr_29 [i_7] [i_7] [i_7] [i_7]) ? var_6 : (arr_29 [i_1] [i_8] [i_7] [i_8])))) ? (arr_29 [i_1] [i_1] [i_1] [i_1]) : var_6));
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    var_26 *= (((((((max(var_3, var_13))) ? -1998506743 : var_5))) ? ((((9223372036854775800 != (((min(var_9, var_9)))))))) : var_13));
                    arr_39 [i_1] [i_7] [i_1] = var_0;
                    arr_40 [i_7] [i_3] [i_7] [i_7] = (((((-(arr_5 [i_9] [i_1])))) * (arr_34 [i_1] [i_1] [i_3] [1] [i_1] [i_7])));
                }
                arr_41 [12] [1] |= (max((((1 ? var_0 : 131040))), ((1 ? 3978983886526908798 : 7))));
                var_27 &= (max((max((arr_18 [i_3] [i_3] [2]), (arr_16 [i_3]))), (((var_7 >= (arr_12 [i_1] [i_7]))))));
            }
            arr_42 [i_1] = ((!(((9223372036854775815 ? 19940 : 18446744004990074890)))));
        }
        arr_43 [i_1] = (9223372036854775772 << (-20593 + 20627));
    }
    #pragma endscop
}
