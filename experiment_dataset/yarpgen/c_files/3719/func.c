/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3719
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
    var_12 = ((/* implicit */short) max((var_12), (var_9)));
    var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) var_11)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_3 [(unsigned char)21] [i_0] = ((/* implicit */long long int) min(((((_Bool)0) && ((_Bool)1))), (((var_2) || (((/* implicit */_Bool) var_9))))));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (+(((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) (unsigned char)138))))))))));
        var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */short) var_8)), (var_5))))));
    }
    var_16 = ((/* implicit */int) ((((/* implicit */int) (((~(((/* implicit */int) var_5)))) >= (min((((/* implicit */int) var_4)), (var_10)))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8))))))))));
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_2))));
}
