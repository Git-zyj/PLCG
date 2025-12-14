/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242506
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((signed char) ((_Bool) (unsigned char)201)));
        arr_4 [i_0] = ((/* implicit */_Bool) min(((-(((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) var_6)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)114)), (3411910514U)));
    }
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) min((var_1), (min((((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) var_0)))))))));
}
