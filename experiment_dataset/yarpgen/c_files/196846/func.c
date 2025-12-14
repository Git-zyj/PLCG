/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196846
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]))));
                    var_13 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_9)) * (arr_2 [i_1 - 1] [i_1] [i_2])));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 16; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_1 - 1] [i_4] [i_4 - 1] [i_4]))));
                                var_15 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1] [i_1] [i_5]))));
                                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_9))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 4) 
                        {
                            var_17 -= ((/* implicit */unsigned char) var_0);
                            arr_19 [(unsigned char)13] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_11);
                        }
                        for (unsigned char i_8 = 1; i_8 < 15; i_8 += 2) 
                        {
                            arr_22 [i_6] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_8 + 2] [i_0] [i_1 - 1])) ? (var_7) : (arr_14 [i_0] [i_0] [i_8 + 1] [i_0] [i_1 + 1]));
                            var_18 -= (-(((var_5) % (arr_6 [i_6]))));
                        }
                        arr_23 [i_0] [i_0] [i_1] [i_0] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? ((+(-65122958253931350LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [(short)13])))));
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_26 [i_0] [9] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10054918838413915991ULL)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_11 [i_0] [14ULL] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_17 [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133))) >= (8391825235295635628ULL))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
                        {
                            var_19 ^= ((/* implicit */unsigned long long int) (unsigned short)65535);
                            var_20 = ((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_0] [i_1]);
                            var_21 ^= ((/* implicit */unsigned char) arr_15 [(unsigned char)2] [i_1 - 2] [i_1] [i_9]);
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
                        {
                            var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_24 [i_0] [i_1])) >= (arr_4 [i_11] [i_0]))))) : (var_7)));
                            var_23 -= ((/* implicit */short) (-(((/* implicit */int) ((short) var_2)))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [4ULL] [i_3] = ((/* implicit */unsigned char) (+(var_0)));
                            arr_36 [i_0] [i_3] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_12 [i_3] [i_3]);
                            var_24 = ((((/* implicit */_Bool) 10054918838413915976ULL)) ? (3007935447614201223ULL) : (((/* implicit */unsigned long long int) 624810448)));
                            arr_37 [i_0] [i_0] [i_0] [i_9] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)5886))));
                        }
                        for (short i_13 = 0; i_13 < 17; i_13 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)0));
                            arr_40 [i_0] [i_1] [i_3] [i_3] [i_13] = arr_21 [i_3] [i_0] [i_13] [i_13] [i_13] [i_13] [i_13];
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_9 - 1])) ? (arr_33 [i_13] [i_1] [i_9 - 1]) : (arr_33 [i_1] [i_1] [i_9 - 1]))))));
                            arr_41 [i_0] [i_0] = ((/* implicit */int) arr_6 [i_0]);
                        }
                    }
                    for (unsigned short i_14 = 0; i_14 < 17; i_14 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_39 [i_0] [(unsigned char)12] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 17; i_15 += 2) 
                    {
                        arr_48 [i_0] [i_0] [i_3] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (arr_46 [i_0] [i_3] [i_1] [i_0])))) + (arr_6 [i_0]));
                        var_29 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_32 [i_15] [3ULL])) : (((/* implicit */int) (short)32766))))));
                        arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
                    }
                    var_30 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3])) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1]))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 17; i_17 += 2) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 17; i_18 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */int) var_1);
                                var_32 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 208623295U)) ? (arr_10 [i_0] [i_0] [i_16] [i_0]) : (var_5)))))) ? (min((arr_44 [(short)8] [i_17] [i_17] [i_17] [(short)6]), (((/* implicit */unsigned long long int) var_6)))) : (((((/* implicit */unsigned long long int) var_9)) % (arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */unsigned long long int) (short)2047);
                    var_34 = arr_2 [i_0] [i_1 + 1] [i_0];
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 0; i_19 < 17; i_19 += 2) 
                    {
                        for (short i_20 = 0; i_20 < 17; i_20 += 1) 
                        {
                            {
                                var_35 ^= ((/* implicit */short) arr_13 [i_0] [i_1] [i_1] [i_19] [i_20]);
                                var_36 |= ((/* implicit */unsigned char) ((short) (_Bool)0));
                            }
                        } 
                    } 
                }
                arr_63 [i_0] = ((/* implicit */short) arr_27 [i_0] [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]);
                var_37 = ((/* implicit */unsigned char) var_5);
                var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_0] [i_1] [i_0] [i_0]))) > ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])) : (arr_2 [i_0] [i_1] [i_1]))))))))));
                arr_64 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_24 [i_0] [i_0]);
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned long long int) var_3);
    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) var_10))))) ? (var_5) : (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) var_10)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((((!(((/* implicit */_Bool) var_3)))) ? (var_0) : (((/* implicit */unsigned long long int) (+(var_9))))))));
    /* LoopNest 2 */
    for (short i_21 = 0; i_21 < 23; i_21 += 2) 
    {
        for (unsigned char i_22 = 2; i_22 < 21; i_22 += 1) 
        {
            {
                arr_69 [i_22] = ((/* implicit */unsigned short) var_3);
                arr_70 [i_22] = ((/* implicit */int) (unsigned char)187);
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned long long int) var_11);
}
