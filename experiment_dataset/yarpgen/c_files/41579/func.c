/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41579
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
    var_19 = ((/* implicit */int) ((unsigned char) (+((+(((/* implicit */int) var_7)))))));
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
    var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned short) min(((_Bool)1), ((!(((/* implicit */_Bool) var_9))))));
                arr_5 [i_1 - 1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(signed char)7] [i_1 - 1])))))) : (((long long int) arr_0 [i_1] [i_1 - 1]))));
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (+(((arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1])))))))));
                var_24 = ((/* implicit */int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1))));
            }
        } 
    } 
}
