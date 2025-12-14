/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40667
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
    var_13 = var_10;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) arr_3 [3LL] [i_1] [(signed char)10])))));
                    arr_9 [i_0] [i_0] [i_2 - 2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (max((((((var_10) + (9223372036854775807LL))) >> (((1266340253) - (1266340252))))), (((/* implicit */long long int) ((arr_2 [i_0]) >= (arr_2 [i_0])))))) : (((/* implicit */long long int) var_11))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_2)))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) ((signed char) var_11)))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (var_12)))) ? ((+(((/* implicit */int) var_8)))) : (var_4))) : (((/* implicit */int) ((_Bool) (-(1745299807)))))));
}
