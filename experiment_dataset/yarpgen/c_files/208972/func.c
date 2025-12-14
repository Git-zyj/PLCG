/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208972
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
    var_12 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) var_0);
        var_14 = ((/* implicit */unsigned short) var_0);
        var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((int) arr_2 [i_0] [i_0]))) ? ((~(((/* implicit */int) (unsigned short)33399)))) : (((/* implicit */int) max((((/* implicit */short) (signed char)15)), ((short)-1992)))))) - (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0 - 3])))), (((int) arr_2 [i_0] [i_0]))))));
    }
    var_16 = var_7;
}
