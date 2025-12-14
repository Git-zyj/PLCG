/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225326
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
    var_16 ^= ((/* implicit */short) ((((min((((/* implicit */long long int) var_10)), ((-(var_6))))) + (9223372036854775807LL))) >> (((min((var_2), (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))) - (8807LL)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) (short)20312)))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -8746676141195636352LL))))), (2ULL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) 3912821872855195131ULL);
    }
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (var_1)))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-23739))))) ? (min((1483051779546371272ULL), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1)))))));
}
