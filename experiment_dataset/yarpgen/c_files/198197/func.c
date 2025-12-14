/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198197
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((short) 11ULL))))) != (((/* implicit */int) ((max((9223372036854775785LL), (9223372036854775807LL))) != (min((((/* implicit */long long int) var_12)), (var_7))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (13U)))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) ((10586427317391140477ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))) ? (min(((-(((/* implicit */int) var_13)))), (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_1)))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_0]))))), (min((var_2), (((/* implicit */short) (unsigned char)32))))))) != (((/* implicit */int) var_5))));
    }
    var_16 = ((/* implicit */long long int) 18446744073709551605ULL);
    var_17 ^= var_11;
}
