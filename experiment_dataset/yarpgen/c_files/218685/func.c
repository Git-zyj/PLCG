/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218685
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (unsigned char)58))));
        arr_2 [i_0] = ((/* implicit */int) (short)-29416);
    }
    var_15 |= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((var_0) & (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) max((var_5), (((/* implicit */unsigned int) (short)-3))))) : (min((((/* implicit */long long int) var_7)), (var_9))))), ((~(8877043580006861743LL)))));
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_9)) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1808236577304278768LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230))) : (var_5)))) ? (17891712921522612892ULL) : (((/* implicit */unsigned long long int) -1LL)))))))));
}
