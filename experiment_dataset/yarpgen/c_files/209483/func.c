/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209483
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
    var_14 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) (unsigned char)110);
        var_15 = ((/* implicit */unsigned long long int) (~(arr_1 [i_0])));
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_0 + 1])) ? (arr_3 [6LL] [i_0 - 1]) : (arr_3 [0U] [i_0 - 1]))))));
        arr_5 [9ULL] [i_0] = ((/* implicit */long long int) ((short) arr_0 [i_0] [i_0 - 1]));
    }
    var_17 = ((/* implicit */unsigned int) max((((((((/* implicit */int) (unsigned short)65531)) * (((/* implicit */int) (short)-28451)))) / (((/* implicit */int) var_10)))), ((+(((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (unsigned char)201))))))));
}
