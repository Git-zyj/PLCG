/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194927
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
    for (int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_1 [(short)0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_0 [i_1]))) <= (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [18ULL])) ? (var_8) : (var_2)))) + (((((/* implicit */_Bool) var_0)) ? (arr_5 [i_0] [i_0]) : (arr_0 [i_0])))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_11 [i_3] [i_2] [i_2] [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) (~(1812504078)))) > (((((/* implicit */_Bool) arr_10 [(unsigned short)14])) ? (((/* implicit */unsigned long long int) var_14)) : (7221901511443344100ULL))))))));
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
                            {
                                arr_14 [15ULL] [i_1] [13U] [i_1] [i_2] = ((/* implicit */unsigned short) arr_3 [i_1 + 1]);
                                arr_15 [15U] [12U] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) | (var_11)));
                                var_18 = ((/* implicit */int) (+(((((((/* implicit */_Bool) arr_6 [(unsigned short)8] [1U])) ? (((/* implicit */unsigned long long int) 1016516911)) : (7710520915015002266ULL))) + (((/* implicit */unsigned long long int) 514607992U))))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                            {
                                var_19 |= max((max((arr_8 [i_1 + 1] [i_0 + 2]), (arr_8 [i_1 - 1] [i_0 - 1]))), (max((arr_8 [i_1 + 1] [i_0 + 3]), (arr_8 [i_1 - 1] [i_0 - 2]))));
                                var_20 -= var_3;
                                arr_18 [i_0] [i_0 + 4] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1] [i_1] [i_0 - 2])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) arr_9 [i_5] [i_3] [(unsigned char)14] [i_1 - 1])) | (((/* implicit */int) arr_9 [(signed char)9] [i_1] [i_2] [i_1])))) : (var_2)))) : (min((((long long int) var_4)), (((/* implicit */long long int) ((((/* implicit */int) arr_8 [20ULL] [10])) == (((/* implicit */int) (_Bool)1)))))))));
                                arr_19 [(signed char)8] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(-1977847791)))), (((((/* implicit */_Bool) arr_9 [(short)8] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_2] [i_1 + 1] [i_1 + 1]))) : (11631513528893485064ULL)))));
                            }
                            var_21 -= ((/* implicit */short) (+(((((/* implicit */int) ((signed char) (_Bool)1))) * (((/* implicit */int) (unsigned short)62500))))));
                            var_22 |= ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_6 [i_0] [i_0])))) || ((!(((/* implicit */_Bool) var_4)))))), ((!(((((/* implicit */_Bool) 10584892114152140446ULL)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))));
                            arr_20 [i_3] [i_2] [12U] [12U] [i_2] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) arr_6 [i_2] [(_Bool)1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
    {
        for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 2) 
        {
            for (signed char i_8 = 1; i_8 < 12; i_8 += 4) 
            {
                {
                    arr_29 [i_6] [i_8] [15ULL] [i_8 + 3] = ((/* implicit */short) (-((~((~(((/* implicit */int) (_Bool)1))))))));
                    var_23 = ((/* implicit */signed char) (~((-(((((/* implicit */_Bool) 1340352740U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8] [(signed char)6] [(signed char)6] [i_8]))) : (arr_24 [i_8] [i_6] [i_6])))))));
                }
            } 
        } 
    } 
}
