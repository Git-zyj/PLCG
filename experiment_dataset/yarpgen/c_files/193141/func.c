/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193141
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_20 *= ((/* implicit */unsigned int) 14918395258176219794ULL);
        var_21 = ((/* implicit */unsigned int) 969567117);
    }
    for (unsigned short i_1 = 4; i_1 < 15; i_1 += 2) 
    {
        var_22 = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 3]))) : (var_19))), (((/* implicit */unsigned int) max((arr_4 [i_1 - 2]), (var_5))))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (-(((arr_3 [i_1]) + (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))))))))));
    }
    var_24 &= ((/* implicit */unsigned char) var_9);
}
