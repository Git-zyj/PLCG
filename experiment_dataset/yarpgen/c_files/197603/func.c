/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197603
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((18446744073709551605ULL), (18446744073709551596ULL)))) ? (((var_3) ? (((unsigned long long int) var_15)) : (((/* implicit */unsigned long long int) (~(var_13)))))) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) var_5);
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_7))));
        var_19 = ((/* implicit */long long int) ((arr_1 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9))))));
        var_20 = ((/* implicit */unsigned short) ((long long int) ((16890938272562913091ULL) <= (var_5))));
    }
}
