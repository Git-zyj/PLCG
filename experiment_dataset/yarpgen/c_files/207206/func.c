/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207206
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
    var_15 = ((/* implicit */int) var_13);
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)17590)) - (((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))));
        arr_3 [i_0] = ((/* implicit */signed char) min(((_Bool)0), ((_Bool)1)));
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_8 [(unsigned short)10] &= ((/* implicit */unsigned int) min((max((arr_0 [i_1] [i_1]), (((/* implicit */unsigned short) var_11)))), (arr_0 [i_1] [i_1])));
        var_16 = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_5 [i_1]), (arr_5 [i_1]))))));
    }
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_11))))) : ((-(((/* implicit */int) var_14))))))) ? (((((/* implicit */_Bool) (unsigned short)4095)) ? (-585355600) : (((/* implicit */int) (_Bool)1)))) : (((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14))))))));
}
