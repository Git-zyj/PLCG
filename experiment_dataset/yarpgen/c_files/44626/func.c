/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44626
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
    for (int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_18 = (~(((/* implicit */int) ((unsigned short) arr_0 [i_1 + 1] [i_0 + 1]))));
                var_19 = ((/* implicit */short) ((unsigned long long int) ((int) ((((/* implicit */int) arr_3 [(short)9] [i_1 + 1])) / (((/* implicit */int) arr_4 [i_0] [14U] [i_0]))))));
                arr_5 [(short)16] [(_Bool)1] [i_0] = ((/* implicit */short) arr_2 [i_0] [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (unsigned short)11);
}
