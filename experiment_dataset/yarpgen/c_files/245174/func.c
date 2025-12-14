/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245174
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((long long int) ((unsigned short) ((unsigned short) var_2)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((signed char) ((unsigned char) ((signed char) var_11)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) ((unsigned long long int) ((unsigned long long int) var_4))));
        arr_3 [11] = ((/* implicit */long long int) ((signed char) ((short) ((unsigned char) (_Bool)1))));
    }
}
