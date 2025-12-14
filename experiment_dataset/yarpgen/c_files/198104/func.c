/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198104
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
    var_15 &= ((/* implicit */int) (~((~((~(var_6)))))));
    var_16 = ((/* implicit */unsigned long long int) ((unsigned short) ((short) (short)32756)));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((short) (short)-6793));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (-(((/* implicit */int) ((signed char) ((int) var_5)))))))));
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((long long int) (~((~(arr_0 [3LL] [(unsigned short)19]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (unsigned short)65530))))))));
        arr_7 [i_1] |= ((/* implicit */long long int) (+(((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned char)16))))))));
    }
}
