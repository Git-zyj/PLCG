/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247234
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_6 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)56473)), (var_2)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) 1947976011)) >= (arr_3 [i_1 + 2] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1947976011))))));
                    var_18 ^= ((/* implicit */unsigned short) 4140476013U);
                    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_0] [i_1] [i_1 - 1] [i_2])), (arr_4 [i_0] [i_1 - 2] [i_1 - 1] [i_1 + 2]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        arr_11 [i_3] [(unsigned char)10] = ((/* implicit */unsigned short) (~(var_12)));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_9 [i_3])))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_12) : (var_14))))));
        arr_12 [i_3] = ((/* implicit */unsigned int) ((arr_7 [i_3]) > (arr_7 [i_3])));
        arr_13 [i_3] = ((((/* implicit */int) arr_8 [i_3])) / (((/* implicit */int) var_8)));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) -583549515)) & ((-(1305224410U)))));
    }
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((14276817915174033214ULL) + (((/* implicit */unsigned long long int) 1947976011)))))));
        var_22 = ((int) ((((/* implicit */_Bool) arr_18 [i_4])) && ((!(((/* implicit */_Bool) (unsigned short)58127))))));
    }
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
    {
        arr_22 [i_5] = arr_20 [i_5];
        arr_23 [i_5] [23U] = var_9;
        /* LoopSeq 2 */
        for (unsigned int i_6 = 2; i_6 < 23; i_6 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28325)) ? (154491282U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9877)))))) ? (min((((arr_27 [i_5] [i_6] [i_6]) << (((((/* implicit */int) arr_21 [i_5])) - (136))))), (var_3))) : (((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned char)0)))) << (((((((/* implicit */_Bool) (unsigned short)59805)) ? (-1947976011) : (1026671744))) + (1947976038))))))));
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_4))));
        }
        for (unsigned int i_7 = 2; i_7 < 23; i_7 += 4) /* same iter space */
        {
            var_25 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) : (max((((/* implicit */unsigned long long int) var_12)), (arr_24 [i_5] [i_7] [i_7 + 1]))))))));
            arr_30 [(unsigned short)5] [20U] = ((((/* implicit */int) max((arr_25 [i_5] [i_7 - 1]), (arr_25 [i_5] [i_7 - 1])))) << (((var_12) - (824258339U))));
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (unsigned short)960))));
            /* LoopSeq 1 */
            for (int i_8 = 1; i_8 < 23; i_8 += 2) 
            {
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (-(var_12))))));
                /* LoopSeq 2 */
                for (int i_9 = 1; i_9 < 24; i_9 += 2) 
                {
                    var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((max(((unsigned short)0), ((unsigned short)14807))), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)0)) == (var_4))))))), (var_4)));
                    var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [20U] [0ULL])) ? (((((/* implicit */_Bool) var_16)) ? (arr_34 [i_7 + 1] [i_8 + 2] [i_9 + 1]) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1929816453)) ? (((/* implicit */int) (unsigned short)52444)) : (((/* implicit */int) var_1)))))));
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)233))))) ? ((~(2629309097U))) : ((~(var_12)))));
                }
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    var_31 *= ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned short)65535))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 2; i_11 < 21; i_11 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) (-(arr_40 [i_5] [i_7] [i_8] [(unsigned short)6] [i_11] [(unsigned short)0] [i_7 + 1])));
                        arr_42 [i_5] [i_7] [i_8] [i_8 - 1] [i_10] [i_11 + 3] = ((/* implicit */unsigned long long int) 0U);
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(2253910250U)))) ? (((/* implicit */int) arr_35 [i_8] [i_7 - 1] [i_11 - 1] [i_11 - 1])) : (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */int) (unsigned short)42190))))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        var_34 = arr_25 [i_7 - 2] [i_12];
                        arr_47 [i_5] [i_8] [i_10] [i_5] = ((/* implicit */unsigned long long int) var_14);
                    }
                    arr_48 [i_5] [i_8] [i_8] [13U] [13U] [3U] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5] [i_7]))));
                    var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_34 [i_5] [i_8 - 1] [(unsigned char)23]) ^ (((/* implicit */unsigned long long int) var_15))))) ? (((/* implicit */int) ((unsigned short) arr_28 [i_8]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_1))))))))));
                }
                arr_49 [i_8] [4U] [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_8])) ? (((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)23386))))))) ? (((((arr_33 [i_8]) - (((/* implicit */unsigned long long int) var_3)))) + (((/* implicit */unsigned long long int) ((unsigned int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5] [i_7])))));
            }
        }
    }
    var_36 = var_7;
}
