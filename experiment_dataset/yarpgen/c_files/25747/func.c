/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25747
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [(short)5] = ((/* implicit */unsigned long long int) ((unsigned short) ((short) ((unsigned char) (unsigned char)239))));
        var_12 *= ((unsigned long long int) ((unsigned short) max((((/* implicit */unsigned long long int) arr_1 [(short)11])), (var_5))));
        var_13 = ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) ((short) 544518873))));
    }
    var_14 = ((/* implicit */unsigned char) (+(((int) max((((/* implicit */unsigned short) var_7)), (var_10))))));
}
