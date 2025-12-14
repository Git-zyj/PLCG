/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204397
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
    var_18 = ((/* implicit */unsigned char) var_17);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_19 += ((/* implicit */short) var_10);
        var_20 ^= ((/* implicit */unsigned short) var_5);
        var_21 += ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) (short)13237))) ? (((-9009000372550882340LL) | (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) var_5)))) <= (((/* implicit */long long int) (((-(((/* implicit */int) (short)2371)))) - (((/* implicit */int) arr_2 [i_0] [i_0 - 1])))))));
    }
    var_22 |= ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) / (((((/* implicit */_Bool) (short)-21405)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)2349)))))));
}
