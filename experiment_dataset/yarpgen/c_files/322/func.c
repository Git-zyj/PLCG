/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/322
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_10 = ((/* implicit */short) max((((_Bool) arr_0 [i_0])), (min((arr_1 [i_0]), (arr_1 [i_0])))));
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) (short)-9813)), (4134115961U))))));
    }
    for (unsigned char i_1 = 4; i_1 < 15; i_1 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_10 [i_1] = ((/* implicit */_Bool) var_1);
            var_12 = ((/* implicit */short) 4134115961U);
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            var_13 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 10088532452714588587ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)9813))) : (279223176896970752LL))) / ((-9223372036854775807LL - 1LL))));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                for (signed char i_5 = 1; i_5 < 16; i_5 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_6 = 1; i_6 < 16; i_6 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)28))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)9814)) ? (((((/* implicit */_Bool) (short)9813)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_15 [i_1] [(_Bool)1] [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106)))));
                            var_16 = ((/* implicit */unsigned char) (~(arr_18 [i_1])));
                            arr_22 [i_3] [i_3] [i_4] [i_6] [i_4] [i_4] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1LL))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */short) (+(18U)));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)120))) : (var_7))))));
                            var_19 = ((/* implicit */unsigned short) ((_Bool) var_5));
                        }
                        for (short i_8 = 3; i_8 < 16; i_8 += 3) 
                        {
                            arr_27 [i_1 - 1] [i_5] [i_1] [4ULL] [i_5] [(short)8] [i_1] = ((/* implicit */unsigned int) arr_7 [i_8] [i_8] [i_8]);
                            arr_28 [i_4] [2LL] [i_4] [i_4] [i_8] [i_4] |= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (8358211620994963024ULL) : (((/* implicit */unsigned long long int) var_0)))));
                            arr_29 [(short)1] [(short)1] [i_1] [i_8] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)36149)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))));
                        }
                        var_20 -= ((/* implicit */short) (~((~(((/* implicit */int) var_3))))));
                        /* LoopSeq 4 */
                        for (long long int i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
                        {
                            var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)3)) ? ((-(var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (short)-32751)) : (((/* implicit */int) (unsigned short)59071)))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_1] [i_1 - 2] [i_1 + 2] [i_1 - 2] [i_5 + 1])) ? (((/* implicit */int) arr_30 [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_5 + 1])) : (((/* implicit */int) (unsigned short)6464))));
                            var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)6464))));
                        }
                        for (long long int i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
                        {
                            arr_36 [i_1] [0ULL] [5ULL] [(short)13] [i_1] [16LL] = ((((/* implicit */_Bool) (unsigned char)120)) ? (9366258118109664153ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)40081)) : (((/* implicit */int) var_8))))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && ((_Bool)1))))) : (1178325409U)));
                            arr_37 [i_4] |= ((/* implicit */short) (~(((unsigned long long int) var_4))));
                        }
                        for (short i_11 = 2; i_11 < 16; i_11 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) ((long long int) 2790526523U));
                            var_26 = (-(((/* implicit */int) var_6)));
                        }
                        for (short i_12 = 2; i_12 < 16; i_12 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) ? (2422353083U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                            var_28 = ((/* implicit */short) ((_Bool) (+(arr_31 [i_1] [(signed char)5] [i_1] [i_5] [i_12] [i_12 + 1] [i_1]))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_13 = 1; i_13 < 13; i_13 += 3) 
                        {
                            var_29 = (((_Bool)0) ? (-5977854312886197866LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-9829))));
                            var_30 |= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (3116641886U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 1) /* same iter space */
                        {
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_4] [i_4])) ? (((/* implicit */int) arr_12 [i_1 - 2] [i_3] [i_4])) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))) : (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)127)) - (111)))))));
                            var_32 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) arr_23 [i_1] [(unsigned char)2] [i_4] [i_5]))))) : (arr_26 [i_5 - 1] [i_3])));
                            var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_1 - 1] [15U] [i_5 + 1] [i_1])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned short) 1152921504338411520LL)))));
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 1) /* same iter space */
                        {
                            var_35 |= ((/* implicit */unsigned int) var_6);
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_45 [i_1] [15LL] [i_1] [15LL] [i_15] [i_1 - 4]) : (852955812U)))) ? (3442011475U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9))))));
                            var_37 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_1 - 3] [i_3] [i_1 - 3] [i_5] [13LL] [5LL])) ? (((/* implicit */int) (short)9816)) : (((/* implicit */int) (short)-9829))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-4373)))));
                        }
                    }
                } 
            } 
            var_38 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) 1686332620900634979LL))));
            /* LoopSeq 3 */
            for (signed char i_16 = 3; i_16 < 15; i_16 += 1) 
            {
                var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-12920)))))));
                var_40 = ((long long int) -1152921504338411516LL);
                var_41 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)4372)) : (((/* implicit */int) var_3))))));
                var_42 = ((/* implicit */long long int) min((var_42), (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (((var_4) ? (arr_18 [(unsigned short)8]) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [(short)14] [i_16])))))))));
            }
            for (int i_17 = 0; i_17 < 17; i_17 += 2) 
            {
                var_43 = ((/* implicit */short) ((((/* implicit */_Bool) 10088532452714588587ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)12946))) : (1073741808LL)));
                var_44 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)30290))));
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 17; i_18 += 3) 
                {
                    for (unsigned int i_19 = 0; i_19 < 17; i_19 += 3) 
                    {
                        {
                            var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 2])) ? (((/* implicit */int) ((short) arr_23 [i_3] [i_17] [i_17] [i_19]))) : ((-(((/* implicit */int) var_5))))));
                            var_46 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)30288)) ? (((/* implicit */int) ((((/* implicit */_Bool) 3881151044U)) || (((/* implicit */_Bool) 18446744073709551615ULL))))) : (((/* implicit */int) var_8))));
                            arr_63 [(signed char)4] [i_3] [i_1] [i_18] [i_18] [i_19] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (-8528354548691340803LL) : (((/* implicit */long long int) 1178325409U)))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_20 = 3; i_20 < 14; i_20 += 3) 
            {
                var_47 += ((/* implicit */_Bool) (-(1ULL)));
                var_48 = ((/* implicit */short) arr_2 [i_3]);
                arr_68 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [16ULL] [i_1] [i_20] [16ULL])) ? (((/* implicit */int) arr_25 [i_1] [i_1] [i_20] [i_20 - 3])) : (((/* implicit */int) (_Bool)1))));
            }
        }
        for (unsigned int i_21 = 3; i_21 < 16; i_21 += 4) 
        {
            var_49 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (((unsigned long long int) max((-1946486953), (((/* implicit */int) var_3)))))));
            var_50 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-34))) - (7ULL))) | (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_59 [i_1] [i_1] [i_21] [8LL])) : (((/* implicit */int) (short)7470)))), (((/* implicit */int) (unsigned short)59338)))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_22 = 0; i_22 < 17; i_22 += 3) /* same iter space */
        {
            arr_73 [i_1] = ((/* implicit */short) ((_Bool) ((unsigned int) (short)(-32767 - 1))));
            var_51 &= ((/* implicit */short) ((((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) (short)21238))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [(unsigned short)2] [i_22])))));
            arr_74 [i_1 - 2] [i_1] = ((/* implicit */unsigned char) (~(var_1)));
        }
        for (unsigned long long int i_23 = 0; i_23 < 17; i_23 += 3) /* same iter space */
        {
            arr_77 [i_1] [6U] [(signed char)11] = min((((((/* implicit */_Bool) min((var_2), (var_5)))) ? (min((((/* implicit */unsigned long long int) (signed char)-1)), (11412142500604686469ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)30007)) * (((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) (signed char)-22)));
            var_52 = ((((/* implicit */_Bool) ((int) var_3))) ? (((long long int) (signed char)127)) : ((((~(var_7))) / ((-(var_1))))));
            var_53 -= ((/* implicit */long long int) (~(((int) ((((/* implicit */_Bool) -8660054863470513131LL)) ? (12804016578094021767ULL) : (((/* implicit */unsigned long long int) 5046260223371644011LL)))))));
        }
        var_54 -= ((/* implicit */long long int) ((((_Bool) arr_19 [i_1] [i_1] [i_1] [8ULL])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1 - 3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)14206))))) : (max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [i_1] [(unsigned char)4] [i_1 + 2] [i_1]))))), (2894888340U)))));
        var_55 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12921)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1] [i_1 - 3] [0LL]))) : (1831219018U)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_16 [i_1] [i_1 - 3] [(short)10]))))));
        arr_78 [i_1] [i_1] = ((/* implicit */short) (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), ((~(var_7)))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_24 = 3; i_24 < 13; i_24 += 1) 
    {
        arr_81 [i_24] [(signed char)1] = ((/* implicit */unsigned int) (~(var_7)));
        /* LoopNest 3 */
        for (signed char i_25 = 0; i_25 < 14; i_25 += 3) 
        {
            for (unsigned long long int i_26 = 1; i_26 < 12; i_26 += 3) 
            {
                for (short i_27 = 1; i_27 < 13; i_27 += 3) 
                {
                    {
                        var_56 |= ((/* implicit */short) ((long long int) 1492758825119158215LL));
                        arr_88 [i_24] [i_25] [(unsigned char)0] [i_27] [i_25] [i_27] = ((/* implicit */unsigned long long int) (unsigned short)1008);
                        arr_89 [i_24] [i_24] [12LL] [i_24] [2LL] &= ((/* implicit */short) 6596215945687630177ULL);
                    }
                } 
            } 
        } 
        arr_90 [(unsigned short)1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)8314))))) + ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7470))) : (1694826958U)))));
        var_57 = ((/* implicit */unsigned long long int) min((var_57), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)171))) : (666098983U)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_46 [6U] [i_24]))))))))));
    }
    /* vectorizable */
    for (long long int i_28 = 0; i_28 < 23; i_28 += 1) /* same iter space */
    {
        var_58 += ((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) (short)7470)))));
        var_59 += ((/* implicit */_Bool) 1492758825119158215LL);
        var_60 |= (~(((long long int) 1471759110U)));
    }
    /* vectorizable */
    for (long long int i_29 = 0; i_29 < 23; i_29 += 1) /* same iter space */
    {
        var_61 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)11621))));
        var_62 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((int) arr_91 [i_29] [i_29])) : ((~(((/* implicit */int) var_3))))));
        var_63 = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)7462)) ? (4790517402433003205LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_64 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1)))));
    }
    var_65 = ((/* implicit */unsigned int) var_7);
}
