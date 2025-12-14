/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213779
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) ((unsigned char) 2037518828));
                arr_6 [(unsigned short)2] &= ((/* implicit */short) arr_3 [i_0] [i_1]);
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_13)), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (9523603981758687440ULL))), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned short) var_1)))))))));
    var_15 = ((/* implicit */long long int) var_9);
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((int) var_12)))));
}
