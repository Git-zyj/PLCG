/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4988
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
    var_18 *= ((/* implicit */_Bool) min(((-((+(((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) (_Bool)1))));
    var_19 = ((/* implicit */_Bool) ((((unsigned int) ((_Bool) var_13))) | (var_13)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_20 = ((((unsigned int) var_1)) >> (((((/* implicit */_Bool) min((4055615679U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)0)))) : (((/* implicit */int) ((_Bool) 1091931089U))))));
                    var_21 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) min((var_16), ((_Bool)0))))) == (arr_8 [i_0] [i_1] [i_2] [i_2]))) ? (((unsigned int) max(((_Bool)1), ((_Bool)1)))) : (max((arr_5 [i_0] [i_1] [i_2]), (arr_5 [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_22 = (~(max((max((((/* implicit */unsigned int) (_Bool)1)), (var_11))), (((/* implicit */unsigned int) (((_Bool)0) || ((_Bool)1)))))));
    var_23 = (_Bool)0;
}
