/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217648
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (((((/* implicit */int) var_11)) - (((/* implicit */int) var_1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_2))));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_6)))) ^ (((((/* implicit */int) var_12)) / (((/* implicit */int) var_4))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_4 [(_Bool)0] [i_1 - 1])) : (((/* implicit */int) min((arr_1 [i_0 - 1]), (((/* implicit */short) arr_0 [i_0]))))))) ^ (((arr_2 [i_1]) ? (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-18398)))) : (((((/* implicit */_Bool) (short)18398)) ? (((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_0])) : (((/* implicit */int) arr_2 [(_Bool)1]))))))));
                arr_7 [i_0] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 - 1])) ^ (((((/* implicit */int) arr_1 [i_1 - 1])) ^ (((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) arr_3 [i_0]))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((((((/* implicit */int) max((var_12), ((short)18388)))) ^ (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_4)))))), (((/* implicit */int) var_4))));
}
