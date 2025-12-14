/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202518
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) max((var_3), ((signed char)48))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(signed char)11] [i_0])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) max((arr_0 [i_0] [i_0]), ((signed char)86))))))) ? ((-(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [(signed char)16] [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] [i_0] = ((signed char) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (signed char i_1 = 4; i_1 < 19; i_1 += 3) 
    {
        arr_5 [i_1 - 2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))))) ? (((/* implicit */int) max((((signed char) arr_4 [i_1] [i_1 - 4])), (var_2)))) : (((/* implicit */int) arr_4 [i_1] [i_1 - 1]))));
        var_13 = ((/* implicit */signed char) max((var_13), (((signed char) (signed char)30))));
        var_14 *= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) arr_1 [i_1] [i_1])))))));
        arr_6 [i_1 - 4] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-64))));
        var_15 -= arr_3 [i_1];
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) min((var_8), (var_1)))) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (signed char)127)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))))));
    var_17 = ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))) <= ((+(((/* implicit */int) var_2)))))))));
}
