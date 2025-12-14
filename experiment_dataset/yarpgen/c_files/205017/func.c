/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205017
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
    var_18 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((var_5) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */int) var_8)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0])) >= (((/* implicit */int) ((short) 10469424)))));
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_1 [i_0]))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) var_15))));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_0] [8])) + (((/* implicit */int) arr_0 [i_0 - 1] [10LL])))) & (((/* implicit */int) arr_0 [8] [8])))))));
    }
}
