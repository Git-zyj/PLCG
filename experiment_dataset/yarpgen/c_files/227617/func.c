/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227617
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
    var_10 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
    var_11 = ((/* implicit */unsigned long long int) min((((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))), (var_0)));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) max((((/* implicit */int) var_1)), (((int) (short)-9623))));
        arr_4 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)4143))));
        arr_5 [i_0] [i_0] = ((/* implicit */int) ((short) arr_1 [i_0]));
        arr_6 [i_0] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) min((var_3), (((unsigned short) arr_0 [(unsigned short)7] [i_0])))))));
        arr_7 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0 + 1]))))))))));
    }
}
