/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214332
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
    var_11 += ((/* implicit */unsigned short) ((((/* implicit */int) (((~(var_4))) != (((/* implicit */unsigned int) ((/* implicit */int) min(((_Bool)1), (var_5)))))))) != (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((-7073507767313368222LL), (((/* implicit */long long int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 1]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0 - 2] [i_0 + 1] [i_0 + 1])))) : (((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 2] [i_0 - 2])) - (17251)))))));
                var_13 = ((/* implicit */short) (+(16777184U)));
                var_14 &= ((((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))))) || (((/* implicit */_Bool) (~(arr_6 [i_0 - 1] [i_0 + 1])))));
            }
        } 
    } 
}
