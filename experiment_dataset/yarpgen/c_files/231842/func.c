/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231842
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
    var_19 = ((/* implicit */unsigned char) var_4);
    var_20 ^= ((/* implicit */unsigned long long int) var_18);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_21 -= ((/* implicit */short) 4237257021U);
                var_22 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))));
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((2085151643698795786ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_1 + 1] [i_1 + 1])) : ((~(((/* implicit */int) (short)-30432))))))) ? (((/* implicit */unsigned long long int) 1867882953)) : ((~(((((/* implicit */_Bool) 4237257021U)) ? (((/* implicit */unsigned long long int) 4237257021U)) : (var_11)))))));
            }
        } 
    } 
}
