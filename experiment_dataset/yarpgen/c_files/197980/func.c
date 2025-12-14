/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197980
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
        for (long long int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) ((var_6) < (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1] [6U])) ? (((/* implicit */int) arr_1 [i_0] [3U])) : (((/* implicit */int) arr_2 [i_1]))))), (min((arr_4 [i_0] [i_0]), (2233785415175766016LL)))))))))));
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (!(((/* implicit */_Bool) -9115224344134049664LL)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_7);
}
