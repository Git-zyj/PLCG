/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206963
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_1 [(_Bool)1])))))) <= (((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) min((var_0), (((/* implicit */short) var_5))))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) var_3))))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((var_4), (((/* implicit */unsigned short) arr_2 [i_0 - 1] [i_1]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_11 += ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
                    arr_10 [i_1] [i_1] [(unsigned short)1] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (signed char)51))))));
                    var_12 = ((/* implicit */signed char) var_1);
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    var_13 += ((((/* implicit */_Bool) var_4)) ? (arr_5 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1]))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 15; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_5 [i_3] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-51))))))));
                                arr_19 [i_0] [i_1] [i_3] [i_1] [(short)10] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1]))));
                        var_16 = (unsigned char)48;
                    }
                    for (short i_7 = 1; i_7 < 15; i_7 += 2) 
                    {
                        var_17 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) -5213114251586577369LL)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) var_6))))));
                        var_18 += ((/* implicit */signed char) ((unsigned char) (short)-20083));
                        var_19 = ((/* implicit */short) (unsigned char)225);
                    }
                }
                var_20 = ((/* implicit */unsigned int) (signed char)-57);
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    var_21 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) var_7))));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_1] [i_8] [i_8] [i_1] [i_1] [(unsigned short)2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))));
                    var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_8] [i_8]))));
                    /* LoopSeq 3 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_10 = 1; i_10 < 15; i_10 += 2) 
                        {
                            arr_33 [(signed char)3] [i_1] [i_1] [i_1] [(signed char)1] [(short)13] = (unsigned char)30;
                            var_24 = ((/* implicit */unsigned short) var_7);
                        }
                        var_25 *= ((/* implicit */unsigned int) arr_23 [i_0] [i_1] [i_1] [(short)10] [i_9] [i_9]);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_12 = 4; i_12 < 15; i_12 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((signed char) (signed char)37));
                            arr_41 [i_0] [(unsigned char)8] [(_Bool)1] [i_11] [i_12] &= ((/* implicit */unsigned short) var_8);
                            var_27 = ((/* implicit */_Bool) ((long long int) (unsigned char)0));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_46 [i_1] [i_1] = ((/* implicit */unsigned char) (signed char)13);
                            var_28 = ((/* implicit */signed char) var_0);
                        }
                        for (short i_14 = 2; i_14 < 13; i_14 += 2) 
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_1] [i_0 - 1])) << (((4294967285U) - (4294967279U)))));
                            var_30 -= ((/* implicit */signed char) var_1);
                            var_31 &= ((/* implicit */_Bool) (unsigned char)215);
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_1] [(short)3])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)53))) : (arr_5 [i_1] [i_0 - 1])));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_15 = 0; i_15 < 16; i_15 += 4) 
                        {
                            var_33 += ((/* implicit */signed char) (-((+(((/* implicit */int) var_5))))));
                            arr_54 [(unsigned char)13] [i_1] [i_1] [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) arr_44 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [(signed char)15] [i_0] [i_0])) : (((/* implicit */int) (signed char)49))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-50))))) : (((/* implicit */int) arr_39 [i_1] [1U] [i_8] [i_1] [i_1]))));
                            var_34 += ((/* implicit */short) arr_20 [i_15] [(signed char)10] [2LL] [(unsigned char)10]);
                            var_35 &= (signed char)92;
                            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) (_Bool)1))));
                        }
                        var_37 ^= (signed char)113;
                        var_38 ^= ((/* implicit */_Bool) (short)-32268);
                    }
                    for (long long int i_16 = 4; i_16 < 13; i_16 += 2) 
                    {
                        var_39 ^= ((/* implicit */short) (unsigned char)23);
                        var_40 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((short) arr_43 [i_16] [i_16 + 3] [i_16] [i_16]))) : (((/* implicit */int) (signed char)126))));
                        arr_57 [i_1] [(short)15] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) (short)0)))) : (((/* implicit */int) arr_17 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16 + 1]))));
                    }
                    arr_58 [i_1] [i_1] = (signed char)0;
                }
                /* vectorizable */
                for (long long int i_17 = 0; i_17 < 16; i_17 += 2) /* same iter space */
                {
                    var_41 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0 - 1])))))));
                        var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((signed char) (short)0)))));
                    }
                    var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5711))) : (arr_52 [i_0 - 1] [i_0])));
                }
                for (long long int i_19 = 0; i_19 < 16; i_19 += 2) /* same iter space */
                {
                    arr_69 [i_1] = ((/* implicit */signed char) ((short) (short)5710));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_20 = 0; i_20 < 16; i_20 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_21 = 2; i_21 < 14; i_21 += 1) 
                        {
                            var_45 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_0 - 1]))));
                            arr_74 [i_1] [i_1] [i_19] [i_20] [(_Bool)1] [i_21] = ((/* implicit */short) (signed char)13);
                            var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) arr_5 [i_20] [i_19]))));
                            var_47 = ((unsigned short) (short)-32760);
                        }
                        for (short i_22 = 0; i_22 < 16; i_22 += 3) 
                        {
                            arr_77 [i_20] [i_1] [i_19] [i_20] [i_22] &= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32759))))) ? (((((/* implicit */int) (signed char)-66)) | (((/* implicit */int) (signed char)28)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            arr_78 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (-((~(-3615908388017426912LL)))));
                            arr_79 [i_0] [i_1] [i_19] [(_Bool)1] [i_1] [i_20] [i_22] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)12252))));
                        }
                        var_48 = ((/* implicit */unsigned short) (signed char)3);
                        var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_49 [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) (signed char)13))));
                        arr_80 [i_0] [i_1] [i_20] [i_20] = ((/* implicit */short) (+(((/* implicit */int) arr_40 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                    }
                    /* vectorizable */
                    for (long long int i_23 = 1; i_23 < 15; i_23 += 4) 
                    {
                        var_50 = var_4;
                        var_51 = ((/* implicit */unsigned short) arr_48 [i_23 + 1] [i_0 - 1] [i_0 - 1]);
                        var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) ((((var_1) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) (signed char)85)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-32))))))))));
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_24 = 3; i_24 < 15; i_24 += 3) /* same iter space */
                    {
                        var_53 += ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0))));
                        var_54 = (!((!(((/* implicit */_Bool) (unsigned short)58259)))));
                    }
                    /* vectorizable */
                    for (short i_25 = 3; i_25 < 15; i_25 += 3) /* same iter space */
                    {
                        var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) (unsigned char)5))));
                        var_56 -= ((/* implicit */short) (~(((/* implicit */int) (signed char)69))));
                        var_57 -= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-57))));
                        arr_89 [i_1] [(short)14] [i_1] [i_1] = ((/* implicit */signed char) ((long long int) (_Bool)0));
                    }
                    /* vectorizable */
                    for (short i_26 = 3; i_26 < 15; i_26 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_27 = 2; i_27 < 14; i_27 += 3) 
                        {
                            var_58 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) var_1))))));
                            var_59 &= ((/* implicit */unsigned short) var_3);
                            arr_98 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-38))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(_Bool)1]))))) : (arr_85 [i_27 - 1] [i_27] [i_27 - 1] [i_27 + 2] [1LL])));
                        }
                        var_60 = (!(((/* implicit */_Bool) var_2)));
                        var_61 = ((/* implicit */unsigned char) arr_13 [i_26] [i_26] [i_26 - 2] [i_1]);
                    }
                    for (short i_28 = 3; i_28 < 15; i_28 += 3) /* same iter space */
                    {
                        arr_101 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (short)12664))))))));
                        var_62 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_19] [i_1] [i_19] [i_19] [i_1])))))))) ? (((((/* implicit */_Bool) (short)4092)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98))) : (arr_65 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) min(((short)4073), (var_9)))) : (((/* implicit */int) var_4)))))));
                    }
                }
            }
        } 
    } 
    var_63 = ((/* implicit */unsigned int) max((var_63), (((/* implicit */unsigned int) (signed char)-54))));
    var_64 = var_1;
    /* LoopNest 3 */
    for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
    {
        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
        {
            for (unsigned char i_31 = 0; i_31 < 15; i_31 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_32 = 0; i_32 < 15; i_32 += 2) 
                    {
                        for (unsigned short i_33 = 0; i_33 < 15; i_33 += 1) 
                        {
                            {
                                var_65 += ((/* implicit */signed char) (~(((/* implicit */int) ((1590641525U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-70))))))));
                                arr_115 [i_29] [i_30] [i_29] [i_30] [i_33] = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */short) var_6)), (max((((/* implicit */short) var_1)), (var_9)))))) + (((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                    var_66 = ((/* implicit */signed char) max((var_9), (((/* implicit */short) var_2))));
                    var_67 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-1))));
                    var_68 = ((/* implicit */unsigned int) (signed char)50);
                }
            } 
        } 
    } 
}
