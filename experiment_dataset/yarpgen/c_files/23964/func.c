/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23964
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (var_12)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) ((short) (!((!(((/* implicit */_Bool) (short)0)))))));
        var_17 -= min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)2])) && (((/* implicit */_Bool) 6596898467790603264LL))))), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1] [2ULL])))))) / (arr_1 [i_0 + 1] [(_Bool)0]))));
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) min((min((2131185203U), (arr_0 [i_0] [i_0]))), (arr_0 [3LL] [i_0]))))));
        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) 2130706432U)))));
        var_19 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-15))));
    }
    var_20 = ((/* implicit */unsigned char) var_9);
}
