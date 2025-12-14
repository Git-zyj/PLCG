/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224595
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
    var_18 = ((/* implicit */unsigned int) (short)-1);
    var_19 = ((/* implicit */unsigned long long int) var_17);
    var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16))))) : (((var_5) / (((/* implicit */long long int) var_4)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_15))) || (((/* implicit */_Bool) var_0)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */_Bool) var_11);
                var_22 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [14LL] [14LL])) ? ((~(arr_0 [i_1] [i_0]))) : ((-(((/* implicit */int) (_Bool)1)))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) var_12);
                var_23 = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0])))));
                var_24 = ((/* implicit */unsigned long long int) var_0);
            }
        } 
    } 
}
