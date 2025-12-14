/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218614
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? ((-(((/* implicit */int) (signed char)67)))) : (((/* implicit */int) var_13))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_21 = min(((+(((/* implicit */int) max((var_1), (((/* implicit */short) arr_0 [i_0] [i_0]))))))), ((-(((/* implicit */int) arr_0 [i_0] [i_0])))));
        var_22 *= ((/* implicit */signed char) max((((/* implicit */unsigned char) max((arr_1 [(short)8]), (arr_1 [(signed char)4])))), (((unsigned char) var_10))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8064)) ? (((/* implicit */int) (short)-188)) : (242166106)));
        arr_4 [i_1] = min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_10)) << (((var_6) + (1753735052))))))));
    }
    for (unsigned char i_2 = 1; i_2 < 13; i_2 += 1) 
    {
        arr_8 [7U] [i_2] = ((/* implicit */signed char) var_3);
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_7 [i_2 - 1])), (((((/* implicit */_Bool) arr_5 [i_2 + 3])) ? (arr_5 [i_2 + 4]) : (((/* implicit */unsigned int) arr_7 [i_2 + 1]))))));
        var_24 = ((/* implicit */unsigned int) min((-1293355065), (min((((/* implicit */int) (unsigned char)0)), (arr_7 [i_2 + 3])))));
        arr_10 [i_2 + 2] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */int) (signed char)(-127 - 1)))))))))));
    }
}
