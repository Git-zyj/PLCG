/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((var_2 ? (arr_1 [i_0]) : 28739)))));
        arr_3 [i_0] = (!9223372036854775807);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_1] [i_1] [i_0] = ((-(arr_5 [i_1] [i_1] [i_1])));
            arr_8 [i_0] = (((32727 - 2824307984) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_1 [4])));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_14 = (!(arr_5 [i_0] [i_2] [i_2]));

            for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    var_15 = (arr_10 [i_0] [i_4] [i_0]);
                    var_16 = (-(arr_15 [i_0] [i_3] [i_3] [i_3]));
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    arr_19 [i_3] [i_3] [8] [6] = ((var_3 || (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    var_17 = (arr_15 [i_0] [i_3] [i_0] [i_0]);
                    arr_20 [i_3] [i_3] [i_0] [i_3] = (arr_1 [i_3]);
                }
                arr_21 [i_0] [i_0] [i_3] [i_0] = (~-3909093947179371848);
                arr_22 [i_0] [i_0] [9] [i_3] = (arr_10 [i_0] [i_2] [i_3]);
                var_18 = ((arr_5 [i_3] [i_2] [i_0]) << (((arr_5 [i_0] [i_0] [i_3]) - 16215096817051986818)));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                arr_25 [i_0] [i_0] [i_6] [i_0] = (arr_9 [9] [i_2] [i_0]);
                arr_26 [i_6] = ((13 ? -15 : (arr_1 [i_0])));
            }
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                var_19 = ((~(arr_9 [i_0] [i_2] [i_7])));
                var_20 = var_1;
                arr_29 [i_7] = (arr_13 [i_7] [i_2] [i_2] [i_2] [i_0] [i_0]);
            }
            arr_30 [i_2] [i_0] = arr_5 [i_2] [i_0] [i_0];
            arr_31 [i_2] [i_2] [i_0] = (((arr_1 [3]) * (((arr_12 [i_0]) / (arr_1 [4])))));
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                arr_38 [i_9] [i_8] [i_0] [i_0] = (((arr_4 [i_0] [i_8] [i_0]) >= -29857));
                arr_39 [i_9] [i_9] = (arr_9 [i_9] [i_8] [i_0]);
            }
            var_21 = var_0;
            arr_40 [3] = var_7;
        }
        var_22 = (arr_23 [i_0] [i_0] [6]);
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        arr_43 [5] = (((((~(arr_42 [i_10])))) ? ((((((arr_41 [i_10]) ? 1 : -7237217380208391261)) == (((min((arr_42 [i_10]), (arr_41 [i_10])))))))) : (((((((arr_41 [i_10]) == (arr_41 [i_10])))) == (!38289))))));
        arr_44 [i_10] [i_10] = (arr_42 [i_10]);
    }

    for (int i_11 = 2; i_11 < 15;i_11 += 1) /* same iter space */
    {
        arr_47 [i_11] = ((((((arr_41 [i_11 + 1]) ? -2031330947468850842 : (arr_45 [i_11 - 1] [i_11])))) ? (((-14 ? ((max((arr_42 [i_11 + 1]), (arr_42 [i_11])))) : (arr_41 [i_11 - 1])))) : 2796477306));
        arr_48 [i_11 + 1] = (!1017969352);
        arr_49 [i_11] = (((((((arr_46 [i_11 - 1]) <= (arr_45 [i_11 + 1] [i_11]))) ? 1017969347 : (((-7587121464270190325 + 9223372036854775807) << (arr_41 [i_11]))))) >> (((~0) + 57))));
    }
    for (int i_12 = 2; i_12 < 15;i_12 += 1) /* same iter space */
    {
        arr_52 [15] = (((-(arr_42 [i_12 + 1]))));
        arr_53 [13] = ((((arr_42 [i_12]) ? (1 == 27246) : (var_9 == 19048))));
    }
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        arr_56 [i_13] = ((!(((-9018703051265881852 | (~19147))))));
        arr_57 [i_13] = (((((~(arr_55 [i_13] [i_13])))) || ((3361755926045830723 || (arr_55 [i_13] [i_13])))));
    }
    #pragma endscop
}
