/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241210
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
    var_12 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            {
                var_13 = max((((/* implicit */int) (!(((/* implicit */_Bool) (-(var_3))))))), ((-(((/* implicit */int) (unsigned char)66)))));
                var_14 = ((/* implicit */short) max((((_Bool) arr_4 [i_0] [i_1 - 4] [i_1 + 1])), ((!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
}
