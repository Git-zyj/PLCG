/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203839
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] |= ((/* implicit */int) ((signed char) ((((/* implicit */int) var_9)) << (((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2])) - (2324))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_2] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_6) < (((/* implicit */long long int) var_13)))))))) ? (((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 17852936471085558659ULL)))) ? (((/* implicit */long long int) arr_5 [i_1] [i_1])) : (((var_6) * (((/* implicit */long long int) 0U)))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((int) var_8))) * (((arr_5 [i_0] [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_3] [i_3]))))))))));
                                arr_15 [i_4] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((arr_13 [i_4 + 1] [i_2] [i_2] [i_3] [i_4] [i_3] [i_3]), (arr_13 [i_4 + 1] [i_1] [i_4] [i_1] [i_0] [i_1] [i_4])))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4 + 1] [i_1] [i_2] [i_3] [i_4] [i_4] [i_0]))) : (-6443132986681965764LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_4)) > (0ULL))) ? (arr_1 [i_6 - 1]) : (((/* implicit */unsigned int) (~(var_4))))))) ? (((/* implicit */unsigned long long int) (+(arr_16 [i_1] [i_6 - 1] [i_2] [i_5] [i_2 - 1])))) : (((unsigned long long int) ((unsigned long long int) var_2)))));
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), ((+(65535ULL)))));
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((max((((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)50)) - (((/* implicit */int) arr_10 [i_1] [i_2] [i_1] [i_2]))))))), (((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) 0U)) >= (17249753317327755938ULL))), (((((/* implicit */int) var_1)) != (((/* implicit */int) var_1))))))))))));
                            }
                        } 
                    } 
                    arr_22 [i_2] [i_2] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */int) ((((var_5) >> (((16258099010538083455ULL) - (16258099010538083449ULL))))) << (((((/* implicit */int) arr_10 [i_0] [i_2] [i_2] [i_0])) - (2522)))))) : (((/* implicit */int) ((((var_5) >> (((16258099010538083455ULL) - (16258099010538083449ULL))))) << (((((((/* implicit */int) arr_10 [i_0] [i_2] [i_2] [i_0])) - (2522))) - (2400))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        var_17 = ((/* implicit */signed char) (-(arr_1 [i_2])));
                        arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned char) ((10880667453667380809ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2] [i_1]))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned char) 18446744073709551605ULL);
                        var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 19ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((-(8106950363614217605LL)))));
                        arr_30 [i_1] [i_2] [i_1] [i_1] |= ((((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_1] [i_1] [i_2 - 1])) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_1] [i_1] [i_2 - 1])) : (((/* implicit */int) var_0)))) + (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) (signed char)14))))));
                    }
                }
                for (unsigned int i_9 = 3; i_9 < 17; i_9 += 1) 
                {
                    var_20 = ((/* implicit */unsigned int) ((((min((var_5), (var_8))) ^ (((((/* implicit */_Bool) var_5)) ? (268435455ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_16 [i_0] [i_1] [i_1] [i_1] [i_1]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_0] [i_9] [i_0]))))) : (max((((/* implicit */unsigned int) arr_19 [i_0] [i_1] [i_1] [i_1] [i_0] [i_9])), (1205238721U))))))));
                    /* LoopNest 2 */
                    for (short i_10 = 1; i_10 < 15; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 3; i_11 < 17; i_11 += 1) 
                        {
                            {
                                arr_37 [i_0] [i_1] [i_9] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-25)) ? (16258099010538083483ULL) : (((/* implicit */unsigned long long int) 3089728570U))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((unsigned long long int) 1205238725U)))));
                                var_22 = ((/* implicit */unsigned int) (~(((0ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_3))))))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) ((unsigned char) arr_18 [i_12] [i_1]));
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? ((~(0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120)))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) (~(var_2)));
    var_26 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_13 = 1; i_13 < 11; i_13 += 1) 
    {
        arr_44 [i_13] = ((/* implicit */unsigned int) ((short) arr_13 [i_13] [i_13] [i_13] [i_13] [i_13 - 1] [i_13 - 1] [i_13 + 1]));
        var_27 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1741095842942551265ULL))))) != ((+(((/* implicit */int) (unsigned char)206))))));
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 2; i_14 < 11; i_14 += 1) 
    {
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((long long int) var_4)))));
        arr_48 [i_14] [(_Bool)1] &= ((/* implicit */long long int) (+(var_2)));
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 13; i_15 += 1) 
        {
            for (short i_16 = 1; i_16 < 11; i_16 += 3) 
            {
                {
                    var_29 = ((/* implicit */unsigned int) var_1);
                    arr_56 [i_14] [10U] [10U] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_4))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)103))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-49))) - (9007199120523264LL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 1; i_17 < 10; i_17 += 1) 
                    {
                        for (unsigned int i_18 = 0; i_18 < 13; i_18 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -481124238)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)103))) : (3423810603U)));
                                arr_62 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) -3688585525352134333LL)) ? (var_6) : (((/* implicit */long long int) -1)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 0; i_19 < 13; i_19 += 1) 
                    {
                        for (int i_20 = 0; i_20 < 13; i_20 += 1) 
                        {
                            {
                                var_32 |= ((/* implicit */int) ((unsigned long long int) arr_23 [i_14 - 2] [i_16 - 1] [i_16 - 1] [i_19]));
                                var_33 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) >= (25U)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_21 = 0; i_21 < 13; i_21 += 3) 
                    {
                        for (short i_22 = 0; i_22 < 13; i_22 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((int) (~(4294967294U)))))));
                                var_35 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) arr_54 [i_14] [i_14])));
                                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((long long int) (-(((/* implicit */int) (unsigned char)206))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_23 = 0; i_23 < 20; i_23 += 3) /* same iter space */
    {
        var_37 = ((/* implicit */int) min((((((/* implicit */_Bool) ((int) arr_74 [i_23]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_73 [i_23] [i_23]))) : (((unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((unsigned char) arr_74 [i_23])))));
        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)216))));
    }
    for (long long int i_24 = 0; i_24 < 20; i_24 += 3) /* same iter space */
    {
        var_39 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_8) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4937442066375789397ULL)) ? (1984244116) : (var_13)))))))));
        var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) 21ULL))));
        var_41 = max((14602067896408743319ULL), (((/* implicit */unsigned long long int) (signed char)-24)));
        var_42 = ((/* implicit */signed char) ((int) (((_Bool)1) ? (((((/* implicit */_Bool) 2845770944U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (16777215U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)27)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_25 = 2; i_25 < 19; i_25 += 1) 
        {
            arr_82 [i_24] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((4294967295U) | (((/* implicit */unsigned int) 1484618169))))) - (((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (2188645063171468160ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((2079652026) <= (arr_74 [i_25])))))))));
            var_43 = var_5;
        }
    }
}
