/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51968
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
    var_20 *= ((/* implicit */_Bool) ((var_15) + (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((arr_1 [i_0] [i_0]) ? (((/* implicit */int) (signed char)-54)) : (arr_2 [i_0])))))) ? ((-(((/* implicit */int) arr_7 [i_0 + 1])))) : (((int) arr_5 [i_0 + 1] [i_0 + 1] [i_1]))));
                var_22 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_7 [i_0 + 1])))) / (((/* implicit */int) var_4))));
                var_23 *= ((/* implicit */unsigned long long int) arr_7 [i_0 + 1]);
                var_24 = ((((/* implicit */_Bool) ((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]) + (arr_5 [i_0 + 1] [i_0 + 1] [i_0])))) ? (((((/* implicit */int) ((_Bool) (_Bool)1))) - (((/* implicit */int) max(((_Bool)1), (var_5)))))) : (((((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) - ((+(((/* implicit */int) (short)-1)))))));
            }
        } 
    } 
}
