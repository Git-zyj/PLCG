/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237601
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
    var_12 |= 1329406769U;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((unsigned int) arr_0 [i_0 + 1]))));
        arr_3 [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1329406769U)))))) ^ ((((!(((/* implicit */_Bool) 4294967295U)))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (3803702884U))));
        var_14 = ((/* implicit */unsigned int) min((var_14), (((2965560523U) + (((((/* implicit */_Bool) max((var_7), (var_0)))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) 3804729513U)) ? (var_8) : (490237782U)))))))));
    }
    var_15 = max((var_5), ((~(3227037092U))));
    var_16 = (-(((unsigned int) ((var_11) & (4097495157U)))));
}
