/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35714
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
    var_16 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((int) (+(((-7931901822073473194LL) % (((/* implicit */long long int) ((/* implicit */int) var_8)))))))))));
                var_18 *= ((/* implicit */int) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1429210200980822311LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-110))))), (((unsigned int) (signed char)123)))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4)))));
                var_19 = ((/* implicit */short) var_0);
            }
        } 
    } 
}
