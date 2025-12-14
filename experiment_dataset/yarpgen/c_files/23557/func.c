/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23557
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min(((~(((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_11)))))), (((((var_1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))) ^ (((/* implicit */int) ((_Bool) (_Bool)1))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 |= var_5;
                var_17 = (_Bool)1;
                var_18 = ((/* implicit */_Bool) min((max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min(((_Bool)0), (var_3)))))), (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) min((((/* implicit */int) var_4)), (((((/* implicit */int) max((var_5), ((_Bool)1)))) | (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
}
