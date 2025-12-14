/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195466
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9929))) : (18446744073709551615ULL)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_11 [i_2] [i_4] [i_2] [i_4] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1])))));
                                var_16 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (unsigned char)11)))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_4 + 3] [i_4] [i_4] [i_4] [i_4] [i_1 - 3] [i_0])) >= (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_4] [i_0 + 1] [(_Bool)1])) * (((/* implicit */int) (unsigned char)228))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [14ULL] [14ULL] [14ULL] [14ULL])) ? (arr_8 [i_0 + 1] [(unsigned char)3] [(unsigned char)3] [i_1] [i_0 + 1]) : (arr_8 [i_0 + 1] [i_1 - 2] [i_2] [i_1] [i_0 + 1]))))));
                    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)1005)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (signed char)9)))))));
                }
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)1)) & (max((((((/* implicit */_Bool) 1023U)) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) (signed char)-70)))), (((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) (unsigned short)64530))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)64542)) && (((/* implicit */_Bool) var_1)))))))))));
}
