/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202817
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (396935499)))) ? (((/* implicit */unsigned long long int) var_4)) : (min((((/* implicit */unsigned long long int) -396935500)), (15479107710826787248ULL)))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!(var_13)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_4] [19U] [i_4] = ((/* implicit */unsigned long long int) var_12);
                                var_21 |= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [(unsigned char)0] [i_4]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))));
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_0] [18LL] [i_2] = ((/* implicit */unsigned long long int) (!(var_10)));
                        var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_1 + 2]))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19828)) ? (1282610442U) : (((/* implicit */unsigned int) -396935499))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_2])) > (((/* implicit */int) arr_21 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_6]))));
                        arr_23 [i_0] [i_0] [i_2] [i_6] = ((/* implicit */signed char) ((var_13) ? (-396935492) : ((~(((/* implicit */int) var_11))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_8 = 2; i_8 < 22; i_8 += 2) 
                        {
                            arr_30 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -396935500)) ^ (5333363327578487350ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_5))))) : (((((/* implicit */_Bool) 8310545093992610388LL)) ? (arr_9 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551600ULL))) == (((/* implicit */unsigned long long int) ((var_17) ? (((/* implicit */int) arr_17 [i_0] [18ULL] [i_7] [1ULL])) : (((/* implicit */int) var_14))))))))));
                            var_27 &= ((/* implicit */unsigned char) var_5);
                            var_28 |= ((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 2] [i_1 + 1] [i_8 + 1])) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) ((_Bool) (_Bool)1))));
                            var_29 += ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
                        }
                        for (unsigned int i_9 = 1; i_9 < 21; i_9 += 4) 
                        {
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((_Bool) (_Bool)1)))));
                            arr_34 [i_0] [i_0] [i_7] [i_7] [i_9] = ((/* implicit */unsigned int) arr_24 [i_0] [i_0] [i_2] [i_7] [i_9]);
                            arr_35 [i_0] [i_0] [i_2] [i_7] [i_9] |= ((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_1 - 1] [i_9 + 2]));
                        }
                        for (unsigned char i_10 = 2; i_10 < 20; i_10 += 3) /* same iter space */
                        {
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 1] [i_0] [i_7])) && (((/* implicit */_Bool) 18371092749730334858ULL))));
                            var_32 = ((/* implicit */_Bool) (~(arr_8 [i_0] [i_2] [i_10 + 3])));
                            var_33 = ((_Bool) ((((/* implicit */_Bool) -396935501)) || (((/* implicit */_Bool) 8388607U))));
                            var_34 = ((/* implicit */long long int) arr_11 [i_0] [i_1] [i_7]);
                        }
                        for (unsigned char i_11 = 2; i_11 < 20; i_11 += 3) /* same iter space */
                        {
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(396935499)))) ? (((/* implicit */int) arr_21 [i_1] [i_2] [i_7] [i_1])) : (((/* implicit */int) arr_4 [i_1 + 2] [i_11 + 1]))));
                            var_36 = ((unsigned int) (short)-1);
                            var_37 *= ((((/* implicit */int) arr_31 [i_1 + 1] [i_2] [i_2] [i_2])) >= (((/* implicit */int) arr_31 [i_1 + 1] [i_0] [i_11] [i_11])));
                            var_38 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [22U] [i_1 - 1] [i_1 + 1] [i_7]))));
                        }
                        var_39 = ((/* implicit */long long int) ((_Bool) arr_38 [i_1] [i_1 - 2] [i_1] [i_1] [i_1 + 2]));
                        var_40 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(466524416U)))) ? (((((/* implicit */_Bool) 5300801750690053035LL)) ? (5333363327578487363ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (~(arr_28 [i_0] [i_0] [i_0] [i_2] [i_7]))))));
                        var_41 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [18LL] [1ULL] [i_2] [1ULL]))));
                        var_42 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_14))));
                    }
                    for (unsigned short i_12 = 1; i_12 < 20; i_12 += 3) 
                    {
                        var_43 = ((/* implicit */unsigned char) ((15ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 2] [i_12 + 2])))));
                        var_44 = ((/* implicit */unsigned long long int) arr_14 [i_1 + 2] [i_1 + 2] [i_1] [i_1 - 1] [i_1 - 2] [i_12] [(unsigned short)11]);
                    }
                    var_45 = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_3)))));
                }
            } 
        } 
        var_46 = ((/* implicit */signed char) ((((_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)0] [(_Bool)1]))) : (((((/* implicit */_Bool) 396935496)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13113380746131064276ULL)))));
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 23; i_13 += 2) 
        {
            for (unsigned long long int i_14 = 2; i_14 < 22; i_14 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 3; i_15 < 22; i_15 += 4) 
                    {
                        for (unsigned short i_16 = 0; i_16 < 23; i_16 += 2) 
                        {
                            {
                                var_47 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551593ULL)) ? (((unsigned int) arr_29 [i_0] [i_13] [i_0] [i_0] [i_16])) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                                var_48 |= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)65535)))) % (arr_18 [i_14 - 2] [i_14 - 1] [i_14 + 1] [i_14 - 2])));
                                var_49 |= ((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_14 + 1] [i_15 - 2] [i_15 - 3]))));
                            }
                        } 
                    } 
                    var_50 &= arr_38 [i_14] [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14 - 1];
                    var_51 *= ((/* implicit */unsigned int) arr_53 [i_0] [i_0] [i_13] [i_13] [i_13] [i_14]);
                }
            } 
        } 
    }
    for (unsigned long long int i_17 = 3; i_17 < 12; i_17 += 2) 
    {
        var_52 = ((/* implicit */_Bool) arr_46 [5U]);
        arr_60 [i_17] [i_17 - 3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((arr_45 [i_17] [i_17] [i_17]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_17]))) : (3828442879U))) != (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))))) | (((/* implicit */int) arr_48 [i_17] [7U] [i_17]))));
        var_53 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_17] [i_17] [i_17 - 2] [i_17 - 3]))) : (3828442879U)))))) * (((((/* implicit */_Bool) min(((unsigned char)162), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) min((3567982546U), (((/* implicit */unsigned int) var_15))))) : (((unsigned long long int) (unsigned char)164))))));
        var_54 = ((/* implicit */unsigned long long int) min((var_54), (((unsigned long long int) max((var_1), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_59 [i_17])) : (((/* implicit */int) var_12))))))))));
    }
}
