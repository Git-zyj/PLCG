/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51006
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
    var_20 = ((/* implicit */unsigned short) var_17);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                var_21 = max((((/* implicit */int) min(((unsigned short)65535), (var_2)))), (((arr_0 [i_0 + 2]) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 + 2])))));
                var_22 = ((/* implicit */signed char) arr_4 [i_1]);
            }
        } 
    } 
}
