/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20113
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
    var_15 ^= ((/* implicit */signed char) var_8);
    var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (1065230983)))))) ? (max((((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((var_14) ? (((/* implicit */int) (_Bool)1)) : (1863479745)))))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_0)), (var_10))))));
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-38)))) : (((/* implicit */int) max((((/* implicit */short) var_14)), (var_0))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)129)))) ? (((((/* implicit */_Bool) 140668768878592ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)47))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                arr_4 [i_0] [3] = arr_3 [i_0];
                var_18 |= ((/* implicit */signed char) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1063976188)) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) (_Bool)0))))), (134217600U))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))));
            }
        } 
    } 
}
