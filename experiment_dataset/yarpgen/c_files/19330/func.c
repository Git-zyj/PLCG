/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19330
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_16 = ((((((/* implicit */_Bool) (+(1037860308)))) ? (max((1368333030), (arr_3 [i_1] [3]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (-227756987))))) / ((+(1540947396))));
                var_17 = (~(arr_2 [i_0]));
                var_18 = var_0;
            }
        } 
    } 
    var_19 = var_7;
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_6 [i_2] = max(((~(arr_4 [i_2]))), (((((/* implicit */_Bool) 1625311089)) ? (1477106264) : (-796465759))));
        arr_7 [i_2] = ((/* implicit */int) ((max((2006361050), ((-(-917420044))))) >= (var_2)));
    }
}
