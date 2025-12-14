/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219772
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
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) (!((!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)0)), (var_5)))))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))) - (18016725100438782426ULL)));
                    /* LoopSeq 3 */
                    for (int i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        var_14 -= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)92))))) - (((((/* implicit */_Bool) 430018973270769189ULL)) ? (430018973270769190ULL) : (((/* implicit */unsigned long long int) 4294967295U)))))) - (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))) - (arr_0 [i_1 - 3] [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                        arr_11 [i_3] [i_1] [i_0] = ((/* implicit */signed char) 2886656867U);
                    }
                    for (unsigned int i_4 = 3; i_4 < 15; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((min((1408310429U), (((/* implicit */unsigned int) (unsigned short)25383)))), (var_4))))));
                        arr_14 [i_1] [(short)6] = ((/* implicit */signed char) ((min((0U), (((/* implicit */unsigned int) arr_12 [i_0 - 3] [i_1])))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)114)))));
                    }
                    for (unsigned char i_5 = 3; i_5 < 18; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 2; i_6 < 15; i_6 += 1) 
                        {
                            arr_20 [i_1] [i_1] = ((/* implicit */unsigned short) max(((+(arr_18 [i_5 - 1] [i_1 + 2] [i_6]))), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]))));
                            var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (18016725100438782436ULL) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-104)) + (2147483647))) << (((var_4) - (2878845452U)))))))))));
                            var_17 = ((/* implicit */short) var_7);
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 2; i_7 < 18; i_7 += 1) 
                        {
                            arr_23 [i_0 - 1] [i_2] [i_0 - 1] [i_2] [i_0 - 1] &= ((/* implicit */int) min((((/* implicit */unsigned long long int) 19U)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (max((18446744073709551598ULL), (((/* implicit */unsigned long long int) (unsigned char)245))))))));
                            var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)11)) ^ (((/* implicit */int) arr_2 [i_1] [i_5] [i_5]))))) ? (min((min((var_4), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) min((-705680999), (((/* implicit */int) (unsigned short)32339))))))) : ((+(min((arr_15 [i_0] [i_0] [i_2] [i_2] [i_2] [i_0]), (((/* implicit */unsigned int) arr_5 [i_5] [i_2])))))));
                        }
                    }
                    var_19 -= ((/* implicit */int) (short)19539);
                    var_20 ^= ((/* implicit */signed char) ((((var_10) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) var_11))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (unsigned char)33))));
                    arr_30 [i_9] = min((max((arr_15 [i_0 - 2] [i_8] [17LL] [i_9] [i_9] [i_9]), (arr_15 [i_0 - 1] [16LL] [16LL] [i_8] [i_8] [i_8]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((165130005U), (((/* implicit */unsigned int) (signed char)127))))) ? (((((/* implicit */int) (signed char)-90)) - (var_10))) : (((/* implicit */int) var_7))))));
                    arr_31 [i_0] [i_8] [i_8] [i_9] = ((/* implicit */unsigned short) max((((short) ((((/* implicit */int) (signed char)125)) <= (((/* implicit */int) (signed char)-82))))), (((/* implicit */short) arr_12 [15ULL] [i_9]))));
                }
            } 
        } 
        arr_32 [i_0 + 1] = 16383;
        arr_33 [i_0 - 1] [i_0] = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */unsigned int) 705680998)) : (895361810U)))) ? (min((((/* implicit */int) arr_29 [i_0] [(_Bool)1] [(_Bool)1])), (arr_24 [i_0] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))), (min((var_0), (4294967284U))));
    }
    var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned char)33)))))) : (((long long int) 1408310429U))))));
    var_23 = ((/* implicit */short) ((unsigned int) (-(((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
    var_24 += ((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) var_7)))));
    var_25 = ((/* implicit */unsigned short) var_10);
}
