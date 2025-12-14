/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26630
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
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)24527)) / (((/* implicit */int) (short)-28625)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((long long int) (-(var_9)))) * (((/* implicit */long long int) (+(((/* implicit */int) var_8))))))))));
                var_15 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) var_9)))));
                var_16 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((5515819209195116980ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32757)))))) ? ((~(18446744073709551594ULL))) : (((/* implicit */unsigned long long int) 88448761))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (_Bool)1)))) * (((var_0) / (((/* implicit */unsigned long long int) var_10)))))));
}
