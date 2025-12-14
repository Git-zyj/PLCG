/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238302
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
    var_14 = ((/* implicit */signed char) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_0]), (((/* implicit */short) var_10)))))) : ((+(3879617064776948441ULL)))));
                var_16 = ((/* implicit */_Bool) ((3879617064776948441ULL) / (3879617064776948441ULL)));
            }
        } 
    } 
}
