/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44841
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = arr_4 [i_0] [i_1] [i_1];
                var_19 = ((/* implicit */unsigned char) var_18);
                var_20 = ((/* implicit */unsigned short) var_16);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((unsigned char) ((max((((/* implicit */unsigned long long int) var_14)), (var_0))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
    var_22 = ((/* implicit */long long int) var_13);
    var_23 = ((/* implicit */short) ((unsigned char) var_1));
}
