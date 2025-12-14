/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30285
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
    var_12 = ((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) << (((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */int) var_10))))))) - (15583773148763913068ULL)))));
    var_13 = ((/* implicit */signed char) var_11);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (17971807055565147809ULL)))) && (((/* implicit */_Bool) 12973367265176811741ULL)));
                    var_14 = ((/* implicit */short) 11ULL);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) var_0);
                                arr_20 [i_0] [(unsigned char)21] [i_0] [i_3] [i_4] = ((/* implicit */long long int) var_0);
                                arr_21 [i_2] [i_1] [i_2] [i_2] [i_4 - 1] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) > (((/* implicit */unsigned long long int) arr_8 [i_2] [i_2] [i_1 - 1])))))) / (min((((/* implicit */unsigned long long int) (short)-13325)), (12973367265176811722ULL)))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] [1ULL] [(signed char)1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_18 [i_0] [16ULL] [7] [i_1] [i_2] [21U] [i_2]))));
                }
            } 
        } 
        arr_23 [i_0] [i_0] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((var_3) <= (5516891332314961502LL)))), (var_11))), (var_0)));
        /* LoopSeq 2 */
        for (int i_5 = 3; i_5 < 21; i_5 += 1) 
        {
            arr_26 [0] [0] |= ((/* implicit */unsigned char) var_7);
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_4 [i_0] [i_0]))) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_0] [i_5 + 2])) % (((/* implicit */int) arr_25 [i_0] [i_5 + 2])))))));
        }
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            var_16 = ((/* implicit */unsigned int) var_3);
            /* LoopSeq 2 */
            for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+((-2147483647 - 1))))), (var_1)));
                /* LoopSeq 1 */
                for (unsigned int i_8 = 1; i_8 < 21; i_8 += 1) 
                {
                    arr_34 [i_0] [i_8] = min((((/* implicit */int) min((var_7), (arr_11 [i_7] [i_7] [i_8 - 1] [i_7])))), (((((/* implicit */int) (short)25364)) << (((((((/* implicit */int) arr_16 [i_0] [i_0] [i_8 - 1] [i_8] [i_0] [(unsigned short)2])) + (19884))) - (20))))));
                    var_18 = ((/* implicit */unsigned int) 12973367265176811740ULL);
                }
                arr_35 [i_0] [i_6] [i_0] &= ((/* implicit */_Bool) min(((+(arr_0 [i_7]))), (((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_0 [i_7])))));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    for (signed char i_10 = 3; i_10 < 22; i_10 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) var_2);
                            var_20 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_17 [i_0])) ? (474937018144403819ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0]))))));
                        }
                    } 
                } 
                arr_40 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned char) var_2);
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    for (short i_13 = 4; i_13 < 22; i_13 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551602ULL))));
                            arr_48 [i_0] = ((/* implicit */unsigned long long int) arr_28 [i_6] [(short)14] [i_13]);
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) var_10)) ^ (((/* implicit */int) (short)13324)))), ((~(((/* implicit */int) arr_29 [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_12] [i_12 - 1] [i_12] [i_12 - 1] [i_12 - 1] [i_12 - 1]))))) : ((~(((/* implicit */int) arr_16 [i_0] [i_6] [(_Bool)1] [i_12] [i_13 - 4] [i_0]))))));
                            arr_49 [i_0] [i_6] [i_6] [i_11] [i_0] [i_13] [(_Bool)1] = arr_32 [(signed char)15] [i_12 - 1] [i_13 + 1] [i_13 - 2];
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_14 = 4; i_14 < 22; i_14 += 2) 
                {
                    for (long long int i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        {
                            arr_56 [i_6] [i_0] [i_6] [i_6] [i_6] [i_0] [i_6] = (-(12973367265176811732ULL));
                            var_23 = ((/* implicit */int) arr_4 [i_0] [i_0]);
                        }
                    } 
                } 
            }
            var_24 *= ((/* implicit */unsigned long long int) ((min((1349024341U), (((/* implicit */unsigned int) (short)13334)))) % (((/* implicit */unsigned int) ((((/* implicit */int) (short)-28352)) - (((/* implicit */int) (signed char)1)))))));
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (-(min((arr_4 [(unsigned char)4] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)126))))))))))));
        }
        var_26 = ((/* implicit */short) (((-(((/* implicit */int) var_2)))) + (((/* implicit */int) min((arr_55 [i_0] [i_0] [(short)16] [i_0] [i_0]), (arr_55 [i_0] [i_0] [8U] [i_0] [i_0]))))));
        var_27 = arr_13 [i_0] [i_0] [i_0] [i_0];
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_37 [14U] [i_16] [i_16] [i_16] [i_16] [i_16])))) ? (((/* implicit */int) ((short) ((_Bool) (unsigned char)22)))) : (((/* implicit */int) (short)16535))));
        /* LoopNest 2 */
        for (int i_17 = 2; i_17 < 21; i_17 += 1) 
        {
            for (unsigned char i_18 = 3; i_18 < 22; i_18 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_19 = 1; i_19 < 20; i_19 += 2) 
                    {
                        var_29 = ((((((/* implicit */int) arr_43 [i_18] [i_18] [i_18 - 2] [i_18 - 3])) <= (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) var_0)));
                        var_30 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_4)))) ? (((arr_58 [i_19] [i_19 - 1]) ^ (858684989U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-88)))));
                        arr_70 [i_17] [i_17 - 2] [i_18 - 2] [i_16] = ((/* implicit */unsigned int) (signed char)-19);
                    }
                    for (unsigned char i_20 = 1; i_20 < 19; i_20 += 3) 
                    {
                        arr_73 [i_17] [(short)18] [i_18 + 1] [i_18 + 1] = ((/* implicit */unsigned int) var_3);
                        var_31 += ((/* implicit */unsigned char) (+(arr_24 [2U])));
                    }
                    var_32 = ((/* implicit */long long int) ((unsigned long long int) (~(((/* implicit */int) (short)64)))));
                    arr_74 [i_16] [(unsigned short)1] [i_18] [i_17] = ((/* implicit */unsigned short) (+((+(arr_53 [2LL] [i_17 - 2] [i_17 - 1] [i_18 + 1] [i_17 - 2])))));
                    var_33 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) 3880921436U)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)3))))) : (arr_27 [i_17 - 1])))));
                    arr_75 [(signed char)18] [i_17] [(signed char)18] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((signed char) arr_45 [i_17 - 2] [i_18 + 1]))), (((((/* implicit */_Bool) (signed char)-82)) ? (3436282292U) : (((/* implicit */unsigned int) 652196060))))));
                }
            } 
        } 
        arr_76 [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [(signed char)13] [5ULL] [5ULL])) || (((/* implicit */_Bool) ((((/* implicit */int) (short)-27)) ^ (((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (unsigned short)12031)) : (-292021193))))))));
    }
    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
    {
        arr_79 [i_21] [i_21] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_21])))))));
        /* LoopSeq 1 */
        for (short i_22 = 2; i_22 < 21; i_22 += 4) 
        {
            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */int) (unsigned short)2006)) : (652196032))))));
            arr_84 [i_21] [i_22 - 1] = ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)37)), ((unsigned char)203))))));
        }
    }
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) (unsigned short)8191))));
        arr_88 [i_23] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_80 [i_23])) : (((/* implicit */int) arr_80 [i_23]))))), (var_3)));
        arr_89 [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_3)));
    }
}
