/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202489
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_1)))) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) var_0))))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) (unsigned char)161)) * (((/* implicit */int) (unsigned short)0))))));
    var_17 = ((((/* implicit */_Bool) var_15)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)65535), ((unsigned short)530))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_18 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 2])) ? (((/* implicit */int) arr_4 [5] [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 - 1])))), (((var_10) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1]))))));
                arr_5 [i_0] = var_7;
                var_19 = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */unsigned char) arr_4 [i_0 - 1] [i_0 + 2]))))) + (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_4 [i_0 - 3] [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0]))))));
                var_20 += ((/* implicit */long long int) arr_1 [i_1]);
            }
        } 
    } 
}
