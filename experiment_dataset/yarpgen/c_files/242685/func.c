/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242685
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_3), ((_Bool)1)))) + (((/* implicit */int) arr_3 [i_0]))))), (min((((unsigned long long int) (_Bool)1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (var_8)))))));
                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min((((/* implicit */unsigned long long int) max(((unsigned short)62668), (((/* implicit */unsigned short) (!((_Bool)1))))))), (min((max((4269849003703381608ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) arr_2 [i_0 - 3] [i_0])))))))));
            }
        } 
    } 
    var_13 = var_5;
}
