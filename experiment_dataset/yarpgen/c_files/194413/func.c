/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194413
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
    var_17 |= ((/* implicit */signed char) ((unsigned int) (+(min((4294967295U), (((/* implicit */unsigned int) var_5)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((signed char) (unsigned char)216)))));
        arr_2 [i_0] = ((/* implicit */int) (unsigned short)20199);
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned short) ((signed char) ((unsigned short) arr_0 [i_0]))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (6832558232382643664ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2])) * (((/* implicit */int) arr_1 [i_0 + 1] [i_0])))))));
        var_20 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_0 [3U])) ? (((/* implicit */int) var_8)) : ((-(((/* implicit */int) var_5))))))));
    }
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_15))) ? (((/* implicit */int) ((unsigned short) var_8))) : ((-(((/* implicit */int) var_12))))));
    var_22 ^= ((/* implicit */short) max((((/* implicit */signed char) var_1)), (((signed char) ((int) 3598330234U)))));
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((var_14) ? (((((var_4) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))) & (((/* implicit */int) var_9)))) : (var_6))))));
}
