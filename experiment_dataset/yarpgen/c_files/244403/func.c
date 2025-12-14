/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244403
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
    var_15 = ((/* implicit */long long int) var_10);
    var_16 = var_11;
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-80)) || (((((/* implicit */int) (!(((/* implicit */_Bool) -6781299239266530281LL))))) > (min((((/* implicit */int) (_Bool)1)), (var_1)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_0 [i_1 - 2]))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)37416)) & (2147483647)))) : (((var_12) | (((/* implicit */long long int) arr_3 [i_0] [i_1]))))));
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((unsigned int) arr_1 [i_0])))));
                arr_5 [i_1 + 2] [i_0] [i_0] = ((/* implicit */unsigned short) var_14);
            }
        } 
    } 
}
