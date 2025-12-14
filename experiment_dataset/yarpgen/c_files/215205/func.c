/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215205
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))));
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned char) max(((signed char)61), ((signed char)61)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_12 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [(unsigned char)6] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))))) : (((/* implicit */int) (_Bool)1))));
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 + 1])) <= (((/* implicit */int) arr_1 [i_1 - 2])))))));
                }
            } 
        } 
    } 
}
