/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212865
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [12U] |= var_0;
                var_10 = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
            }
        } 
    } 
    var_11 = ((max((((/* implicit */long long int) (-(var_5)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 1598946285)) : (5675053193172646486LL))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_0))))))));
    var_12 = ((/* implicit */short) var_8);
}
