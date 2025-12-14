/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34157
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
    var_18 |= ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (var_6)))) ? ((~(var_14))) : (((/* implicit */unsigned long long int) -1948037132)))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (((unsigned int) -2147483642)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        var_20 = ((/* implicit */int) (((((!(((/* implicit */_Bool) 2875430554316802624ULL)))) ? (((/* implicit */unsigned long long int) (+(var_4)))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_0 [i_0 - 1] [3ULL]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
    }
}
