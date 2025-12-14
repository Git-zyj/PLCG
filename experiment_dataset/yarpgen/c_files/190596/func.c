/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190596
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                var_17 *= ((/* implicit */signed char) 8);
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) var_0);
                arr_6 [(signed char)14] [i_1 - 1] |= ((/* implicit */short) arr_3 [16] [i_1 + 4]);
                arr_7 [i_1] = ((/* implicit */long long int) 7);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_6);
    var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) (~(((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_10)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) var_12)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) : (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_14)))))))));
    var_20 = ((/* implicit */long long int) var_3);
}
