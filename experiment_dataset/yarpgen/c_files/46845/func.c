/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46845
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
    var_20 |= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_17)) : (((((int) -923660734)) - (((((/* implicit */int) var_1)) - (((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (signed char)-19))))))) - (max((18379854603240068650ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
                var_22 |= ((/* implicit */signed char) var_16);
                var_23 = (((!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))));
                var_24 = (signed char)112;
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_1))));
}
