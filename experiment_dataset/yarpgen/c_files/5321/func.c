/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5321
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((unsigned int) arr_2 [i_0])) | (((/* implicit */unsigned int) var_19))));
                    var_21 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_8 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80)))))));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_5))));
                }
            } 
        } 
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_0])) - (((/* implicit */int) arr_9 [i_0])))))));
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (+(((/* implicit */int) var_14)))))));
    }
    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        var_25 *= ((/* implicit */unsigned long long int) arr_7 [i_3] [i_3]);
        arr_13 [10ULL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((var_7) | (((((/* implicit */int) arr_4 [i_3])) >> (((((/* implicit */int) arr_7 [i_3] [i_3])) - (69)))))))) / (((((/* implicit */_Bool) ((var_16) | (((/* implicit */int) arr_9 [i_3]))))) ? (((/* implicit */unsigned long long int) (-(1862345426U)))) : (((arr_2 [13]) ? (((/* implicit */unsigned long long int) var_7)) : (var_3)))))));
    }
    var_26 = ((/* implicit */unsigned int) var_8);
    var_27 ^= ((min((var_8), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))))) >> (((((/* implicit */int) var_11)) + (134))));
}
