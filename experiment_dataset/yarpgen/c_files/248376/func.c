/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248376
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
    var_10 = ((/* implicit */_Bool) ((int) min((((/* implicit */int) (!(var_1)))), (max((2033396868), (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = (!(max(((!(((/* implicit */_Bool) arr_0 [i_0])))), (((_Bool) arr_2 [i_0])))));
        var_11 = min((min((min((((/* implicit */int) arr_2 [i_0])), (53465884))), (((arr_3 [i_0] [i_0]) ? (((/* implicit */int) var_6)) : (arr_1 [i_0]))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))));
    }
    var_12 &= min((((_Bool) var_9)), (min((max((var_5), (var_8))), (max((var_8), (var_7))))));
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) max((((int) ((var_6) ? (((/* implicit */int) var_1)) : (var_9)))), ((+(max((-1775951920), (((/* implicit */int) var_5)))))))))));
}
