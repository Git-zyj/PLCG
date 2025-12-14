/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216588
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
    var_10 = ((/* implicit */long long int) ((var_7) >> (((((((/* implicit */_Bool) 9223372036854775807LL)) ? (0ULL) : (var_1))) >> (((var_1) - (15320852945370526145ULL)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_2 [15LL])) * ((+(((/* implicit */int) arr_2 [i_0])))))), (((((/* implicit */_Bool) max((arr_2 [i_0]), (((/* implicit */short) (_Bool)0))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))))));
        var_12 = 1ULL;
        arr_3 [i_0] = ((/* implicit */unsigned short) (+(var_7)));
    }
    var_13 = ((/* implicit */long long int) var_6);
    var_14 = ((/* implicit */short) 3407555857U);
    var_15 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) 6542856117257167347LL)) ? (var_7) : (((/* implicit */unsigned long long int) var_0)))))));
}
