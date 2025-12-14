/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224846
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
    var_11 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 2892775614U)) ? (1154360625U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) ? (((unsigned long long int) (~(2892775626U)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (~(min((854834455204425222LL), (((/* implicit */long long int) var_4))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_2 [i_1] [i_0 + 1])))) : (2892775614U)));
                var_13 |= ((/* implicit */unsigned short) 1402191667U);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((unsigned int) var_7));
}
