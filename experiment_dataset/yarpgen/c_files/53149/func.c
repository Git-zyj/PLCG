/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53149
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_15))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_21 = var_14;
                var_22 |= ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) arr_3 [i_0])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 677038568U)) ? (((/* implicit */int) (unsigned short)62302)) : (((/* implicit */int) arr_3 [i_0 + 3])))))))));
            }
        } 
    } 
}
