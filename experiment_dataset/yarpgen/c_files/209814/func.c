/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209814
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
    var_10 = ((/* implicit */short) var_1);
    var_11 = ((/* implicit */signed char) min((var_3), (((short) var_1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_4 [i_0]), (var_9)))) ^ (((/* implicit */int) (unsigned short)0))))) ? (min((min((((/* implicit */unsigned int) (_Bool)1)), (arr_3 [i_0]))), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) min((((/* implicit */short) (_Bool)0)), ((short)-5154)))), ((unsigned short)2584)))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_1 [i_0])), (((((/* implicit */_Bool) ((arr_3 [i_0]) & (((/* implicit */unsigned int) -1719211168))))) ? (((/* implicit */unsigned int) var_4)) : (arr_2 [i_0])))));
            }
        } 
    } 
}
