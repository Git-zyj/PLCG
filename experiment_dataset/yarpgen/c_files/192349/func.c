/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192349
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) max((arr_0 [i_0]), (arr_0 [i_0])));
        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((short) min((((/* implicit */unsigned long long int) var_4)), (arr_1 [i_0] [i_0]))))))))));
    }
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (short)-25430))))), ((unsigned short)65530)))) <= (var_2)));
}
