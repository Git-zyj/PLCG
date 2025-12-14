/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50602
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
    for (int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) var_0);
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_12))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 191002779)) <= (min((var_17), (((/* implicit */long long int) var_0)))))))) < (var_15)));
}
