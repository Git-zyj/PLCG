/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202413
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
    var_14 = -4301159233233302568LL;
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) arr_4 [i_1 + 1]);
                var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1] [i_1 - 2])) ? (var_2) : (arr_3 [i_0 - 1] [i_1 - 1] [(unsigned short)6]))) + (arr_3 [7LL] [i_0] [1U])));
                var_17 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) var_0)) ^ ((~((~(1735844269767946847LL)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((var_10) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229)))))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_4))))) : (min((((/* implicit */long long int) (unsigned char)24)), (var_2))))) : (((/* implicit */long long int) var_0))));
}
