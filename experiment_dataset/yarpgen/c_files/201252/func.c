/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201252
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
    var_13 = ((/* implicit */long long int) min((((int) (+((-9223372036854775807LL - 1LL))))), (((/* implicit */int) (unsigned char)204))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_14 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) (unsigned char)204)))))) : (((((/* implicit */_Bool) var_3)) ? (15750471918057315328ULL) : (0ULL))))) % (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -300358323)))) ? (129627704) : (((/* implicit */int) (unsigned char)48)))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-76)) ? (300358323) : (((/* implicit */int) (signed char)124))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((-9223372036854775807LL - 1LL))))))) : (((unsigned long long int) min((var_4), (var_5))))));
    }
}
