/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231633
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_11 [(short)9] [i_1] [i_1] [i_0] = ((/* implicit */short) max((16792001183964139871ULL), (((/* implicit */unsigned long long int) 5954645271542925522LL))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        arr_14 [i_1] = max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)19)), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_6 [5U]), ((unsigned char)237))))) : (var_8)))), (var_3));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 4; i_4 < 14; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) max((612594156U), (((/* implicit */unsigned int) var_9))))) ? ((~(arr_2 [i_1] [i_3 - 1]))) : (min((var_4), (((/* implicit */unsigned long long int) 0LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((unsigned int) arr_6 [i_3 + 1])))))));
                            arr_17 [i_2] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) var_13))) + (max((((/* implicit */unsigned long long int) var_8)), (arr_2 [i_4 + 1] [i_3 + 1])))));
                            var_16 = ((/* implicit */unsigned long long int) (unsigned short)16384);
                            var_17 ^= ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_12 [i_0] [i_1] [(unsigned char)4] [i_3] [i_4 + 1]))))))), (min((((((/* implicit */_Bool) 100919430U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))), (((/* implicit */int) (unsigned char)255))))));
                        }
                    }
                    var_18 = ((/* implicit */unsigned int) (unsigned char)237);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (max((max((var_7), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) var_0))))))))));
}
