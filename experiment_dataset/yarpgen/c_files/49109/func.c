/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49109
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
    var_19 = (~(var_12));
    var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) 1919455068)) ? (((max((var_17), (1919455056))) ^ (-1919455068))) : (((((/* implicit */_Bool) max((1919455059), (930575068)))) ? (816038241) : (0)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_21 = ((((/* implicit */_Bool) (+(arr_3 [i_0] [i_0])))) ? ((+(arr_3 [i_0] [i_0]))) : (((arr_3 [i_0] [i_0]) ^ (arr_3 [i_0] [i_0]))));
                    var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) min((arr_4 [10] [i_1] [i_2]), (arr_4 [i_0] [6] [i_0])))) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0])))))))));
                }
            } 
        } 
    } 
}
