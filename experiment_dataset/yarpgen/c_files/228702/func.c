/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228702
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
    var_10 += ((/* implicit */unsigned long long int) ((var_0) >> (((((/* implicit */int) ((short) var_7))) + (4521)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        var_11 = ((short) ((((/* implicit */int) arr_1 [i_0 - 1])) >> (((((/* implicit */int) arr_1 [i_0 - 4])) - (7206)))));
        var_12 = ((/* implicit */unsigned long long int) var_4);
        arr_2 [i_0] [i_0] = ((/* implicit */short) min(((-(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (-1) : (((/* implicit */int) (unsigned char)83))))))));
    }
    var_13 = ((/* implicit */short) var_3);
}
