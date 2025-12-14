/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225726
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = (~(((/* implicit */int) (unsigned short)255)));
        var_18 = var_0;
        arr_3 [i_0] = ((/* implicit */signed char) ((short) (~(((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) (short)-1)) + (8))))))));
        var_19 = ((/* implicit */int) ((signed char) arr_1 [i_0]));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_4 [i_1]))))) : (arr_4 [i_1])));
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_1]))));
        var_22 = ((/* implicit */int) 6637755324409308430ULL);
    }
    var_23 = ((/* implicit */unsigned short) ((int) var_1));
    var_24 = ((/* implicit */_Bool) var_3);
}
