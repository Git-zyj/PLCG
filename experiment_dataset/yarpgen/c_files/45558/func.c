/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45558
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) ((short) (+(((((/* implicit */_Bool) (signed char)0)) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-6))))))));
        arr_3 [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_1 [i_0])) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [14])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))));
        var_19 = arr_1 [i_0 - 1];
        var_20 = ((/* implicit */long long int) max((var_20), (((((arr_0 [i_0 + 1]) / (arr_0 [i_0 - 1]))) * (((var_6) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)18)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0 - 1]))) ? (arr_1 [i_0 - 1]) : (((/* implicit */int) (!(((/* implicit */_Bool) 3167986688U)))))));
    }
    var_21 += ((/* implicit */int) var_7);
    var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (signed char)41)) : (1410656197))) : (((/* implicit */int) max((max((((/* implicit */unsigned short) var_16)), (var_8))), (((/* implicit */unsigned short) var_4)))))))));
}
