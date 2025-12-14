/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33885
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
    var_16 = ((/* implicit */signed char) (-(var_9)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_3] [i_2] [i_3] [i_4] [6LL] [i_4] = ((/* implicit */unsigned short) (+(min((((/* implicit */unsigned long long int) arr_8 [i_4] [i_1] [i_2] [i_4])), (min((var_12), (var_0)))))));
                            arr_13 [i_0] [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) 18446744073709551615ULL);
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0] [(unsigned char)14] [i_0]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    arr_21 [i_0] [i_1] [i_0] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_9))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 1; i_7 < 19; i_7 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) ? (-7726540721670053893LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) arr_10 [i_1] [13LL] [i_7 - 1] [i_5 + 1] [i_7 - 1])) : (((/* implicit */int) arr_4 [i_7 - 1]))));
                        arr_25 [7LL] [i_1] [i_1] [i_5] [i_5] [i_6] [i_0] = ((unsigned char) arr_14 [i_1] [i_1] [i_5] [i_0]);
                    }
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) >> (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) arr_1 [i_5] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_10)))));
                }
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    arr_28 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_11 [i_0] [(unsigned char)7] [i_0] [i_0] [i_1] [i_0] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (0U))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_22 [i_5 + 1])) : (((/* implicit */int) (unsigned short)7))));
                    var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_8])))))));
                }
                var_22 = ((/* implicit */unsigned int) (unsigned char)255);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    arr_31 [i_0] [i_1] [i_5 + 1] [i_9] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (+(0U))));
                    var_23 = ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((arr_2 [i_9] [i_1]) % (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) 7726540721670053893LL)));
                    arr_32 [i_0] [i_0] [11] [i_9] [i_9] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned char) arr_6 [i_0] [i_1] [8] [(short)10])));
                    arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) var_15));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) > (((/* implicit */int) ((unsigned char) 0U))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) || (((/* implicit */_Bool) var_11)))))) % (524160ULL)))));
                    arr_36 [i_0] [i_0] = var_5;
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_40 [i_0] [i_0] = ((/* implicit */long long int) ((var_7) ? (arr_2 [i_0] [i_10]) : (arr_2 [i_0] [i_5 + 1])));
                        var_25 = ((/* implicit */unsigned char) (+(((unsigned long long int) var_6))));
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_10] [i_11]))))) ? ((~(arr_2 [i_5] [i_5]))) : ((+(var_4)))));
                    }
                    for (long long int i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned char) var_10);
                        var_28 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) var_1)), (var_0))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                        arr_44 [i_0] [i_10] [i_5 + 1] [(unsigned char)12] [18U] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((int) arr_3 [i_5 + 1] [i_5] [i_5 + 1])));
                        var_29 = ((/* implicit */signed char) (((((~((+(((/* implicit */int) var_14)))))) + (2147483647))) >> (((((/* implicit */int) var_8)) - (47956)))));
                        var_30 = ((/* implicit */short) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)63922)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17))) > (var_10)))))), (((/* implicit */int) (unsigned short)65535))));
                    }
                    for (long long int i_13 = 0; i_13 < 20; i_13 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_5 + 1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((-(var_15)))));
                        var_32 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) ((((/* implicit */_Bool) arr_10 [i_13] [i_10] [i_5] [4] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_11)))));
                        var_33 = ((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) var_2)) ? (arr_38 [14ULL] [14ULL]) : (var_12))))));
                    }
                    arr_48 [(unsigned short)2] [i_10] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_14)))))));
                }
                /* vectorizable */
                for (unsigned short i_14 = 2; i_14 < 18; i_14 += 1) 
                {
                    var_34 = (~(7726540721670053893LL));
                    arr_52 [i_0] [i_5 + 1] [i_0] = ((/* implicit */unsigned char) (+(var_0)));
                    var_35 = ((/* implicit */unsigned long long int) ((long long int) (~(var_11))));
                }
            }
            for (unsigned int i_15 = 0; i_15 < 20; i_15 += 2) 
            {
                arr_56 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_11);
                arr_57 [i_0] [i_0] [i_1] [i_15] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_4))), (var_13)));
            }
        }
        /* vectorizable */
        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 4) 
        {
            arr_61 [i_0] [i_16] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
            var_36 = ((/* implicit */unsigned char) ((unsigned int) var_1));
        }
        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) var_10)), (-8287622066497792584LL))))) / (((/* implicit */int) arr_4 [i_0]))));
        arr_62 [i_0] [i_0] = ((((/* implicit */_Bool) arr_17 [i_0])) ? (max((((/* implicit */unsigned long long int) ((short) arr_4 [i_0]))), (((((/* implicit */_Bool) arr_29 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_53 [i_0] [(unsigned char)13] [i_0] [i_0])) > (-9223372036854775807LL))))));
        var_38 = (~((~(var_2))));
        arr_63 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [(short)8] [i_0] [i_0]))) : (max((((/* implicit */unsigned long long int) max((-9223372036854775807LL), (((/* implicit */long long int) (unsigned char)102))))), (((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
    }
}
