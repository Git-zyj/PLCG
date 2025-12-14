/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45653
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((6587737661376462812LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11165))))))));
                arr_4 [i_1] [(short)14] [i_1] = ((/* implicit */_Bool) arr_3 [i_1] [i_1]);
            }
        } 
    } 
    var_12 = ((/* implicit */short) ((_Bool) max((((long long int) var_1)), (var_8))));
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_5))));
    var_14 = ((/* implicit */unsigned long long int) var_10);
    var_15 = ((/* implicit */long long int) min((var_15), ((-(max((((/* implicit */long long int) -1789282965)), (((var_9) & (((/* implicit */long long int) ((/* implicit */int) var_7)))))))))));
}
