/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209608
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
    var_15 = ((/* implicit */_Bool) ((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((_Bool) 0)), (((_Bool) 1248125335U))))) >= (((/* implicit */int) (signed char)31))));
        arr_3 [i_0] = ((/* implicit */int) (unsigned char)236);
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */int) arr_1 [i_1])))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) >= (((/* implicit */int) ((_Bool) ((unsigned int) arr_4 [i_1]))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) (+(max((756427511), (((/* implicit */int) ((short) arr_0 [i_1])))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 2; i_5 < 9; i_5 += 3) 
                    {
                        {
                            var_20 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))) | (5ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551611ULL)) && (((/* implicit */_Bool) 5272975222872612876LL))))) : (((/* implicit */int) arr_17 [i_5] [i_5] [i_5 - 2] [i_5 + 1] [i_5 - 2] [i_5 - 1])));
                            arr_20 [i_1] [i_1] [i_3] [i_3] [i_5 + 3] [i_5 + 3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_2] [i_5]))) > (arr_11 [i_1]))))) != (((long long int) arr_14 [i_5] [2ULL] [2ULL] [i_3] [2ULL] [2ULL]))));
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [3] [i_5 - 2] [i_5 + 3] [i_5 + 1] [i_5 + 2] [i_5]))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) (-(756427511)));
                /* LoopSeq 3 */
                for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    arr_24 [i_1] [i_6] = ((/* implicit */int) (~((+(var_10)))));
                    arr_25 [i_1] [i_1] [i_1] = -756427511;
                }
                for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    arr_29 [i_1] = ((((((/* implicit */int) arr_23 [i_7])) * (((/* implicit */int) arr_12 [i_7] [i_2] [i_3])))) + (((int) arr_19 [i_1] [i_2] [i_3] [i_7] [1ULL])));
                    arr_30 [i_2] [i_1] [i_3] [i_2] [i_1] = ((/* implicit */long long int) ((608702180871404763LL) > (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                }
                for (signed char i_8 = 2; i_8 < 10; i_8 += 4) 
                {
                    var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_8 + 1] [(_Bool)1] [i_8 + 2])) ? (756427507) : (((/* implicit */int) arr_12 [i_8] [i_8 - 1] [i_8 - 2]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        arr_35 [i_1] [i_1] [i_3] [i_8 - 2] [i_8 - 2] = ((((/* implicit */_Bool) (+(-474686536)))) ? (23ULL) : (((((/* implicit */_Bool) 756427511)) ? (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1])) : (arr_27 [i_9] [i_8] [i_1] [i_1]))));
                        arr_36 [i_1] [i_1] [(short)8] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)15)) << (((-756427520) + (756427539)))));
                        arr_37 [i_1] [i_2] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */int) arr_11 [i_1]);
                        arr_38 [i_1] [i_9] [2U] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) 756427511)) && (((/* implicit */_Bool) 4390513252284751689LL))))) : (756427505)));
                        arr_39 [i_1] [i_2] [2ULL] [i_3] [i_3] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(388704624U))))));
                    }
                    arr_40 [i_3] [i_2] [i_2] [i_8] &= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) 18446744073709551611ULL)))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 1; i_10 < 8; i_10 += 4) 
                {
                    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        {
                            arr_49 [i_1] [(unsigned short)3] [i_1] [i_3] [(unsigned short)3] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_10 + 2] [i_10 + 2] [i_3] [i_10] [i_11] [i_10 + 2])) ? (arr_45 [i_10 + 4] [i_10 + 4] [i_10 + 1] [i_10 - 1] [i_1]) : (((/* implicit */long long int) -756427511))));
                            var_23 = ((((/* implicit */int) arr_47 [i_3] [i_3] [i_3] [i_10 + 2] [(unsigned short)4] [i_3] [i_3])) < (((/* implicit */int) arr_47 [i_1] [i_1] [i_10] [i_10 + 2] [i_11] [i_3] [i_2])));
                        }
                    } 
                } 
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_53 [i_1] [(signed char)2] [i_1] = ((/* implicit */unsigned long long int) -756427486);
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    for (unsigned char i_14 = 3; i_14 < 11; i_14 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((18446744073709551611ULL), (((/* implicit */unsigned long long int) -4390513252284751704LL)))))))) > (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47839)) && (((/* implicit */_Bool) 18446744073709551615ULL))))) ^ (((((/* implicit */_Bool) var_6)) ? (arr_44 [i_1] [i_13] [i_1] [i_2] [i_1] [i_1]) : (((/* implicit */int) arr_54 [(signed char)8] [(signed char)8] [(signed char)8]))))))));
                            arr_61 [i_1] = (i_1 % 2 == 0) ? (((((((/* implicit */int) min((arr_4 [i_1]), ((unsigned char)54)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (short)-28359)) && (((/* implicit */_Bool) (unsigned short)0))))))) << (((((/* implicit */int) arr_16 [9ULL] [6LL] [i_12] [i_2] [i_14 + 1] [i_13])) * (((/* implicit */int) arr_42 [i_1] [6LL] [i_14] [i_14] [i_14] [i_14 - 3])))))) : (((((((/* implicit */int) min((arr_4 [i_1]), ((unsigned char)54)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (short)-28359)) && (((/* implicit */_Bool) (unsigned short)0))))))) << (((((((/* implicit */int) arr_16 [9ULL] [6LL] [i_12] [i_2] [i_14 + 1] [i_13])) * (((/* implicit */int) arr_42 [i_1] [6LL] [i_14] [i_14] [i_14] [i_14 - 3])))) - (43)))));
                            arr_62 [i_1] = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) arr_42 [i_1] [8U] [8U] [i_14 + 1] [3] [3])), (arr_18 [i_14 - 3] [i_14] [i_14 - 2] [i_14 + 1] [i_14 - 1] [i_14 + 1])))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (long long int i_15 = 2; i_15 < 8; i_15 += 4) 
            {
                for (unsigned char i_16 = 3; i_16 < 11; i_16 += 4) 
                {
                    for (long long int i_17 = 0; i_17 < 12; i_17 += 4) 
                    {
                        {
                            var_25 -= ((((-756427505) + (2147483647))) >> (((337686383) - (337686355))));
                            var_26 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)20))));
                            arr_71 [i_17] [i_16] [i_15 - 1] [i_1] [i_2] [i_1] [2ULL] = ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) (_Bool)1)))));
                            arr_72 [i_15] &= ((/* implicit */signed char) arr_13 [i_1] [i_2]);
                            var_27 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)24689))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 12; i_18 += 3) 
        {
            arr_75 [i_1] [(unsigned short)0] [(short)2] &= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)19))));
            arr_76 [i_1] [i_1] = ((/* implicit */_Bool) arr_6 [i_1]);
            var_28 = ((((/* implicit */int) arr_68 [i_1] [i_18])) & ((~(((/* implicit */int) (_Bool)1)))));
            /* LoopNest 3 */
            for (long long int i_19 = 0; i_19 < 12; i_19 += 2) 
            {
                for (unsigned int i_20 = 4; i_20 < 9; i_20 += 4) 
                {
                    for (unsigned short i_21 = 2; i_21 < 9; i_21 += 3) 
                    {
                        {
                            arr_84 [i_1] = ((/* implicit */unsigned int) (+(756427511)));
                            arr_85 [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */short) arr_1 [i_1]);
                            var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((unsigned char) arr_67 [i_1] [i_18] [i_18] [i_20] [(_Bool)0])))));
                        }
                    } 
                } 
            } 
        }
        arr_86 [6U] |= ((/* implicit */unsigned int) min((((((/* implicit */int) (signed char)-115)) - (((/* implicit */int) (unsigned char)255)))), (((((/* implicit */int) arr_69 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) % (((/* implicit */int) arr_12 [i_1] [0] [i_1]))))));
    }
    /* vectorizable */
    for (unsigned char i_22 = 0; i_22 < 12; i_22 += 1) /* same iter space */
    {
        var_30 = ((long long int) arr_77 [i_22] [i_22] [i_22]);
        arr_91 [i_22] = ((/* implicit */unsigned char) ((var_0) * (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255)))))));
        var_31 = ((/* implicit */long long int) arr_31 [0] [i_22] [0] [6U]);
        arr_92 [i_22] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)20)) << (((/* implicit */int) ((((/* implicit */_Bool) arr_68 [(signed char)8] [i_22])) || (((/* implicit */_Bool) (unsigned char)0)))))));
    }
    for (int i_23 = 0; i_23 < 23; i_23 += 1) 
    {
        arr_95 [i_23] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (4294967295U)));
        var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) 0)) && ((_Bool)1))))))) || (((/* implicit */_Bool) arr_93 [i_23])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_24 = 1; i_24 < 22; i_24 += 1) 
        {
            arr_99 [i_24] [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_98 [i_24]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_96 [i_24] [(signed char)16] [i_23]))))))));
            var_33 = ((/* implicit */long long int) arr_98 [i_24]);
            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) 4503599627370495ULL))));
            arr_100 [i_23] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) >> (((var_10) - (540405639U)))))) ? (((unsigned long long int) arr_97 [i_23] [i_24] [i_23])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
        }
        for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_26 = 1; i_26 < 22; i_26 += 2) 
            {
                for (short i_27 = 0; i_27 < 23; i_27 += 3) 
                {
                    {
                        arr_109 [i_23] [i_25] [i_26] [i_27] [(_Bool)1] [i_27] = ((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_106 [i_23] [i_25 + 1] [i_26] [i_27]))) < (arr_103 [i_23] [i_23])))));
                        arr_110 [i_27] [i_26] [i_23] = ((/* implicit */signed char) (+(-756427511)));
                        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_94 [i_23] [i_23]))))), (min((arr_98 [(_Bool)1]), (((/* implicit */unsigned int) var_8))))))) ? ((-(arr_96 [i_26 - 1] [i_26 - 1] [i_26]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))))))));
                    }
                } 
            } 
            arr_111 [i_23] = ((/* implicit */int) 18446744073709551615ULL);
            arr_112 [(unsigned char)9] [(unsigned char)9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-7340670107347114998LL)))) && (((/* implicit */_Bool) arr_96 [i_23] [(unsigned short)5] [i_25 + 1]))));
        }
    }
}
