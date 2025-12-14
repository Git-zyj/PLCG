/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43160
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
    var_15 = ((/* implicit */_Bool) min((113632258), (max((max((var_5), (((/* implicit */int) var_2)))), ((~(((/* implicit */int) (unsigned short)65529))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */_Bool) arr_3 [i_0] [i_1]);
                arr_5 [i_1] = ((/* implicit */short) arr_2 [i_0] [i_1]);
            }
        } 
    } 
}
