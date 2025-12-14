/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192543
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)44)), ((unsigned short)53165)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (4294967285U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))))));
        arr_2 [i_0] = ((/* implicit */short) 36U);
        var_21 = ((/* implicit */int) max((((/* implicit */long long int) (short)2214)), (5495923345591000553LL)));
    }
    var_22 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_17)))))) ? (max((var_7), (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
}
