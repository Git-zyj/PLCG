/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26733
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
    var_13 = ((/* implicit */unsigned long long int) var_1);
    var_14 = ((/* implicit */signed char) ((short) ((int) ((((/* implicit */_Bool) var_12)) ? (1676711721) : (((/* implicit */int) var_11))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) 18446744073709551598ULL))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    var_16 ^= ((/* implicit */short) 18446744073709551589ULL);
}
