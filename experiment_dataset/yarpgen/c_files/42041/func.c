/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42041
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_11 = max((((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0 - 1]))))), (max((((/* implicit */long long int) var_8)), (arr_4 [i_1] [i_1 - 3] [i_0 - 1]))));
                arr_7 [(unsigned char)8] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_5 [i_1 - 2] [i_0 - 1])), (((((/* implicit */_Bool) (signed char)58)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))) : (1120678377U)))));
                arr_8 [i_0 - 2] [i_1] = ((signed char) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
                {
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (arr_11 [i_0 - 2] [i_1] [i_1 - 3] [i_0]))))));
                    var_13 = arr_11 [i_1] [i_1] [i_2] [i_0];
                    var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((((/* implicit */_Bool) (signed char)-58)) || (((/* implicit */_Bool) arr_0 [i_1] [i_2])))), ((_Bool)0))))));
                }
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                {
                    var_15 *= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((var_0) <= (arr_11 [i_0] [i_0 + 1] [i_1 + 1] [i_0 + 1])))), (((arr_11 [i_0 - 2] [i_0 + 1] [i_1 + 1] [i_3]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        for (long long int i_5 = 1; i_5 < 9; i_5 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) ((arr_10 [i_5 + 1] [i_1 - 1] [i_1] [i_0 - 1]) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)58)))))))))));
                                arr_19 [i_0] [(unsigned char)4] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (signed char)55)), (-2055861253378399575LL)));
                                arr_20 [i_0] [i_0] [9] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_9 [i_0 - 1] [i_1 - 1] [i_5 + 1] [i_5]))) >> (((((/* implicit */int) var_1)) - (67)))));
                                var_17 = ((/* implicit */unsigned char) ((signed char) var_7));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) 699048393)), (arr_11 [i_0] [i_1] [i_3] [6U])))) ? (((/* implicit */int) ((var_9) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55706)))))) : (((/* implicit */int) arr_17 [9] [i_1] [i_3] [i_4] [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : ((~(var_0)))));
                            }
                        } 
                    } 
                    arr_21 [i_0] [4] = ((/* implicit */long long int) max((var_3), (((/* implicit */unsigned long long int) (+(arr_11 [i_0 - 1] [i_0] [i_1 - 2] [i_0 - 1]))))));
                    arr_22 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) (((((_Bool)0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (signed char)-94)))))))) : (((/* implicit */int) (signed char)-75))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        arr_34 [i_9] [i_7] [(signed char)2] = ((/* implicit */unsigned int) arr_32 [i_9] [i_6] [i_6] [i_6]);
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
                        {
                            arr_39 [i_10] [i_9] [(unsigned short)5] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) (_Bool)1))));
                            arr_40 [i_6] [i_7] [i_8] [i_9] [i_10] = (~(min((arr_33 [i_6] [i_7] [i_8] [i_7]), (((/* implicit */unsigned long long int) var_6)))));
                            var_19 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (-1) : (((/* implicit */int) arr_32 [i_9] [i_8] [i_7] [i_6])))));
                            arr_41 [i_6] [i_7] [i_8] [i_9] [(short)11] = ((/* implicit */signed char) min((((arr_27 [i_8]) / (((/* implicit */long long int) ((((/* implicit */int) (signed char)49)) + (((/* implicit */int) (short)22050))))))), (((/* implicit */long long int) arr_36 [i_8] [i_9] [i_8] [i_7] [i_6]))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_11 = 4; i_11 < 12; i_11 += 2) 
                        {
                            arr_45 [5] [(short)10] [i_8] [(unsigned char)3] [i_11] = ((/* implicit */int) var_9);
                            var_20 = ((/* implicit */signed char) (-((+(-717988403)))));
                        }
                    }
                    var_21 ^= ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-22051))))), (var_3)))));
                    /* LoopSeq 2 */
                    for (long long int i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        arr_48 [i_7] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))), (((/* implicit */int) (unsigned short)7680))))) ? (((/* implicit */int) ((short) arr_29 [i_6] [i_7] [i_8] [i_8]))) : (((/* implicit */int) ((short) ((unsigned short) arr_31 [i_6] [i_7] [i_8] [(signed char)10]))))));
                        var_22 = ((/* implicit */unsigned long long int) ((-1278014193374464235LL) - (((/* implicit */long long int) 2147483647))));
                    }
                    for (short i_13 = 0; i_13 < 13; i_13 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_14 = 4; i_14 < 11; i_14 += 2) 
                        {
                            arr_53 [i_6] [i_7] [i_13] = ((/* implicit */unsigned char) (+(((/* implicit */int) (((_Bool)1) || ((!(((/* implicit */_Bool) (unsigned char)240)))))))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */int) (signed char)96)) <= (((/* implicit */int) (_Bool)0)))))))) ? (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))) : (16689542828444243870ULL))) : (((/* implicit */unsigned long long int) (~(arr_37 [5ULL] [i_14 - 4] [i_14] [i_14] [i_14]))))));
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_5))));
                            var_25 = ((/* implicit */signed char) var_0);
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)91)) && (((/* implicit */_Bool) ((var_7) >> (((1278014193374464236LL) - (1278014193374464228LL))))))))), (((((/* implicit */_Bool) max(((short)27497), (((/* implicit */short) var_8))))) ? (var_3) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (arr_23 [i_6] [i_14 - 4])))))))))));
                        }
                        var_27 += ((/* implicit */unsigned int) var_3);
                        var_28 -= ((/* implicit */long long int) 472187822U);
                    }
                    /* LoopSeq 2 */
                    for (signed char i_15 = 2; i_15 < 11; i_15 += 3) 
                    {
                        arr_56 [i_8] [i_15] [i_8] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)232)), (1598653701U))))))) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) ((signed char) arr_36 [i_6] [i_6] [i_6] [i_6] [i_6]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)7680)) && (((/* implicit */_Bool) (unsigned char)239)))))) <= (((((/* implicit */_Bool) 14225107066194062482ULL)) ? (var_7) : (((/* implicit */unsigned long long int) -1898181038)))))))));
                        arr_57 [i_15] [(unsigned short)5] [i_8] [8ULL] [i_7] [i_6] = ((/* implicit */_Bool) var_1);
                        var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) var_10))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (unsigned char)71)))) >> (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)-85)) <= (((/* implicit */int) (signed char)31))))))));
                    }
                    for (signed char i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        arr_62 [i_6] [i_7] [i_8] [i_16] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)32))))), (max((((/* implicit */unsigned long long int) arr_32 [i_6] [i_6] [i_6] [i_6])), (var_3)))))) && (((/* implicit */_Bool) min((var_10), (((unsigned long long int) var_8)))))));
                        var_30 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 9810614883779107388ULL)) ? (min((((/* implicit */long long int) var_5)), (var_0))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)223))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) (unsigned char)244)))))));
                    }
                    arr_63 [i_8] [i_7] [i_6] = ((((/* implicit */_Bool) 1227481963)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned char)166))))))) : (max((((long long int) var_4)), (((var_0) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-60))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_17 = 2; i_17 < 16; i_17 += 3) 
    {
        for (long long int i_18 = 2; i_18 < 15; i_18 += 2) 
        {
            {
                arr_72 [i_17] [(unsigned char)2] = ((/* implicit */unsigned int) var_3);
                var_31 *= var_8;
                arr_73 [i_18] [i_17] [i_17] = ((/* implicit */signed char) var_0);
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 17; i_19 += 1) 
                {
                    for (unsigned long long int i_20 = 1; i_20 < 15; i_20 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28107)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_17 + 1] [i_18 - 2]))) : (6709473730022338026ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_17]))) / (var_10)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (arr_74 [0LL] [i_18] [i_19] [i_18])))))))) : (var_7)))));
                            /* LoopSeq 1 */
                            for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                            {
                                arr_82 [i_17] [i_18] [i_19] [i_18] [16ULL] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3567060422451689026LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_70 [i_17] [i_17])) : (((/* implicit */int) arr_78 [i_17] [i_19] [i_17]))))) : (var_3))))));
                                var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 907510808U)) ? (-1898181038) : (((/* implicit */int) var_1)))))))));
                            }
                        }
                    } 
                } 
                var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) var_1))));
            }
        } 
    } 
}
