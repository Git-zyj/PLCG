/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3649
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_1] |= ((/* implicit */signed char) arr_0 [i_0 + 3]);
                arr_6 [i_0 + 2] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)62669)), (arr_4 [i_0 - 1] [i_0 + 1])))) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)1165))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) ((_Bool) min((465296616), (((/* implicit */int) (unsigned short)62670)))));
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((long long int) (+((-(var_1)))))))));
}
