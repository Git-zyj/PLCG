/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34445
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)60)) ? (7774386370431581687LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)57)))))));
                var_14 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-62))));
                var_15 = ((short) ((short) (+(((/* implicit */int) (signed char)72)))));
            }
        } 
    } 
    var_16 = (short)13223;
    var_17 |= ((/* implicit */signed char) min((((/* implicit */int) var_6)), (max((((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (signed char)122))))))));
}
