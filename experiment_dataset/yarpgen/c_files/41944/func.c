/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41944
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_1))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0 - 2] [i_0] = ((/* implicit */unsigned short) (~(arr_2 [i_0])));
        arr_4 [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) ((arr_2 [i_0]) << (((var_3) - (17698192659733578674ULL)))))) && (((/* implicit */_Bool) ((long long int) arr_0 [(signed char)1]))))), (((((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_13))))) > ((+(arr_2 [i_0])))))));
    }
    var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */long long int) ((((/* implicit */int) var_13)) << (((((/* implicit */int) var_11)) - (101))))))))) ? (((/* implicit */int) ((var_0) >= (((/* implicit */int) var_17))))) : (((/* implicit */int) var_9))));
}
