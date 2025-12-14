/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208658
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
    var_18 = ((/* implicit */unsigned long long int) var_12);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_19 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) (short)18490)), (72247199U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_1 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (~(arr_2 [i_0])));
    }
    var_20 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        for (short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            {
                arr_11 [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) var_0);
                arr_12 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(signed char)23] [(signed char)23])))))) ? (((/* implicit */int) arr_8 [i_2] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_2]))))));
                arr_13 [i_1] &= ((/* implicit */long long int) 11383746905064048130ULL);
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((((min((((/* implicit */unsigned long long int) -2087259005339616972LL)), (arr_16 [i_1]))) & (arr_16 [i_4]))) + (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (arr_18 [i_2] [i_2] [i_2] [i_2] [5ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))) : (arr_16 [i_1])))));
                        var_22 = ((/* implicit */signed char) (short)18490);
                        var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))), (((unsigned long long int) arr_6 [i_3]))));
                    }
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-95)) ? (min((((/* implicit */unsigned long long int) arr_15 [i_5] [i_1])), (arr_16 [i_2]))) : (((/* implicit */unsigned long long int) -5594785027569652084LL))));
                        var_25 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((72247199U) > ((+(arr_21 [i_5] [i_2] [i_1])))))), ((+(arr_22 [(unsigned short)1] [i_2] [(unsigned short)1] [i_5])))));
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)94)))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        var_27 += ((/* implicit */signed char) (short)20303);
                        var_28 = ((/* implicit */unsigned char) var_12);
                    }
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_2] [i_3] [i_7]))) & (1093898476U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)35)), (var_14))))))))));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_30 -= ((/* implicit */signed char) ((((int) max((((/* implicit */short) (signed char)94)), ((short)13952)))) >= (min((((((/* implicit */int) var_12)) << (((((/* implicit */int) (signed char)95)) - (89))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62))) == (arr_22 [i_2] [i_3] [i_7] [i_8]))))))));
                            var_31 = ((/* implicit */long long int) ((((min((((/* implicit */unsigned long long int) (short)10543)), (1295998492021967960ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) arr_10 [i_2] [i_3] [i_3])) : (((/* implicit */int) var_5))))))) * (((/* implicit */unsigned long long int) var_17))));
                            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_2] [i_2] [i_3] [i_2] [i_2])) ? (min((arr_18 [i_2] [i_2] [i_3] [i_7] [i_8]), (((/* implicit */unsigned long long int) arr_17 [i_1])))) : (arr_16 [i_3])));
                            arr_31 [i_2] [i_2] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_2] [i_3] [i_2])) ? (((/* implicit */int) arr_19 [i_1])) : (arr_20 [i_8] [i_2] [i_1])))) ^ (min((var_3), (((/* implicit */unsigned long long int) (short)10543))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (min((((/* implicit */unsigned long long int) var_13)), (((unsigned long long int) arr_7 [i_3] [i_8]))))));
                            arr_32 [i_1] [i_2] [i_3] [7ULL] [i_2] [i_8] = ((/* implicit */signed char) ((min((((/* implicit */long long int) (signed char)7)), (2087259005339616972LL))) * (((/* implicit */long long int) ((-568811664) ^ (512771628))))));
                        }
                    }
                    arr_33 [i_1] [i_2] [i_3] = ((/* implicit */short) ((int) var_4));
                }
                arr_34 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(max((((/* implicit */int) (unsigned short)2958)), (arr_20 [i_1] [i_1] [i_2])))))) ? (min((min((((/* implicit */int) var_14)), (arr_17 [i_1]))), ((~(((/* implicit */int) arr_19 [i_2])))))) : (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) arr_29 [i_1] [i_1] [i_1] [i_1] [i_1])) | (arr_22 [i_1] [i_1] [i_1] [i_1])))))));
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned int) var_11);
}
