/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27044
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551606ULL)) ? ((-(var_9))) : (((/* implicit */int) min((((/* implicit */signed char) ((_Bool) var_0))), (var_2))))));
        var_11 = ((/* implicit */long long int) (+(18446744073709551606ULL)));
    }
    var_12 = ((/* implicit */signed char) max((((((/* implicit */int) (short)-12549)) - (((/* implicit */int) (_Bool)0)))), (var_9)));
    var_13 |= ((/* implicit */signed char) ((max(((_Bool)0), (((_Bool) (short)31033)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15949))) : ((~((~(18428145387506414756ULL)))))));
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((unsigned int) var_6)))));
}
