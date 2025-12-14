/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22531
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_11 &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_1 + 1])) & (((/* implicit */int) arr_4 [i_1] [i_1 + 1]))));
            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) 1152921504606846975ULL)) ? (32767LL) : (-32767LL))))));
            arr_5 [(signed char)14] [i_1] = ((/* implicit */unsigned short) ((arr_3 [i_0] [i_0] [i_1 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        }
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_10))));
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [4])) || (((/* implicit */_Bool) 32767LL)))))));
        arr_6 [i_0] [16ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) var_7))));
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 8; i_3 += 3) 
        {
            {
                var_15 *= ((/* implicit */long long int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_5))));
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_3 + 2])) ? (((((/* implicit */_Bool) 32767LL)) ? (((/* implicit */long long int) arr_2 [i_2] [i_2] [i_3])) : (32746LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 - 1]))))) : (((((/* implicit */_Bool) 31LL)) ? (((/* implicit */long long int) 4294967295U)) : (-1LL))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_9);
}
