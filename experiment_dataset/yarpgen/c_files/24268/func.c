/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24268
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
    var_12 = ((/* implicit */unsigned short) var_1);
    var_13 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((min((23), (((/* implicit */int) var_6)))) < (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_0)))) ? (((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (min((var_10), (((/* implicit */unsigned long long int) var_6))))))));
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        var_14 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [i_0 + 1]), (((/* implicit */long long int) arr_3 [i_0 - 3]))))) ? (arr_3 [i_0 + 1]) : ((+(((/* implicit */int) var_6))))));
        var_15 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_0]), (((/* implicit */int) arr_2 [1LL]))))) ? (((/* implicit */long long int) var_9)) : (min((arr_0 [i_0]), (((/* implicit */long long int) arr_2 [2U])))))))));
        arr_5 [i_0] = min((max(((-(arr_0 [i_0]))), (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1]))))))), (max((min((((/* implicit */long long int) var_6)), (var_0))), (((((/* implicit */_Bool) 1687559687U)) ? (((/* implicit */long long int) var_1)) : (arr_1 [2U]))))));
        arr_6 [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) arr_3 [i_0]);
    }
}
