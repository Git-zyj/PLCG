/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246690
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
    var_11 = ((/* implicit */short) var_10);
    var_12 |= ((/* implicit */short) var_4);
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9007199254740991LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-9007199254740972LL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [8LL] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) != ((((_Bool)0) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)16))))));
                arr_6 [3] [i_1] [3] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0] [i_1 - 1]))) ? (max((((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 2])), (-1610693335))) : (((/* implicit */int) (!(((/* implicit */_Bool) 536870911)))))));
                var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (max((min((((/* implicit */long long int) arr_4 [i_1] [i_0] [i_0])), (0LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61970)))))))) : (min((min((((/* implicit */long long int) var_4)), (0LL))), (((/* implicit */long long int) arr_1 [i_0] [i_1 + 1]))))));
            }
        } 
    } 
}
