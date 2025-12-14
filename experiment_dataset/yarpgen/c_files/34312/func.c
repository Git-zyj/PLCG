/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34312
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */short) arr_8 [i_0] [i_1] [i_1]);
                    arr_10 [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) arr_6 [i_0] [i_2])) | (((/* implicit */int) arr_0 [i_1])))))), (((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) (unsigned char)142))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (signed char i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            arr_18 [i_1] [i_1] [16U] [i_3] [i_4 + 3] = ((/* implicit */unsigned char) 8237465490727492338LL);
                            var_18 = var_12;
                            arr_19 [i_4 + 3] [i_1] [i_2] [(signed char)7] [i_1] [i_1] [i_0 + 1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((short) var_1))), (((arr_12 [i_2] [i_1] [i_0]) ? (arr_2 [i_0 - 1]) : (((3352064089U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))));
                            var_19 *= ((/* implicit */unsigned short) ((long long int) arr_4 [i_0 + 1]));
                        }
                        for (unsigned char i_5 = 1; i_5 < 17; i_5 += 1) 
                        {
                            arr_23 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) max((((var_3) & (arr_15 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1]))), (((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) (unsigned char)142)))) : (((((/* implicit */_Bool) (short)-19646)) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) var_7))))))));
                            var_20 += ((/* implicit */unsigned char) var_11);
                            arr_24 [i_0 - 1] [i_1] [i_0] [i_0 - 1] [i_0 + 1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_14)), (((1873608653561899798ULL) << (((8237465490727492338LL) - (8237465490727492323LL)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 3) 
                        {
                            arr_27 [i_1] [i_1] [i_2] [i_2] [1LL] [(unsigned char)5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)13)) & (((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 109225839262094317LL)) ? (((((/* implicit */int) (unsigned char)7)) + (((/* implicit */int) arr_8 [i_1] [i_3] [i_1])))) : (((/* implicit */int) var_7))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))) ^ (8237465490727492338LL))));
                            var_23 &= ((/* implicit */unsigned char) (signed char)(-127 - 1));
                            arr_30 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */short) ((unsigned int) var_12));
                            var_24 |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)8)) >= (((/* implicit */int) (unsigned short)13941)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (8237465490727492329LL)));
                        }
                        var_25 = ((/* implicit */unsigned short) arr_8 [i_1] [i_2] [i_1]);
                        var_26 &= ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */int) ((unsigned char) (signed char)-48))), (1876678507))));
                        arr_31 [i_0 + 1] [i_1] [i_2] [i_3] [8ULL] = ((/* implicit */int) ((short) var_7));
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (!(((/* implicit */_Bool) (~((~(arr_28 [i_0 + 1] [i_1] [i_2])))))))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                    {
                        arr_34 [i_0 + 1] [i_1] [i_1] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_16) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_16 [i_0] [i_0 - 1] [i_0] [i_1] [i_0 - 1] [i_0 + 1]))))))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)80)) + (((/* implicit */int) min(((short)-16384), (arr_11 [i_0] [(short)19] [i_8])))))))));
                        var_28 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((unsigned char) arr_9 [i_0 + 1] [(_Bool)1] [i_8]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) != (((/* implicit */int) (unsigned char)0)))))) : (var_2)));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_9] [i_2] [i_0 + 1])) ? (var_3) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) (unsigned short)14406)) ? (arr_33 [i_0] [i_1] [i_2] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                        arr_37 [i_0] [i_1] [i_2] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_14 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_1])) : (((/* implicit */int) arr_14 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_1]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 3; i_10 < 19; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1] [i_2] [16U])) >> (((((/* implicit */int) arr_5 [i_10])) - (158))))) * (((/* implicit */int) (signed char)-118)))))));
                        var_31 = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_7)))) & (((((/* implicit */int) arr_29 [i_10 + 1] [i_2] [i_1] [i_1] [i_0])) >> (((arr_25 [i_0 - 1] [4] [(unsigned char)0] [i_1] [i_2] [i_0 + 1]) - (8544026509887414116LL)))))))) : (((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_7)))) & (((((/* implicit */int) arr_29 [i_10 + 1] [i_2] [i_1] [i_1] [i_0])) >> (((((arr_25 [i_0 - 1] [4] [(unsigned char)0] [i_1] [i_2] [i_0 + 1]) - (8544026509887414116LL))) + (8932872078987621643LL))))))));
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_10 + 1] [(unsigned char)19] [i_10 - 3])) : ((-(((/* implicit */int) (short)16376))))));
                        var_33 = ((((/* implicit */_Bool) (short)-7315)) ? (8237465490727492329LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))));
                    }
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) arr_32 [i_0] [i_0 - 1] [(signed char)4]))))))));
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [6U]))) - (var_9)));
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) 
    {
        var_36 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65523))));
        /* LoopSeq 2 */
        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
        {
            var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-5379)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44))) : (((((/* implicit */_Bool) (short)5378)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5387))) : (4133109399U))))))));
            /* LoopSeq 1 */
            for (short i_13 = 1; i_13 < 23; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    for (unsigned int i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned int) ((signed char) ((var_10) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))));
                            arr_58 [i_11] [i_11] [i_12] [i_13 - 1] [i_12] [i_14] [14U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_53 [i_11] [i_12] [i_12] [i_14] [i_15])) ? (((((/* implicit */_Bool) arr_48 [i_12] [i_12] [i_13 + 1])) ? (((/* implicit */int) (signed char)117)) : (arr_45 [i_13 + 1]))) : (((((/* implicit */_Bool) 4133109411U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)130))))));
                            var_39 = ((/* implicit */int) -6136210736367320316LL);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_17 = 2; i_17 < 23; i_17 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_62 [i_13 + 1] [i_16] [i_12] [(_Bool)1] [i_16] [i_16] [(short)21])) >= (((/* implicit */int) arr_62 [i_13 + 1] [i_16] [i_12] [i_16] [i_16] [i_17] [(unsigned short)21]))));
                        var_41 -= ((/* implicit */unsigned short) var_7);
                        arr_63 [i_11] [i_12] [6U] [i_16] [i_12] [i_16] [i_17 - 2] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_45 [i_13 - 1])) + (2983625094715068224ULL)))));
                        var_42 &= ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (unsigned short)29059)) <= (((/* implicit */int) (unsigned short)46453)))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 24; i_18 += 1) 
                    {
                        var_43 &= ((/* implicit */int) ((((((/* implicit */_Bool) 1636696575)) ? (1056964608LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)106))))))));
                        arr_67 [i_11] [i_12] [i_13 - 1] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_54 [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_13] [i_13] [i_13] [i_13 + 1] [i_13 - 1]))) : (((((/* implicit */_Bool) 3609556608734304784ULL)) ? (var_12) : (((/* implicit */unsigned int) var_3))))));
                        arr_68 [(_Bool)1] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_12] [i_12])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_65 [i_11] [i_12] [i_13 + 1] [20U] [i_12] [i_18]))))) ? ((~(1879048192U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_11] [i_12] [i_13 - 1] [(unsigned char)18] [i_18])))));
                    }
                    for (long long int i_19 = 2; i_19 < 22; i_19 += 2) 
                    {
                        var_44 = ((/* implicit */unsigned int) arr_70 [i_11] [i_12] [i_13 + 1] [i_16] [i_11]);
                        var_45 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 4294967295U)) ? (var_3) : (((/* implicit */int) (short)5378))))));
                    }
                    for (long long int i_20 = 1; i_20 < 22; i_20 += 3) 
                    {
                        var_46 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_12])) ? (((/* implicit */int) arr_61 [i_11] [i_12] [i_13] [i_16] [i_16] [i_20])) : (((/* implicit */int) arr_42 [i_12])))));
                        var_47 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_57 [i_20 - 1] [i_16] [i_11] [i_12] [i_11])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_62 [i_13] [i_16] [i_12] [i_11] [i_12] [i_11] [i_11]))))));
                    }
                    arr_73 [i_11] [i_12] [i_13] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [10U]))) : (((((/* implicit */_Bool) 2415919103U)) ? (var_5) : (((/* implicit */unsigned long long int) arr_49 [i_11] [i_16]))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_21 = 0; i_21 < 24; i_21 += 2) 
                    {
                        var_48 = ((/* implicit */unsigned short) arr_49 [i_13 - 1] [i_13 - 1]);
                        var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-17058)) ? (8796093022207ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45)))));
                        arr_77 [i_11] [i_11] [(short)11] [i_12] [i_11] = var_11;
                    }
                    for (long long int i_22 = 0; i_22 < 24; i_22 += 2) /* same iter space */
                    {
                        arr_80 [i_12] [i_16] [(unsigned char)11] [i_16] [i_22] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_56 [i_13] [i_12] [i_13] [i_13 + 1] [i_13 - 1])) ? (((((/* implicit */int) (unsigned char)27)) & (((/* implicit */int) (unsigned char)40)))) : (((/* implicit */int) var_13))));
                        arr_81 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) arr_75 [i_11]);
                        var_50 = ((/* implicit */unsigned long long int) arr_69 [i_11] [i_12] [i_12] [i_12] [i_13] [i_16] [23U]);
                        var_51 = ((/* implicit */int) (-(2489857440U)));
                        var_52 = ((/* implicit */int) ((((/* implicit */_Bool) 3657752788U)) ? (var_5) : (arr_64 [i_13 - 1] [i_16] [i_16] [i_12] [i_16])));
                    }
                    for (long long int i_23 = 0; i_23 < 24; i_23 += 2) /* same iter space */
                    {
                        var_53 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_66 [(unsigned char)20] [i_13] [(short)1] [i_13 - 1] [i_13 + 1]))));
                        arr_85 [i_11] [i_11] [i_12] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) arr_56 [i_11] [i_12] [i_11] [i_16] [i_23]);
                    }
                    arr_86 [i_11] [i_11] [i_11] [i_11] [18ULL] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_43 [i_13]))));
                    var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_69 [i_11] [i_12] [i_12] [i_12] [i_12] [i_13 + 1] [i_16])) : (((/* implicit */int) arr_56 [i_16] [i_12] [i_12] [i_12] [i_11]))))) : (((3763499697U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_11] [i_12] [i_13 - 1])))))));
                }
                for (unsigned char i_24 = 3; i_24 < 22; i_24 += 1) 
                {
                    var_55 = ((/* implicit */long long int) (-(((/* implicit */int) arr_55 [i_24 + 2] [i_12] [i_12] [i_13 - 1]))));
                    var_56 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)13552)) ? (((/* implicit */int) (short)-5379)) : (((/* implicit */int) (unsigned short)65535))))) : ((~(2542455737U))));
                }
                var_57 = ((/* implicit */unsigned short) (-(125847113)));
            }
        }
        for (unsigned short i_25 = 0; i_25 < 24; i_25 += 1) /* same iter space */
        {
            arr_93 [2LL] [i_25] [i_25] = ((/* implicit */unsigned char) arr_71 [6LL]);
            arr_94 [i_25] [i_11] [i_11] = ((/* implicit */unsigned char) arr_70 [i_25] [i_25] [i_25] [i_11] [i_11]);
            var_58 = ((/* implicit */long long int) min((var_58), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [i_11] [i_25])) ? (((/* implicit */unsigned int) ((var_3) ^ (((/* implicit */int) (short)-12214))))) : (1879048174U))))));
            var_59 = ((/* implicit */int) ((((/* implicit */_Bool) arr_60 [22U] [i_11] [i_25] [22U])) ? (((/* implicit */unsigned int) -125847096)) : (arr_60 [(unsigned char)16] [i_25] [i_25] [i_25])));
        }
    }
    var_60 = ((/* implicit */long long int) var_16);
    var_61 = ((/* implicit */signed char) min((var_61), (((/* implicit */signed char) ((max((((1450958954U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))), (((/* implicit */unsigned int) var_15)))) <= (((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (max((((/* implicit */int) (_Bool)0)), (var_6)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_26 = 0; i_26 < 11; i_26 += 2) 
    {
        for (short i_27 = 0; i_27 < 11; i_27 += 1) 
        {
            {
                var_62 *= ((/* implicit */unsigned int) (unsigned char)58);
                /* LoopNest 3 */
                for (unsigned char i_28 = 0; i_28 < 11; i_28 += 3) 
                {
                    for (signed char i_29 = 4; i_29 < 10; i_29 += 1) 
                    {
                        for (unsigned char i_30 = 0; i_30 < 11; i_30 += 3) 
                        {
                            {
                                var_63 = ((/* implicit */unsigned char) arr_0 [(unsigned short)4]);
                                var_64 = ((/* implicit */unsigned short) max((var_64), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) max((((/* implicit */short) arr_84 [i_26] [i_26] [i_27] [(_Bool)1] [i_29] [i_30])), ((short)27025)))) ? ((~(3018699271U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_29 - 2] [i_29 - 2] [i_26]))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_65 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (var_3))) < (((/* implicit */int) min(((unsigned short)24508), (((/* implicit */unsigned short) var_15)))))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1))))));
}
