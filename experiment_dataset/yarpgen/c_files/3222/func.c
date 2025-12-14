/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3222
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_6 [i_0] [i_1] [i_2] [i_0])))) : (((((/* implicit */_Bool) var_12)) ? (-7254777796821300376LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2])))))));
                    arr_9 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (((var_10) - (((/* implicit */unsigned long long int) arr_7 [i_2] [i_1] [i_2]))))));
                    var_13 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) ((70360154243072ULL) > (((/* implicit */unsigned long long int) arr_7 [i_2] [i_1] [i_0])))))));
                }
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    arr_12 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */long long int) (-(((unsigned long long int) ((((/* implicit */_Bool) -7254777796821300354LL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (signed char)127))));
                }
                for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)92);
                    arr_18 [i_0] [i_4] |= ((/* implicit */long long int) (_Bool)1);
                    var_15 = ((/* implicit */unsigned short) arr_15 [i_0] [i_1] [i_1] [i_0]);
                }
                arr_19 [i_1] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 8589934591LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((signed char) (_Bool)1))))));
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (((-(-102222307064825901LL))) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) + (var_0)))))))))));
                arr_20 [i_1] [i_0] = ((/* implicit */short) -757512114);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)24410)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_23 [i_5] [i_5]))))))) : (var_11)));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 1) 
        {
            for (long long int i_7 = 2; i_7 < 18; i_7 += 3) 
            {
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    {
                        var_18 |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_7] [i_6 - 1])) && (((/* implicit */_Bool) arr_11 [i_5] [i_6 - 1])))))));
                        var_19 = ((/* implicit */_Bool) (((~(((/* implicit */int) var_3)))) - (((/* implicit */int) (unsigned char)202))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_6] [(short)4])) ? (((/* implicit */int) arr_31 [(unsigned char)6] [i_6] [(unsigned char)6] [i_8] [i_6])) : (((/* implicit */int) arr_28 [i_5] [i_5] [i_7])))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (signed char i_10 = 1; i_10 < 18; i_10 += 2) 
        {
            {
                arr_37 [i_9] [i_10 + 1] [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
                var_21 = ((/* implicit */signed char) (_Bool)0);
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_9] [i_9]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_9] [(signed char)2])) ? (((/* implicit */int) arr_25 [i_9] [(signed char)2])) : (((/* implicit */int) arr_25 [i_9] [(signed char)12]))))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) 
    {
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_11])) && (((/* implicit */_Bool) arr_15 [i_11] [i_11] [i_11] [i_11]))));
        var_24 = ((/* implicit */long long int) (~(((arr_29 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [(unsigned short)14] [(unsigned short)14] [i_11] [i_11] [i_11]))) : (arr_3 [i_11] [i_11])))));
        /* LoopSeq 4 */
        for (long long int i_12 = 1; i_12 < 16; i_12 += 1) 
        {
            arr_43 [i_11] [i_11] [i_11] = ((/* implicit */long long int) var_5);
            var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_13 [i_11] [i_12 + 2] [i_12]))));
        }
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_14 = 3; i_14 < 17; i_14 += 4) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_16 = 0; i_16 < 18; i_16 += 1) /* same iter space */
                        {
                            var_26 &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_41 [i_13 + 1] [i_13]))));
                            var_27 = ((/* implicit */signed char) var_5);
                        }
                        for (unsigned short i_17 = 0; i_17 < 18; i_17 += 1) /* same iter space */
                        {
                            var_28 &= (signed char)-99;
                            var_29 = ((/* implicit */signed char) (_Bool)1);
                            var_30 = ((/* implicit */long long int) (short)-21421);
                        }
                        for (unsigned short i_18 = 0; i_18 < 18; i_18 += 1) /* same iter space */
                        {
                            arr_57 [i_11] [i_14] [i_15] [i_14] = ((/* implicit */int) (-(-7254777796821300376LL)));
                            var_31 = ((/* implicit */signed char) (short)-24481);
                        }
                        for (unsigned short i_19 = 0; i_19 < 18; i_19 += 4) 
                        {
                            var_32 = ((/* implicit */long long int) var_1);
                            var_33 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 3288038784000412792LL)))))));
                            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (~(((((/* implicit */_Bool) var_10)) ? (arr_30 [i_19] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)124))))))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 4) 
                        {
                            var_35 ^= ((/* implicit */short) arr_48 [i_11] [i_13] [i_13]);
                            arr_63 [i_14] [i_14] [i_11] [i_14] [i_14] [i_14] [i_11] = ((/* implicit */signed char) ((((arr_3 [i_11] [i_13]) ^ (((/* implicit */unsigned long long int) var_12)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_14] [i_14] [i_14 - 3] [i_14 + 1] [i_14])))));
                        }
                        for (short i_21 = 0; i_21 < 18; i_21 += 1) 
                        {
                            arr_67 [i_11] [i_13] [i_13] [i_14] [i_15] [i_14] [i_21] = ((/* implicit */unsigned short) (_Bool)1);
                            arr_68 [i_14] [i_14] [i_14] [i_14] [i_15] [i_21] = ((/* implicit */unsigned int) ((unsigned long long int) arr_2 [i_11] [i_11] [i_14 - 1]));
                            var_36 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_36 [i_14]))));
                            arr_69 [i_14] [i_14 - 1] [i_15] [i_14] = ((/* implicit */_Bool) (short)12106);
                        }
                    }
                } 
            } 
            var_37 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 7503145827728973182LL))) << (((((1018893060752536242LL) + (((/* implicit */long long int) ((/* implicit */int) arr_33 [(signed char)2]))))) - (1018893060752577513LL)))));
            var_38 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_16 [i_11] [i_11] [i_13 + 1])) - (var_0)));
            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) + (-7944334300832830216LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_59 [(short)16] [i_13] [i_13 + 1] [i_13 + 1] [i_13 + 1])))));
        }
        for (unsigned short i_22 = 1; i_22 < 16; i_22 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_23 = 0; i_23 < 18; i_23 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_24 = 3; i_24 < 17; i_24 += 1) 
                {
                    var_40 = ((/* implicit */long long int) (+(((/* implicit */int) arr_54 [i_11] [i_11] [i_23] [i_22] [i_11] [i_22] [i_22]))));
                    var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)32512))));
                    /* LoopSeq 1 */
                    for (long long int i_25 = 0; i_25 < 18; i_25 += 1) 
                    {
                        var_42 = ((/* implicit */long long int) (short)0);
                        var_43 ^= ((/* implicit */unsigned short) (~(arr_48 [i_11] [i_24 - 1] [i_23])));
                        var_44 &= ((/* implicit */_Bool) 8081755527409902010LL);
                    }
                }
                arr_79 [i_11] [i_11] [i_23] [i_22] &= ((/* implicit */unsigned char) ((arr_23 [i_11] [i_11]) ? (((/* implicit */int) arr_47 [i_11] [i_11] [i_23])) : (((/* implicit */int) arr_47 [i_11] [i_11] [i_23]))));
            }
            for (signed char i_26 = 0; i_26 < 18; i_26 += 3) /* same iter space */
            {
                arr_82 [i_11] [i_22] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_11] [i_22] [i_22 - 1])) ? (((/* implicit */int) arr_65 [i_11] [i_22] [i_22 - 1] [i_22 - 1] [i_26])) : (((/* implicit */int) arr_65 [i_22 - 1] [i_22] [i_22 + 1] [i_22 - 1] [i_26]))));
                /* LoopSeq 2 */
                for (long long int i_27 = 1; i_27 < 14; i_27 += 1) 
                {
                    var_45 = ((/* implicit */unsigned short) (-(arr_30 [i_22] [i_22 - 1])));
                    arr_86 [i_22] = ((/* implicit */unsigned short) (short)-5322);
                }
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_22])) ? (-3200787797625601005LL) : (((long long int) (_Bool)1))));
                    var_47 = ((/* implicit */unsigned short) (_Bool)1);
                    var_48 = ((/* implicit */unsigned int) -757512114);
                    var_49 = ((/* implicit */long long int) (signed char)-113);
                }
            }
            for (signed char i_29 = 0; i_29 < 18; i_29 += 3) /* same iter space */
            {
                var_50 = ((/* implicit */unsigned char) ((((_Bool) arr_7 [i_11] [i_22] [i_22])) ? (((/* implicit */unsigned long long int) 340639340U)) : ((~(11585491019332187705ULL)))));
                var_51 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_44 [i_22 + 1] [i_22 - 1] [i_29]))) + ((+(var_2)))));
                /* LoopNest 2 */
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        {
                            var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (11585491019332187686ULL) : ((-(var_10)))));
                            var_53 = ((/* implicit */unsigned long long int) arr_41 [i_11] [i_22]);
                            var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_29] [i_29] [i_22 + 1])) ? (((/* implicit */int) arr_59 [i_22] [i_31] [i_31] [i_31] [i_22])) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                arr_97 [i_11] [i_22] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (unsigned char)217))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2288943091U))))) : (((/* implicit */int) (_Bool)1))));
            }
            var_55 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1553991345016533393LL)) ? (arr_1 [i_22 - 1]) : (arr_1 [i_22 + 1])));
        }
        for (unsigned short i_32 = 0; i_32 < 18; i_32 += 1) 
        {
            arr_100 [i_32] = ((/* implicit */unsigned char) arr_95 [i_11] [i_32] [i_32]);
            arr_101 [i_32] = ((/* implicit */unsigned char) 3901728264478789143ULL);
        }
        /* LoopSeq 1 */
        for (unsigned int i_33 = 0; i_33 < 18; i_33 += 1) 
        {
            var_56 -= ((/* implicit */unsigned short) (short)-12107);
            arr_104 [i_11] [(short)14] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_77 [i_33]))));
            /* LoopNest 3 */
            for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
            {
                for (long long int i_35 = 0; i_35 < 18; i_35 += 1) 
                {
                    for (signed char i_36 = 0; i_36 < 18; i_36 += 2) 
                    {
                        {
                            var_57 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                            var_58 ^= ((/* implicit */unsigned short) arr_47 [i_11] [i_11] [i_36]);
                            var_59 = ((/* implicit */unsigned short) (~(((-7995499197645293415LL) - (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_11] [i_11] [i_11] [i_33] [i_11])))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_60 -= ((/* implicit */signed char) (unsigned short)42401);
}
