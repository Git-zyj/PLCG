/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224864
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
    var_10 *= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_7)) ? (var_0) : (var_0))) | (min((((/* implicit */int) var_2)), (var_5))))) >> (((min((max((var_5), (((/* implicit */int) var_8)))), (max((((/* implicit */int) (signed char)105)), (var_1))))) - (78)))));
    var_11 = ((/* implicit */unsigned char) min((((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned int) var_4))));
    var_12 = ((/* implicit */unsigned long long int) ((((long long int) ((unsigned int) (unsigned char)255))) >> (((var_5) - (1769816926)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_13 = ((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]));
            var_14 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)0)) ^ (arr_4 [i_0] [i_1] [i_1])));
        }
        var_15 = ((/* implicit */unsigned short) max((var_15), (arr_3 [i_0])));
    }
}
