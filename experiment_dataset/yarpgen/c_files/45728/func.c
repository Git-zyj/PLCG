/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45728
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
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) -1050529316113904055LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8))))))));
                var_18 |= ((/* implicit */unsigned int) 5876909037678217789LL);
            }
        } 
    } 
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned long long int) var_16)))));
    var_20 = (+(((var_10) % (((long long int) 5876909037678217789LL)))));
    var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (max((-5876909037678217790LL), (-5876909037678217790LL))) : (((/* implicit */long long int) var_6)))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 5876909037678217780LL))))), (5876909037678217766LL)))));
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) -5876909037678217772LL))));
}
