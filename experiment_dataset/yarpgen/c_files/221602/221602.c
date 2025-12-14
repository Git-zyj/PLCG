/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_11 = (min(((-1166590901704884788 ? (-127 - 1) : 127)), (((arr_3 [i_0 - 1]) ? (arr_0 [i_0 + 3]) : var_4))));
            arr_4 [1] [1] |= var_3;
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_12 = -12646650649043718725;
                arr_10 [i_0] [i_0] [i_0] = (!((((min(var_10, (arr_7 [i_3]))) ? (arr_3 [i_0 + 1]) : ((0 ? (-127 - 1) : 18446744073709551615))))));
                arr_11 [i_0] [i_0] [i_0] = (arr_2 [i_3]);
                var_13 *= 1;
            }
            arr_12 [i_0] [i_0] [i_0] = ((((!(arr_3 [i_2]))) ? (~-535918858) : 9223372036854775807));
        }
        var_14 = (min(var_14, var_4));

        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_15 ^= (~0);

            /* vectorizable */
            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                var_16 = (arr_18 [i_0] [i_0] [i_0]);
                var_17 += (((arr_15 [1]) ? (arr_7 [i_5 - 1]) : ((-535918883 ? var_6 : (arr_7 [i_0])))));
            }
            arr_20 [i_0] [i_0] [i_0] = ((min(-535918883, 16876994462398477091)));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_18 ^= ((var_4 ? (max(((11074070646747408793 ? -113 : (arr_17 [i_0]))), (arr_22 [i_6]))) : (min((min(32767, 3821275824095923321)), (arr_5 [i_6])))));
            arr_23 [i_0] = 18446744073709551615;
        }
        arr_24 [i_0] = -3369548990567945178;
        arr_25 [i_0] [1] &= (min(((var_6 ? (arr_2 [i_0 + 2]) : (arr_0 [i_0]))), 12646650649043718725));
    }
    for (int i_7 = 2; i_7 < 12;i_7 += 1)
    {
        arr_28 [i_7] = (((((((~(arr_27 [i_7])))) ? (((arr_22 [i_7]) ? var_1 : var_7)) : (arr_2 [i_7 + 2]))) / (((arr_5 [i_7 + 1]) | (((arr_3 [i_7]) << (var_2 - 16992565776924489369)))))));
        arr_29 [i_7] |= ((((((arr_1 [i_7]) ? 6520345335081884260 : var_1))) ? (arr_1 [i_7]) : (arr_22 [i_7])));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_19 ^= ((16017179385707287885 ? (arr_2 [i_7 + 4]) : (arr_2 [i_7 + 3])));
            arr_34 [i_7] [i_8] [i_7] = ((~(arr_2 [i_7 + 2])));

            for (int i_9 = 2; i_9 < 14;i_9 += 1)
            {
                arr_37 [i_8] [i_8] = ((((-127 - 1) | var_10)));

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        var_20 = var_6;
                        arr_44 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [6] |= ((arr_42 [i_11] [i_11] [i_11] [i_11 + 1] [6]) ? 65512 : (arr_8 [i_7] [i_7 + 4]));
                    }

                    for (int i_12 = 1; i_12 < 14;i_12 += 1)
                    {
                        arr_48 [i_8] [i_8] [i_8] [i_8] [i_8] = ((var_0 ? (arr_35 [i_8] [i_9 + 1] [i_8]) : (arr_35 [i_8] [i_9 - 2] [i_9 - 2])));
                        arr_49 [i_7] [i_8] = ((var_10 ? (arr_3 [i_12 - 1]) : (arr_3 [i_12 - 1])));
                    }
                }
                arr_50 [i_7] [i_8] [i_7] [i_8] = (((var_3 ? 5 : var_5)));
                var_21 = ((var_5 ? (arr_15 [i_8]) : 52877));
                arr_51 [i_8] [i_8] [i_8] [i_8] = (arr_16 [i_7 + 1] [i_7 + 2]);
            }

            for (int i_13 = 1; i_13 < 13;i_13 += 1)
            {
                arr_56 [i_8] [i_8] [i_8] = 65518;
                var_22 = 535918883;
                var_23 = (arr_53 [i_7] [14] [14] [i_7]);
                var_24 &= (~8935141660703064064);
            }
            arr_57 [i_8] [i_8] = var_3;
        }
        for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
        {

            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                var_25 += (max((((var_8 ? (arr_36 [i_7 + 3] [i_7 - 2] [i_7 + 1]) : (arr_7 [i_7 + 3])))), (arr_15 [i_14])));
                arr_64 [i_7] [i_15] [i_7] [i_15] = -3092;
                var_26 = ((((((((arr_22 [i_7]) + var_9))) ? 65535 : ((24 ? (arr_59 [i_7] [i_7]) : (arr_58 [i_14])))))) ? (max((var_9 || 764), ((var_1 ^ (arr_63 [i_7] [i_7] [i_7] [i_7]))))) : (((~(arr_36 [i_7 - 2] [i_7 + 2] [i_7 - 2])))));
                var_27 = ((arr_14 [i_7] [i_7]) ? ((+(((arr_3 [i_7]) ? (arr_32 [i_7] [i_7]) : (arr_52 [i_7] [i_15] [i_15] [i_7]))))) : ((1 + (arr_61 [i_14] [i_14] [i_14] [i_7 + 1]))));
                var_28 = (!((((arr_5 [i_14]) ? (((arr_35 [i_15] [i_15] [i_15]) >> var_9)) : -var_0))));
            }
            arr_65 [i_7] [i_7] = (arr_0 [i_14]);
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 16;i_16 += 1) /* same iter space */
        {
            var_29 = var_6;
            var_30 = (max(var_30, (~17283)));
        }
    }

    for (int i_17 = 2; i_17 < 24;i_17 += 1)
    {
        var_31 = (min(((!(((1 ? var_4 : (arr_70 [i_17] [i_17])))))), (arr_70 [i_17] [i_17])));
        arr_71 [i_17] [i_17] = (arr_69 [i_17] [i_17]);
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 19;i_18 += 1)
    {
        var_32 ^= (-1 < 764);
        var_33 = (((((arr_7 [i_18]) ? 2 : 17277)) > 0));
        arr_74 [i_18] [i_18] = 1;
    }
    var_34 = (((~17277) ? -2966 : var_9));
    var_35 = var_2;
    #pragma endscop
}
