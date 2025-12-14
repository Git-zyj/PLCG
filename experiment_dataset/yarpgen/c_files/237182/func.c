/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237182
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
    var_20 -= ((/* implicit */signed char) var_1);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) ((min((((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_1 [i_0])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))) & ((~(((/* implicit */int) arr_1 [i_0]))))));
        var_22 -= ((/* implicit */signed char) max((2140074100), (((/* implicit */int) (short)17528))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (((!((_Bool)1))) ? (1644497874) : (((/* implicit */int) (!(((/* implicit */_Bool) -1644497877)))))));
        var_23 = max(((+(((int) var_3)))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (max((1644497863), (1644497877))) : ((~(((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    var_24 -= ((signed char) max((((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */unsigned int) var_16)) : (var_18)))), (((((/* implicit */_Bool) var_18)) ? (var_17) : (((/* implicit */unsigned long long int) var_16))))));
}
