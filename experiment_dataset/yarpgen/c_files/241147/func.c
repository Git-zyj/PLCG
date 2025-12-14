/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241147
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
    var_15 = var_10;
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        var_16 *= ((/* implicit */_Bool) (((-(((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)40188), (((/* implicit */unsigned short) (short)4507))))) | (((/* implicit */int) ((signed char) 10692487810507967764ULL))))))));
                        arr_12 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) var_11);
                        arr_13 [i_2] [i_2] [i_2] = (+(((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 2])) ? (arr_0 [i_0 + 2]) : (var_4))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2878)) ? (((((/* implicit */int) (unsigned short)44696)) | (((/* implicit */int) (short)3119)))) : ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)9628)) == (((/* implicit */int) (short)-3120)))))))));
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_9 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) var_14))))))), (((unsigned long long int) (-(((/* implicit */int) var_1)))))));
                            arr_17 [i_0] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)62658))))) != ((+(var_5)))));
                            var_18 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_5 [i_2] [i_3]))))));
                            arr_18 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 708049899U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3127))) : (3958859268U))))));
                        }
                        for (unsigned short i_5 = 2; i_5 < 12; i_5 += 4) 
                        {
                            arr_23 [i_0] [i_3 - 1] [i_1] [i_3] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)62658))), ((((+(arr_8 [i_2]))) / ((-(var_4)))))));
                            arr_24 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_2) || (((/* implicit */_Bool) arr_14 [i_2] [i_5] [i_5 - 2] [i_5] [i_5]))))), (arr_21 [i_0] [i_0] [i_2] [i_3] [i_0 + 2] [i_5] [i_5 + 2]))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        arr_27 [i_0 + 1] [i_2] [i_2] = ((/* implicit */unsigned short) var_13);
                        arr_28 [i_6] [i_6] [i_2] [i_6] [i_6] = ((/* implicit */_Bool) (-(arr_5 [i_2] [i_0 + 1])));
                        arr_29 [(unsigned short)2] [i_2] [i_2] [i_2] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) || (((/* implicit */_Bool) arr_5 [i_2] [i_1]))));
                        var_19 = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) var_1)))));
                    }
                    for (unsigned long long int i_7 = 4; i_7 < 13; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2] [i_7 - 3] [i_7] [i_2] [i_1] [i_0])))))))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) >= (15621728300798177583ULL)))))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))));
                        }
                        var_22 = max((((((/* implicit */_Bool) 45953828465841876ULL)) ? (((/* implicit */unsigned long long int) 43883213U)) : (((unsigned long long int) (signed char)28)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
                    }
                    var_23 *= (-(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))), ((+(var_11))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))))) ? ((((+(var_6))) >> (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-3103)) : (((/* implicit */int) var_14)))) + (3144))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((649754711035796561ULL) >> (((((/* implicit */int) var_8)) - (47108))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_6)))))));
}
