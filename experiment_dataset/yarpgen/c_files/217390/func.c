/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217390
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) (unsigned short)4680))));
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) (((+(arr_8 [i_1] [i_1 - 2] [3] [i_3]))) > (((/* implicit */int) (((~(((/* implicit */int) var_1)))) == (((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))))))));
                        arr_11 [(unsigned short)10] [(unsigned char)3] [1] [11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1 - 1] [13U]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 - 1])) > (((/* implicit */int) arr_1 [i_1 + 1]))))) : (((/* implicit */int) max(((unsigned char)118), ((unsigned char)45))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_4] [(unsigned char)10] [i_2] [(unsigned char)2] [i_4] = ((/* implicit */unsigned char) var_10);
                            arr_15 [i_0] [(signed char)4] [i_2] [(unsigned char)13] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned char)217), ((unsigned char)6)))) ? (arr_8 [i_3] [i_2] [i_1] [(unsigned char)2]) : (((((/* implicit */_Bool) (unsigned char)6)) ? (-1067841323) : (((/* implicit */int) (unsigned short)65519))))));
                        }
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_5 = 2; i_5 < 15; i_5 += 4) /* same iter space */
            {
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -804639027)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (unsigned char)63))))) ? (((/* implicit */unsigned long long int) (+(arr_8 [i_1 - 2] [(unsigned char)4] [i_1 - 1] [i_5 + 1])))) : (((((/* implicit */unsigned long long int) arr_8 [i_1 + 3] [i_1] [i_1 + 3] [i_5 + 1])) * (18446744073709551614ULL)))));
                arr_19 [12LL] [12LL] [2] [i_5] = ((/* implicit */unsigned long long int) (unsigned char)91);
                arr_20 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5])) ? (var_17) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_5] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6220446380523521279ULL))))) : (((((/* implicit */int) max((((/* implicit */short) var_0)), ((short)30131)))) & (((/* implicit */int) arr_5 [i_5 + 2] [i_1 + 3]))))));
            }
            for (unsigned char i_6 = 2; i_6 < 15; i_6 += 4) /* same iter space */
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_9 [(unsigned char)16] [i_6 + 2] [(unsigned char)16])) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_6 - 1] [i_6])) == (664376593))))));
                /* LoopSeq 3 */
                for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    arr_26 [i_7] [i_7] = ((((/* implicit */int) arr_3 [(signed char)0] [(signed char)7] [i_6])) * ((-(((/* implicit */int) ((unsigned char) var_16))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 2; i_8 < 17; i_8 += 3) 
                    {
                        var_22 = (((-(((/* implicit */int) (unsigned short)10926)))) - ((-(arr_8 [i_8 + 1] [i_8] [i_6 - 2] [i_1 - 2]))));
                        var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [(unsigned short)15] [i_1] [i_1])), (arr_5 [i_1] [i_8])))), ((~(((/* implicit */int) var_18))))))) ? (((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) (unsigned short)54597)) : (((/* implicit */int) (unsigned short)16384)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1 + 3]))) <= (439254770U))))));
                        var_24 = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned short)10915))))));
                        var_25 = arr_9 [16] [(unsigned char)14] [16];
                    }
                    var_26 *= ((/* implicit */signed char) ((unsigned int) ((unsigned long long int) (unsigned short)10937)));
                }
                for (signed char i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    var_27 *= ((/* implicit */unsigned char) ((arr_6 [i_0] [(unsigned char)4] [0LL]) ? ((((((-(((/* implicit */int) var_5)))) + (2147483647))) >> (((((/* implicit */int) (unsigned char)226)) - (215))))) : ((+(((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_1] [i_1] [i_6] [i_9] [(unsigned short)3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_18))))))));
                    arr_33 [i_0] [i_9] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */int) var_1)) < ((+((+(((/* implicit */int) arr_22 [8U]))))))));
                }
                for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
                {
                    arr_38 [i_0] [5U] [(unsigned short)0] [i_0] [i_10] = ((/* implicit */unsigned short) arr_25 [i_0] [i_0] [i_0] [i_0]);
                    arr_39 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-30132)) ? (((/* implicit */int) min((var_9), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_6] [(signed char)8] [i_6] [(signed char)10] [i_6])) || (arr_3 [(unsigned char)16] [(unsigned char)3] [i_6]))))))) : ((~(max((arr_25 [i_0] [(unsigned char)2] [i_0] [(unsigned char)11]), (((/* implicit */int) arr_9 [i_0] [(signed char)16] [i_10]))))))));
                    arr_40 [(unsigned short)9] [i_0] = ((/* implicit */long long int) -507673471);
                }
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)30)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24865)))))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16383)) ? (arr_24 [i_1] [(_Bool)1] [(_Bool)1] [12] [2ULL]) : (((/* implicit */int) (unsigned char)100))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-24865)) : (((/* implicit */int) arr_28 [i_6] [i_6] [i_1] [(unsigned char)3] [i_0])))))))));
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (-(var_6))))));
            }
        }
        for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 2) 
        {
            arr_44 [(unsigned char)15] [(unsigned char)15] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [5] [i_11]))) : (var_11)))) ? ((~(((/* implicit */int) (unsigned char)225)))) : (((/* implicit */int) (unsigned char)52))))));
            arr_45 [(unsigned char)11] [2ULL] [(signed char)8] = ((/* implicit */unsigned int) ((max((var_11), (((/* implicit */long long int) arr_18 [i_0] [i_0] [i_11] [i_11])))) / (((long long int) arr_10 [(unsigned short)8] [i_11] [(signed char)5] [i_0] [i_0]))));
            var_30 = ((/* implicit */long long int) ((arr_3 [i_11] [i_11] [i_0]) ? (((((/* implicit */_Bool) -2676973068579005222LL)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned char)62)))) : ((~(min((((/* implicit */int) (unsigned char)53)), (2147483647)))))));
        }
        for (unsigned char i_12 = 1; i_12 < 14; i_12 += 1) 
        {
            arr_48 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_31 [i_12] [i_12] [i_0] [i_12 + 2] [i_12]), (arr_31 [i_0] [i_0] [1LL] [i_12 - 1] [7])))) ? (-507673463) : (((((/* implicit */_Bool) 507673476)) ? ((+(((/* implicit */int) arr_22 [(unsigned short)9])))) : (((/* implicit */int) (unsigned char)45))))));
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) var_0)) : ((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (arr_23 [i_0] [i_12] [i_12] [13] [i_12])))))));
            arr_49 [1] [(short)10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)202)) >= (((/* implicit */int) (unsigned short)508))))) << (((((/* implicit */int) (short)30131)) - (30102)))))) ? (((/* implicit */int) max((((unsigned short) var_5)), (((/* implicit */unsigned short) ((var_13) < (((/* implicit */int) var_10)))))))) : (arr_8 [5U] [8ULL] [5U] [5U])));
            /* LoopSeq 3 */
            for (unsigned short i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                /* LoopSeq 4 */
                for (signed char i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    arr_54 [i_14] [i_13] [i_14] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)210))));
                    arr_55 [i_14] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) arr_30 [i_0] [i_0] [i_12] [i_12] [17] [i_14]);
                    arr_56 [i_0] [i_12] [i_14] [i_13] [i_12] = ((unsigned char) ((((/* implicit */_Bool) ((signed char) arr_25 [i_0] [i_12] [i_0] [i_14]))) ? (((/* implicit */int) arr_3 [i_13] [i_12] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)54621)) && (((/* implicit */_Bool) 2095186869146654129LL)))))));
                }
                for (unsigned char i_15 = 1; i_15 < 16; i_15 += 4) 
                {
                    arr_59 [i_0] [(unsigned char)1] [(unsigned char)0] [i_15] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [(signed char)12] [(short)16] [(unsigned char)10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94))) : (min((2300356171U), (((/* implicit */unsigned int) var_10))))))));
                    arr_60 [(signed char)10] [i_12] [(unsigned char)14] [i_15] [(unsigned short)0] [i_12] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) -2147483636))))));
                    arr_61 [i_15] [i_13] [i_12] [i_12] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)30154)) ? ((~(((((/* implicit */int) arr_53 [(unsigned char)5] [(unsigned char)5] [i_15] [i_15] [(unsigned short)5])) ^ (((/* implicit */int) arr_37 [(unsigned char)14] [(unsigned char)14])))))) : (((/* implicit */int) (unsigned char)47))));
                }
                for (unsigned char i_16 = 1; i_16 < 16; i_16 += 3) 
                {
                    arr_66 [0] [(unsigned char)11] = ((((((/* implicit */int) arr_53 [i_16 + 2] [(unsigned short)12] [i_13] [i_12 + 4] [i_12])) == (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned char)47))))))) ? (((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) (unsigned char)216)) : (((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) arr_18 [i_13] [(unsigned short)10] [(unsigned short)0] [(unsigned short)4])))))) : (((/* implicit */int) arr_37 [11U] [14])));
                    arr_67 [10ULL] [(unsigned short)0] [(unsigned short)0] [i_16] = ((/* implicit */signed char) (short)30131);
                }
                for (long long int i_17 = 2; i_17 < 17; i_17 += 1) 
                {
                    var_32 ^= ((/* implicit */_Bool) arr_12 [(signed char)3]);
                    arr_71 [i_0] [i_0] [14] [i_17] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (+(arr_46 [i_17 - 1] [i_17]))));
                }
                arr_72 [i_0] = ((/* implicit */_Bool) max((((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)13)) ? (2013265920) : (((/* implicit */int) (unsigned short)61440))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_18)))))));
                var_33 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) ((long long int) 2147483635))))));
            }
            for (unsigned long long int i_18 = 1; i_18 < 17; i_18 += 1) 
            {
                var_34 = ((/* implicit */unsigned short) (signed char)114);
                var_35 ^= ((/* implicit */long long int) min((((/* implicit */int) arr_9 [(unsigned char)11] [i_12] [11])), (((arr_9 [7] [i_18 - 1] [i_12 + 4]) ? (((/* implicit */int) arr_31 [(unsigned char)14] [(unsigned char)14] [(unsigned char)14] [(unsigned char)14] [(unsigned char)1])) : (arr_25 [i_18 - 1] [i_12 - 1] [(unsigned short)12] [i_12 + 1])))));
            }
            for (unsigned char i_19 = 0; i_19 < 18; i_19 += 2) 
            {
                arr_78 [i_12] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)1))))))) >> (((((/* implicit */int) var_5)) - (100)))));
                var_36 ^= (+(((/* implicit */int) ((unsigned short) arr_74 [i_19] [i_12 + 1]))));
            }
        }
        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)253))))) && (((/* implicit */_Bool) var_7)))))));
    }
    for (unsigned char i_20 = 0; i_20 < 17; i_20 += 3) 
    {
        arr_81 [i_20] = (unsigned short)65524;
        arr_82 [i_20] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_20]))) ? ((-(((int) arr_36 [i_20] [i_20] [9] [9] [i_20])))) : (min((((/* implicit */int) ((unsigned short) arr_18 [i_20] [i_20] [i_20] [i_20]))), (((((/* implicit */_Bool) arr_70 [(signed char)10] [i_20] [i_20] [(unsigned char)12])) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (short)-24872))))))));
    }
    for (int i_21 = 2; i_21 < 12; i_21 += 2) 
    {
        var_38 *= ((/* implicit */unsigned long long int) ((_Bool) max((((((/* implicit */int) (unsigned char)13)) | (-1112498459))), (((/* implicit */int) (unsigned char)221)))));
        arr_85 [10ULL] [(unsigned char)1] = ((/* implicit */int) (((((~((~(arr_50 [(unsigned char)11] [(signed char)6] [i_21]))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) ((var_12) ? (var_17) : (((/* implicit */unsigned long long int) var_15))))) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) > (var_17)))))) - (253)))));
    }
    var_39 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_12)));
}
