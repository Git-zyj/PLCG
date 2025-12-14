/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223764
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
    var_20 = ((/* implicit */_Bool) -67108864);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [(_Bool)0] [i_1] [i_1] = ((/* implicit */long long int) 1375078372);
                var_21 = ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1375078372)) || (((/* implicit */_Bool) arr_2 [4] [i_0 + 1] [i_1]))))) : (((/* implicit */int) var_7)))), ((+(((((/* implicit */_Bool) -1375078372)) ? (-1375078373) : (((/* implicit */int) var_5))))))));
            }
        } 
    } 
    var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2856267299U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_0)));
}
