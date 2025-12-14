/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21142
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */long long int) var_2);
                arr_4 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */long long int) arr_0 [i_0])), ((-(var_6))))) : (var_4)));
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [3])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8))))) || (((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])))))) : (((((/* implicit */_Bool) var_1)) ? (min((4246163571552612743LL), (((/* implicit */long long int) 4294967295U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
            }
        } 
    } 
    var_15 *= ((/* implicit */unsigned int) var_10);
}
