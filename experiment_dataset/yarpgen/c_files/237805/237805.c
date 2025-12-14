/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 += ((!((max(1155478520, 23006)))));
        var_14 ^= var_7;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (((~((min(var_5, var_2))))))));
        arr_4 [i_1] [i_1] &= var_11;
        var_16 = (max((((~var_11) ? (arr_2 [i_1]) : ((123 ? (arr_3 [i_1]) : (arr_3 [i_1]))))), ((var_1 ? (((arr_2 [i_1]) % var_12)) : 7618))));
        arr_5 [i_1] = (max((((((min(var_2, (arr_2 [i_1])))) ? ((min(-70, -110))) : (((arr_2 [i_1]) ? (arr_2 [7]) : -87))))), (max((((~(arr_2 [i_1])))), (arr_3 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [i_2] |= 8191;
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_14 [i_3] [i_3] [i_4] = 53652;

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_18 [i_2] [i_3] [i_3] [i_3] [18] [i_3 - 1] = ((((~(~13838))) >> ((((min((min(var_5, 41263)), 57900))) - 3980))));
                        var_17 |= var_9;
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 2; i_6 < 23;i_6 += 1)
        {
            arr_21 [i_2] [i_6] = (((!53636) ? (~57931) : ((((arr_17 [i_2] [i_2] [i_2] [i_6]) >= (arr_3 [i_2]))))));
            var_18 ^= -124;
            var_19 = var_2;
            var_20 = (max(var_20, var_11));
        }

        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_21 = (min(var_21, ((((var_8 ? (((max((arr_2 [i_2]), var_8)))) : 4294967289))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 23;i_9 += 1)
                {
                    {
                        var_22 = ((-(arr_28 [i_9 + 1] [i_7] [18] [i_9] [i_9 - 1] [i_2])));
                        var_23 += ((-(min(0, var_12))));
                        arr_29 [i_2] [i_7] [i_8] [i_2] [i_7] = (~((var_0 ? (arr_26 [i_7]) : var_0)));
                        var_24 = var_1;
                    }
                }
            }
        }
        arr_30 [i_2] = var_6;
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 23;i_10 += 1)
    {
        var_25 = var_10;

        for (int i_11 = 2; i_11 < 22;i_11 += 1) /* same iter space */
        {
            var_26 *= ((10541 / (arr_31 [i_10 - 3])));

            for (int i_12 = 2; i_12 < 24;i_12 += 1)
            {
                var_27 = ((1073676288 ? var_6 : (arr_34 [i_11 + 3])));
                arr_41 [i_12] [i_11] |= (~var_10);
                arr_42 [i_10] [i_10] [i_10 + 2] [i_10 - 1] = ((~((-(arr_32 [10])))));
            }
        }
        for (int i_13 = 2; i_13 < 22;i_13 += 1) /* same iter space */
        {
            var_28 = 112;
            arr_46 [i_13] = (((arr_36 [i_13 - 1] [i_13 - 2] [i_10 - 2]) == var_0));
        }
        for (int i_14 = 2; i_14 < 22;i_14 += 1) /* same iter space */
        {

            for (int i_15 = 0; i_15 < 25;i_15 += 1) /* same iter space */
            {
                var_29 = (arr_43 [i_14 - 2] [i_10 - 2]);
                arr_53 [i_10] = var_1;
                arr_54 [i_10] [i_14] [i_14] [i_15] = var_10;
            }
            for (int i_16 = 0; i_16 < 25;i_16 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 25;i_18 += 1)
                    {
                        {
                            var_30 += ((20482 ? var_7 : (arr_48 [i_10 - 3] [i_10 + 2])));
                            var_31 = (((((var_5 ? var_5 : 152003533))) ? -var_10 : (!1884666242)));
                        }
                    }
                }
                arr_63 [i_10] [i_14] [i_14] [i_16] = ((var_7 ? -53 : (arr_57 [i_10] [i_10] [i_10 - 2] [i_10])));
            }
            for (int i_19 = 0; i_19 < 25;i_19 += 1) /* same iter space */
            {
                var_32 = (arr_61 [i_14 - 2] [i_14 - 2] [i_14 + 2] [i_10] [i_10]);

                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    var_33 = var_4;
                    var_34 += ((-(var_8 + var_9)));
                }
            }
            arr_69 [i_10] [i_14] [3] = var_0;
            var_35 &= var_5;
        }
        for (int i_21 = 2; i_21 < 22;i_21 += 1) /* same iter space */
        {
            var_36 = (~var_10);
            /* LoopNest 2 */
            for (int i_22 = 3; i_22 < 24;i_22 += 1)
            {
                for (int i_23 = 3; i_23 < 24;i_23 += 1)
                {
                    {
                        var_37 = ((((var_6 ? (arr_49 [i_22] [i_23 + 1]) : var_11)) == ((-44 ? var_7 : 63))));
                        arr_76 [i_10] [i_21] [i_22 - 3] [i_23] [i_23] = -var_4;
                    }
                }
            }
        }
    }

    for (int i_24 = 0; i_24 < 16;i_24 += 1) /* same iter space */
    {

        for (int i_25 = 0; i_25 < 16;i_25 += 1)
        {

            for (int i_26 = 4; i_26 < 12;i_26 += 1)
            {
                var_38 = (((arr_75 [i_26 + 3] [i_26 - 1] [i_26 - 1] [i_26 - 2]) ? (arr_75 [i_26 + 1] [i_26 - 3] [6] [i_26 + 1]) : (arr_75 [i_26 + 1] [i_26 - 2] [i_26 - 1] [i_26 + 4])));
                var_39 = ((~(((var_9 != ((var_8 ? 2188027112 : 7936)))))));
                var_40 = (max(var_40, (((((max(var_4, (arr_57 [i_26 - 4] [i_25] [12] [i_24])))) ? (arr_57 [i_26 + 1] [i_25] [i_26 + 3] [i_25]) : -var_1)))));
                var_41 *= ((~(arr_71 [i_24] [i_25])));
            }
            for (int i_27 = 3; i_27 < 15;i_27 += 1)
            {
                arr_87 [2] [i_25] &= (((((-(var_10 >= 1606115388)))) ? (~17686) : -49713));

                for (int i_28 = 3; i_28 < 14;i_28 += 1) /* same iter space */
                {

                    for (int i_29 = 4; i_29 < 15;i_29 += 1)
                    {
                        var_42 += (((((var_0 ? ((((arr_13 [i_25] [10] [i_28] [i_29 - 2]) != 58074))) : 4108052323))) ? (~-256) : 4108052323));
                        var_43 = ((((min((min(var_1, 11899)), (min(var_5, 44))))) >> ((-(!var_1)))));
                        var_44 = arr_23 [i_24] [i_25] [i_29];
                    }
                    var_45 = (min(var_45, (!var_12)));
                }
                /* vectorizable */
                for (int i_30 = 3; i_30 < 14;i_30 += 1) /* same iter space */
                {

                    for (int i_31 = 1; i_31 < 15;i_31 += 1)
                    {
                        arr_99 [i_24] [i_27] = ((262143 ? (-127 - 1) : var_5));
                        var_46 = (arr_61 [i_27 - 3] [i_27 - 3] [i_30] [i_31 - 1] [i_30]);
                    }
                    arr_100 [i_24] [i_24] [i_24] [i_24] [i_24] [11] = 65535;
                    arr_101 [i_24] [i_24] [i_24] [i_27] [i_30] = arr_0 [i_24];
                }
                for (int i_32 = 2; i_32 < 15;i_32 += 1)
                {
                    var_47 = (min(var_47, (--4294967286)));
                    var_48 = var_10;
                    arr_105 [i_24] = (arr_35 [i_24]);
                    var_49 = ((((((-(arr_13 [i_32] [i_32] [i_32 - 2] [i_32]))))) & (((var_12 >= var_2) % (arr_39 [i_27 - 3] [i_32 - 1] [i_32 - 2])))));
                }
                var_50 = ((((536608768 ? (arr_95 [i_27] [i_24] [i_27 - 1] [i_27] [i_27 + 1] [i_27]) : (arr_95 [i_27] [i_24] [i_27 + 1] [i_27] [i_27 - 3] [i_27 - 3]))) + (((arr_83 [i_27 - 1] [i_27 - 1] [i_27]) ? (arr_83 [i_27 - 2] [i_27] [3]) : 52636))));
            }
            var_51 = (min(var_12, (min((arr_67 [i_24] [i_24] [i_24] [i_25]), 511))));
        }
        var_52 = (max(var_52, ((max(((~((min(var_8, (arr_13 [i_24] [i_24] [17] [17])))))), ((max(var_6, (arr_93 [15] [i_24] [i_24] [i_24])))))))));
    }
    for (int i_33 = 0; i_33 < 16;i_33 += 1) /* same iter space */
    {
        var_53 |= min(65535, (arr_10 [i_33] [20]));
        var_54 = var_6;
        var_55 = ((((-(arr_36 [i_33] [i_33] [i_33]))) == -45));
        var_56 ^= (max((((((min(1, (arr_6 [i_33])))) + (arr_55 [i_33] [i_33] [i_33])))), (min((max(8, var_0)), ((((arr_79 [i_33] [8] [i_33]) ? (arr_34 [i_33]) : (arr_19 [i_33] [9] [i_33]))))))));
    }
    #pragma endscop
}
