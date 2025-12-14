/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205360
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
    var_12 = (!(((/* implicit */_Bool) (((-(((/* implicit */int) var_8)))) - ((~(((/* implicit */int) (short)-15))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */_Bool) ((((unsigned long long int) arr_2 [i_0])) >> (((((/* implicit */int) arr_1 [i_0])) - (53056)))))) ? ((+(((((/* implicit */_Bool) (short)-15)) ? (arr_9 [i_0] [i_1] [i_2] [i_1]) : (((/* implicit */unsigned long long int) -9)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_1] [i_0]))))))))));
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) -19)) || (((/* implicit */_Bool) (short)-31))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_1] [i_1])))))))) ? (((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3])) ? (arr_9 [i_0] [i_0] [i_2] [(unsigned char)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [13U] [13U] [i_3] [i_1]))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]))) - (var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)0))))) / ((+(2745743717U))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) -6517818519586083759LL))));
                        arr_15 [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (unsigned char)233)), (arr_9 [i_0] [i_1] [i_0] [i_4]))), (((/* implicit */unsigned long long int) 263634737))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (-(((/* implicit */int) arr_0 [i_0] [i_1]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [(unsigned char)0] [i_2] [i_4])) ? (((/* implicit */long long int) var_10)) : (var_5)))) ? (min((var_10), (2745743717U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_2] [i_2] [i_4])), ((unsigned short)65535)))))))));
                    }
                    arr_16 [i_0] [i_2] [(signed char)0] = ((/* implicit */signed char) 18446744073709551599ULL);
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (0LL)))) ? (arr_13 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2]) : (arr_13 [i_0] [i_1] [i_2] [i_0] [i_2] [(short)8])));
                    arr_17 [i_2] [i_1] [i_1] = ((/* implicit */int) min((((((((/* implicit */_Bool) (short)20114)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))) : (4467570830351532032ULL))) ^ (((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_0] [i_2] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [4U] [i_1] [i_1])))))))), (arr_13 [i_0] [i_0] [12] [i_0] [i_0] [i_0])));
                }
                arr_18 [i_0] = ((/* implicit */unsigned int) ((min((((unsigned int) arr_13 [i_0] [i_1] [i_0] [i_1] [i_1] [i_0])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2306737693U)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1))))))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_0]))))))));
            }
        } 
    } 
}
