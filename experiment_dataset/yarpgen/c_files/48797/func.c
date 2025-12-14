/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48797
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))), (((var_4) ? (1485364532U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)132))))))) >> ((((-(9U))) - (4294967272U)))));
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32752))) : (var_10)))) ? (((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (min((((/* implicit */unsigned int) arr_0 [i_0])), (var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_1), (11798145570344470660ULL))) < (((/* implicit */unsigned long long int) max((4294967290U), (((/* implicit */unsigned int) (short)-32756))))))))) : (var_1));
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) max((arr_4 [i_1 - 1]), (((/* implicit */signed char) var_4)))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
        {
            arr_9 [i_2] &= ((/* implicit */unsigned char) arr_6 [i_1 + 1] [i_1 + 1]);
            var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */short) (unsigned char)141)), (arr_0 [i_2]))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 3; i_5 < 22; i_5 += 3) 
                {
                    {
                        arr_18 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_3 [i_1 + 1])))) : (((unsigned int) arr_3 [i_5 + 1]))));
                        var_22 |= ((/* implicit */signed char) (+(((unsigned int) ((((/* implicit */_Bool) 1089054977U)) ? (((/* implicit */int) arr_17 [i_1] [i_1] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) (short)32748)))))));
                        arr_19 [i_1 - 1] [i_1 - 1] [i_5] [i_5] = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_5) : (var_10)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_16)))))) ? (((unsigned int) ((((/* implicit */_Bool) var_3)) ? (11798145570344470648ULL) : (var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1 + 1] [i_5 - 2]))));
                    }
                } 
            } 
            var_23 = ((/* implicit */long long int) arr_12 [i_3]);
        }
        for (short i_6 = 1; i_6 < 21; i_6 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    var_24 |= ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_10)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((unsigned long long int) var_9));
                        arr_31 [i_8] [i_8] [i_7] [i_7] [i_6 + 1] [i_6 + 1] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_1 - 1] [i_1 - 1] [i_6 - 1] [i_6 + 2])) - (((/* implicit */int) arr_17 [i_1 + 1] [i_6] [i_6 + 2] [i_6 + 2]))));
                        var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))));
                        var_27 *= (+(arr_14 [i_6] [i_6 + 2] [i_6 + 2] [i_6 - 1]));
                    }
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) (signed char)10);
                        arr_34 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1] [i_8] [i_1] [i_1] = ((/* implicit */_Bool) var_12);
                        arr_35 [i_1] [i_8] [i_1] [i_8] [i_1] = ((/* implicit */unsigned char) min(((+(max((var_7), (var_17))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_7] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_6] [i_7] [i_8] [i_7]))) : (var_12))))))));
                        var_29 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-109)) ? (arr_33 [i_1] [i_7] [i_7] [i_6 - 1] [i_6 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) != (min((((/* implicit */long long int) var_15)), (min((var_16), (((/* implicit */long long int) var_10))))))));
                        arr_36 [i_8] [i_6] [i_8] = ((/* implicit */long long int) (~(min((2929682707U), (((((/* implicit */_Bool) 4U)) ? (34U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                    }
                    for (signed char i_11 = 0; i_11 < 23; i_11 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned long long int) (+(min((((((/* implicit */_Bool) var_14)) ? (arr_21 [i_7] [i_7]) : (arr_14 [i_6] [i_7] [i_7] [i_11]))), (arr_37 [i_1 - 1] [i_1 - 1] [i_6 - 1] [i_6 + 2] [i_6 - 1] [i_1 - 1] [i_11])))));
                        var_31 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)114))))), (arr_30 [i_1] [i_1] [i_1] [i_8] [i_1]))) & (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_2)), (6184820518852044101LL))), (((/* implicit */long long int) var_12)))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_12 = 3; i_12 < 22; i_12 += 3) 
                    {
                        arr_42 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_12 - 2])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119)))));
                        arr_43 [i_8] [i_1 + 1] [i_8] [i_1 + 1] [i_12 + 1] [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_8]))));
                        arr_44 [i_8] [i_1] [i_6] [i_6] [i_8] [i_12 + 1] [i_6] = ((/* implicit */short) ((5U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)98)))));
                        var_32 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)116)) && (((/* implicit */_Bool) var_15))));
                        arr_45 [i_8] [i_8] [i_7] [i_1] [i_8] = (-(((var_7) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))));
                    }
                    var_33 |= ((/* implicit */unsigned int) (unsigned char)2);
                }
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    for (long long int i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        {
                            var_34 = (-(((((/* implicit */_Bool) arr_51 [i_1] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))) : (arr_51 [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_14] [i_14]))));
                            var_35 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_32 [i_6 + 2] [i_6 - 1] [i_6 - 1]))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_15 = 2; i_15 < 22; i_15 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_16 = 1; i_16 < 21; i_16 += 3) 
                {
                    for (unsigned char i_17 = 0; i_17 < 23; i_17 += 3) 
                    {
                        {
                            var_36 = ((/* implicit */short) var_13);
                            arr_60 [i_1 + 1] [i_1 + 1] [i_17] [i_17] [i_16 + 2] [i_16] [i_17] = ((/* implicit */short) (~(((((/* implicit */_Bool) 979368097U)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                            var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_51 [i_16 + 1] [i_16 + 1] [i_17] [i_17] [i_17]))));
                            var_38 = ((/* implicit */unsigned long long int) ((unsigned char) var_0));
                            arr_61 [i_1] [i_1] [i_1] [i_1] [i_17] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned char) arr_41 [i_1] [i_6 + 2] [i_6 - 1] [i_15 - 1] [i_1] [i_16 + 2]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_18 = 0; i_18 < 23; i_18 += 4) 
                {
                    for (unsigned int i_19 = 0; i_19 < 23; i_19 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (~(((/* implicit */int) var_2)))))));
                            var_40 = var_5;
                        }
                    } 
                } 
                var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) (((!(((/* implicit */_Bool) var_14)))) ? (arr_41 [i_15 - 2] [i_15] [i_6 - 1] [i_6 + 2] [i_6 - 1] [i_6 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                var_42 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
            }
            for (unsigned char i_20 = 0; i_20 < 23; i_20 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_21 = 0; i_21 < 23; i_21 += 3) 
                {
                    for (short i_22 = 2; i_22 < 20; i_22 += 3) 
                    {
                        {
                            arr_77 [i_22] = ((/* implicit */unsigned long long int) arr_2 [i_21]);
                            var_43 = max((var_5), ((+(var_5))));
                        }
                    } 
                } 
                var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_74 [i_1] [i_6 + 1] [(unsigned short)2] [(unsigned short)2] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_74 [i_1] [i_6 + 1] [18LL] [i_20] [i_1 + 1]))) : (var_10))))))));
            }
            for (unsigned short i_23 = 0; i_23 < 23; i_23 += 3) 
            {
                var_45 = ((/* implicit */unsigned char) (-(((((var_1) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) + (((((/* implicit */_Bool) var_15)) ? (arr_51 [i_1] [i_1] [i_6] [i_6] [i_23]) : (((/* implicit */unsigned long long int) var_9))))))));
                /* LoopNest 2 */
                for (unsigned int i_24 = 0; i_24 < 23; i_24 += 4) 
                {
                    for (unsigned char i_25 = 0; i_25 < 23; i_25 += 3) 
                    {
                        {
                            var_46 = ((/* implicit */short) (+((+(max((var_10), (arr_6 [i_1] [i_1])))))));
                            arr_84 [i_1] [i_23] [i_1] [i_24] [i_23] = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) var_2)), (arr_20 [i_6 - 1] [i_6 - 1] [i_6 - 1])))));
                            var_47 += ((/* implicit */short) max((((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_16)))) ? (max((((/* implicit */unsigned long long int) var_3)), (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)113)) / (((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) (short)-32733))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_26 = 0; i_26 < 23; i_26 += 3) 
                {
                    arr_87 [i_1] [i_6] [i_23] = max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (var_1))), (((/* implicit */unsigned long long int) (~(arr_25 [i_6] [i_6 - 1] [i_1 - 1] [i_23])))));
                    var_48 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_1 + 1] [i_1 + 1] [i_1] [i_6 + 1]))) : (var_17)))));
                }
                var_49 = var_10;
            }
            /* LoopNest 2 */
            for (short i_27 = 0; i_27 < 23; i_27 += 3) 
            {
                for (unsigned int i_28 = 0; i_28 < 23; i_28 += 3) 
                {
                    {
                        var_50 = ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_47 [i_6] [i_6 - 1] [i_6 + 1] [i_6 - 1])) << (((1214714946U) - (1214714934U)))))));
                        arr_95 [i_27] = ((/* implicit */unsigned char) 4294967287U);
                    }
                } 
            } 
            var_51 *= (short)-32749;
        }
        arr_96 [i_1 - 1] [i_1 - 1] &= ((/* implicit */signed char) (+(((((/* implicit */int) (short)32759)) >> (((((/* implicit */int) (unsigned char)165)) - (137)))))));
        var_52 = ((/* implicit */signed char) ((unsigned long long int) ((short) ((var_5) * (var_9)))));
    }
    var_53 = ((/* implicit */unsigned short) max((var_53), (((/* implicit */unsigned short) var_5))));
    /* LoopNest 3 */
    for (unsigned char i_29 = 0; i_29 < 18; i_29 += 3) 
    {
        for (short i_30 = 0; i_30 < 18; i_30 += 3) 
        {
            for (unsigned char i_31 = 2; i_31 < 15; i_31 += 3) 
            {
                {
                    var_54 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)127)) ? (18446744073709551602ULL) : (15354649216390746644ULL))) << (((((min((var_1), (arr_91 [i_29]))) ^ (((/* implicit */unsigned long long int) var_9)))) - (448946597178691711ULL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_32 = 3; i_32 < 14; i_32 += 3) 
                    {
                        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                        {
                            {
                                var_55 += ((/* implicit */unsigned int) (~(var_8)));
                                var_56 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_107 [i_29] [i_29] [i_31 + 3])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) < (((/* implicit */unsigned long long int) 4294967288U)))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_5)) : (var_8))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
