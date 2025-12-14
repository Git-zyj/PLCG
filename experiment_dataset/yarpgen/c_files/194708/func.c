/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194708
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
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_12 = ((((/* implicit */_Bool) min((((/* implicit */short) arr_2 [i_0] [i_0 - 3] [i_0 - 2])), ((short)-32761)))) ? (((((/* implicit */int) (signed char)125)) - (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) arr_2 [15] [i_0 - 2] [i_0 - 2])))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_13 *= ((/* implicit */unsigned int) arr_1 [i_2]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_11 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)21), (((/* implicit */signed char) (_Bool)1))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) -3181989209652724902LL))))) + (((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 1] [i_0 - 3] [i_0])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)137))))) >= ((~(arr_4 [i_1]))))))));
                                arr_12 [i_0] [i_0] [14ULL] [i_0] [i_4] = ((/* implicit */unsigned long long int) arr_5 [i_0] [(short)11] [i_2]);
                                var_14 = max(((~(var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)15559))) <= (-6879639495927401455LL)))) == (((/* implicit */int) var_3))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */long long int) var_9);
                }
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65535)) : (var_11))) << (((((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned long long int) 2002453003)))) - (16665040228069268722ULL)))))), (var_6))))));
    var_17 = ((/* implicit */short) ((2392565908313713775ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42217)))));
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned short)0)))) + (2147483647))) << (((var_1) - (16665040228069268725ULL))))))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((((/* implicit */int) (signed char)(-127 - 1))) >= (((/* implicit */int) (unsigned short)31744)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (14148094687710805571ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) -1957959474))));
}
