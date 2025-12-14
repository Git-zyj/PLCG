/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224809
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
    var_12 = var_9;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) max((10780476345450590184ULL), (((/* implicit */unsigned long long int) 480652251U))));
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (-(max((var_4), (((/* implicit */unsigned int) (((_Bool)0) && (((/* implicit */_Bool) arr_3 [i_0]))))))))))));
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((int) var_1)))));
            }
        } 
    } 
}
