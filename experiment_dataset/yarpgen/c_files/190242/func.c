/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190242
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            var_18 &= ((/* implicit */short) (~((+(((/* implicit */int) (signed char)99))))));
            var_19 = ((/* implicit */signed char) 18446744073709551615ULL);
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (0ULL) : (((30ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-100)))))));
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((long long int) (-(0ULL)))))));
            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0]))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    for (signed char i_5 = 1; i_5 < 19; i_5 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) (+(arr_6 [(unsigned char)19] [i_2])));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (signed char)-92))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (0U) : (818692584U))) : (3938414857U)));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (signed char)11))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_3 + 2])) ? (((/* implicit */long long int) arr_11 [i_3 + 1] [i_3] [i_3])) : (arr_4 [i_3 + 2])));
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))) : (1ULL)))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_3]))))));
            }
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_28 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)21517))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 3938414857U)) ? (((/* implicit */int) (short)-32759)) : (((/* implicit */int) (short)8209))))) > (((((/* implicit */_Bool) 976842842U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-35))) : (arr_13 [i_0] [i_2] [i_0]))))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-109))) & ((+(arr_19 [i_0] [i_2] [i_6] [i_2])))))));
                var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_6] [i_2] [i_2] [i_0]))));
                var_30 = (+(2102705710941935325LL));
                var_31 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [18LL] [i_2] [i_2])))))) % (arr_19 [i_0] [(_Bool)1] [i_2] [i_6])));
                var_32 ^= ((/* implicit */long long int) ((unsigned char) 13ULL));
            }
            for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                var_33 = ((long long int) max((arr_17 [i_0] [i_0] [3U] [i_7]), (((/* implicit */long long int) (!(arr_2 [i_0] [i_0]))))));
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    var_34 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 3301693426U)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (unsigned char)0))))));
                    var_35 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) max((((_Bool) (signed char)99)), (((_Bool) (_Bool)1)))))));
                    var_36 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_7] [i_2] [i_7] [i_7] [1U])) ? (((/* implicit */long long int) ((/* implicit */int) (short)6235))) : (-7802637868510165149LL)))) ? (14ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)6)) ^ (((/* implicit */int) (_Bool)1)))))))) ? ((((!(((/* implicit */_Bool) arr_11 [i_8] [i_8] [i_8])))) ? (940324855U) : (((/* implicit */unsigned int) max((arr_8 [i_0] [(short)0] [(signed char)1]), (((/* implicit */int) (unsigned short)13))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) min((arr_23 [i_0] [i_2] [i_0] [i_0]), (arr_23 [(_Bool)1] [i_2] [i_2] [i_8]))))))));
                    var_37 = ((/* implicit */_Bool) ((unsigned char) arr_5 [8LL] [i_7] [i_0]));
                }
            }
            var_38 = ((/* implicit */unsigned int) (signed char)-99);
        }
        var_39 = ((/* implicit */signed char) arr_6 [i_0] [i_0]);
        var_40 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (2370402858U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29407))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775798LL)) ? (((/* implicit */int) arr_15 [(short)12] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)127))))) ? (((/* implicit */int) (signed char)13)) : ((+(((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0])))))))));
        var_41 = ((/* implicit */unsigned int) (unsigned char)3);
    }
    for (long long int i_9 = 3; i_9 < 14; i_9 += 4) /* same iter space */
    {
        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_9 - 3] [i_9 + 1])) ? (((/* implicit */int) arr_27 [i_9 - 3] [i_9 + 2])) : (((/* implicit */int) arr_27 [i_9] [i_9]))))) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)25702)) || (((/* implicit */_Bool) 7464884228401935896LL)))))));
        var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) (+((~(((/* implicit */int) ((signed char) 24U))))))))));
        var_44 = ((/* implicit */long long int) max((24U), (((/* implicit */unsigned int) (-((((_Bool)0) ? (((/* implicit */int) arr_12 [i_9] [i_9] [i_9] [i_9 - 3] [i_9] [i_9])) : (((/* implicit */int) (signed char)127)))))))));
        var_45 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) (((-9223372036854775807LL - 1LL)) < (0LL)))) : (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-5803761892018850696LL))) ? (((/* implicit */int) (unsigned char)138)) : ((-(((/* implicit */int) (signed char)-44))))))));
    }
    /* vectorizable */
    for (long long int i_10 = 3; i_10 < 14; i_10 += 4) /* same iter space */
    {
        var_46 = arr_11 [11LL] [i_10] [i_10];
        /* LoopSeq 1 */
        for (long long int i_11 = 0; i_11 < 17; i_11 += 4) 
        {
            var_47 *= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)9))));
            var_48 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [7LL])) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_10] [i_10 + 2] [i_11]))) : (33521664U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))));
        }
        var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (arr_7 [6LL]) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)206))) & (-6600759744658239727LL)))));
    }
    var_50 = ((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) var_14)) : (((/* implicit */int) min(((_Bool)1), (var_9))))));
    /* LoopSeq 1 */
    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 2) 
    {
        var_51 = ((/* implicit */_Bool) max((var_51), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 874493566192844171LL)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 682969775748510273LL)) ? (1485416304U) : (556653238U)))))) ? ((~(arr_34 [i_12]))) : (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), ((((_Bool)0) ? (((/* implicit */int) arr_33 [i_12])) : (((/* implicit */int) (signed char)-104))))))))))));
        var_52 = ((long long int) ((signed char) max(((signed char)30), (arr_33 [i_12]))));
        /* LoopNest 3 */
        for (long long int i_13 = 0; i_13 < 23; i_13 += 4) 
        {
            for (long long int i_14 = 4; i_14 < 22; i_14 += 4) 
            {
                for (int i_15 = 2; i_15 < 21; i_15 += 4) 
                {
                    {
                        var_53 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(5LL))), (arr_35 [i_14 - 2] [i_14 - 1] [i_15 + 1])))) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_12] [i_12] [i_12])) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (signed char)98))))))))));
                        /* LoopSeq 4 */
                        for (short i_16 = 1; i_16 < 21; i_16 += 1) /* same iter space */
                        {
                            var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (+(2147483647))))) ? (((long long int) arr_42 [i_16 + 1] [i_15 - 1] [i_15] [i_15] [i_15] [i_15 + 1] [i_14 - 3])) : (((((/* implicit */_Bool) arr_41 [11ULL] [i_15 - 2] [i_16])) ? ((((_Bool)1) ? (8625738292955848906LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)34))))) : (((((/* implicit */_Bool) 6297532277292553386LL)) ? (arr_34 [i_12]) : (8417795561862967018LL)))))));
                            var_55 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-32743))));
                        }
                        for (short i_17 = 1; i_17 < 21; i_17 += 1) /* same iter space */
                        {
                            var_56 = ((/* implicit */short) ((signed char) (!(arr_43 [i_12] [i_12]))));
                            var_57 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_12] [i_13] [(_Bool)1] [i_17 + 2])) ^ (((/* implicit */int) (_Bool)1))))) ? ((+(9223372036586340352LL))) : (-3217860783687033420LL)))) ? (((((/* implicit */_Bool) arr_42 [i_15 - 2] [i_13] [i_17] [i_15 - 2] [(_Bool)1] [17U] [i_15])) ? (((/* implicit */long long int) 713143169U)) : ((((_Bool)1) ? (1736208743048289844LL) : (arr_34 [i_12]))))) : (((((/* implicit */_Bool) arr_42 [(_Bool)1] [(unsigned char)13] [i_14] [i_14 - 2] [i_15 + 2] [(_Bool)1] [i_17])) ? (max((3934094555785443697LL), (0LL))) : (((arr_43 [i_12] [i_15 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (arr_40 [(signed char)2] [16U] [(unsigned char)10])))))));
                            var_58 = ((/* implicit */signed char) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) 9223372036854775807LL)))))))));
                        }
                        for (short i_18 = 1; i_18 < 21; i_18 += 1) /* same iter space */
                        {
                            var_59 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                            var_60 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)0))))) ? ((((!(((/* implicit */_Bool) 494264279082533429LL)))) ? (((9223372036586340352LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)123))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_14 - 4] [i_18] [i_14] [i_18 - 1] [i_18 - 1] [i_18])))));
                            var_61 = max((max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_15]))) : (0LL))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)9)) < (((/* implicit */int) arr_38 [i_15] [i_14] [i_12]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_35 [i_15] [i_13] [i_14 - 2])))) ? ((+(((/* implicit */int) (signed char)122)))) : (((/* implicit */int) arr_48 [i_12] [i_12] [i_12] [i_12]))))));
                            var_62 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((67108863LL), (((/* implicit */long long int) arr_48 [(unsigned char)4] [i_13] [1LL] [i_18]))))))) ? (((/* implicit */int) max(((unsigned short)53395), (((/* implicit */unsigned short) (short)18410))))) : (((/* implicit */int) (signed char)-117))));
                        }
                        for (long long int i_19 = 1; i_19 < 21; i_19 += 4) 
                        {
                            var_63 = ((/* implicit */unsigned int) max((((short) max((((/* implicit */unsigned int) (short)-20259)), (556653253U)))), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5109817748716471111LL)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (signed char)0))))) || (((/* implicit */_Bool) max((((/* implicit */short) arr_38 [i_14] [i_13] [i_13])), ((short)-18701)))))))));
                            var_64 = ((/* implicit */signed char) (((~(-2143862093354139058LL))) % (arr_47 [i_12] [i_13] [i_14] [2LL] [i_19])));
                            var_65 = ((((/* implicit */_Bool) (signed char)121)) ? (((((/* implicit */_Bool) max((4611686018293170176LL), (((/* implicit */long long int) arr_33 [i_12]))))) ? (((((/* implicit */_Bool) (signed char)90)) ? (9223372036854775807LL) : (arr_40 [i_12] [i_13] [(unsigned char)3]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1))))))))) : (((/* implicit */long long int) (((_Bool)1) ? (max((((/* implicit */unsigned int) (signed char)-49)), (4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)31053)))))))));
                            var_66 = (signed char)-122;
                        }
                        var_67 = ((/* implicit */short) (~(min((min((((/* implicit */long long int) arr_52 [(_Bool)1] [i_12] [i_13] [i_14 - 4] [i_15 + 2] [i_15])), (arr_47 [i_12] [i_12] [15U] [i_12] [(signed char)22]))), (((/* implicit */long long int) ((signed char) arr_39 [6LL] [i_14 - 1])))))));
                        var_68 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 556653253U)) ? (((/* implicit */int) arr_54 [i_13] [i_13] [i_13] [i_14 - 2] [i_15])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_54 [i_13] [(_Bool)1] [(_Bool)1] [i_14 - 2] [i_14 + 1])) : (((arr_54 [i_13] [i_14 - 1] [i_14] [i_14 - 4] [i_14 - 4]) ? (((/* implicit */int) arr_54 [(unsigned char)11] [i_12] [i_12] [i_14 - 4] [(_Bool)1])) : (((/* implicit */int) arr_54 [18U] [i_13] [(short)10] [i_14 - 4] [i_14]))))));
                    }
                } 
            } 
        } 
        var_69 = ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) arr_37 [i_12] [i_12] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_12] [(signed char)3] [2LL] [i_12] [i_12]))) : (3045967156U))), (((((/* implicit */_Bool) arr_52 [i_12] [i_12] [i_12] [i_12] [i_12] [18])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)36))) : (arr_51 [i_12] [i_12])))))));
    }
}
