/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36182
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
    var_20 = ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_7)) ? (9667082012735897162ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223))))), (((8779662060973654453ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 685557501)) ? (8779662060973654453ULL) : (((/* implicit */unsigned long long int) -7303196325900203795LL))))) ? (((/* implicit */int) ((signed char) var_15))) : (((((/* implicit */int) arr_1 [i_0] [i_1])) + (-1741423285))))) : (((/* implicit */int) var_2))));
                arr_4 [i_1] = ((/* implicit */long long int) 9667082012735897174ULL);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)48801))));
}
