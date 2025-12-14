/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49679
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
    var_18 ^= ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((8184U) % (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))))), (max((((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))) : (1178562160U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (unsigned char)247)))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) (unsigned short)0);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_20 -= ((/* implicit */unsigned short) 4294967295U);
            var_21 |= ((/* implicit */int) var_16);
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                arr_8 [i_0] [i_1] [5ULL] [5ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)5)) + (arr_4 [i_0] [i_0] [(_Bool)1])))) ? (((arr_3 [i_0]) * (((/* implicit */unsigned long long int) 573969386)))) : (var_14)));
                /* LoopNest 2 */
                for (unsigned char i_3 = 1; i_3 < 10; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) (-(arr_9 [i_0] [i_2 + 1] [i_2 + 1] [(unsigned char)8])));
                            var_23 = ((/* implicit */short) (-(arr_13 [i_3 - 1] [(unsigned char)9] [(unsigned char)9] [(unsigned char)1] [i_3 - 1] [i_3 - 1])));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                {
                    var_24 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2 - 1] [i_2])) ? (arr_5 [i_2] [i_2] [i_2 + 2] [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) arr_11 [i_0])))));
                    var_26 = (+(((((/* implicit */_Bool) 12288U)) ? (arr_6 [i_0] [0ULL] [0ULL] [i_5]) : (((/* implicit */unsigned long long int) var_17)))));
                    var_27 = ((/* implicit */unsigned int) ((unsigned long long int) arr_9 [6U] [i_1] [i_2] [i_5 + 1]));
                }
                var_28 &= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))));
            }
        }
        for (unsigned long long int i_6 = 1; i_6 < 7; i_6 += 4) 
        {
            var_29 = ((/* implicit */int) 9223363240761753600ULL);
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])) ? (1056964608LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) : (arr_6 [i_6 + 3] [i_6 + 1] [i_6 - 1] [i_6 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1167233407148182471LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))))));
        }
    }
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        var_31 = (-(max((arr_19 [i_7] [i_7]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)14))))))));
        var_32 = ((/* implicit */unsigned long long int) ((726778933U) == (((/* implicit */unsigned int) 328078572))));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
    {
        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [20ULL] [i_8])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)2)), (arr_22 [i_8] [i_8])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : ((+(9780052673593306710ULL))))))))));
        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4122344929U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -8342197679156789773LL)) || (((/* implicit */_Bool) var_8)))))) : (405311656U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))) : (arr_19 [i_8] [i_8])));
        arr_23 [16ULL] [i_8] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-31538))))) ? (((((/* implicit */_Bool) 1005841603U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_8])))) : (((/* implicit */int) (_Bool)1)))));
        arr_24 [i_8] = ((/* implicit */_Bool) 1129098185);
        var_35 -= ((/* implicit */short) 0LL);
    }
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 19; i_9 += 2) 
    {
        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-11)) ? (arr_19 [i_9] [i_9]) : (arr_25 [i_9] [i_9])));
        /* LoopSeq 2 */
        for (short i_10 = 0; i_10 < 19; i_10 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_11 = 3; i_11 < 18; i_11 += 4) 
            {
                var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) (!(((/* implicit */_Bool) 678749685668030139ULL)))))));
                var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (6183834275180559217LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-100)))))))));
            }
            for (unsigned int i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                arr_34 [i_9] [i_10] [i_12] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned char)157)))) && (((/* implicit */_Bool) var_2))));
                var_39 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (unsigned char)255))));
                var_40 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_19 [(unsigned char)15] [1U])) || ((_Bool)0))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (short)32767))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_9])))))));
                var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((arr_22 [i_10] [i_12]) + (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_9] [i_10] [i_12]))))))));
            }
            var_42 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)-101)) ? (551429772U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_9] [i_10])) ? (((/* implicit */int) ((unsigned char) arr_22 [i_9] [i_9]))) : (((/* implicit */int) var_16))));
        }
        for (unsigned char i_13 = 1; i_13 < 16; i_13 += 1) 
        {
            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_13 + 3] [i_13 - 1] [i_13 + 3])) ? (arr_30 [i_13 + 1] [i_13 + 2] [i_13 + 1]) : (arr_19 [i_13 + 1] [i_13 - 1])));
            var_45 *= ((/* implicit */short) 18446744073709551600ULL);
        }
        /* LoopSeq 2 */
        for (short i_14 = 0; i_14 < 19; i_14 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_15 = 1; i_15 < 17; i_15 += 3) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                        {
                            arr_47 [i_9] [i_9] [i_15] [i_14] [i_17] = ((/* implicit */signed char) arr_20 [i_9]);
                            var_46 += ((/* implicit */unsigned int) ((((((/* implicit */long long int) arr_36 [i_17] [i_14] [i_9])) / (-3729201116274694278LL))) != (((/* implicit */long long int) (~(((/* implicit */int) arr_46 [i_17] [i_16] [i_9] [i_9] [i_9])))))));
                            var_47 |= ((/* implicit */long long int) arr_46 [i_9] [i_14] [i_14] [i_16] [i_17]);
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                        {
                            var_48 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)96))));
                            var_49 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)218)) - (((/* implicit */int) ((((/* implicit */long long int) arr_41 [i_9] [i_14] [(short)3] [i_16])) < (8342197679156789757LL))))));
                            var_50 = ((/* implicit */int) max((var_50), ((((-(((/* implicit */int) var_10)))) ^ (((/* implicit */int) arr_49 [i_9] [i_15 - 1] [i_15] [i_16] [15U] [i_15] [i_15]))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_19 = 0; i_19 < 19; i_19 += 4) 
                        {
                            var_51 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)222))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)190)))) : (arr_20 [i_15])));
                            arr_53 [i_14] [i_14] [(unsigned short)10] [i_14] [i_14] [i_14] = ((513676355) / (-2034807873));
                            var_52 = ((/* implicit */short) (!(((/* implicit */_Bool) 16ULL))));
                        }
                    }
                } 
            } 
            arr_54 [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_9] [i_14]))) : (arr_51 [i_9] [5LL] [i_9] [(unsigned char)0] [i_14] [i_14] [i_9])));
        }
        for (short i_20 = 0; i_20 < 19; i_20 += 1) /* same iter space */
        {
            arr_58 [i_20] [i_9] = ((/* implicit */long long int) (-(arr_43 [i_9] [i_20] [i_9] [i_9] [i_20])));
            var_53 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9]))) | (7531368589170268101ULL)));
            var_54 |= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) var_17)) == (15240468773316159389ULL))) ? (((/* implicit */int) (short)-32749)) : (((((/* implicit */int) arr_44 [10ULL] [(short)10])) >> (((arr_22 [i_9] [i_9]) + (1794682330421791073LL)))))));
            var_55 = ((/* implicit */_Bool) (unsigned char)143);
        }
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
    {
        var_56 = ((/* implicit */unsigned char) min((var_56), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))), (((((/* implicit */_Bool) var_17)) ? (1553095985) : (((/* implicit */int) (_Bool)1))))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (short)2379))) ^ (2645022152U))))))));
        var_57 = min((((/* implicit */long long int) (signed char)-1)), ((~(9223372036854775807LL))));
        arr_62 [i_21] [3ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((11500591751687260872ULL), (((/* implicit */unsigned long long int) (short)-32756))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_21] [i_21] [(short)6] [i_21] [i_21] [i_21])))))));
        var_58 = ((/* implicit */_Bool) min((var_58), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_21] [i_21])) ? (((/* implicit */int) arr_27 [i_21] [i_21])) : (((/* implicit */int) (short)24168))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (max((((/* implicit */unsigned int) var_7)), (67092480U))) : (((/* implicit */unsigned int) 573969412))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_21] [17U])) ? (237303400U) : (4294967295U)))) ? (max((((/* implicit */unsigned long long int) var_5)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)23))))))))));
    }
    var_59 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-8131)) - (((/* implicit */int) (unsigned short)59066))))) ? (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned char)126))))))) : (((((((/* implicit */int) (short)1041)) == (((/* implicit */int) var_8)))) ? (((var_14) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_15)))))))));
    var_60 = ((/* implicit */unsigned int) (((!(((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) var_2)))))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) (unsigned char)236))));
}
