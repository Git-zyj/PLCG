/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197331
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
    var_17 ^= var_7;
    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_12)))))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36610))) < (1954622494U)))))) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) var_15)) % (((/* implicit */int) var_3)))) : (((((((/* implicit */int) (short)-2410)) + (2147483647))) << (((((/* implicit */int) var_5)) - (12300)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [(signed char)10] [i_0])) || ((((!(((/* implicit */_Bool) arr_1 [(signed char)6] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0])))))))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2))))))))));
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
        arr_4 [i_0] [(short)11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) (short)14336)) : (((/* implicit */int) arr_1 [i_0] [(unsigned short)2])))))));
    }
}
