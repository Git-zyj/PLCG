/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248672
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
    var_10 = ((/* implicit */_Bool) ((signed char) (_Bool)1));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_11 = arr_0 [(signed char)4];
                var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((short) (unsigned short)44341))), (max((0ULL), (((/* implicit */unsigned long long int) (unsigned short)19809))))));
            }
        } 
    } 
}
