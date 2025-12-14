/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235819
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                            {
                                var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 2])))))));
                                arr_12 [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_12))) ? (((unsigned long long int) ((arr_9 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0] [i_0]) ? (var_17) : (((/* implicit */long long int) var_11))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (arr_4 [i_4] [i_0])))), (((13924904847739522875ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                                arr_13 [i_4] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) max((((arr_4 [i_0 + 2] [i_0]) % (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) || ((_Bool)1)))))), (((int) ((((/* implicit */int) var_14)) << (((var_19) - (12827549710721647419ULL))))))));
                            }
                            for (long long int i_5 = 1; i_5 < 24; i_5 += 2) 
                            {
                                var_21 = (-(((/* implicit */int) max((arr_0 [i_0 - 1] [i_0 - 2]), (arr_0 [i_0 - 1] [i_0 + 1])))));
                                arr_16 [i_5] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) (_Bool)1);
                                var_22 = ((/* implicit */unsigned short) arr_14 [i_3] [i_2] [i_2] [i_2] [i_2] [i_3] [i_3]);
                                var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) arr_11 [i_0 + 2] [i_0 - 2] [i_5 + 1] [i_0 + 2] [i_0 + 2] [i_0 - 2])) * (((/* implicit */int) arr_11 [i_0 + 2] [i_5] [i_5 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 2]))))));
                            }
                            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                            {
                                var_24 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)(-32767 - 1))))))))));
                                var_25 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_8 [i_3]) ? (min((((/* implicit */long long int) arr_2 [i_3])), (var_3))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)1023)) : (((/* implicit */int) var_14))))))))));
                                arr_19 [i_2] [i_2] [i_2] [i_2] [12U] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0 + 2] [i_6] [i_3]))))) ? (((/* implicit */int) ((min((var_13), ((_Bool)1))) || ((!((_Bool)1)))))) : ((~(((/* implicit */int) var_4))))));
                                var_26 ^= ((/* implicit */signed char) ((_Bool) max((var_5), (arr_5 [i_0 - 2] [i_0 - 2]))));
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                            {
                                var_27 -= ((/* implicit */unsigned short) (signed char)82);
                                var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 13517625246765928186ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110)))))))));
                            }
                            /* LoopSeq 1 */
                            for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
                            {
                                var_29 *= ((/* implicit */short) min((((((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) arr_9 [i_0] [i_3] [i_3] [i_2] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_13)))) / (((/* implicit */int) arr_2 [i_0 - 2])))), (((/* implicit */int) arr_8 [i_2]))));
                                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_7 [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0] [i_0 - 1])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)1))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (short i_9 = 1; i_9 < 22; i_9 += 2) 
                {
                    var_31 = ((/* implicit */unsigned short) min((arr_8 [i_1]), (((arr_1 [i_0 + 2]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51403)))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_10 = 1; i_10 < 23; i_10 += 4) 
                    {
                        arr_28 [i_0] [i_0] [i_9] [i_0] = ((/* implicit */_Bool) max((min((var_16), (((/* implicit */unsigned char) (_Bool)0)))), (((/* implicit */unsigned char) (_Bool)1))));
                        /* LoopSeq 2 */
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            var_32 = ((/* implicit */long long int) (unsigned char)82);
                            var_33 = ((/* implicit */int) min((arr_23 [i_0] [i_0]), (((/* implicit */unsigned int) var_8))));
                            var_34 -= ((/* implicit */short) var_17);
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_33 [i_9] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (_Bool)1);
                            var_35 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) arr_32 [i_0] [i_9] [i_9])) : (var_3)))) ? (((((/* implicit */_Bool) 8013676853431979542LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_9] [i_9] [i_9] [i_9 - 1] [i_10] [i_12])))))));
                        }
                        var_36 = ((/* implicit */unsigned char) ((unsigned long long int) arr_15 [i_10] [i_1] [i_1] [i_1] [i_0]));
                    }
                    for (signed char i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        var_37 ^= ((/* implicit */unsigned char) (signed char)-3);
                        var_38 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (((((/* implicit */unsigned long long int) 8013676853431979542LL)) * (var_19)))))) ? (arr_20 [i_0] [i_1] [i_9] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                        var_39 = ((/* implicit */long long int) (-((-(((/* implicit */int) (!((_Bool)0))))))));
                        var_40 |= ((/* implicit */_Bool) min((1475015680U), (((/* implicit */unsigned int) arr_9 [i_13] [10ULL] [i_13] [i_13] [i_0] [i_1] [i_0 - 1]))));
                    }
                    for (long long int i_14 = 0; i_14 < 25; i_14 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_15 = 0; i_15 < 25; i_15 += 2) 
                        {
                            arr_42 [i_0 + 2] [i_1] [i_1] [i_9] [i_1] [i_15] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_0] [i_1] [i_9] [i_9] [i_9] [i_9]))));
                            arr_43 [i_0] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) (_Bool)1))), (((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_1] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (1746995818U)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1420786676700844971ULL)))))) : (((min((arr_20 [i_1] [i_9] [i_14] [i_1]), (((/* implicit */long long int) 2147483647)))) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        var_41 |= ((/* implicit */short) arr_32 [i_0] [i_1] [i_0]);
                    }
                    /* vectorizable */
                    for (long long int i_16 = 0; i_16 < 25; i_16 += 1) /* same iter space */
                    {
                        arr_47 [i_9] [i_9] [i_9] [i_9] [(unsigned short)24] [i_9] = ((/* implicit */unsigned long long int) (+(arr_37 [i_9 - 1] [i_9 + 2] [i_9 - 1] [i_9 + 3] [i_9 - 1] [i_9])));
                        var_42 = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_9 + 2] [i_0 + 1])) & (((/* implicit */int) arr_5 [i_9 + 3] [i_0 + 1]))));
                        arr_48 [i_1] [i_9] [i_9] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_0] [i_16] [i_0 + 2] [i_9 - 1])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 2] [i_9 + 3] [i_9 + 3] [i_0] [i_9 + 1])) : ((-(((/* implicit */int) var_18))))));
                    }
                    var_43 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) 921122272U))))) ? (((int) var_3)) : (min((((/* implicit */int) ((_Bool) var_7))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_41 [i_9] [i_9] [i_9] [i_1] [i_1] [18ULL])) : (((/* implicit */int) arr_2 [i_9]))))))));
                }
                for (long long int i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    var_44 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1]))))) << (((((unsigned int) var_4)) - (4294967234U)))));
                    var_45 = ((/* implicit */int) var_15);
                    var_46 *= ((/* implicit */_Bool) 4929118826943623430ULL);
                }
                for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 2) 
                {
                    arr_54 [i_18] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_13)))))))) : (max((((/* implicit */unsigned int) arr_44 [i_0] [i_0] [i_0 + 2] [i_0])), (arr_23 [i_0] [i_18])))));
                    var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) var_12))));
                }
                /* vectorizable */
                for (short i_19 = 1; i_19 < 23; i_19 += 4) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_48 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_1] [i_19 + 2])) ? (((/* implicit */int) arr_34 [i_1] [i_19 + 2])) : (((/* implicit */int) arr_34 [i_0] [i_19 + 2]))));
                        arr_59 [i_0] &= ((/* implicit */unsigned short) ((unsigned char) (signed char)-110));
                    }
                    for (long long int i_21 = 0; i_21 < 25; i_21 += 1) 
                    {
                        var_49 = ((/* implicit */long long int) -1409306126);
                        var_50 = ((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_19 + 2] [i_21]);
                    }
                    for (long long int i_22 = 0; i_22 < 25; i_22 += 4) 
                    {
                        var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(8013676853431979539LL)))) ? ((+(-4203013480237566226LL))) : (var_12)));
                        arr_65 [i_22] [i_19] [i_19] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned short) ((_Bool) (signed char)-117));
                        var_52 *= ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) (short)32749)))));
                    }
                    for (short i_23 = 2; i_23 < 22; i_23 += 1) 
                    {
                        var_53 = ((/* implicit */signed char) var_2);
                        var_54 -= (signed char)-102;
                        arr_69 [i_0] [i_23] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 1072693248U))))) == (((((/* implicit */int) var_2)) % (((/* implicit */int) arr_49 [i_0] [i_0] [i_19] [i_23 + 2]))))));
                    }
                    arr_70 [i_0] [i_0] [i_1] [i_19 - 1] &= ((/* implicit */int) (unsigned char)206);
                    var_55 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-88)))));
                    var_56 = ((((/* implicit */_Bool) ((unsigned int) arr_46 [22U] [22U] [i_0] [i_0] [i_0] [i_19]))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_19 - 1] [i_19] [i_1] [i_0] [i_0 - 1] [i_0]))) < (9223372036854775807LL)))) : (((/* implicit */int) var_10)));
                }
            }
        } 
    } 
    var_57 &= ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (unsigned char i_24 = 1; i_24 < 9; i_24 += 4) 
    {
        for (long long int i_25 = 2; i_25 < 9; i_25 += 2) 
        {
            for (unsigned short i_26 = 0; i_26 < 12; i_26 += 2) 
            {
                {
                    var_58 = ((/* implicit */int) min((var_58), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_10)))))))) ? (((/* implicit */long long int) ((unsigned int) (signed char)109))) : (3509621007519866074LL))))));
                    var_59 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_11)))) | (((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)0)))) : (var_15)));
                    arr_77 [i_24] [i_26] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (-(34359738367ULL)))))) ? ((+(arr_37 [i_24] [i_24] [i_24 + 1] [i_24 + 1] [i_25 + 3] [i_25]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [1ULL] [1ULL])))));
                }
            } 
        } 
    } 
    var_60 *= ((/* implicit */unsigned char) var_4);
}
