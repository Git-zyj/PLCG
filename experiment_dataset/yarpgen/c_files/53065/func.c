/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53065
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
    var_10 &= ((/* implicit */unsigned short) ((unsigned int) var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1871103039)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)16943))));
                var_12 = ((/* implicit */short) var_2);
                var_13 = ((/* implicit */long long int) min((((/* implicit */int) arr_2 [8U])), (min((((int) arr_0 [i_1])), ((~(((/* implicit */int) var_6))))))));
                var_14 = ((/* implicit */short) (unsigned short)48593);
                arr_5 [i_1] [(short)2] [(short)2] = ((/* implicit */unsigned char) var_2);
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) (_Bool)1);
}
