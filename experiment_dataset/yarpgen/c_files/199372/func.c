/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199372
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
    var_13 = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))) * (((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 *= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] = ((/* implicit */_Bool) max((((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) ^ (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))))));
        var_15 = ((/* implicit */_Bool) ((((((/* implicit */int) min(((_Bool)1), ((_Bool)0)))) * (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)0)))))) & (((/* implicit */int) max((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))), ((_Bool)0))))));
    }
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))) % (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) != (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))))))))));
}
