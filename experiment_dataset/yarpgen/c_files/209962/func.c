/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209962
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
    var_20 = ((((/* implicit */_Bool) -1703052981)) ? (((/* implicit */int) var_3)) : (var_1));
    var_21 = ((/* implicit */_Bool) var_13);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] = ((((/* implicit */_Bool) min((arr_10 [i_0] [i_0] [i_0 + 1] [i_3]), (arr_10 [i_0] [i_1] [i_0 + 1] [(_Bool)1])))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (1073740800))) : (-262360633));
                            var_22 = ((((/* implicit */_Bool) -262360629)) ? (max((262360632), (262360629))) : (arr_8 [i_0] [i_0 + 1]));
                            arr_13 [i_3] [(_Bool)1] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((arr_11 [i_0] [i_0 + 1] [14] [i_0] [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) max((arr_4 [i_0 + 1] [i_0 + 1]), ((_Bool)1)))) : (((/* implicit */int) arr_11 [i_0] [8] [16] [14] [i_0 + 1] [i_2]))));
                            var_23 += 1753618033;
                            var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_0 + 1])))) ? (((((/* implicit */_Bool) -2147483644)) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])) : (arr_8 [i_0 + 1] [i_0 + 1]))) : (min((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])), (arr_1 [i_0 + 1]))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_4 [i_0] [(_Bool)1]))));
            }
        } 
    } 
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_16))));
}
