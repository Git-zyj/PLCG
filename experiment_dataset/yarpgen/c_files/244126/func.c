/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244126
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (+(max((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) && (((/* implicit */_Bool) (signed char)103))))), ((~(((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))))))));
                var_18 = ((/* implicit */signed char) ((unsigned char) arr_2 [i_0] [i_1]));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((signed char) var_1));
    var_20 = ((/* implicit */int) var_13);
}
