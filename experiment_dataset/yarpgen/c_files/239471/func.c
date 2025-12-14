/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239471
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-6))))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (-1624061832))) : (((/* implicit */int) var_10))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 14869091814074957546ULL)) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) var_0)) : (var_17))))) : (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_10))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_22 ^= ((/* implicit */unsigned short) arr_1 [i_0 + 1] [(unsigned char)6]);
                arr_6 [i_0] [i_1] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_0)))))) ? ((-(max((((/* implicit */unsigned int) var_8)), (arr_0 [i_0 - 1]))))) : (min((arr_0 [i_0 - 2]), (((/* implicit */unsigned int) var_6))))));
                arr_7 [i_0] [5U] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)72)) - (((/* implicit */int) (unsigned char)211))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((var_16) > (min((((((/* implicit */_Bool) 4244189988U)) ? (2877697988U) : (5U))), (((/* implicit */unsigned int) var_9))))));
}
