/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211321
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 + 1]))) << (((arr_4 [i_1 - 1]) - (2902683202U)))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) (unsigned char)173);
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) arr_4 [i_3]);
                                arr_14 [i_0] [i_3] [(unsigned short)5] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) arr_10 [i_1 - 1] [i_4 + 2] [i_4 + 2] [i_4 + 3] [i_4 - 1])) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 1]))))));
                                arr_15 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */long long int) var_16)) <= (var_13)))) : (((/* implicit */int) arr_3 [i_0]))))) : ((~(((((/* implicit */long long int) arr_4 [i_1 + 1])) | (var_7)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_5 = 1; i_5 < 18; i_5 += 4) /* same iter space */
    {
        arr_18 [i_5] = ((/* implicit */unsigned long long int) arr_17 [i_5]);
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [13ULL])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5]))) < (min((((/* implicit */long long int) arr_17 [i_5 - 1])), (arr_16 [i_5]))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_17)), (arr_16 [(unsigned char)0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5 + 1]))) : (arr_16 [i_5 + 1])))));
    }
    for (unsigned int i_6 = 1; i_6 < 18; i_6 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) arr_16 [(unsigned short)5]);
        arr_22 [i_6] = ((/* implicit */long long int) (+((+(arr_19 [i_6 - 1])))));
        var_22 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_16 [i_6])) ? (arr_19 [i_6 + 2]) : (((/* implicit */unsigned int) arr_21 [i_6] [i_6 - 1]))))));
        var_23 = ((/* implicit */unsigned short) arr_21 [i_6] [i_6]);
    }
    /* vectorizable */
    for (unsigned int i_7 = 1; i_7 < 18; i_7 += 4) /* same iter space */
    {
        arr_25 [i_7] = ((short) arr_24 [i_7 + 1]);
        arr_26 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_7 - 1])) || (((/* implicit */_Bool) var_6))));
        arr_27 [i_7] = (!(((/* implicit */_Bool) var_16)));
        var_24 -= ((/* implicit */unsigned long long int) arr_20 [i_7]);
        var_25 *= ((/* implicit */signed char) arr_24 [i_7]);
    }
    for (unsigned int i_8 = 1; i_8 < 18; i_8 += 4) /* same iter space */
    {
        arr_31 [i_8] [i_8] = ((/* implicit */short) min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_8])) ? (((/* implicit */int) var_11)) : (var_4)))) | (max((var_16), (((/* implicit */unsigned int) var_0)))))), (((arr_20 [i_8]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_8] [12LL]))) : (arr_19 [i_8 + 1])))));
        var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_8 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-24936))) > (var_7))))) : (max((((/* implicit */unsigned int) arr_23 [0U])), (arr_19 [i_8])))))) ? (max((arr_21 [i_8 + 1] [i_8 + 1]), (((/* implicit */int) arr_28 [i_8] [i_8 + 2])))) : ((-(((/* implicit */int) (short)-24936))))))));
        var_27 = ((/* implicit */_Bool) max((var_27), ((!(((/* implicit */_Bool) arr_28 [i_8] [i_8]))))));
    }
}
