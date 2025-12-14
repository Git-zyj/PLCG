/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201359
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) || (arr_7 [i_0] [(unsigned short)14])));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_14 ^= ((/* implicit */short) max((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_3])) ? (var_0) : (((/* implicit */int) arr_9 [(unsigned short)6] [6U] [i_1 - 1] [i_1 - 1] [(unsigned short)6])))))), ((((~(((/* implicit */int) arr_12 [i_0 - 1] [i_3] [(short)12])))) / ((+(((/* implicit */int) arr_7 [(short)10] [i_0 - 1]))))))));
                            arr_14 [i_0] [i_1] [i_0] [(unsigned short)8] [i_4] [i_4] = ((/* implicit */short) max((((/* implicit */long long int) ((((int) (short)22661)) / (((/* implicit */int) ((unsigned short) arr_5 [i_4] [i_0])))))), (((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))) : (((long long int) 436863781U))))));
                            var_15 |= arr_5 [2ULL] [2ULL];
                            var_16 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) -6743443544059374214LL)) <= (arr_3 [i_0])));
                        }
                        var_17 = ((/* implicit */int) ((max((((/* implicit */long long int) (unsigned char)246)), (-6743443544059374190LL))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8)))));
                    }
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) (unsigned char)232))));
    var_19 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)112))))) : (((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_6))))))), (((/* implicit */int) var_3))));
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)23)), (var_11)));
}
