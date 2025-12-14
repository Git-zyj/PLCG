/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49873
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
    var_10 *= ((/* implicit */signed char) var_1);
    var_11 ^= ((/* implicit */short) max((((((/* implicit */int) var_3)) > (((/* implicit */int) var_7)))), (var_9)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_12 += ((((/* implicit */_Bool) 4127458948U)) ? (167508344U) : (4127458942U));
                var_13 = ((/* implicit */short) min((var_13), ((short)6)));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) var_7);
}
