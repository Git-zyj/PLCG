/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211355
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (signed char)62);
        var_13 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_8))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_14 = (-(((/* implicit */int) arr_5 [i_1])));
        arr_6 [i_1] [(signed char)0] |= ((/* implicit */short) arr_4 [i_1]);
        var_15 *= arr_5 [i_1];
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (~(arr_4 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4599)) ? (var_1) : (((/* implicit */unsigned long long int) var_7))));
        var_16 = ((/* implicit */signed char) (~(arr_3 [i_2])));
        arr_11 [i_2] = ((((/* implicit */int) var_10)) >> (((((((/* implicit */_Bool) var_5)) ? (1836638964U) : (1836638964U))) - (1836638934U))));
    }
    var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (var_12)))))))));
    var_18 = 911799491U;
}
