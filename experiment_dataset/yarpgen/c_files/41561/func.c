/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41561
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (14541220237241679559ULL)));
    var_15 = ((/* implicit */short) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [12U] = ((/* implicit */unsigned int) arr_1 [4U] [i_0]);
        arr_3 [i_0] [i_0] = (i_0 % 2 == zero) ? (((arr_1 [i_0 - 2] [i_0]) << (((arr_1 [i_0 - 2] [i_0]) - (9266531823390722497ULL))))) : (((arr_1 [i_0 - 2] [i_0]) << (((((arr_1 [i_0 - 2] [i_0]) - (9266531823390722497ULL))) - (1276189510021594305ULL)))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-20746)))))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) arr_1 [i_0 + 1] [14U]))));
    }
}
