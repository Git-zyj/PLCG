/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208586
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] = ((/* implicit */short) arr_4 [i_2 + 2] [i_0]);
                    arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */int) var_13)) - (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_5)))))));
                }
            } 
        } 
    } 
    var_14 = min((((int) var_3)), (((/* implicit */int) var_4)));
}
