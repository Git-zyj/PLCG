/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239613
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
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_20 |= ((/* implicit */short) -9223372036854775806LL);
        var_21 |= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [(unsigned char)2]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 + 2] [13])) & (((/* implicit */int) (signed char)-118))))) : (arr_0 [i_0]))));
        var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) ((int) arr_0 [i_0 + 2]))))));
        arr_2 [i_0 + 1] [i_0 + 1] |= ((/* implicit */unsigned long long int) 4512496882145037240LL);
    }
    var_23 = ((/* implicit */short) ((unsigned short) max((((unsigned long long int) var_18)), (((/* implicit */unsigned long long int) (~(var_15)))))));
    var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), ((+(min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_15))))))));
    var_25 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) (signed char)-1))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (-4512496882145037261LL) : (((/* implicit */long long int) 2296534516U))))));
}
