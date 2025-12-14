/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44252
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (var_8)));
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) max((var_6), (var_1))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_14 = ((/* implicit */long long int) (_Bool)1);
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (6357775001314500597ULL))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) var_3)) : (((0U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1] [i_0]))))))))));
    }
    var_16 = var_2;
}
