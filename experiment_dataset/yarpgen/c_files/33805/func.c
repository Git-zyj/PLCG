/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33805
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
    var_10 -= ((/* implicit */_Bool) var_0);
    var_11 *= ((/* implicit */unsigned char) ((max((6052740877894583136LL), (max((((/* implicit */long long int) var_0)), (-6052740877894583115LL))))) == (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    var_12 = ((/* implicit */int) ((unsigned char) min((min((var_1), (var_1))), (((/* implicit */short) ((((/* implicit */int) (unsigned char)124)) != (((/* implicit */int) (short)-1))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */signed char) 6052740877894583136LL);
                var_14 *= ((/* implicit */signed char) (+(max((((/* implicit */long long int) (signed char)-98)), (((((/* implicit */_Bool) (short)8642)) ? (-6805533434243232817LL) : (1073739776LL)))))));
            }
        } 
    } 
}
