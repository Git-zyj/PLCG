/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224826
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
    var_14 = ((/* implicit */long long int) var_3);
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        var_15 += ((((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) (signed char)126)))), (((/* implicit */int) ((unsigned short) (unsigned short)28457)))))) > (((long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
        var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)3840))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_17 += ((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */int) arr_4 [i_1])) ^ (((/* implicit */int) (signed char)127)))) : (((((/* implicit */_Bool) var_8)) ? (var_0) : (var_12))))) & (((/* implicit */int) (signed char)15)));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        arr_11 [i_3] [18] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_13) ? (527013241002848518LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28473)))))) ? (((arr_3 [(signed char)3] [(unsigned short)10]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))))) : (((/* implicit */unsigned long long int) arr_2 [(unsigned char)6] [10U]))));
                        var_18 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-125)) == (((/* implicit */int) (signed char)-97)))) ? (((var_2) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))))) : (((/* implicit */long long int) ((arr_5 [12U] [(signed char)3]) / (((/* implicit */int) var_10)))))));
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)63)))))));
                        arr_12 [i_2] [i_3] [i_3] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-15))))));
                        var_20 = ((/* implicit */unsigned int) ((_Bool) ((unsigned short) var_7)));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        var_21 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) : (arr_2 [i_2] [i_2])))) || (((/* implicit */_Bool) var_7))))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_3] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)44024))))) != (((((/* implicit */_Bool) var_0)) ? (9U) : (((/* implicit */unsigned int) arr_5 [i_2] [i_3])))))))));
                        arr_16 [i_3] [i_3] [i_3] [15U] = ((/* implicit */int) ((long long int) ((((((/* implicit */int) arr_9 [i_1])) + (2147483647))) << (((((/* implicit */_Bool) (unsigned short)28457)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))))));
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 19; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_22 += ((/* implicit */long long int) var_10);
                                arr_23 [i_1] [i_1] &= arr_20 [i_1] [i_2] [i_2] [i_2] [8] [i_6 + 1] [i_7 - 1];
                                arr_24 [i_2] [i_3] [i_6] [i_7 - 1] = ((((arr_7 [i_1] [i_6] [7U]) + (9223372036854775807LL))) << (((((-1LL) + (56LL))) - (55LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_25 [i_1] = ((/* implicit */short) (+(max((max((((/* implicit */long long int) arr_19 [i_1] [i_1] [i_1] [i_1])), (arr_7 [i_1] [i_1] [i_1]))), (((/* implicit */long long int) ((_Bool) arr_22 [i_1] [i_1] [i_1])))))));
        arr_26 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((_Bool) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_14 [i_1] [12U] [i_1] [i_1]))))));
    }
}
