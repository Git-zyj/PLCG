/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42020
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
    var_17 *= max((var_7), (((int) ((_Bool) -5029219313142776569LL))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (signed char)16);
        var_18 &= ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (((((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) -1077739068)))) + (9223372036854775807LL))) >> (((arr_1 [i_0]) - (5223082991011671459LL)))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) 469568700U))));
        var_20 *= ((/* implicit */int) ((short) max((((/* implicit */long long int) min((var_12), (((/* implicit */unsigned int) (signed char)-50))))), (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (-9108593769695511119LL) : (arr_5 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_21 = ((/* implicit */signed char) arr_7 [i_2] [i_2]);
        var_22 = ((/* implicit */_Bool) ((unsigned char) arr_8 [i_2]));
    }
}
