/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208865
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0 + 3] = ((/* implicit */int) arr_1 [i_0 + 2]);
        arr_3 [i_0] = ((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0]);
        var_18 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [1U] [i_0])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)-17565))))), (((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 3]))) : (arr_1 [i_0 + 2])))));
    }
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), ((-2147483647 - 1))))) ? ((-(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) -2138187980)) ? (var_2) : (((/* implicit */int) var_13))))))) ? (((/* implicit */long long int) 3472547382U)) : (var_0)));
    var_20 += ((/* implicit */_Bool) var_4);
    var_21 = (+((~(((var_2) | (274640689))))));
}
