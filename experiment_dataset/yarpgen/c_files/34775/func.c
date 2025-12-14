/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34775
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_11 = min((max((arr_1 [13U] [i_0]), (arr_1 [i_0] [i_0]))), (((((/* implicit */_Bool) 1816653825U)) ? (820082602U) : (1821542951U))));
        var_12 = min((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2498947963U)))))) | (((((/* implicit */_Bool) 2901355222U)) ? (arr_0 [5U]) : (1393612071U))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [10U]))));
        var_13 = arr_0 [i_0];
    }
    var_14 -= max((((((var_4) & (285281534U))) & (min((4246138767U), (4246138746U))))), (min((var_1), (1116193731U))));
}
