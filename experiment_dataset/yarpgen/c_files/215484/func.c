/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215484
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
    var_20 = (_Bool)0;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) min((-8783155063937445430LL), (min((3079178906144864723LL), (9223372036854775807LL)))));
                var_21 ^= ((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), (max((((/* implicit */int) (short)-16137)), (max((449845535), (((/* implicit */int) (short)8192))))))));
            }
        } 
    } 
    var_22 = max((((/* implicit */long long int) (_Bool)1)), (-3079178906144864708LL));
}
