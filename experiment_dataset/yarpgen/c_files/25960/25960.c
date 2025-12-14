/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 18241485459036110159;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = -3146085290612569470;
        var_21 = (((max((arr_1 [i_0]), ((-124 == (arr_0 [i_0] [i_0]))))) ? ((max((arr_1 [i_0]), (arr_1 [i_0])))) : (max(94, (arr_0 [i_0] [i_0])))));
        arr_2 [i_0] |= ((~((((((arr_1 [i_0]) ? 205258614673441453 : -95))) ? (arr_1 [i_0]) : ((86 ? (arr_0 [16] [14]) : -8985453310934333184))))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_22 += ((((((arr_6 [i_1]) ? 1 : 25655))) ? ((min((arr_3 [i_1 - 1]), (arr_3 [i_1 + 2])))) : ((5617 ? ((-78 ? (arr_6 [i_1]) : (arr_5 [i_1]))) : (~77)))));
        var_23 += ((((((arr_5 [i_1 + 1]) < (arr_5 [i_1 - 1])))) | ((min((arr_5 [i_1 - 1]), 4)))));
        var_24 = (max(var_24, ((max((1 <= 7), (arr_3 [i_1 - 1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (((((arr_1 [i_2]) ? 2330 : (arr_7 [i_2] [16]))) >= (arr_1 [i_2])));

        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            arr_13 [i_2] = (((arr_7 [i_3 + 1] [i_3 + 1]) / ((((arr_7 [i_2] [i_2]) ? (arr_1 [i_2]) : (arr_5 [i_2]))))));
            var_25 = 65512;
            var_26 = (arr_7 [i_3 + 2] [i_3 + 1]);
            var_27 &= (((arr_0 [i_2] [i_3 - 1]) == ((((arr_6 [i_3 + 1]) ? 164 : -78)))));
        }
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            var_28 = (arr_14 [i_4 - 2] [i_4 - 2] [i_4]);
            var_29 = (((arr_12 [i_2]) ? (arr_12 [i_2]) : (arr_12 [i_4 - 1])));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            var_30 = (min(var_30, ((((arr_0 [i_5] [i_2]) ? (arr_0 [i_5] [i_2]) : (arr_0 [i_2] [0]))))));
            var_31 += (arr_17 [1] [6] [i_5]);
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_26 [i_2] [i_2] = (((((!(arr_22 [i_2] [i_5] [i_5] [i_7])))) ^ (((arr_23 [i_6]) % 3))));
                        var_32 = (+-15);
                    }
                }
            }
            arr_27 [i_5] = (((arr_12 [i_2]) & 4294967272));
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
        {
            arr_30 [i_8] [i_8] [i_2] = ((-2726282231641766923 && (((18758 ? 127 : 1)))));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_33 = (((arr_25 [i_8] [i_8] [5] [i_10 - 1] [i_11 - 4]) ? 56268 : (arr_25 [i_2] [i_8] [i_2] [i_10 - 1] [i_11 - 4])));
                            var_34 = ((arr_9 [i_10 + 1]) / (((-31 ? (arr_21 [i_11]) : -1))));
                            var_35 = (arr_3 [i_10]);
                        }
                    }
                }
            }
            var_36 = (((((107 ? -69 : 113))) ? ((118 ? (arr_14 [i_2] [i_8] [i_8]) : (arr_28 [i_8] [i_8]))) : (~8480)));
            var_37 = ((-(arr_22 [i_2] [i_2] [i_2] [i_2])));
        }
        arr_38 [i_2] = (((arr_8 [i_2]) ? (arr_19 [i_2] [i_2] [i_2]) : (!65530)));
        var_38 += (659898157823397342 - (arr_28 [i_2] [i_2]));
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                {
                    var_39 &= ((!(((arr_24 [i_12] [10] [i_13] [i_14]) && ((2539366064 && (arr_42 [i_12] [i_12])))))));
                    var_40 = (max(var_40, 0));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                {
                    arr_52 [i_12] [i_12] [i_12] |= ((((min((arr_29 [i_12] [i_15]), (12926 >= 1)))) >> ((min((arr_14 [8] [i_15] [i_16]), ((((arr_33 [i_12] [i_12] [i_12] [3] [i_12]) || (arr_5 [11])))))))));
                    var_41 = -1;
                    var_42 = (max(var_42, (!116)));
                }
            }
        }
    }
    var_43 ^= var_12;
    #pragma endscop
}
