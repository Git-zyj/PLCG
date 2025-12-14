/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25038
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
    var_11 &= var_7;
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (unsigned char)131))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */short) var_10);
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) == (((/* implicit */int) ((arr_0 [i_0] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))));
            }
        } 
    } 
}
