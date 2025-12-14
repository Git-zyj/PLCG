/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232983
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
    var_14 = ((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) max((((/* implicit */short) var_13)), ((short)255))))));
    var_15 *= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_0))))), (max((min((((/* implicit */unsigned long long int) var_13)), (18446744073709551600ULL))), (((/* implicit */unsigned long long int) var_7))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_16 |= max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((-7369651710781992243LL) + (((/* implicit */long long int) -1969724014)))))))), (1020U));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((min((max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_1))), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) (!(var_0)))))))));
    }
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_11))));
}
