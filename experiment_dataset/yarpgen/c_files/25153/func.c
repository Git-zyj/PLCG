/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25153
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
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((10754159453435724174ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-2), (((/* implicit */signed char) var_7)))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        var_19 &= ((/* implicit */int) ((signed char) (signed char)-8));
        var_20 ^= ((/* implicit */signed char) (+(arr_0 [i_0 - 3] [i_0 - 3])));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+(arr_0 [i_0 - 2] [3U]))))));
    }
    var_22 = ((/* implicit */unsigned char) var_5);
}
