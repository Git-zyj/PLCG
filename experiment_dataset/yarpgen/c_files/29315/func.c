/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29315
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_15))));
    var_18 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_19 ^= ((/* implicit */int) 5266216281421354503ULL);
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-32766))))))))));
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 4; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) min(((+(2251799813685247LL))), (((/* implicit */long long int) (unsigned short)8192))));
                        arr_10 [i_3 - 3] [i_2] [i_2] [i_2] [i_0] [(unsigned short)6] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned short) var_4))), ((+(min((((/* implicit */unsigned int) (unsigned char)0)), (arr_3 [i_1])))))));
                    }
                } 
            } 
            arr_11 [i_0] [(unsigned char)6] [0LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (416718527U))))));
        }
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            var_22 |= ((/* implicit */short) var_1);
            arr_15 [i_0] = ((/* implicit */unsigned long long int) ((min((((arr_3 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_3))))))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_4])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : ((+(((/* implicit */int) arr_1 [i_0] [i_4])))))))));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_6 [i_4]))));
        }
        for (int i_5 = 1; i_5 < 10; i_5 += 2) 
        {
            var_24 ^= ((/* implicit */unsigned int) (-((-(arr_14 [i_0] [i_5 + 2] [i_5])))));
            /* LoopNest 2 */
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((3844088139U) << (2ULL)))) ? (((((/* implicit */_Bool) (short)1)) ? (arr_14 [i_7] [i_6] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32744))))) : ((~(-7395047202551742553LL)))))));
                        arr_25 [i_0] = ((/* implicit */int) var_9);
                        /* LoopSeq 4 */
                        for (long long int i_8 = 1; i_8 < 9; i_8 += 1) 
                        {
                            var_26 |= ((/* implicit */unsigned char) ((arr_3 [i_5]) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_7] [i_8 - 1] [i_8 - 1] [i_7] [i_8] [i_8]))))))));
                            arr_28 [(signed char)8] [(signed char)8] [(signed char)8] [(signed char)8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)37840)) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_5] [i_6] [(short)8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [7] [7]))) : (13180527792288197113ULL)))) : (((/* implicit */unsigned long long int) var_6))));
                            arr_29 [i_0] = ((/* implicit */short) (+((((+(450879155U))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6] [i_5] [i_5 + 2] [(unsigned char)8] [i_5 + 2] [i_5 - 1])))))));
                        }
                        for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            var_27 ^= ((/* implicit */long long int) ((unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_16 [i_9])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (short)-32756)))))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-32766)) | (((/* implicit */int) ((unsigned short) 4489992062915701947LL)))));
                            var_29 -= ((/* implicit */unsigned short) var_3);
                            var_30 *= ((/* implicit */unsigned short) (~((-(max((var_15), (var_9)))))));
                        }
                        for (short i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            arr_34 [i_0] [i_0] [i_5] [i_0] [i_7] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((arr_5 [i_0] [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? ((((+(var_16))) * ((-(var_12))))) : (((/* implicit */unsigned long long int) (+(450879151U))))));
                            arr_35 [i_5 + 1] [i_10] = ((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0]);
                            arr_36 [i_0] [i_5] [i_6] [i_7] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)1611)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_23 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_6])), (var_15))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            arr_39 [i_0] [i_0] [(unsigned char)2] [(unsigned char)2] [i_0] = ((/* implicit */unsigned short) (+(var_16)));
                            var_31 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_16 [i_0])) ? (450879149U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0])))))))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) 28U)) && (((/* implicit */_Bool) var_4))))))))));
                        }
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(short)5])) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_8 [i_6] [6LL] [i_6] [i_6] [i_7] [6LL])), (var_12))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_5 - 1] [i_0])))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3)) || (((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_6] [i_5 + 2] [i_0])) | (((/* implicit */int) var_1))))))))));
                    }
                } 
            } 
            var_33 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_5))))))), (arr_16 [i_5])));
            arr_40 [i_0] [i_5] [i_0] = ((/* implicit */short) var_3);
        }
        arr_41 [i_0] = ((/* implicit */unsigned short) 1207814831);
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 1) 
        {
            for (unsigned int i_13 = 0; i_13 < 12; i_13 += 1) 
            {
                {
                    var_34 &= ((/* implicit */unsigned short) (((~(var_6))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-32758))))) ? (((int) (unsigned char)82)) : ((~(((/* implicit */int) var_5)))))))));
                    arr_48 [(signed char)2] [(signed char)2] |= ((/* implicit */signed char) arr_45 [i_0]);
                    var_35 = ((/* implicit */long long int) ((signed char) var_15));
                }
            } 
        } 
    }
    for (signed char i_14 = 4; i_14 < 18; i_14 += 2) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned char) (~(((int) 13180527792288197143ULL))));
        arr_51 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) min((((/* implicit */unsigned int) arr_49 [(short)13])), (var_15))))) & (((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_49 [i_14 + 1]))))) >= (var_6))))));
        arr_52 [i_14] = ((/* implicit */long long int) (+(max((((/* implicit */int) (short)(-32767 - 1))), (((((/* implicit */_Bool) 1939935040U)) ? (1848838599) : (((/* implicit */int) (short)-32744))))))));
    }
    for (signed char i_15 = 4; i_15 < 18; i_15 += 2) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 18014398509481920LL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_56 [i_15 + 1] [i_15 - 3]))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_16 = 0; i_16 < 19; i_16 += 2) 
        {
            var_38 = (-(arr_50 [i_15 - 2]));
            var_39 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-1))));
            var_40 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6)) - (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_54 [i_15])) ? (((/* implicit */unsigned long long int) var_6)) : (var_7))) : (((/* implicit */unsigned long long int) 2047U)));
            arr_60 [(short)4] [i_15] [i_15 - 2] = ((unsigned int) var_10);
        }
        for (long long int i_17 = 0; i_17 < 19; i_17 += 2) 
        {
            var_41 = max(((unsigned char)0), (((/* implicit */unsigned char) ((((/* implicit */int) arr_54 [i_15 - 2])) == (((((/* implicit */_Bool) 18014398509481920LL)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (short)(-32767 - 1)))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 2) 
            {
                var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-25740)))))));
                arr_66 [i_17] [i_15] = ((/* implicit */unsigned short) var_8);
                var_43 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_61 [i_15 - 3] [i_15 - 3] [i_15 - 3])), (((4386136282311759617LL) & (((/* implicit */long long int) 529239289))))))), (arr_50 [i_15 - 4])));
                var_44 = ((/* implicit */short) (~(((long long int) arr_49 [i_15 - 4]))));
            }
            for (unsigned int i_19 = 0; i_19 < 19; i_19 += 1) 
            {
                var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) var_4))));
                var_46 &= ((/* implicit */long long int) arr_64 [i_15]);
            }
            /* LoopSeq 1 */
            for (int i_20 = 0; i_20 < 19; i_20 += 3) 
            {
                arr_71 [i_20] [i_17] [i_20] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_15 + 1])) ? (max((((/* implicit */unsigned long long int) arr_57 [i_15 - 2] [i_15 - 3])), (arr_50 [i_15 - 1]))) : (((((/* implicit */_Bool) arr_50 [i_15 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_15 + 1] [i_15 - 4]))) : (7838313504870716900ULL)))));
                var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_12)))) ? (3832641555U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (9223372036854775807LL))))))))));
                /* LoopNest 2 */
                for (signed char i_21 = 0; i_21 < 19; i_21 += 2) 
                {
                    for (int i_22 = 0; i_22 < 19; i_22 += 2) 
                    {
                        {
                            var_48 = ((/* implicit */long long int) (_Bool)1);
                            var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) 7395047202551742534LL))));
                            arr_76 [i_22] [i_21] [i_20] [i_17] [i_15] = ((/* implicit */unsigned char) var_6);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_23 = 2; i_23 < 18; i_23 += 1) 
                {
                    for (short i_24 = 0; i_24 < 19; i_24 += 1) 
                    {
                        {
                            var_50 *= ((/* implicit */long long int) ((((/* implicit */int) arr_70 [i_15 - 2])) < (((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_15 + 1])) && (((/* implicit */_Bool) arr_49 [i_15 - 2])))))));
                            var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) (unsigned short)21210))));
                            arr_81 [i_17] [i_20] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned int) (+(max((0ULL), ((-(9815099642573289574ULL)))))));
                        }
                    } 
                } 
            }
            arr_82 [i_15] [i_17] [i_17] = ((/* implicit */signed char) ((unsigned short) min((((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */long long int) 1729061593U)))), (((/* implicit */long long int) arr_80 [i_15])))));
            /* LoopNest 3 */
            for (unsigned short i_25 = 0; i_25 < 19; i_25 += 4) 
            {
                for (unsigned int i_26 = 0; i_26 < 19; i_26 += 4) 
                {
                    for (long long int i_27 = 0; i_27 < 19; i_27 += 1) 
                    {
                        {
                            var_52 = ((/* implicit */unsigned int) min((var_52), (((/* implicit */unsigned int) arr_58 [15LL] [15LL] [i_27]))));
                            var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) max((((((((/* implicit */int) arr_75 [i_15 - 1] [i_17] [i_25])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))), (((/* implicit */int) ((_Bool) -9223372036854775793LL))))))));
                            var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_87 [i_26] [i_15 - 2] [i_15 + 1] [i_15 - 2] [i_15 - 3] [i_15 - 3]), (arr_87 [5LL] [i_15] [i_15 - 2] [i_15 - 3] [i_15] [i_15])))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_83 [i_15] [i_27] [i_27] [i_26])) : (((/* implicit */int) var_2))))))) : ((((!(((/* implicit */_Bool) 16120149397734708566ULL)))) ? (2326594675974843061ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))))));
                            var_55 = ((/* implicit */short) var_16);
                        }
                    } 
                } 
            } 
        }
        for (int i_28 = 0; i_28 < 19; i_28 += 1) 
        {
            var_56 = ((/* implicit */unsigned int) min((var_56), (((/* implicit */unsigned int) 2326594675974843066ULL))));
            var_57 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_16)))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136))) : (2326594675974843061ULL))) : (((unsigned long long int) 3758096384U))))) ? (((long long int) ((9709767999234348428ULL) == (((/* implicit */unsigned long long int) arr_86 [i_28] [i_28] [i_15 - 3] [i_15]))))) : (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [i_15] [i_15] [i_28]))))))))));
            arr_97 [i_28] [i_15] = ((/* implicit */long long int) arr_61 [(unsigned short)10] [i_15] [i_15]);
            var_58 = ((/* implicit */_Bool) arr_72 [i_15 + 1] [i_15 + 1] [i_15 - 1]);
        }
        for (int i_29 = 0; i_29 < 19; i_29 += 4) 
        {
            arr_102 [i_15] [i_29] = ((/* implicit */long long int) (~(((/* implicit */int) ((short) (+(var_0)))))));
            var_59 ^= ((/* implicit */long long int) min(((+(((/* implicit */int) arr_74 [i_29])))), ((-(((/* implicit */int) var_1))))));
        }
        var_60 = ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)9088)) ? (2147483647) : (((/* implicit */int) arr_49 [i_15])))))), ((~(((((/* implicit */int) var_4)) + (((/* implicit */int) arr_62 [i_15]))))))));
    }
    for (unsigned short i_30 = 0; i_30 < 15; i_30 += 4) 
    {
        var_61 = ((/* implicit */unsigned int) min((var_61), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_74 [i_30])) ? (9815099642573289574ULL) : (((/* implicit */unsigned long long int) 0U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_69 [3ULL] [(unsigned short)0] [i_30])))))) : (arr_103 [i_30] [i_30])))) ? (arr_73 [i_30] [i_30] [i_30] [i_30] [i_30] [i_30]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */unsigned long long int) var_9)) == (var_12))), ((_Bool)1))))))))));
        arr_107 [9LL] [i_30] = ((/* implicit */unsigned short) (unsigned char)9);
        var_62 = ((((/* implicit */_Bool) ((((unsigned long long int) arr_90 [i_30] [i_30] [i_30] [i_30] [i_30])) & (arr_88 [i_30] [i_30] [i_30] [i_30])))) ? (((long long int) (unsigned char)48)) : (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_30] [i_30] [i_30]))));
    }
}
