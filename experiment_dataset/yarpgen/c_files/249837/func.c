/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249837
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
    var_11 = (((((~(var_8))) << (max((((/* implicit */unsigned int) (_Bool)0)), (0U))))) == (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_0))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) var_0);
        arr_2 [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    var_13 *= ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) var_2)))));
}
