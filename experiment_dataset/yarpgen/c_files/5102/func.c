/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5102
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
    var_12 = ((/* implicit */unsigned long long int) ((max((min((((/* implicit */unsigned long long int) var_0)), (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)173)) && (((/* implicit */_Bool) (signed char)7))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_13 |= ((/* implicit */int) var_1);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_14 = ((/* implicit */short) ((long long int) ((((/* implicit */int) var_5)) > (var_8))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1))))) & (((/* implicit */int) min(((short)15851), (((/* implicit */short) arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_16 = ((/* implicit */unsigned int) arr_2 [i_0]);
        var_17 = ((/* implicit */int) arr_0 [i_0]);
    }
}
