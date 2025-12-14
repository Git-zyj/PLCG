/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236917
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(((/* implicit */int) max((max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) arr_2 [i_0] [i_0])))), (((/* implicit */unsigned short) (_Bool)0))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) & ((~(((/* implicit */int) var_4))))));
        var_21 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) * (((((unsigned long long int) var_12)) / (((/* implicit */unsigned long long int) ((var_18) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)10])))))))));
    }
    var_22 = ((/* implicit */signed char) ((int) ((min((var_11), (((/* implicit */unsigned long long int) (unsigned short)51073)))) - (((/* implicit */unsigned long long int) ((int) var_18))))));
}
