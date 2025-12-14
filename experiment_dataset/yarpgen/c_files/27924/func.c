/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27924
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
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_11 ^= ((/* implicit */signed char) (_Bool)1);
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) 229848579U)) ? (min((((/* implicit */unsigned long long int) max((arr_0 [i_0]), (arr_0 [i_0])))), (arr_2 [i_0]))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 1])) << (((arr_2 [i_0]) - (8067288640754358812ULL)))))) * (arr_2 [i_0])))));
        var_13 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (arr_0 [4ULL])));
    }
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (_Bool)1))));
}
