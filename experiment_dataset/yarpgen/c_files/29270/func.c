/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29270
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
    var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_15)), (((((((/* implicit */_Bool) -3683373529941646544LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19339))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (unsigned char)8))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_22 += ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [(unsigned char)14])), (arr_2 [i_0 + 1])));
        var_23 = ((/* implicit */unsigned char) max(((~(arr_2 [i_0 + 3]))), (((/* implicit */unsigned int) ((signed char) arr_1 [i_0])))));
    }
}
