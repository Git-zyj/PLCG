/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227124
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
    var_13 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */int) (short)-24891)) ^ (((/* implicit */int) var_0)))) : (((/* implicit */int) var_9))))));
    var_14 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)242)))) >> (((max((min((var_10), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_11)), (var_8)))))) - (37840ULL)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (~(arr_0 [i_0] [i_0])));
        var_15 = ((/* implicit */short) (+(arr_0 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */short) 2667878464U);
    }
    var_16 = ((/* implicit */unsigned long long int) (unsigned char)128);
}
