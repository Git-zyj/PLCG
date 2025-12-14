/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246836
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
    var_20 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_21 *= ((/* implicit */unsigned char) ((_Bool) max((arr_4 [i_0]), (arr_4 [i_0]))));
                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((var_4) + (2147483647))) >> (((var_18) - (867431527))))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_13))))), (min((((/* implicit */unsigned short) var_6)), (var_11)))))) ? ((~(max((var_4), (((/* implicit */int) arr_4 [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
            }
        } 
    } 
}
