/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246639
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) var_5))) / (((/* implicit */int) ((short) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (+((((-(((/* implicit */int) arr_0 [i_0])))) / ((+(((/* implicit */int) var_2)))))))))));
                var_12 = ((/* implicit */long long int) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) var_1)))) : ((~(((/* implicit */int) var_1))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_1);
}
