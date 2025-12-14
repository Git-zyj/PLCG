/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209983
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
    var_18 = ((/* implicit */signed char) var_4);
    var_19 |= ((((((/* implicit */int) var_13)) + (2147483647))) << (((var_12) - (1293047980))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_20 *= ((/* implicit */short) (+(max((max((((/* implicit */unsigned int) arr_1 [i_0])), (2749812942U))), (((/* implicit */unsigned int) (-(arr_1 [i_0]))))))));
        arr_2 [i_0] [(signed char)7] = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_10))))) < (((/* implicit */int) max((arr_0 [i_0]), (var_17)))))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) var_2))));
        var_21 |= ((/* implicit */_Bool) ((unsigned int) (~(2749812942U))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2749812932U)) ? (-5234678723444876865LL) : (((/* implicit */long long int) arr_1 [i_0]))))) ? (17) : (arr_1 [i_0 - 1])))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1]))) : (((((/* implicit */_Bool) (~(var_7)))) ? ((-(arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))))));
        var_22 = ((/* implicit */int) max((max((((long long int) 2749812942U)), (((long long int) var_0)))), (((/* implicit */long long int) var_17))));
    }
}
