/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21947
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
    var_10 -= ((/* implicit */long long int) ((unsigned char) max((((/* implicit */unsigned long long int) (signed char)125)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_0 [i_0]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(signed char)19]))) : (arr_0 [i_0]))))), (arr_0 [i_0])));
        var_12 &= ((/* implicit */signed char) min((min((arr_0 [i_0]), (arr_0 [16LL]))), (max((arr_0 [i_0]), (min((((/* implicit */long long int) arr_1 [15ULL] [15ULL])), (arr_0 [(_Bool)1])))))));
    }
    var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_0)))), (max((((/* implicit */int) var_0)), (var_5)))))), (max((((/* implicit */unsigned int) min((var_3), (((/* implicit */short) var_6))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_8)))))));
}
