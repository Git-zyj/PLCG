/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4387
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] |= ((/* implicit */_Bool) arr_0 [i_0]);
        var_12 = ((/* implicit */_Bool) (~(((((/* implicit */long long int) 2147483647)) & (arr_2 [i_0 - 1])))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3412607054U)) ? (1790328929U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_14 = ((/* implicit */unsigned short) (~(-118595123363692009LL)));
        arr_6 [i_1] = ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) & (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) & (-7366290938474552981LL))));
    }
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_5))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_3)) : ((+(var_1))))) : (((/* implicit */unsigned long long int) max((var_10), (((((/* implicit */int) (unsigned short)2465)) + (((/* implicit */int) (_Bool)1)))))))));
}
