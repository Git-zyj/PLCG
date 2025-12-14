/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34769
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
    var_11 ^= ((/* implicit */signed char) max((((/* implicit */long long int) ((signed char) var_7))), (var_8)));
    var_12 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_13 |= ((/* implicit */signed char) (_Bool)1);
                var_14 |= ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)111))))) ? ((~((-(((/* implicit */int) (unsigned char)217)))))) : ((~(((/* implicit */int) (signed char)38))))));
                var_15 = ((/* implicit */_Bool) ((signed char) ((_Bool) (!(((/* implicit */_Bool) var_5))))));
            }
        } 
    } 
}
