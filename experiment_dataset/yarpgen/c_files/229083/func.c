/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229083
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
    var_16 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((short) var_10));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned char)0)))) - (((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) arr_2 [i_0]))))));
        var_17 = ((/* implicit */signed char) (unsigned short)36577);
    }
    var_18 -= var_4;
}
