/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243892
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)-32765)))) ? (((/* implicit */unsigned long long int) -1801446492)) : ((+(18446744073709551615ULL)))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)11602)) == (-862999160)));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 5932549901026794261LL)) : (arr_0 [i_0]))))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_5)))) && (((((/* implicit */_Bool) (signed char)70)) && (((/* implicit */_Bool) arr_0 [i_0])))))))));
    }
    var_20 = ((/* implicit */signed char) -862999182);
}
