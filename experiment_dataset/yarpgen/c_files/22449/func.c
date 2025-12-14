/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22449
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
    var_20 = ((/* implicit */unsigned long long int) (-(var_3)));
    var_21 = ((/* implicit */_Bool) (-(var_2)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [10ULL] [(short)10] = ((/* implicit */unsigned long long int) ((_Bool) 9105100602070918604LL));
                arr_7 [i_0] [i_1] [i_0 + 2] = ((/* implicit */int) max((min((15081173096176789560ULL), (((/* implicit */unsigned long long int) (~(-373029556)))))), (((/* implicit */unsigned long long int) -373029556))));
            }
        } 
    } 
}
