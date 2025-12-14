/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49921
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
    var_10 = ((/* implicit */short) ((int) max((var_1), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))));
    var_11 = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) ((unsigned char) var_0))) ? (var_5) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))))));
    var_12 = ((/* implicit */unsigned int) var_4);
    var_13 = ((/* implicit */unsigned int) min((max((13666145998426895085ULL), (max((((/* implicit */unsigned long long int) (signed char)63)), (11027699038965980621ULL))))), (((/* implicit */unsigned long long int) (+(var_1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [(signed char)8]))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) arr_0 [i_0]));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
        arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
    }
    for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 4; i_2 < 20; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    arr_15 [i_1] [i_3] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) max((((/* implicit */short) max(((_Bool)1), ((_Bool)1)))), (min((((/* implicit */short) (unsigned char)0)), (min(((short)-19601), (((/* implicit */short) (unsigned char)255))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            arr_19 [i_1] [i_4 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1] [i_4] [i_4])) ? ((((!(((/* implicit */_Bool) 16991108652505090210ULL)))) ? (11027699038965980621ULL) : (70368744177648ULL))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (max((((/* implicit */unsigned long long int) -1698478143)), (1994341779227642623ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1804)))))));
            arr_20 [i_1] [i_4 - 1] = ((((/* implicit */int) max((arr_11 [i_4 - 1]), (((/* implicit */short) arr_13 [i_4 - 1] [i_4 - 1] [i_4]))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1 + 2] [i_1] [i_1 + 2] [i_4])) ? (arr_14 [i_1] [i_1] [i_4 - 1] [i_4 - 1]) : (((/* implicit */int) arr_9 [i_4]))))) ? (((/* implicit */int) ((unsigned short) arr_10 [i_1 + 2] [i_1] [i_4 - 1]))) : (((/* implicit */int) arr_7 [i_4 - 1] [i_4 - 1])))));
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_31 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_12 [i_1])), (arr_24 [i_5] [i_5]))), (arr_21 [i_1 - 1] [i_1 - 1] [i_7])))) ? (((((/* implicit */_Bool) max((arr_23 [i_7] [i_7] [i_7]), (((/* implicit */unsigned int) arr_10 [(unsigned short)13] [i_5] [i_7]))))) ? (((arr_22 [i_1] [i_4] [i_1]) ? (arr_21 [13U] [13U] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_7]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4 - 1] [i_4 - 1] [i_4]))))) : (((/* implicit */long long int) ((arr_12 [i_1 + 1]) ? ((~(arr_23 [i_7] [i_5] [i_4]))) : (min((arr_27 [i_7] [i_7] [i_6] [i_5] [(short)8] [i_1 + 1]), (((/* implicit */unsigned int) arr_9 [i_7])))))))));
                            arr_32 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_1 + 1] [i_6])) ? (arr_24 [i_4] [i_6]) : (arr_24 [i_1 + 1] [i_1 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -7350817351219868919LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_1 - 1] [i_7])) && (((/* implicit */_Bool) arr_24 [i_5] [i_1 - 1])))))));
                            var_15 = ((/* implicit */int) min((11027699038965980616ULL), (((/* implicit */unsigned long long int) (unsigned char)244))));
                            var_16 = ((/* implicit */int) max(((-(arr_21 [i_5] [i_1 + 1] [i_4 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_29 [i_6] [i_1] [i_5] [i_6] [(_Bool)1] [i_6]))) ? ((+(arr_27 [i_1] [i_4 - 1] [i_4 - 1] [i_5] [i_6] [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1 + 1]))))))));
                            arr_33 [i_1] [i_6] = ((/* implicit */signed char) max((((arr_24 [i_4 - 1] [i_4 - 1]) ^ (arr_24 [i_4 - 1] [i_4 - 1]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_1 + 2])))))));
                        }
                    } 
                } 
            } 
            arr_34 [i_1] [i_1 + 2] [i_4 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_23 [i_4 - 1] [i_4 - 1] [i_4]))) ? (max((max((-2383544665689278389LL), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) arr_12 [i_1 + 2])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_4 - 1])) ? (max((arr_27 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]), (((/* implicit */unsigned int) arr_25 [18U] [18] [i_4] [i_4 - 1])))) : (max((arr_27 [i_1 + 1] [i_1 + 2] [i_1] [i_4] [14ULL] [i_4]), (arr_27 [(unsigned short)7] [i_4] [i_4 - 1] [i_1] [i_1 - 1] [i_1]))))))));
        }
        arr_35 [i_1 + 1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) -1337843510)), (3280147860432110047LL)));
    }
}
