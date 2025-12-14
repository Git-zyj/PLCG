/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227176
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_19 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0])))), (((/* implicit */int) var_3))));
        arr_4 [i_0] = ((/* implicit */signed char) min(((-(((/* implicit */int) (signed char)-72)))), (((/* implicit */int) (signed char)-97))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 7; i_1 += 4) 
    {
        var_20 += ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) arr_2 [i_1])))));
        var_21 = var_13;
        arr_7 [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)50)) % (((/* implicit */int) (signed char)96))));
    }
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)12))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-96)) + (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)96)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16)))))) : (((((/* implicit */int) ((signed char) var_1))) + (((/* implicit */int) var_8)))))))));
    var_23 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (signed char)-97)))))));
    var_24 ^= ((signed char) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (signed char)77))))));
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (signed char)-96)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((signed char) (signed char)-97))) : (((((/* implicit */int) (signed char)0)) * (((/* implicit */int) (signed char)127))))))));
}
