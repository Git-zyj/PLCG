/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44519
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_1 [i_1])))))))))));
                arr_5 [i_1] = ((/* implicit */int) (signed char)33);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (signed char)-33);
}
