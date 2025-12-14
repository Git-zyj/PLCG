/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225897
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
    var_17 = var_11;
    var_18 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) max((((/* implicit */unsigned int) (signed char)-30)), ((+(((((/* implicit */_Bool) arr_0 [i_0] [2])) ? (var_6) : (((/* implicit */unsigned int) arr_0 [i_0] [i_1]))))))));
                arr_5 [i_0] = (-(min((arr_3 [i_0]), (arr_3 [i_0]))));
            }
        } 
    } 
    var_20 = max((((/* implicit */long long int) var_9)), ((+(((var_4) / (((/* implicit */long long int) var_6)))))));
}
