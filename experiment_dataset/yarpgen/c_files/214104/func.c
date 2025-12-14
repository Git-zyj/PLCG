/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214104
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
    var_20 = ((/* implicit */long long int) var_14);
    var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)1))))) ? ((~(var_19))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-6)), (var_9))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) arr_0 [12ULL]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */long long int) var_2);
    }
}
