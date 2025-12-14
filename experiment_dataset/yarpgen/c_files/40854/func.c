/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40854
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_20 = ((((/* implicit */_Bool) max((((/* implicit */int) ((-1667755999) == (arr_3 [i_0])))), (max((265464456), (-733544735)))))) ? (((int) arr_2 [i_0])) : (((((((/* implicit */_Bool) -202909381)) ? (1667755999) : (1667755981))) - (1667756014))));
                var_21 = arr_2 [i_0];
                var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-26252481) - (-570900931)))) ? (((((/* implicit */_Bool) 1667755998)) ? (-1103238270) : (var_1))) : (((/* implicit */int) ((-1240041586) == (var_6))))))) ? (min((((((/* implicit */_Bool) var_12)) ? (854839381) : (-1099868552))), (var_4))) : (var_9)))));
            }
        } 
    } 
    var_23 = max((((((/* implicit */_Bool) (+(var_14)))) ? (var_1) : (((var_2) / (var_5))))), (var_12));
}
