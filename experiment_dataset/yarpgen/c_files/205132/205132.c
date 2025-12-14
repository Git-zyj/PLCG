/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = (min(var_16, (((212 % ((-(arr_2 [i_0] [i_0]))))))));
        var_17 = ((((((((64769 ? var_14 : 60870))) ? (arr_2 [i_0] [i_0]) : ((var_14 ? var_7 : 1372573915))))) ? 163 : (arr_1 [i_0] [i_0])));
        var_18 = (min(var_18, (((!(!var_1))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_19 *= (min((max((min(3056170399, 9151808073761712043)), 4294967295)), (((1238796897 ? (arr_4 [i_1]) : (arr_3 [i_1] [i_1]))))));
        arr_5 [i_1] [i_1] = -var_8;
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_20 = (((arr_3 [i_2] [i_2]) / var_15));
        var_21 ^= 23846679059241740;
        var_22 = ((-469689454 ? ((((arr_1 [i_2] [i_2]) | 1238796897))) : 17730590850834961250));
        var_23 = 3056170388;
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        var_24 = (min(4450775277493377561, var_14));

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_25 = ((var_8 ? (!56123495) : ((((23846679059241740 ? var_2 : var_7)) | var_7))));

            for (int i_5 = 3; i_5 < 13;i_5 += 1) /* same iter space */
            {
                var_26 ^= 3056170397;

                /* vectorizable */
                for (int i_6 = 2; i_6 < 10;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        var_27 = 96;
                        var_28 = (min(var_28, (((-(~3989904887))))));
                        arr_22 [i_3] [i_4] [i_5 - 1] [i_6 + 2] [i_7 + 1] = ((-(640975639 || 252)));
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_29 = (min(var_29, (((((var_0 ? (arr_21 [i_3]) : var_1))) ? (((62152 ? 30 : 45075))) : var_12))));
                        var_30 = (max(var_30, (arr_2 [i_3] [i_4])));
                        var_31 = ((228 == (arr_17 [i_6 + 3] [i_5 + 1] [i_5] [i_5 - 3])));
                        arr_27 [i_3] [i_4] [i_5 - 2] [i_6] [i_6] = (((((65535 ? (arr_8 [i_3]) : (arr_16 [i_3] [i_3] [i_3])))) ? (arr_17 [i_3] [i_4] [i_4] [i_4]) : 7919526497667913659));
                    }

                    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                    {
                        var_32 = (min(var_32, (((((((arr_16 [i_3] [i_3] [i_3]) << (514630824 - 514630823)))) & (~var_11))))));
                        arr_31 [i_3] [i_3] [i_3] [i_4] [i_9] = 19741;
                    }
                    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        arr_35 [i_4] = ((+((2157900321 ? (arr_29 [i_3] [i_4] [i_3] [i_3] [i_4]) : var_7))));
                        var_33 = ((~(arr_26 [i_6 + 2] [i_6 + 2] [i_5 - 3])));
                        arr_36 [i_4] [i_6] [i_3] [i_4] [i_3] [i_4] = -11954;
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_4] [i_3] [i_4] [i_4] [i_4] = (arr_13 [i_4]);
                        arr_40 [i_6] [i_4] = (arr_25 [i_5 + 1]);
                        var_34 += ((-(((arr_33 [i_3] [i_4] [i_3] [i_5] [i_3] [i_3]) ? var_7 : 4064))));
                    }
                    arr_41 [i_4] = ((10012697883820335139 ? 4278628001 : (arr_28 [i_6] [4] [i_5] [i_4] [i_4] [i_5 + 1] [i_4])));

                    for (int i_12 = 2; i_12 < 12;i_12 += 1)
                    {
                        var_35 = (32333 ^ var_0);
                        arr_44 [i_12] [i_4] [i_4] [i_4] [i_3] = (arr_13 [i_4]);
                    }
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    var_36 = (max(var_36, 24));
                    var_37 = -562949416550400;
                    var_38 = (min(var_38, (((-(arr_14 [i_5 - 2]))))));
                }
            }
            for (int i_14 = 3; i_14 < 13;i_14 += 1) /* same iter space */
            {
                var_39 ^= (((((((~(arr_11 [i_3])))) != var_9)) ? 50 : 38));
                arr_52 [i_4] [i_4] [i_4] = (!3743154289);
            }
        }

        /* vectorizable */
        for (int i_15 = 1; i_15 < 12;i_15 += 1)
        {

            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                var_40 = 26862;
                var_41 = (min(var_41, ((((arr_29 [i_3] [i_3] [i_3] [i_3] [i_16]) / 3336)))));
            }
            arr_59 [12] = ((64063 - var_8) + 31691);
        }
    }
    #pragma endscop
}
