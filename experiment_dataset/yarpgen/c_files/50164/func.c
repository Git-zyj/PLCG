/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50164
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
    var_20 = ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-9400)) & (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_21 = ((unsigned long long int) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)1])))));
                var_22 = ((/* implicit */unsigned int) var_8);
                var_23 = ((max((((/* implicit */unsigned int) (-2147483647 - 1))), (94771116U))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))));
            }
        } 
    } 
}
