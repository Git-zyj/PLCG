/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3415
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) max((-209708494), (min((((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_0] [i_1 - 1])) ? (((/* implicit */int) var_2)) : (var_9))), (((/* implicit */int) arr_2 [i_1 - 1] [i_0]))))));
                var_13 = ((/* implicit */_Bool) max((var_13), (((((/* implicit */_Bool) (((_Bool)1) ? (var_9) : (arr_4 [i_0] [i_1 - 1] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (arr_4 [1] [i_0] [i_0]) : (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))))));
                arr_7 [i_0] [i_0] [i_0] = ((((/* implicit */int) arr_2 [i_0] [i_1])) * (var_7));
                var_14 = ((/* implicit */_Bool) min((((/* implicit */int) var_0)), (((int) arr_3 [i_1 - 1] [(_Bool)1]))));
                var_15 = (+(arr_4 [i_0] [i_1 - 1] [i_0]));
            }
        } 
    } 
    var_16 = ((_Bool) ((((/* implicit */int) ((_Bool) var_9))) < (((/* implicit */int) var_0))));
    var_17 = ((/* implicit */int) var_5);
}
