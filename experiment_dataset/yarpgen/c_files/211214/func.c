/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211214
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */_Bool) ((short) max((var_1), (((/* implicit */signed char) (_Bool)1)))))) ? (576460752303423360ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) | (((/* implicit */int) ((var_3) > (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))))))))));
        var_12 += ((/* implicit */long long int) (-(576460752303423360ULL)));
        var_13 = ((unsigned long long int) min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])));
        var_14 = ((/* implicit */int) ((min((((((/* implicit */int) (signed char)11)) % (((/* implicit */int) var_6)))), (var_10))) >= (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 527306801)) : (17870283321406128238ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))))))));
        arr_2 [i_0] [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)7))))) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_4 [i_1] [i_1]))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned long long int) var_8);
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_7 [i_1] [i_2] [i_2]))));
        }
    }
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)250)), (576460752303423364ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 576460752303423393ULL)) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) var_9)))))));
        var_18 = ((/* implicit */signed char) max((((((/* implicit */int) ((((/* implicit */int) arr_11 [i_3])) >= (((/* implicit */int) var_9))))) << (((((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (var_7))) - (65507LL))))), (((int) arr_1 [i_3]))));
        var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 4; i_4 < 9; i_4 += 3) 
        {
            var_20 = ((/* implicit */signed char) (unsigned char)14);
            var_21 = ((/* implicit */unsigned char) (-(((var_10) | (((/* implicit */int) var_5))))));
            var_22 += ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_3] [i_4])))) : (arr_6 [i_4 + 1]));
        }
    }
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
    {
        arr_18 [i_5] = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << (((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5]))) * (arr_8 [i_5] [i_5]))))));
        /* LoopSeq 4 */
        for (unsigned short i_6 = 2; i_6 < 9; i_6 += 4) 
        {
            arr_23 [i_6] [i_6] [i_6] = max((((/* implicit */int) ((var_10) < (((/* implicit */int) arr_19 [i_5] [i_6 - 2]))))), (((((/* implicit */_Bool) max(((unsigned char)238), (arr_15 [i_5])))) ? (((/* implicit */int) min((arr_16 [i_5]), (((/* implicit */short) arr_11 [i_5]))))) : (max((((/* implicit */int) (unsigned char)18)), (1023))))));
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_9))));
        }
        for (unsigned long long int i_7 = 2; i_7 < 7; i_7 += 2) 
        {
            var_24 = ((/* implicit */unsigned long long int) max((min((((var_2) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)6)))), (max((var_10), (arr_27 [i_5] [i_7]))))), (((int) -124446097))));
            var_25 = ((/* implicit */int) arr_5 [i_7] [i_5]);
            var_26 = (!(((/* implicit */_Bool) ((int) (_Bool)1))));
            var_27 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) > (arr_9 [i_7 + 1] [i_5] [i_5]))))) - ((((!(((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5])))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_6 [i_5])) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)37), (((/* implicit */unsigned short) arr_11 [i_5]))))))))));
        }
        for (short i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((1023), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)254)) && (((/* implicit */_Bool) (signed char)-30)))))))) < (((((/* implicit */_Bool) 3547924124139529511ULL)) ? (arr_26 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_8])))))));
            /* LoopSeq 2 */
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                var_29 = ((/* implicit */int) var_5);
                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) max(((~(max((((/* implicit */long long int) (signed char)118)), (-2989577082691070455LL))))), (((/* implicit */long long int) 1943577154)))))));
                var_31 &= ((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (6870750876441769335LL));
                var_32 -= ((/* implicit */unsigned char) ((short) ((unsigned long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_28 [i_5] [i_9]))))));
            }
            for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) (unsigned short)65517)) : (((/* implicit */int) (unsigned short)50331))))) && (((/* implicit */_Bool) 17870283321406128250ULL))));
                arr_38 [i_8] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_8])) ? (((/* implicit */int) arr_24 [i_5])) : (((((_Bool) arr_16 [i_8])) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) (unsigned char)240))))));
                /* LoopSeq 4 */
                for (long long int i_11 = 1; i_11 < 8; i_11 += 1) 
                {
                    arr_41 [i_5] [i_8] [i_8] [i_10] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_6)))), ((+(((/* implicit */int) (signed char)-68))))))) ? (min((((/* implicit */unsigned int) max((var_10), (((/* implicit */int) var_8))))), (((var_2) ? (((/* implicit */unsigned int) var_10)) : (arr_29 [i_10] [i_5] [i_8]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) var_2)) > (-1054)))))))));
                    arr_42 [i_5] [i_5] [i_8] [i_8] [i_8] [i_11] = ((/* implicit */unsigned short) arr_36 [i_11] [i_8] [i_11] [i_11]);
                    var_34 = ((/* implicit */long long int) (((-(((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_8] [i_8] [i_8])) && (((/* implicit */_Bool) arr_26 [i_11]))))))) > (((((/* implicit */int) arr_4 [i_10] [i_5])) % (arr_34 [i_5] [i_8] [i_10])))));
                    var_35 *= ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) (signed char)-122)), (arr_33 [i_11 - 1] [i_11 + 3] [i_11 + 3] [i_11 + 1])))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_45 [i_5] [i_8] [i_10] [i_8] = ((/* implicit */_Bool) min(((unsigned short)23513), (((/* implicit */unsigned short) max((min((var_8), (((/* implicit */unsigned char) var_1)))), ((unsigned char)221))))));
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_2))))) / (max((((/* implicit */unsigned long long int) ((unsigned char) var_1))), (max((((/* implicit */unsigned long long int) (short)26431)), (131071ULL)))))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_5])) + (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_24 [i_5])))))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_14 = 2; i_14 < 10; i_14 += 2) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_17 [i_14])), (var_6))))))))))));
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (623381179302053508LL)))) + (((unsigned long long int) arr_13 [i_14 + 1]))));
                    }
                    for (unsigned char i_15 = 2; i_15 < 10; i_15 += 2) 
                    {
                        arr_56 [i_15] [i_8] [i_10] [i_8] [i_5] = ((/* implicit */unsigned long long int) min((((unsigned int) arr_44 [i_15] [i_13] [i_8] [i_8] [i_8] [i_5])), (((/* implicit */unsigned int) arr_49 [i_5] [i_8] [i_8] [i_13]))));
                        var_40 += ((/* implicit */int) (((!(((/* implicit */_Bool) arr_17 [i_5])))) && (((/* implicit */_Bool) min(((unsigned short)15207), (((/* implicit */unsigned short) max(((short)16383), (((/* implicit */short) var_4))))))))));
                        arr_57 [i_5] [i_8] [i_15] [i_13] [i_13] [i_15] &= ((/* implicit */unsigned short) -623381179302053508LL);
                    }
                    for (signed char i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        var_41 &= ((/* implicit */short) min(((-(((/* implicit */int) (unsigned char)238)))), (-1)));
                        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) 0ULL))));
                    }
                    for (unsigned int i_17 = 2; i_17 < 7; i_17 += 4) 
                    {
                        arr_63 [i_17] [i_13] [i_10] [i_8] [i_17] &= ((/* implicit */unsigned short) max((-623381179302053505LL), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)50348)) ? (1053) : (-1054))) >> (((((/* implicit */int) arr_1 [i_5])) + (89))))))));
                        arr_64 [i_5] [i_5] [i_8] [i_8] [i_8] [i_13] [i_17] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_62 [i_13] [i_17] [i_17 + 3] [i_17] [i_17])) + (((/* implicit */int) var_4))))));
                        arr_65 [i_17] [i_8] [i_10] [i_8] [i_8] [i_5] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_44 [i_17 + 2] [i_17 + 3] [i_8] [i_8] [i_17 - 1] [i_17 + 4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50349))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1207371798))))))), ((+(-409523436)))));
                        var_43 = (((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_34 [i_5] [i_8] [i_13])) & (arr_51 [i_17] [i_10])))))) ? ((-(((/* implicit */int) arr_58 [i_17 - 2] [i_8] [i_17] [i_8] [i_17 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_17] [i_17] [i_8]))))));
                    }
                    var_44 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((((/* implicit */int) arr_43 [i_8] [i_8] [i_8] [i_8])) | (((/* implicit */int) var_2))))) > (((((/* implicit */_Bool) var_10)) ? (-623381179302053479LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-16369))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_21 [i_8])))) : (arr_10 [i_13])));
                    arr_66 [i_5] [i_8] [i_10] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_13])) ? (((/* implicit */int) var_5)) : (-1052)))) ? (((/* implicit */int) ((short) arr_15 [i_5]))) : (((((/* implicit */int) arr_15 [i_13])) / (((/* implicit */int) arr_15 [i_5])))));
                }
                for (signed char i_18 = 2; i_18 < 10; i_18 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_45 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_52 [i_18] [i_18 + 1] [i_18 - 1] [i_18] [i_18] [i_18 - 2] [i_18 + 1]))) - (min((((/* implicit */int) (!(var_5)))), ((~(((/* implicit */int) arr_31 [i_8] [i_8] [i_8]))))))));
                        arr_73 [i_5] [i_8] [i_10] [i_18] [i_8] = ((/* implicit */long long int) -2030227376);
                    }
                    var_46 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(arr_50 [i_18] [i_18] [i_18] [i_18] [i_18 + 1] [i_18])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_18] [i_10] [i_8] [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_46 [i_8] [i_8] [i_8]))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)163)))))));
                }
                arr_74 [i_5] [i_5] &= ((/* implicit */unsigned char) max((((var_5) || (((/* implicit */_Bool) arr_51 [i_5] [i_5])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_72 [i_5] [i_8] [i_8] [i_10])) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) arr_24 [i_8]))))) && (((/* implicit */_Bool) (unsigned char)255))))));
            }
            arr_75 [i_8] = ((/* implicit */long long int) arr_6 [i_5]);
        }
        for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 4) 
        {
            var_47 = ((/* implicit */signed char) arr_43 [i_20] [i_5] [i_5] [i_20]);
            var_48 = ((/* implicit */unsigned char) ((-1054) > (max((((/* implicit */int) max((((/* implicit */short) arr_28 [i_20] [i_20])), (var_6)))), (((((/* implicit */int) (short)21359)) % (((/* implicit */int) (signed char)-60))))))));
            var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */int) (signed char)-47)) : ((-(((/* implicit */int) (unsigned char)197)))))), (((((/* implicit */int) var_6)) % (((/* implicit */int) ((unsigned char) var_5))))))))));
        }
        var_50 = min(((-(((((/* implicit */_Bool) arr_77 [i_5] [i_5] [i_5])) ? (arr_22 [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_5] [i_5] [i_5] [i_5] [i_5]))))))), (((/* implicit */long long int) var_1)));
        arr_78 [i_5] = ((/* implicit */short) ((unsigned short) (unsigned char)89));
        var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) ((((((/* implicit */_Bool) arr_36 [i_5] [i_5] [i_5] [i_5])) ? (7) : (((/* implicit */int) ((signed char) -801868975))))) > (((/* implicit */int) (signed char)46)))))));
    }
    var_52 = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) 5005835571263552988LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-2932889928802850799LL))) - (((/* implicit */long long int) ((/* implicit */int) (short)-28904))))), ((+((-(var_7)))))));
    /* LoopNest 2 */
    for (unsigned char i_21 = 3; i_21 < 9; i_21 += 3) 
    {
        for (unsigned char i_22 = 3; i_22 < 9; i_22 += 4) 
        {
            {
                var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) var_3))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_23 = 0; i_23 < 11; i_23 += 1) 
                {
                    var_54 = ((/* implicit */signed char) ((((/* implicit */long long int) 1876577908)) < (5005835571263552962LL)));
                    arr_88 [(short)0] [i_22] [(short)0] &= (signed char)-119;
                    /* LoopSeq 4 */
                    for (short i_24 = 1; i_24 < 8; i_24 += 2) 
                    {
                        var_55 = ((/* implicit */_Bool) ((((/* implicit */long long int) -801868961)) ^ (7454270025543894705LL)));
                        arr_91 [i_21] [i_21] = ((/* implicit */short) arr_52 [i_24] [i_23] [i_23] [i_22] [i_22] [i_21] [i_21]);
                        var_56 = (signed char)-119;
                        var_57 = ((/* implicit */signed char) max((var_57), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-37)))))));
                    }
                    for (unsigned int i_25 = 3; i_25 < 10; i_25 += 4) 
                    {
                        var_58 = ((/* implicit */unsigned char) var_10);
                        var_59 = ((/* implicit */unsigned short) var_10);
                        var_60 = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)203))))) * (((((/* implicit */long long int) 513485819)) & (var_3)))));
                        var_61 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) -18))) ? (513485819) : (2)));
                    }
                    for (unsigned short i_26 = 0; i_26 < 11; i_26 += 4) 
                    {
                        var_62 = ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_47 [i_26] [i_22] [i_23] [i_26] [i_22] [i_22])) > (((/* implicit */int) arr_47 [i_21] [i_21] [i_21] [i_22] [i_23] [i_26])))));
                        arr_100 [i_21] [i_21] [i_23] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_21] [i_22] [i_21] [i_21])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_21 + 2]))));
                        var_63 = ((/* implicit */short) min((var_63), (((/* implicit */short) ((((-374794269) % (arr_7 [i_26] [i_22] [i_26]))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                    }
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        arr_103 [i_21] [i_21] = ((/* implicit */unsigned short) var_3);
                        var_64 = ((((/* implicit */int) ((unsigned char) arr_32 [i_22] [i_21]))) - ((~(33554431))));
                    }
                }
            }
        } 
    } 
}
