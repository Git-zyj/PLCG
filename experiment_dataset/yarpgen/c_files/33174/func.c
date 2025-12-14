/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33174
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
    var_19 = ((/* implicit */int) ((((-6355510763552789595LL) + (9223372036854775807LL))) << (((var_4) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_11))))))))));
    var_20 = ((/* implicit */int) max((var_20), ((+(((/* implicit */int) (((~(var_4))) != (((((/* implicit */_Bool) var_16)) ? (var_5) : (var_12))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((1116892707587883008ULL) == ((~(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) 1437800184990792986LL)) : (arr_0 [i_0])))))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_13))))), (arr_1 [i_0] [i_0])))) ? ((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (arr_0 [i_0]))) : (arr_2 [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_0) : (var_0)))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_17)) : (arr_2 [i_0]))))) != (((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -1437800184990792990LL)) : (var_7))) % (arr_0 [i_0])))));
        var_22 = ((/* implicit */int) ((long long int) (((~(arr_2 [i_0]))) | (16815187465926895216ULL))));
    }
}
