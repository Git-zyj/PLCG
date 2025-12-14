/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245449
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
    var_17 = ((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) ((_Bool) var_3)))))) && (((((/* implicit */int) var_15)) == (((((/* implicit */int) var_0)) * (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_18 = ((min((-728966474087499821LL), (((/* implicit */long long int) var_8)))) ^ (var_2));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */long long int) var_3)), (-9223372036854775793LL))) : ((((_Bool)1) ? (var_1) : ((-9223372036854775807LL - 1LL))))))) ? ((((_Bool)1) ? (min((var_1), (576460748008456192LL))) : (((((/* implicit */_Bool) -3562501003132733787LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_1 [i_0]))))) : (min((max((((/* implicit */long long int) (_Bool)1)), (var_1))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775807LL) : (9223372036854775807LL)))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_7 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), (5592061156265718201LL)))) ? (min((9223372036854775788LL), (9223372036854775788LL))) : ((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        var_20 ^= ((/* implicit */_Bool) arr_7 [i_1] [i_1]);
    }
    var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)))), (((((_Bool) var_15)) ? ((~(-4605597946011720540LL))) : (-9223372036854775807LL)))));
    var_22 = ((/* implicit */long long int) var_15);
}
