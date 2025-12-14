/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235352
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
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) var_2))));
    var_12 &= ((/* implicit */unsigned short) (-(((((((var_0) + (2147483647))) >> (((((/* implicit */int) var_8)) - (58))))) / (((((/* implicit */int) (unsigned short)59688)) % (((/* implicit */int) var_2))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)5848)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5842))) : (-6415481836512576720LL)));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((int) arr_1 [i_0])));
    }
}
