/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193473
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
    var_20 = ((/* implicit */_Bool) (~(var_19)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (unsigned short)52585))));
        arr_2 [3LL] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (arr_0 [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)52585)))))))));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) max((((18446744073709551611ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))), (((/* implicit */unsigned long long int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned short)17815)))))))) ? (((unsigned int) arr_1 [i_0 + 1] [i_0 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_0 + 1] [i_0 + 2]), (arr_1 [i_0 + 1] [i_0 + 2]))))));
        var_22 = ((/* implicit */_Bool) min((((/* implicit */short) arr_0 [i_0])), (var_8)));
        var_23 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)47692)) && (((/* implicit */_Bool) (unsigned short)11504)))))));
    }
    var_24 = max(((((!(((/* implicit */_Bool) 18446744073709551611ULL)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) var_18)));
}
