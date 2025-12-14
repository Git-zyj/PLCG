/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192794
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
    var_13 &= var_5;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((short) ((var_7) % (arr_5 [i_0])))))));
                arr_8 [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0])) / (arr_5 [i_1])))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_5 [i_0]) : (arr_5 [i_1]))) : (((/* implicit */unsigned long long int) min((arr_4 [i_1]), (arr_3 [i_0])))))), (((arr_6 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    arr_13 [i_1] [10U] [i_2 + 1] = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_1 [i_0]))))));
                    arr_14 [i_1] [i_1] [0ULL] [i_1] = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_1] [i_2]);
                }
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    arr_18 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((min((min((arr_6 [i_0]), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_1] [i_0])))), (((((/* implicit */_Bool) arr_2 [i_3])) ? (arr_16 [i_1] [i_1] [i_1] [i_0]) : (arr_6 [i_0]))))) < (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((arr_15 [i_0] [i_1] [i_0]), (((/* implicit */short) arr_1 [i_0]))))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_10 [i_0] [2ULL] [i_0] [2ULL]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
                    arr_19 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_1] [i_3])) ? (var_12) : (arr_0 [i_0]))))) ? (min((arr_10 [i_0] [i_1] [i_3] [i_1]), (arr_10 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) arr_9 [i_1]))));
                    arr_20 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_4 [i_1])))) ? (arr_6 [7LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12249))))))));
                    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (arr_6 [i_0])))) ? (((arr_6 [i_1]) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32801))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_6 [i_0]))))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    var_15 |= ((/* implicit */short) max((var_10), (((/* implicit */unsigned long long int) arr_11 [i_4] [i_4] [i_1] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) 6964163054396134367ULL))));
                                var_17 &= ((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), ((+(((/* implicit */int) (unsigned char)72))))));
                                arr_32 [i_0] [i_0] [i_4] [i_4] [i_1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-15))))), (var_2)))) ? (((/* implicit */int) max((arr_31 [i_0] [i_1] [i_0] [i_0] [i_0]), (arr_31 [i_5] [i_1] [i_4] [i_4] [i_0])))) : (((/* implicit */int) (((+(arr_10 [5ULL] [5ULL] [i_5] [10ULL]))) <= (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_4] [i_0]))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))));
                    arr_33 [i_0] [i_1] [i_4] = ((/* implicit */short) arr_27 [i_0] [i_1] [i_1] [i_1] [i_4] [i_4]);
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1] [i_0])) ? (max((arr_27 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]), (max((arr_27 [i_4] [i_1] [i_4] [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_12)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)10)))))));
                }
                for (short i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        var_20 |= ((/* implicit */unsigned char) max(((-(9866455576171007491ULL))), (((((/* implicit */_Bool) arr_34 [i_0] [i_0])) ? (arr_34 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                        var_21 = min((((((/* implicit */int) ((((/* implicit */int) (unsigned char)7)) == (((/* implicit */int) (short)-25507))))) > (((int) var_2)))), ((!(((((/* implicit */int) (short)-23530)) >= (((/* implicit */int) arr_15 [i_1] [i_1] [i_8])))))));
                    }
                    for (int i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        var_22 = max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */int) arr_12 [(unsigned char)9] [i_1] [i_7])), (arr_23 [i_0] [i_0] [i_0])))), (arr_0 [(short)12])))), (min((arr_35 [i_0] [i_1] [i_7]), (((/* implicit */unsigned long long int) arr_25 [i_7] [i_1] [i_7] [i_9])))));
                        var_23 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_7] [i_9]);
                    }
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        arr_46 [i_1] [i_0] [i_1] [2] [i_7] [i_10] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(arr_40 [i_0] [i_0] [i_1] [i_7] [i_10])))), (((((/* implicit */_Bool) arr_40 [i_0] [i_1] [i_7] [i_7] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (3580231644959904437ULL)))));
                        var_24 += ((/* implicit */short) min(((~(((((/* implicit */_Bool) (signed char)10)) ? (arr_3 [i_1]) : (((/* implicit */int) (signed char)17)))))), ((~(arr_43 [i_0] [i_0] [(unsigned char)4])))));
                        arr_47 [i_10] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_1] [i_7] [i_10])) & (((/* implicit */int) min(((signed char)0), ((signed char)-22))))));
                    }
                    var_25 -= max(((-(((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_7])) ? (3389224610690367866ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_1] [i_7]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min(((short)-22790), ((short)444)))) | (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_7])) : (((/* implicit */int) var_5))))))));
                    var_26 = ((/* implicit */short) (+(((/* implicit */int) max(((signed char)52), ((signed char)-31))))));
                }
                arr_48 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (short)-19620)))), (((/* implicit */int) max((((/* implicit */short) (signed char)0)), ((short)-2263))))));
            }
        } 
    } 
}
