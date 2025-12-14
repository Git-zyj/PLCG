/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197153
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) (_Bool)1);
                arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3971511413U)) ? (((((/* implicit */_Bool) -5804868606780797580LL)) ? (540317984U) : (2062187585U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((unsigned int) min((((((/* implicit */int) (unsigned short)22409)) + (var_5))), (((/* implicit */int) (_Bool)1)))));
}
