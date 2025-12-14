/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197635
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
    var_12 = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) var_5)) ? (var_1) : (7229228015685356680ULL))), (((((/* implicit */unsigned long long int) var_3)) + (var_1))))), (var_1)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((((((/* implicit */_Bool) ((signed char) var_1))) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (var_4));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))));
        var_14 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */_Bool) var_9)) ? (11217516058024194936ULL) : (7229228015685356680ULL))) : (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) & (var_2)))))) : (((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) != (var_1)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) var_7);
        var_15 = ((/* implicit */long long int) min((7229228015685356697ULL), (11217516058024194920ULL)));
    }
    var_16 = ((/* implicit */long long int) ((11217516058024194936ULL) <= (((/* implicit */unsigned long long int) 4115640156U))));
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
}
