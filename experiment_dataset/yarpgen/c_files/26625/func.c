/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26625
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
    var_14 = ((((/* implicit */_Bool) ((var_6) << (((((min((var_3), (var_11))) + (498632628439251447LL))) - (4LL)))))) ? (var_13) : (((/* implicit */unsigned long long int) ((long long int) (+(var_12))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((524160LL) ^ (var_4)))))) ? (((unsigned long long int) var_1)) : (((((/* implicit */unsigned long long int) 4693893843462378783LL)) | (434713855151923298ULL)))));
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_0] [i_1]);
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_1))));
            }
        } 
    } 
    var_16 = (~(var_9));
}
