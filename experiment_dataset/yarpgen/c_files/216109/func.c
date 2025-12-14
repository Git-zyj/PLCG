/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216109
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (+((~(((/* implicit */int) ((var_8) != (((/* implicit */int) (short)0))))))))))));
                arr_5 [3U] = ((/* implicit */int) arr_0 [11]);
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) -4146149486045374123LL);
}
