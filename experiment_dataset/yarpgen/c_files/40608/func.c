/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40608
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
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 753652672U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_6))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967269U)) || (((/* implicit */_Bool) var_6)))))))), ((~(((unsigned long long int) var_5))))));
    var_16 = ((/* implicit */unsigned int) ((signed char) 4294967269U));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 27U)) ? (arr_1 [i_0] [(unsigned char)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [0] [i_0]))))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)22485)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (var_1))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((signed char) 396515499)))))));
    }
}
