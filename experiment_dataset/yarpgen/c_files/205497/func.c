/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205497
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
    var_18 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max(((short)6996), (var_17))))))) < (((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [3U]))))), ((signed char)126)))) ? (var_10) : (((/* implicit */long long int) min(((-(arr_0 [i_0]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (4038989608U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)6994))))))))));
        arr_4 [i_0] = ((/* implicit */short) var_10);
        var_20 = ((/* implicit */short) arr_3 [i_0]);
    }
}
