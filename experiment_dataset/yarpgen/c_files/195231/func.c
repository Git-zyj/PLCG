/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195231
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
    var_12 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (var_3)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0 - 2]);
                arr_6 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)461))));
            }
        } 
    } 
}
