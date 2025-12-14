/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205453
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
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_0)), (1268187837U))), (var_15))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = min((((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 4]))) : (-8843631552691815732LL))), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0 + 1])) << (((var_14) + (7813756626382211816LL)))))));
                var_21 = ((/* implicit */signed char) ((unsigned int) max(((-2147483647 - 1)), ((-2147483647 - 1)))));
                var_22 *= ((/* implicit */unsigned int) ((unsigned char) 2147483647));
            }
        } 
    } 
    var_23 = ((/* implicit */int) max((var_23), (-2147483639)));
    var_24 = min((min((min((2147483638), (2147483647))), ((+(((/* implicit */int) var_9)))))), ((-(min((var_8), (((/* implicit */int) var_0)))))));
}
