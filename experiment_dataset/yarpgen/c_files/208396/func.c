/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208396
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */int) min(((_Bool)0), ((_Bool)1)))) & (((/* implicit */int) arr_4 [i_1] [i_2 - 1]))))));
                    var_16 = max((var_5), (var_2));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_17 [i_3] = ((/* implicit */_Bool) (+(max(((+(((/* implicit */int) var_12)))), (((/* implicit */int) (_Bool)1))))));
                var_17 ^= ((((arr_16 [i_3]) && (arr_13 [i_3]))) && (max(((_Bool)1), ((_Bool)0))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((var_18), (max((((_Bool) max((var_0), (var_2)))), (var_9)))));
}
