/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34722
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
    var_19 = var_15;
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_11)), (var_4)))) ? (((/* implicit */int) (unsigned short)27783)) : ((-(((/* implicit */int) var_1)))))));
        var_20 ^= ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) (signed char)(-127 - 1))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_21 = ((signed char) (+(((/* implicit */int) var_15))));
        var_22 ^= var_11;
        arr_7 [i_1] = ((/* implicit */unsigned short) var_12);
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_18))))) ? ((-(((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))))) : ((~((~(((/* implicit */int) var_16))))))));
        var_24 = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) (unsigned short)27783)))));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_25 = ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((signed char) var_10))) : (((/* implicit */int) var_6))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            arr_14 [i_2] [i_3] = ((signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_17)))))));
            var_26 ^= ((/* implicit */signed char) (((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))))) ^ (((((/* implicit */_Bool) (signed char)31)) ? (((((/* implicit */int) (signed char)0)) * (((/* implicit */int) (unsigned short)27069)))) : (((/* implicit */int) (signed char)33))))));
        }
    }
}
