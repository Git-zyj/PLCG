/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224365
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_0] [(_Bool)0] [(unsigned char)7] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)188))))), (min((631889856722355315LL), (((/* implicit */long long int) var_4)))))) * (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_1]), (((/* implicit */unsigned long long int) (short)-23874))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) -1991844769)) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))) * (((((/* implicit */_Bool) (+(arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) (short)-27622)) ? (arr_2 [0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1])))) : (((/* implicit */unsigned long long int) arr_3 [8ULL] [i_1] [i_1]))))));
                var_12 = ((/* implicit */long long int) max((max((arr_2 [i_0] [i_0] [i_0]), (((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23874))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)119))) : (6304623769681519812LL))) & (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)61), (var_5))))))))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_3 [i_1] [0ULL] [i_1])) & (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89))) ^ (5ULL))) | (min((arr_2 [i_0] [i_0] [i_0]), (arr_2 [1ULL] [i_1] [i_2])))))));
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) : (((/* implicit */int) var_4))))) && ((!(((/* implicit */_Bool) (unsigned char)11)))))))))));
                    arr_9 [i_0] [i_1] [i_0] [(short)6] = ((/* implicit */long long int) var_9);
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) var_4))));
                }
            }
        } 
    } 
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_1))))))))));
}
