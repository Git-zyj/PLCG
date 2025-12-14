/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201771
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
    var_18 = max((18387884772889646049ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)0) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
    var_19 = min(((~(((/* implicit */int) max((var_9), (var_9)))))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)35654)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [(unsigned char)10] [i_0] = var_1;
        arr_3 [i_0] = var_7;
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (~(max((((/* implicit */int) var_3)), (var_6)))));
        arr_5 [13ULL] = max((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)-1024)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (signed char)-14)));
    }
}
