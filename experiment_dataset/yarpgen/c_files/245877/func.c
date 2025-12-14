/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245877
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
    var_14 = ((/* implicit */short) var_3);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((((/* implicit */int) min((var_2), (var_13)))) + (57))) - (8)))))) % (var_7)));
        arr_5 [i_0] = ((/* implicit */int) ((var_4) && (((/* implicit */_Bool) (+(var_6))))));
        var_15 = ((/* implicit */short) var_10);
    }
    for (short i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        var_16 = ((/* implicit */_Bool) var_11);
        arr_10 [i_1] = ((/* implicit */long long int) (((~(arr_8 [i_1] [i_1]))) / (((((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_10)))))) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_5)))))));
    }
    for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        var_17 = ((/* implicit */int) var_4);
        arr_14 [i_2] [i_2] = ((/* implicit */int) min((min((((/* implicit */long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_9))))), ((+(var_6))))), (((/* implicit */long long int) var_2))));
    }
}
