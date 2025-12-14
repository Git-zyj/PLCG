/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_18 = (--11333057765401831591);
        arr_2 [i_0 - 1] [i_0] = max((((arr_1 [i_0 - 2] [i_0 - 1]) - (arr_0 [i_0 - 1]))), ((((arr_1 [i_0 + 2] [i_0]) || 423772062))));
        arr_3 [i_0 - 2] [i_0] = (((arr_1 [i_0 - 2] [i_0 + 1]) ? (--7113686308307720025) : ((((!(arr_1 [i_0 + 2] [i_0 - 2])))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (-321075730 ? 11333057765401831561 : -321075747);
        var_19 ^= ((arr_1 [i_1] [i_1 - 1]) ? (arr_5 [i_1 + 2]) : (arr_0 [i_1]));
        var_20 = (((arr_4 [i_1]) ^ (~var_17)));
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_21 = max(var_1, (min((((arr_8 [i_2]) ^ -321075730)), var_14)));
        var_22 = (max(var_22, (min((((-16 + 2147483647) >> (var_8 - 15313439762861578689))), ((((arr_4 [i_2 + 2]) <= (arr_7 [i_2 + 2]))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_23 = (min(var_23, (arr_1 [i_3] [i_3])));

        for (int i_4 = 1; i_4 < 7;i_4 += 1)
        {
            var_24 = ((var_15 ? (arr_1 [i_4 - 1] [i_4 - 1]) : ((~(arr_1 [i_3] [i_4 + 3])))));

            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                var_25 = ((var_6 >= (arr_10 [i_3] [i_4 + 3])));
                var_26 &= ((arr_1 [i_4 + 2] [i_5 + 1]) | (arr_1 [i_4 + 2] [i_4 - 1]));
                arr_16 [i_3] [i_4] = (((var_4 << (((-1243608549 + 1243608566) - 17)))));
            }
            var_27 = (min(var_27, ((((((arr_10 [i_3] [i_3]) && 15)) ? 601805474 : ((var_10 + (arr_5 [i_4 + 2]))))))));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_19 [i_3] [i_3] [i_3] = (1944692660775855712 ? 321075746 : (arr_10 [i_6] [i_3]));
            var_28 = (((arr_17 [i_3] [i_3] [i_6]) ? (arr_17 [i_3] [i_6] [i_6]) : -321075747));
            arr_20 [i_3] [i_6] [i_6] = (!var_13);
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_24 [i_3] [i_7] = var_11;
            var_29 = ((((1152921504606846976 ^ (arr_4 [i_7]))) | ((1612615648 ? 2362739050201085691 : var_6))));
        }
    }

    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
    {
        var_30 = (max((arr_4 [i_8]), (arr_26 [i_8])));
        var_31 = (min(var_31, (((!((((((max(var_0, var_13)) + 2147483647)) >> (((max((arr_0 [i_8]), (arr_25 [i_8] [i_8]))) - 18446744072985356625))))))))));

        /* vectorizable */
        for (int i_9 = 3; i_9 < 10;i_9 += 1)
        {
            var_32 = ((arr_25 [i_8] [i_9 - 2]) ? -14715306360267320601 : 1612615648);
            var_33 = ((~(arr_25 [i_9 - 2] [i_9 - 1])));
            arr_29 [i_8] [i_8] [i_9] = (var_1 + (((!(arr_4 [i_8])))));
            var_34 = (max(var_34, ((((!(arr_28 [i_8]))) ? var_5 : (((arr_1 [i_8] [i_8]) ? var_5 : (arr_28 [i_8])))))));
        }
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
    {
        var_35 ^= ((((max((arr_32 [6]), 14309512817317413788))) ? (((arr_26 [8]) ? 1594631918 : (arr_4 [i_10]))) : (((min(12, 2147483647)) & -1649067916))));
        var_36 = 892455629;

        /* vectorizable */
        for (int i_11 = 3; i_11 < 10;i_11 += 1)
        {
            var_37 = (var_11 ? (var_5 + -701745096) : var_7);
            var_38 &= (var_10 - (arr_28 [i_11 + 2]));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
        {
            arr_40 [i_10] [i_10] [i_12] = (17197818206464655530 && -321075704);
            arr_41 [i_10] = (((arr_27 [i_10]) >= (arr_37 [i_12] [i_10] [i_10])));
        }
        for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
        {
            var_39 = (arr_43 [i_10]);
            var_40 = (arr_4 [i_10]);
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
        {
            var_41 = (max(var_41, (((((((arr_4 [i_10]) ? (arr_30 [i_10] [i_14]) : 713534287))) ? (arr_26 [i_14]) : var_1)))));

            for (int i_15 = 2; i_15 < 11;i_15 += 1)
            {
                var_42 = ((var_11 <= (arr_37 [i_10] [i_10] [i_15 - 1])));

                for (int i_16 = 2; i_16 < 10;i_16 += 1) /* same iter space */
                {
                    arr_55 [i_10] [i_10] [i_10] [i_16] = (2147483621 == -2102885472);
                    var_43 ^= ((!(arr_44 [i_15] [i_16] [i_16 + 1])));
                }
                for (int i_17 = 2; i_17 < 10;i_17 += 1) /* same iter space */
                {
                    var_44 = arr_7 [i_17];
                    var_45 = -321075756;
                    arr_60 [i_10] [i_10] = (18446744073709551607 ^ -1211550082);

                    for (int i_18 = 0; i_18 < 12;i_18 += 1)
                    {
                        var_46 ^= var_13;
                        arr_64 [i_10] [i_10] [i_10] [i_10] [i_10] = (((var_13 ? var_4 : (arr_25 [i_10] [i_10]))) << ((((14530835440117591323 ? var_11 : (arr_50 [i_15] [i_17] [i_10]))) - 17131454324071997098)));
                    }
                    var_47 = (((arr_44 [i_17] [i_10] [i_15 - 1]) || (~321075760)));
                }
                for (int i_19 = 2; i_19 < 10;i_19 += 1) /* same iter space */
                {
                    arr_68 [i_19] [i_10] [i_10] [i_10] = var_14;
                    var_48 = (arr_5 [i_10]);
                }
                var_49 += var_7;
                arr_69 [i_10] [i_14] [i_15] [i_10] = ((((var_13 ? (arr_61 [i_15]) : 255))) ? (arr_33 [i_15 - 2] [i_15 - 2]) : var_15);
            }
            arr_70 [i_10] [i_14] = 4322761455297888117;
            arr_71 [i_10] [i_10] = 1483096240;
        }
    }
    for (int i_20 = 0; i_20 < 12;i_20 += 1) /* same iter space */
    {
        var_50 = (min(var_50, var_17));
        arr_75 [i_20] [i_20] = (((((arr_35 [i_20]) ? (((var_7 ? (arr_54 [i_20]) : var_16))) : ((6940473672072390721 % (arr_37 [i_20] [i_20] [i_20])))))) ? 3239103488714242199 : ((((arr_57 [i_20] [i_20]) ? (((!(arr_51 [i_20] [i_20] [i_20])))) : 321075729))));
        arr_76 [0] &= ((-321075726 >= (arr_32 [0])));
    }
    var_51 ^= ((var_16 <= ((~((var_5 ? -158217570 : var_4))))));
    #pragma endscop
}
