/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194723
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
    var_14 = ((long long int) 2351312664458609293LL);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 24LL)) || (((/* implicit */_Bool) 1686873563577296701LL)))))))) <= (max((((long long int) 3191516905673540336LL)), (arr_0 [i_0])))));
                var_16 = ((long long int) 3191516905673540334LL);
            }
        } 
    } 
}
