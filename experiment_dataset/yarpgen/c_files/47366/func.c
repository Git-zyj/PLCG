/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47366
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
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((var_0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)20))))) : (min((((/* implicit */long long int) ((13951274589275414024ULL) > (var_4)))), (var_7))))))));
    var_17 = ((/* implicit */long long int) var_11);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_0 [i_0]))));
        arr_3 [2ULL] |= ((/* implicit */unsigned char) ((max((var_8), (((/* implicit */unsigned long long int) var_13)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) || (var_10)))))));
        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) 6656567695970132465LL)))))));
        arr_4 [i_0] = ((((((/* implicit */int) var_0)) < (((var_2) >> (((/* implicit */int) (_Bool)0)))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (arr_1 [(_Bool)1] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))) : (min((var_7), (var_14))))) : (((/* implicit */long long int) ((/* implicit */int) (short)13130))));
    }
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (var_2)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_4)))) ? (((/* implicit */int) var_13)) : (var_5))))));
}
