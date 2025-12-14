/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229601
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
    var_11 = ((/* implicit */long long int) var_3);
    var_12 = ((/* implicit */long long int) ((_Bool) max((min((-3431632109132649608LL), (((/* implicit */long long int) var_2)))), (max((1851870081399838935LL), (9223372036854775807LL))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */_Bool) (-(((long long int) (_Bool)1))));
                var_13 -= ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
    var_14 = (_Bool)0;
}
