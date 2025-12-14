/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242782
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
    var_14 = ((/* implicit */short) max((((/* implicit */unsigned int) var_9)), (var_10)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned short)7143)), (max((899846454U), (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))))));
                var_16 = ((/* implicit */unsigned short) var_6);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) max((max((10323259632470634461ULL), (((/* implicit */unsigned long long int) 2656592883U)))), (((/* implicit */unsigned long long int) ((unsigned short) var_12)))));
}
