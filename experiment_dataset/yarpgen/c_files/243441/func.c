/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243441
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
    var_12 = ((/* implicit */long long int) var_8);
    var_13 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_14 |= ((unsigned short) ((var_3) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_0] [2LL])))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_15 = ((/* implicit */signed char) arr_3 [i_0]);
            var_16 = ((/* implicit */short) (((-(((/* implicit */int) (signed char)-125)))) == (((/* implicit */int) (signed char)121))));
            var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) % (arr_6 [i_0] [i_1] [i_0]))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [(unsigned char)2] [i_2]), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))) : (arr_5 [0U] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [(_Bool)1]) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)31), (((/* implicit */unsigned char) (signed char)121)))))) - (((arr_5 [8] [i_0]) + (((/* implicit */unsigned long long int) var_10))))))));
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_0]) + (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (arr_1 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) -180112497)))))))) : (((((((/* implicit */int) (_Bool)1)) >= (-1374285467))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_0])))))));
            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_4 [i_0])))));
        }
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            var_20 *= ((/* implicit */unsigned long long int) min((arr_11 [i_3] [i_3]), (((((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (arr_11 [i_3] [i_3]) : (3972019894U))) - (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)99)) / (((/* implicit */int) arr_1 [i_0] [i_3])))))))));
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        {
                            var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_5 [i_3] [i_3])))) ? (((unsigned long long int) (signed char)63)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [i_3] [i_3] [i_4] [i_5] [i_6])) || (((/* implicit */_Bool) -872664014)))))) : (min((min((var_11), (arr_5 [i_3] [i_3]))), (var_7)))));
                            arr_22 [i_0] [i_0] [i_0] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_2);
                            var_22 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)124))) < (9223372036854775799LL)));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) (-(((int) var_8))));
            }
            for (int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                arr_25 [i_0] [i_3] [i_7] [i_0] = ((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_3] [i_7]);
                var_24 = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_3] [i_3])) << ((-(((unsigned int) arr_2 [i_0] [i_3]))))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_3] [i_3])) << ((((-(((unsigned int) arr_2 [i_0] [i_3])))) - (32U))))));
            }
            arr_26 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)112))));
            /* LoopSeq 2 */
            for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
            {
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_8] [i_0])) & (((/* implicit */int) ((3972019879U) < (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))));
                arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_8])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-7116))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_1 [i_0] [i_0])))))) : (((/* implicit */int) (signed char)-79))));
                /* LoopSeq 1 */
                for (short i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */int) ((var_9) || (((/* implicit */_Bool) (signed char)-125))))) ^ (((((/* implicit */_Bool) arr_31 [i_0] [i_3] [i_3] [i_8] [i_9] [i_9])) ? (((/* implicit */int) arr_31 [i_0] [i_3] [i_8] [i_9] [i_9] [i_3])) : (((/* implicit */int) arr_31 [i_0] [i_3] [i_8] [i_8] [i_9] [i_8])))))))));
                    arr_34 [i_0] [i_0] [i_3] [i_8] [i_9] = min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_8 [i_0] [i_8] [i_0]))))), (((arr_30 [i_8] [i_9]) % (((/* implicit */long long int) ((/* implicit */int) (short)27496))))));
                }
            }
            for (signed char i_10 = 1; i_10 < 9; i_10 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_3])) != (((/* implicit */int) arr_24 [i_0] [i_3] [i_10 + 1] [i_3]))))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_28 |= ((/* implicit */short) min(((+(((/* implicit */int) (_Bool)1)))), ((((_Bool)1) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (_Bool)1))))));
                        arr_42 [i_0] [i_3] = ((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_12 - 1] [i_12 - 1] [i_0])))) % (((/* implicit */int) arr_33 [i_10 + 1] [i_12 - 1] [i_10 + 1] [i_10]))));
                        arr_43 [i_0] [i_3] [i_10] [i_11] [i_0] [i_12 - 1] = ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_12])) - (((/* implicit */int) var_6))))) ? (((((/* implicit */int) (unsigned char)222)) + (((/* implicit */int) arr_21 [i_0] [i_3] [i_3] [i_3])))) : (((((/* implicit */_Bool) (unsigned short)20257)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))));
                        arr_44 [i_0] [i_11] [i_10 - 1] [i_3] [i_0] = ((/* implicit */signed char) (((((+(1157870582U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((1550473064) <= (((/* implicit */int) (_Bool)1)))))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) (_Bool)0)), (var_11))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)45288)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-1626)))))))))));
                    }
                    /* vectorizable */
                    for (long long int i_13 = 1; i_13 < 8; i_13 += 2) /* same iter space */
                    {
                        arr_47 [i_0] [i_0] [i_3] [i_10 + 1] [i_11] [i_11] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_13 + 2]))));
                        var_29 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                        var_30 = ((/* implicit */_Bool) (((_Bool)1) ? (-480763575780922203LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
                    }
                    for (long long int i_14 = 1; i_14 < 8; i_14 += 2) /* same iter space */
                    {
                        var_31 *= ((/* implicit */unsigned int) (-((-((~(((/* implicit */int) (_Bool)1))))))));
                        var_32 = ((((arr_6 [i_0] [i_3] [i_11]) << (((((/* implicit */int) arr_20 [i_14] [i_11] [i_10] [i_3] [i_0])) - (23667))))) ^ (var_7));
                        arr_51 [i_14 - 1] [i_0] [i_10 + 1] [i_0] [i_0] = var_9;
                    }
                    var_33 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                    var_34 = ((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)121))))));
                }
                /* LoopSeq 3 */
                for (long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1692783573782436997LL))));
                    var_36 = ((/* implicit */unsigned int) arr_10 [i_15] [i_10]);
                }
                /* vectorizable */
                for (unsigned short i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    var_37 ^= ((/* implicit */short) (~(((/* implicit */int) (unsigned char)15))));
                    var_38 = ((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned short)8))))));
                }
                for (signed char i_17 = 0; i_17 < 10; i_17 += 4) 
                {
                    var_39 = ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) - ((+(((/* implicit */int) var_9))))));
                    arr_62 [i_0] = ((/* implicit */short) (_Bool)1);
                }
                var_40 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) min((arr_11 [i_3] [i_3]), (((/* implicit */unsigned int) (unsigned char)191))))) < (((((unsigned long long int) var_5)) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) != (arr_30 [i_0] [i_3])))))))));
                arr_63 [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) ((unsigned short) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)31))))));
            }
        }
        for (unsigned char i_18 = 0; i_18 < 10; i_18 += 1) 
        {
            arr_66 [(short)4] [i_18] [i_18] |= ((((/* implicit */_Bool) (unsigned short)45889)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U));
            arr_67 [i_0] [i_0] = ((/* implicit */_Bool) max((((arr_19 [i_0] [i_18] [i_0] [i_0] [i_0] [i_18]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) (_Bool)1)))), (((arr_6 [i_0] [i_0] [i_18]) << ((((~(4294836224U))) - (131070U)))))));
            arr_68 [i_0] [i_0] [i_18] = var_4;
        }
        var_41 = ((/* implicit */signed char) (((-((~(((/* implicit */int) var_2)))))) / (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])), (var_0)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0])) >> (((var_11) - (12633056256745830689ULL)))))))));
    }
    for (signed char i_19 = 0; i_19 < 10; i_19 += 1) /* same iter space */
    {
        var_42 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-22))))) ? (((((/* implicit */_Bool) (unsigned char)24)) ? (arr_37 [i_19] [i_19] [i_19] [i_19] [i_19]) : (arr_37 [i_19] [i_19] [i_19] [i_19] [i_19]))) : (((/* implicit */int) ((unsigned char) arr_11 [8ULL] [8ULL])))));
        arr_72 [i_19] [i_19] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_58 [i_19])) ? (arr_52 [i_19] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((_Bool) (short)2437))), (arr_3 [i_19])))))));
        var_43 += ((/* implicit */_Bool) ((signed char) (+(arr_23 [i_19] [4U] [i_19] [i_19]))));
    }
}
