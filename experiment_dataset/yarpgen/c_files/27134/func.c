/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27134
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
    var_12 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (var_9)))))))) > (var_9)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) min(((!(((/* implicit */_Bool) arr_2 [i_0])))), (((arr_2 [i_0]) >= (((/* implicit */int) arr_0 [(short)8])))))))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((_Bool) arr_1 [i_0])))));
        var_15 = ((/* implicit */int) min((var_15), (max((((int) arr_1 [(_Bool)1])), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_1), (((/* implicit */short) arr_1 [i_0]))))))))))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_2)) : (16869822259608744484ULL))))));
    }
    var_17 = ((/* implicit */unsigned int) ((long long int) var_6));
}
