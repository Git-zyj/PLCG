/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34060
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) max((var_6), (var_3)));
                var_10 = ((/* implicit */unsigned char) arr_0 [i_1]);
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-107)));
    var_12 = ((/* implicit */_Bool) var_5);
}
