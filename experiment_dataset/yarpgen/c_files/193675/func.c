/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193675
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
    var_18 = ((/* implicit */unsigned long long int) var_17);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0 - 1] = ((arr_2 [i_0 - 1]) <= (((((/* implicit */unsigned long long int) var_15)) * (arr_0 [i_0 - 1] [i_0 - 1]))));
        var_19 *= (!(((var_4) && (((/* implicit */_Bool) arr_2 [i_0 - 1])))));
    }
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((_Bool) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) 1311983367)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) var_4))))))))));
}
