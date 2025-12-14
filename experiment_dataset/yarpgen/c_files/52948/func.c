/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52948
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))) < (18446744073709551615ULL)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_2);
        var_16 |= ((/* implicit */_Bool) (-(arr_3 [i_0 + 4])));
        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551609ULL))));
    }
    for (short i_1 = 1; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_7 [i_1 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 + 3]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1]))) : (var_14)))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            var_19 &= ((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (2ULL)));
            arr_11 [i_1] = ((/* implicit */long long int) ((1ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70)))));
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_14)) > (arr_1 [i_1 + 2])));
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (((/* implicit */int) (short)-30012)) : (((/* implicit */int) (short)30012))));
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182))) : (4439631421398357959ULL))))));
                var_23 = ((/* implicit */long long int) (-(arr_12 [i_1 + 3] [i_1 - 1])));
                var_24 |= ((/* implicit */int) var_4);
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_0 [4])))) && (((/* implicit */_Bool) arr_1 [i_1])))))));
            }
            arr_17 [i_3] [2LL] = ((/* implicit */unsigned char) var_8);
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_24 [i_1] [i_3] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1342858326943805164LL))));
                        var_26 = ((/* implicit */long long int) arr_14 [11]);
                        var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (134217712LL) : (var_9)));
                    }
                } 
            } 
        }
        for (unsigned long long int i_7 = 4; i_7 < 17; i_7 += 3) /* same iter space */
        {
            var_28 = ((((/* implicit */_Bool) (+(max((((/* implicit */int) var_13)), (arr_26 [(_Bool)1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) arr_7 [i_7 - 4])) ? (((/* implicit */unsigned long long int) (-(-1362171838)))) : (max((var_4), (((/* implicit */unsigned long long int) arr_19 [i_1] [i_7] [(_Bool)0] [i_7])))))));
            arr_29 [i_1 + 1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)155)), (var_7))))) : ((-(min((((/* implicit */long long int) 183429090)), (var_9)))))));
        }
        for (unsigned long long int i_8 = 4; i_8 < 17; i_8 += 3) /* same iter space */
        {
            arr_32 [i_8] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_8])) ? (min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_8 + 2])), (11881760704341724175ULL))) : (((/* implicit */unsigned long long int) arr_12 [i_8 + 2] [i_8 - 3])))))));
            var_29 = ((/* implicit */short) ((arr_2 [i_8 - 3] [i_8]) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) min((arr_2 [i_8 - 4] [i_8]), (arr_2 [i_8 + 3] [i_8]))))));
            /* LoopSeq 2 */
            for (int i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
                {
                    var_30 ^= ((/* implicit */unsigned char) 4410775221886246418LL);
                    var_31 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(var_14)))) ? (arr_30 [i_1 + 3] [i_8] [i_8 + 2]) : (18446744073709551607ULL)));
                    var_32 = ((/* implicit */_Bool) 6545052454095378063LL);
                    var_33 = ((/* implicit */short) 4721197995910352337ULL);
                }
                for (long long int i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
                {
                    var_34 = (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_11] [(_Bool)1] [i_8] [i_8] [(_Bool)1] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)1023))))))));
                    var_35 = ((/* implicit */long long int) max((402653184), (183429098)));
                }
                /* vectorizable */
                for (long long int i_12 = 0; i_12 < 20; i_12 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */short) var_4);
                    var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_27 [i_8 - 1] [i_9] [i_12]) ? (((/* implicit */int) arr_27 [i_8] [i_9] [i_12])) : (((/* implicit */int) var_3)))))));
                    var_38 = ((/* implicit */int) arr_5 [i_1]);
                    var_39 = (+(((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) 562949953421311ULL))))));
                    var_40 = ((/* implicit */unsigned char) ((arr_2 [i_1 + 1] [i_8 - 3]) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_8 - 3])) : (((/* implicit */int) arr_2 [i_1 + 1] [i_8 - 3]))));
                }
                /* LoopSeq 2 */
                for (int i_13 = 1; i_13 < 18; i_13 += 3) 
                {
                    var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((-2694109546494370681LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)29934))))))));
                    var_42 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_44 [i_8 - 1] [i_8 - 1]))) ^ (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2729))) : (7821352060788336148LL)))) ? ((-(-8216540322914384400LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_3)))))))));
                    var_43 ^= (+(((/* implicit */int) min((var_0), (((/* implicit */short) var_3))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_14 = 0; i_14 < 20; i_14 += 1) /* same iter space */
                    {
                        arr_49 [i_14] [(unsigned char)10] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_48 [2] [2] [i_8 + 3] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) var_14)) : (arr_48 [(unsigned char)8] [8] [i_8 + 2] [i_14] [i_14])));
                        var_44 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) arr_45 [i_1] [i_1])) ? (90234195) : (((/* implicit */int) var_13)))) : (((/* implicit */int) (_Bool)1))));
                        var_45 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (arr_43 [i_1] [i_1 - 1] [i_1 - 1] [i_1]) : (arr_43 [i_1] [i_1] [i_1 + 1] [i_14])));
                    }
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 1) /* same iter space */
                    {
                        var_46 = ((/* implicit */unsigned long long int) var_7);
                        var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) max((((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) 17382301710156581694ULL))))))), (((/* implicit */int) var_5)))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_16 = 3; i_16 < 19; i_16 += 1) 
                    {
                        var_48 = ((/* implicit */unsigned long long int) arr_43 [(_Bool)1] [(_Bool)1] [(unsigned char)12] [(_Bool)1]);
                        var_49 = ((/* implicit */long long int) arr_5 [i_9]);
                        var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_1] [i_1] [(unsigned char)11] [i_1] [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_38 [i_13 + 2] [i_8 + 3] [i_1 - 1] [i_13] [(unsigned char)3] [i_9])) : (((/* implicit */int) arr_37 [i_1] [i_1] [9LL] [9LL] [i_1] [i_1 + 3])))))));
                        var_51 = ((/* implicit */short) (~((~(arr_36 [i_1] [i_1] [i_1] [i_9] [i_13] [i_16 + 1])))));
                    }
                    /* vectorizable */
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1280736117661721509ULL)) ? (((/* implicit */int) arr_38 [i_8 + 2] [i_8 + 2] [i_9] [i_13] [i_17] [i_17])) : (((/* implicit */int) arr_38 [i_8 + 2] [(_Bool)1] [i_9] [i_13] [i_17] [(unsigned char)7]))));
                        var_53 = ((/* implicit */long long int) var_12);
                    }
                    for (unsigned long long int i_18 = 4; i_18 < 17; i_18 += 3) 
                    {
                        var_54 = ((/* implicit */int) max((max((((/* implicit */long long int) var_12)), (var_8))), (((/* implicit */long long int) arr_44 [i_13 - 1] [i_1 + 3]))));
                        arr_61 [i_1] [i_8 + 2] [4ULL] [i_9] [i_8] [i_13] [i_18] = max((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)27841)))) + (arr_53 [i_1] [i_8]))), (((((/* implicit */_Bool) arr_38 [i_9] [i_13 + 1] [i_18 - 3] [i_8 - 3] [i_18 + 2] [i_1 + 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_38 [i_1] [i_13 - 1] [i_18 + 2] [i_8 - 2] [(_Bool)1] [i_1 + 2])))));
                        var_55 = max((max((((/* implicit */int) max(((short)0), (((/* implicit */short) var_12))))), ((-(((/* implicit */int) var_12)))))), (((/* implicit */int) arr_58 [i_1 + 4] [i_1 + 4] [i_1] [7LL] [i_1])));
                        arr_62 [i_8] [i_8] [i_8] = ((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned long long int) arr_51 [i_1] [i_9] [i_9] [4LL] [i_18] [i_8] [i_18 + 2])) : (arr_48 [i_8] [i_8] [i_8 - 2] [i_13] [i_18])));
                        var_56 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_14)))), (max((((/* implicit */unsigned long long int) arr_47 [i_9] [i_18 + 2] [i_8] [i_8] [i_8] [i_1])), (2305843009213693951ULL)))))));
                    }
                }
                /* vectorizable */
                for (long long int i_19 = 0; i_19 < 20; i_19 += 1) 
                {
                    var_57 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_8] [i_8 + 1])) ? (((/* implicit */int) arr_57 [i_8] [i_8 - 3])) : (((/* implicit */int) arr_57 [i_8] [i_8 - 1]))));
                    arr_66 [i_1] [i_8] [i_9] = ((/* implicit */short) (!((_Bool)0)));
                    var_58 = ((/* implicit */unsigned char) min((var_58), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) 16140901064495857664ULL)) || (var_12)))))))));
                }
            }
            for (int i_20 = 0; i_20 < 20; i_20 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_21 = 0; i_21 < 20; i_21 += 1) 
                {
                    var_59 = ((/* implicit */unsigned char) arr_0 [i_8]);
                    arr_74 [3] [i_8] [3] [3] = (!(((/* implicit */_Bool) (~(var_4)))));
                }
                var_60 = ((/* implicit */_Bool) (-((-(var_8)))));
                var_61 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((arr_60 [i_20] [i_20] [i_20] [i_1] [i_8] [i_1]) | (((/* implicit */int) var_10))))), (min((-4400201949728124463LL), (((/* implicit */long long int) var_13))))))), (((17150319195715335567ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_8 + 1] [i_1 + 3] [i_20] [i_20])))))));
                arr_75 [i_20] [4] [4] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-30011)), (arr_70 [i_8 - 2] [i_1])))) ? (max((((/* implicit */unsigned long long int) var_13)), (arr_54 [i_8 - 2] [i_8] [(short)0] [i_1] [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
            }
            var_62 = ((/* implicit */short) ((((/* implicit */_Bool) 1)) ? (-8216540322914384386LL) : (((/* implicit */long long int) -1823630619))));
            var_63 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)75)) ? (((((/* implicit */_Bool) 3ULL)) ? (arr_42 [i_1] [i_1] [i_1] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_51 [i_1] [i_1] [i_1] [i_1 + 3] [i_1 + 1] [i_1] [i_8 + 3]) < (((/* implicit */int) arr_9 [i_1]))))))));
        }
        var_64 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_59 [i_1 + 2] [i_1 + 2] [i_1 + 4] [i_1 + 2] [i_1 - 1]))))) - (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (arr_63 [i_1 + 3] [0LL] [i_1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_1 + 4] [i_1 + 4] [i_1 + 1] [i_1 + 3] [i_1 + 4])))))));
    }
    /* vectorizable */
    for (short i_22 = 1; i_22 < 16; i_22 += 1) /* same iter space */
    {
        var_65 = ((/* implicit */int) (_Bool)1);
        var_66 = ((/* implicit */short) (~(((/* implicit */int) arr_39 [(unsigned char)16]))));
        var_67 = ((/* implicit */_Bool) var_2);
    }
    /* LoopNest 3 */
    for (unsigned long long int i_23 = 2; i_23 < 16; i_23 += 1) 
    {
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            for (long long int i_25 = 2; i_25 < 14; i_25 += 3) 
            {
                {
                    var_68 |= ((/* implicit */short) (_Bool)1);
                    arr_86 [0LL] [0LL] [0LL] [0LL] = ((/* implicit */long long int) arr_33 [10]);
                    arr_87 [i_23 + 1] [(_Bool)1] [i_25] = ((/* implicit */unsigned long long int) (short)25335);
                    var_69 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */short) arr_83 [i_24] [i_25])), (var_7)))), (((4) * (((/* implicit */int) var_1))))));
                    arr_88 [i_25] [i_24] [i_24] [i_23] |= arr_0 [4LL];
                }
            } 
        } 
    } 
}
