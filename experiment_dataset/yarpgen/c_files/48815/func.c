/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48815
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
    var_18 = ((/* implicit */unsigned char) var_13);
    var_19 -= ((/* implicit */unsigned long long int) ((unsigned char) max((((((var_5) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)221)) - (184))))), (min((((/* implicit */long long int) var_4)), (var_10))))));
    var_20 = ((/* implicit */long long int) min((var_20), (var_5)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((0ULL) % (((/* implicit */unsigned long long int) -1978365337)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))));
        var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (arr_2 [i_0 + 1]))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_2))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((int) arr_1 [i_0] [i_0])));
    }
}
