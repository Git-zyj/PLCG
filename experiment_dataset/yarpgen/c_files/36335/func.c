/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36335
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
    var_16 += ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) 7544425887319966066LL)) ? (((((/* implicit */_Bool) 8191LL)) ? (9223372036854775787LL) : (3489469008479208840LL))) : ((+(15LL))))));
    var_17 = ((/* implicit */short) ((unsigned long long int) ((long long int) min((var_11), (var_8)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */long long int) arr_2 [i_2 - 1] [i_1 + 1]);
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_1] = ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])) ? (((((/* implicit */_Bool) var_8)) ? (var_3) : (var_11))) : (((/* implicit */long long int) (~(((/* implicit */int) var_1))))));
                        arr_12 [i_1] [i_0] [i_1] [i_2] [i_3] = (-(7544425887319966066LL));
                        var_19 = ((long long int) arr_6 [8LL] [i_2] [i_0] [i_3]);
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_0) : (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_0] [(short)2] [i_1 - 1] [i_2] [i_1 - 1]) < (var_4))))) : (((((/* implicit */_Bool) var_15)) ? (var_8) : (arr_5 [i_1])))));
                    }
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_1] [i_1] = (-(((((/* implicit */_Bool) var_11)) ? (arr_5 [i_1]) : (-9223372036854775788LL))));
                        arr_16 [i_4] [i_1] [i_1 - 1] [i_1] [i_0] = ((/* implicit */short) arr_9 [i_0] [i_2] [0LL]);
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */long long int) min((var_21), (((long long int) var_14))));
                        arr_19 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(arr_8 [i_1 + 1] [i_2 + 2] [i_5 + 1] [i_5] [i_5 + 1])));
                        var_22 = ((/* implicit */long long int) max((var_22), (var_11)));
                        var_23 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 3461217903465739187LL)) : (var_9)))) ? (((/* implicit */unsigned long long int) -275866989774436284LL)) : (15294546950358384913ULL)));
                    }
                }
                for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 1) /* same iter space */
                {
                    var_24 = ((long long int) ((long long int) var_5));
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (short)-6))));
                    arr_22 [i_1] = ((/* implicit */long long int) var_7);
                    var_26 += ((/* implicit */long long int) (!(((/* implicit */_Bool) 16837612295495917490ULL))));
                    arr_23 [i_1] [i_1 + 1] [i_6 + 1] = var_11;
                }
                /* vectorizable */
                for (long long int i_7 = 2; i_7 < 8; i_7 += 2) 
                {
                    var_27 = ((/* implicit */long long int) min((var_27), ((~(arr_10 [i_7] [i_7 + 2] [i_1 + 1] [i_1 + 1] [i_7])))));
                    arr_27 [i_1] = ((((/* implicit */_Bool) ((var_5) | (-9223372036854775796LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1]))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (9223372036854775797LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))));
                    arr_28 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 63ULL)) ? (((((/* implicit */_Bool) var_9)) ? (arr_10 [i_0] [i_1] [i_1] [i_0] [i_1]) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))));
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        var_28 += ((/* implicit */unsigned long long int) var_6);
                        var_29 = ((/* implicit */long long int) max((var_29), ((+((+(5648726800735277354LL)))))));
                        arr_34 [i_0] [i_0] [i_1] [i_8] [i_8] [i_1] = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((~(var_0))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_0] [i_1] [8LL] [i_8] [i_8] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (-6440980238694641744LL)))) : (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned long long int) arr_3 [i_9] [6ULL]))))));
                        var_31 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_4)) : (var_7)))) ? (var_15) : (var_2));
                    }
                    var_32 = arr_18 [i_8] [i_1] [i_8];
                    var_33 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_8])) ? (((/* implicit */unsigned long long int) 784072251283164260LL)) : (9168513598691337364ULL)))) ? (var_11) : (((long long int) (-9223372036854775807LL - 1LL))));
                }
                /* LoopNest 3 */
                for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    for (short i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        for (unsigned long long int i_12 = 2; i_12 < 6; i_12 += 2) 
                        {
                            {
                                arr_43 [i_11] [i_11] [i_1] [i_11] = ((/* implicit */unsigned long long int) var_5);
                                var_34 = var_5;
                                arr_44 [i_1] [i_0] [i_10] [7LL] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((arr_35 [i_0] [i_1] [i_10]) | (var_7)))))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_14) : (arr_26 [0LL] [i_1] [i_10] [i_11])))) ? (((((/* implicit */_Bool) arr_21 [i_1] [i_12 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_14 [i_0] [i_1 + 1] [i_1 + 1]))) : (((/* implicit */unsigned long long int) arr_5 [i_1]))))));
                                var_35 = (~(((((/* implicit */_Bool) -357813775483094908LL)) ? (-9223372036854775802LL) : (-8811434347552863366LL))));
                                arr_45 [i_0] [i_0] [i_1] [i_1] [i_11] [i_11] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-31397)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned long long int) arr_40 [i_0] [i_1 + 1] [i_0] [i_12] [i_1 - 1]))))));
                            }
                        } 
                    } 
                } 
                arr_46 [i_1] [i_1 + 1] = ((unsigned long long int) ((short) ((arr_8 [i_0] [i_0] [2LL] [i_0] [i_0]) == (arr_0 [i_0]))));
            }
        } 
    } 
}
