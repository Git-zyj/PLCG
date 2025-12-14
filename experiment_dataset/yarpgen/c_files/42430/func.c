/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42430
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
    for (short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) max((((/* implicit */long long int) (unsigned short)52622)), (max((arr_1 [i_0 + 1]), (arr_1 [(unsigned char)3])))));
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */short) arr_2 [i_0])), ((short)24484)));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (unsigned char)22))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) min((arr_4 [i_1]), (arr_4 [i_1])));
        var_14 = ((/* implicit */int) (unsigned char)233);
        var_15 = ((/* implicit */_Bool) min((max((arr_5 [i_1]), (arr_5 [i_1]))), (min((arr_5 [i_1]), (arr_5 [i_1])))));
        var_16 = ((/* implicit */unsigned short) arr_4 [i_1]);
    }
    var_17 = max((((/* implicit */long long int) var_6)), (var_9));
}
