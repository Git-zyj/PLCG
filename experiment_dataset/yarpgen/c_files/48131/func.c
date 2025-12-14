/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48131
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
    var_12 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) min((((/* implicit */int) var_5)), ((-(((/* implicit */int) ((_Bool) (short)11748))))))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_5 [i_0])), (((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 4])) ? (((/* implicit */long long int) 2526611325U)) : (((((/* implicit */_Bool) 2526611336U)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-419319495493856404LL)))))));
            }
        } 
    } 
}
