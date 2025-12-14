/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = (max(7138839692019190047, (min(23121, -7138839692019190030))));
        arr_5 [i_0] = (((arr_1 [i_0] [i_0]) > ((var_3 ? (arr_0 [i_0]) : var_6))));
        var_18 = 1123869344;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_10 [i_1] = ((((min((arr_2 [i_1]), ((var_10 ? -110 : 109))))) ? (((44819 ? (arr_2 [i_1]) : (arr_8 [i_1])))) : (max((3171097951 ^ 0), (arr_7 [i_1])))));
        arr_11 [2] |= 68;
    }
    var_19 = 3483155954;

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_16 [i_2] [i_2] = (((((arr_15 [i_2]) ? (arr_15 [i_2]) : (arr_15 [i_2]))) - (((arr_15 [i_2]) ^ (arr_15 [i_2])))));
        var_20 = ((((((arr_14 [i_2]) << (((arr_15 [i_2]) - 1555444423))))) ? (max((arr_2 [i_2]), 811811341)) : (((((1123869344 ? var_1 : 3171097955))) ? var_3 : (((arr_14 [i_2]) * 0))))));
        var_21 -= (min((((arr_12 [i_2] [i_2]) ? (max(3171097955, 3256941263)) : ((3102970495 ? (arr_1 [i_2] [12]) : (arr_15 [i_2]))))), (arr_14 [i_2])));

        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                arr_24 [i_4] &= ((var_11 == (((3102970504 != ((4294967295 ? 2589258834 : 29682)))))));
                arr_25 [i_4] [i_3] [i_4] [i_4] = ((var_3 >= var_2) ? (min(1123869340, 4294967295)) : ((((arr_0 [24]) ? (arr_0 [i_4]) : 26))));
            }
            arr_26 [i_2] [i_3] = (((max(811811352, 109)) ^ var_0));
        }
        for (int i_5 = 4; i_5 < 14;i_5 += 1)
        {
            var_22 = ((((max((arr_17 [i_2] [i_5 - 2] [i_2]), (arr_21 [i_5] [i_5] [i_5 + 1] [i_5 - 2])))) ? ((((arr_20 [i_2]) ? (((arr_30 [i_2]) ? var_1 : 3171097951)) : 100))) : (arr_30 [i_2])));
            var_23 = (-21558 > 109);
        }
        for (int i_6 = 3; i_6 < 15;i_6 += 1) /* same iter space */
        {
            var_24 |= (max(((var_15 / (arr_17 [13] [i_2] [i_6 - 1]))), (arr_20 [i_2])));
            var_25 ^= (((arr_12 [i_2] [i_6]) ? ((511 ? (arr_32 [0] [4] [i_2]) : -109)) : 13));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
            {
                arr_37 [i_2] [i_6] [i_7] = var_16;
                arr_38 [i_7] [i_6] |= ((8776 ? (arr_29 [i_2] [i_6 - 3] [i_6 - 3]) : var_12));
            }
            for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
            {
                var_26 = 3483155955;
                var_27 |= (max((-1 >= -109), (((arr_2 [i_2]) ? (arr_32 [i_6 + 1] [i_6 - 2] [i_6 - 2]) : (arr_2 [i_8])))));
                arr_41 [i_2] [i_8] |= (arr_21 [i_2] [i_6] [i_8] [i_8]);
                arr_42 [i_6] [12] [i_8] = (((((((max(var_16, var_7))) ? (((var_16 ? var_15 : 97))) : ((var_8 ? 1191996821 : (arr_14 [i_2])))))) ? (((var_1 ? (arr_29 [13] [13] [i_6 - 1]) : (arr_29 [i_8] [6] [i_6 + 1])))) : (((((31744 ? -109 : 1912831556))) ? (((arr_29 [i_2] [i_2] [i_2]) ? -59 : (arr_33 [i_6]))) : var_3))));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
            {
                arr_45 [i_6] = -29683;
                arr_46 [i_2] [i_6 + 1] [i_9] |= (((arr_44 [i_9] [i_9] [10] [i_9]) ? -6531635383989896654 : (arr_44 [i_2] [i_6] [12] [i_6 - 2])));
                var_28 = (((arr_29 [12] [12] [i_6 - 1]) ? (arr_35 [i_6 + 1] [i_6] [i_6] [i_6 - 2]) : var_10));
                var_29 ^= (arr_27 [i_2]);
            }
            var_30 ^= (arr_35 [i_2] [i_6 + 1] [i_2] [i_2]);
        }
        /* vectorizable */
        for (int i_10 = 3; i_10 < 15;i_10 += 1) /* same iter space */
        {
            arr_49 [i_2] [i_10] = ((3918393016 ? (arr_47 [i_10]) : (arr_19 [i_10 - 2] [i_10] [i_10])));
            arr_50 [i_10] [i_10] = var_6;
            arr_51 [i_2] [i_10] = ((5742954417758193468 || (arr_27 [i_10])));
            var_31 |= arr_20 [i_2];
        }
    }

    for (int i_11 = 4; i_11 < 22;i_11 += 1) /* same iter space */
    {
        var_32 -= ((((4248439553 && ((((arr_0 [i_11]) ? 243 : 199))))) ? (arr_54 [20]) : ((((-1653 ? var_8 : 29673)) + (arr_2 [12])))));
        var_33 -= 51;
    }
    for (int i_12 = 4; i_12 < 22;i_12 += 1) /* same iter space */
    {
        var_34 = (max(var_34, ((((((1 ? -29673 : 120))) ? ((var_12 + ((3784411386 ? -109 : 41)))) : (arr_56 [i_12 + 1]))))));
        var_35 ^= max((((124 || (arr_55 [18])))), (((19969 ? (arr_52 [22]) : (arr_53 [i_12 - 1])))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 11;i_13 += 1)
    {
        var_36 -= var_7;
        arr_59 [i_13] [8] |= (arr_22 [i_13] [i_13] [i_13]);
    }
    #pragma endscop
}
