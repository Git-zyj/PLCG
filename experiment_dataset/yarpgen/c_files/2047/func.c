/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2047
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
    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((signed char) var_1)))));
    var_20 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) var_9)))) : ((~(((/* implicit */int) var_18)))))), (((((((/* implicit */int) var_16)) + (((/* implicit */int) var_0)))) ^ (((/* implicit */int) ((unsigned short) var_12)))))));
    var_21 = ((/* implicit */signed char) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */signed char) (-(min((((/* implicit */int) ((unsigned short) (unsigned char)0))), (((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) / (((/* implicit */int) (unsigned short)256))))))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((+(((/* implicit */int) (signed char)103)))) : ((~(((/* implicit */int) (unsigned char)97))))));
                arr_8 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned short) (+(((/* implicit */int) var_17))));
            }
        } 
    } 
}
