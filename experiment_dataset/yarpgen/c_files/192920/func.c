/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192920
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
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) ((_Bool) (_Bool)1))) > (((/* implicit */int) arr_4 [i_1])))))));
                var_12 = ((/* implicit */_Bool) ((((arr_5 [i_1]) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1])))) & (((arr_5 [i_1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((arr_2 [i_2]) ? ((-(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) min(((_Bool)0), (var_0)))) * (((((/* implicit */int) var_2)) * (((/* implicit */int) var_0)))))))))));
                var_14 = arr_11 [i_2] [i_3];
            }
        } 
    } 
}
