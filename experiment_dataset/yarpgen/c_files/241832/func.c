/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241832
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
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)51779))) & (max((((/* implicit */long long int) ((((/* implicit */int) var_14)) % (((/* implicit */int) var_11))))), (max((2904853265425410441LL), (((/* implicit */long long int) (unsigned char)56)))))))))));
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)-7004)) + (2147483647))) << (((((((/* implicit */int) var_7)) + (19350))) - (24))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) (signed char)126);
        arr_3 [(unsigned short)9] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51798))) : (((unsigned long long int) (signed char)-117)));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 8; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (unsigned char i_4 = 1; i_4 < 10; i_4 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) (+(arr_11 [i_4 - 1] [i_2] [i_4 - 1] [i_4 - 1])));
                        arr_17 [i_2] [(unsigned char)10] [i_2] = ((/* implicit */_Bool) 2904853265425410457LL);
                        arr_18 [i_2] [(unsigned char)5] [(short)1] [(short)1] [i_2] [i_2] = ((/* implicit */_Bool) var_1);
                        var_21 = ((/* implicit */unsigned short) arr_8 [i_3] [(unsigned short)2] [(unsigned short)2]);
                    }
                } 
            } 
            arr_19 [i_2] [i_2] = ((/* implicit */_Bool) var_0);
            arr_20 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)30139)) & (((/* implicit */int) arr_12 [(unsigned short)5] [0] [(signed char)4]))))) ? (((/* implicit */int) arr_7 [i_2] [i_2] [i_2])) : (((/* implicit */int) (short)127))));
        }
        var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [(signed char)2] [i_1] [(short)6] [(short)2] [i_1]))) ^ (-2904853265425410450LL)))) ? (((((/* implicit */_Bool) var_3)) ? (arr_16 [3U] [(signed char)5] [(signed char)5] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251)))));
        /* LoopSeq 1 */
        for (short i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                for (signed char i_7 = 2; i_7 < 8; i_7 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned char) (!((_Bool)1)));
                            var_24 = ((/* implicit */unsigned char) (~(arr_16 [i_7 + 2] [i_7 + 2] [i_1 + 1] [(unsigned short)10])));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_37 [(signed char)6] [i_6] [i_6] = ((/* implicit */int) arr_21 [4LL] [(_Bool)1]);
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2904853265425410417LL)) ? (((/* implicit */int) (unsigned short)51760)) : (((/* implicit */int) ((((/* implicit */_Bool) 13837984328601312349ULL)) && (((/* implicit */_Bool) (unsigned short)16653)))))));
                        }
                        for (unsigned long long int i_10 = 2; i_10 < 10; i_10 += 2) 
                        {
                            var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) var_11))));
                            var_27 += ((/* implicit */int) var_11);
                        }
                        /* LoopSeq 3 */
                        for (long long int i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned long long int) (short)3);
                            var_29 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 - 1] [(_Bool)1]))));
                            var_30 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-17022)) ? (((/* implicit */int) arr_1 [12LL] [(signed char)12])) : (((/* implicit */int) arr_0 [(_Bool)1]))))));
                            var_31 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_39 [i_1 - 1] [i_5] [9] [i_7 + 2])) * (((/* implicit */int) arr_39 [i_5] [(signed char)10] [i_7 + 1] [i_11]))));
                        }
                        for (long long int i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
                        {
                            arr_47 [(unsigned char)0] [(short)1] [(unsigned char)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)40))));
                            arr_48 [9] [9] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) -133263582))) * (((/* implicit */int) var_2))));
                            var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1666373556U))));
                            var_33 += ((/* implicit */short) 15890462625945828900ULL);
                        }
                        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) arr_27 [(_Bool)1] [(unsigned char)1] [(unsigned char)1] [9LL]))))))));
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) var_1))));
                            arr_52 [i_13] [i_13] = ((/* implicit */unsigned short) ((var_15) << (((((((/* implicit */int) (short)17022)) | (((/* implicit */int) var_4)))) - (16981)))));
                        }
                    }
                } 
            } 
            arr_53 [1] [(_Bool)1] [(unsigned char)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_3))))));
            /* LoopNest 2 */
            for (short i_14 = 4; i_14 < 10; i_14 += 3) 
            {
                for (short i_15 = 0; i_15 < 11; i_15 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_16 = 0; i_16 < 11; i_16 += 4) 
                        {
                            arr_63 [i_15] [1] [1] [1U] [i_15] [(unsigned char)8] [1U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_15] [i_14 - 3] [(signed char)3] [(signed char)3])) ? (arr_26 [i_15] [2] [i_15] [i_15]) : (((/* implicit */unsigned long long int) arr_61 [i_14] [i_15] [i_15]))));
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_27 [(unsigned short)2] [(signed char)5] [(signed char)5] [(signed char)5]))));
                            var_37 = ((/* implicit */unsigned short) ((int) (_Bool)1));
                            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (unsigned short)13776))));
                        }
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_36 [i_14] [i_14 - 4] [i_14] [(unsigned char)8] [i_1 - 1] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5)))) : (2556281447763722709ULL)));
                    }
                } 
            } 
            arr_64 [7LL] [(signed char)7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) var_7))))) != (arr_54 [i_1 + 1] [i_1 - 2])));
        }
    }
    for (short i_17 = 3; i_17 < 23; i_17 += 4) /* same iter space */
    {
        var_40 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)28735))))) & (((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_14))))))), (min((2305843009213693951ULL), (15890462625945828878ULL)))));
        /* LoopSeq 2 */
        for (short i_18 = 0; i_18 < 24; i_18 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_19 = 2; i_19 < 22; i_19 += 2) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        var_41 &= ((/* implicit */unsigned short) max(((~((+(((/* implicit */int) var_13)))))), (min((((/* implicit */int) max((((/* implicit */signed char) arr_67 [(signed char)23])), (var_8)))), (((((/* implicit */_Bool) (unsigned short)51768)) ? (((/* implicit */int) arr_75 [i_19] [i_19] [i_19] [i_19])) : (((/* implicit */int) (short)-17002))))))));
                        var_42 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_76 [23LL]))))))) << (((((((/* implicit */_Bool) max((var_16), (((/* implicit */short) (signed char)-74))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_66 [i_20]))))) : (max((15890462625945828917ULL), (((/* implicit */unsigned long long int) -2904853265425410438LL)))))) - (18446744073709510212ULL)))));
                        var_43 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_17] [i_17 - 1] [i_17])) ? (((/* implicit */int) arr_70 [i_17] [i_17] [i_17])) : (((/* implicit */int) arr_70 [(unsigned char)20] [i_19 + 1] [i_17])))))));
                        var_44 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_14))))) ? ((~(((/* implicit */int) var_16)))) : (((((/* implicit */int) arr_66 [1ULL])) | (((/* implicit */int) var_1))))))) & ((+(min((((/* implicit */unsigned long long int) (short)-17022)), (3885408972476039389ULL)))))));
                        var_45 = ((/* implicit */unsigned short) (((!(arr_67 [i_19 + 1]))) || (((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned short) arr_77 [22ULL] [(short)1] [(short)1] [(_Bool)1])), (var_9)))))));
                    }
                } 
            } 
            var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) ((signed char) ((long long int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)24126))))))));
        }
        for (unsigned char i_21 = 0; i_21 < 24; i_21 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_22 = 1; i_22 < 21; i_22 += 1) 
            {
                for (unsigned char i_23 = 0; i_23 < 24; i_23 += 4) 
                {
                    for (unsigned char i_24 = 0; i_24 < 24; i_24 += 2) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned char) (unsigned short)51787);
                            arr_87 [(unsigned char)14] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) arr_68 [i_17] [i_17])) : (((/* implicit */int) (short)-28736)))))) % (((/* implicit */int) ((unsigned short) ((short) (short)16997))))));
                        }
                    } 
                } 
            } 
            arr_88 [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_72 [i_17 - 3] [i_21] [17]), (arr_72 [i_17] [i_17 - 1] [(signed char)17])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_72 [i_17 - 2] [i_17 - 2] [i_21])) && (((/* implicit */_Bool) arr_72 [(_Bool)1] [i_21] [i_21])))))) : ((+(arr_72 [(unsigned char)4] [7LL] [(unsigned char)4])))));
        }
    }
    for (short i_25 = 3; i_25 < 23; i_25 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_26 = 0; i_26 < 24; i_26 += 2) 
        {
            for (short i_27 = 2; i_27 < 23; i_27 += 4) 
            {
                {
                    var_48 = ((/* implicit */unsigned char) var_5);
                    arr_95 [(unsigned short)3] [(unsigned short)11] [(unsigned short)3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-2904853265425410442LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                    arr_96 [20ULL] [(_Bool)1] &= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_94 [(unsigned short)18] [12LL] [(unsigned short)18])) % (((/* implicit */int) arr_94 [i_25 - 2] [i_25 + 1] [i_25 + 1])))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_66 [(unsigned char)20])) || (arr_93 [i_27 + 1]))))));
                }
            } 
        } 
        var_49 = ((min((((((((/* implicit */int) var_7)) + (2147483647))) << (((arr_71 [i_25] [8ULL] [20ULL] [2LL]) - (4756623564968606779ULL))))), (((/* implicit */int) var_0)))) | (((/* implicit */int) min(((unsigned char)15), (((/* implicit */unsigned char) arr_67 [i_25 - 1]))))));
    }
}
