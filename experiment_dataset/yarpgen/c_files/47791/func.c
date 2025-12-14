/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47791
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
    var_12 = ((/* implicit */unsigned char) -1385178527);
    var_13 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))), (((long long int) ((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
    var_14 = var_5;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) arr_1 [(short)6] [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((signed char) arr_0 [i_0])), (((/* implicit */signed char) ((arr_0 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19285))))))));
        var_16 = ((/* implicit */unsigned int) (((~(arr_0 [i_0]))) | (min((arr_0 [i_0]), (arr_0 [i_0])))));
    }
}
