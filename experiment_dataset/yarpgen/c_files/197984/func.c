/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197984
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) ((_Bool) var_2)))));
    var_18 ^= ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */int) ((_Bool) var_10))) - (((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((_Bool) var_2)))))));
    var_19 = ((_Bool) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = (_Bool)1;
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) max((var_20), (((_Bool) ((var_11) ? (((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_2] [i_3])) : (((/* implicit */int) (_Bool)1)))))));
                            var_21 = ((/* implicit */_Bool) ((((_Bool) arr_9 [i_3] [i_2] [i_2] [i_3])) ? (((/* implicit */int) min((arr_6 [i_0] [i_0] [i_2]), (arr_8 [i_0] [i_1] [i_2] [i_3])))) : (((/* implicit */int) ((_Bool) var_1)))));
                            var_22 ^= ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) ((((/* implicit */int) var_5)) << (((/* implicit */int) var_7)))))), ((((((_Bool)0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) arr_0 [i_1] [i_0]))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) (((!(((_Bool) (_Bool)1)))) ? (((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_0] [(_Bool)1])) : (((arr_0 [i_1] [i_0]) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_13))))));
                arr_10 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (((var_0) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
            }
        } 
    } 
}
