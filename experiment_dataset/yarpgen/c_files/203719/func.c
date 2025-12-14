/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203719
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_1))) : (arr_2 [i_0] [(unsigned char)8])));
        arr_3 [i_0] = ((/* implicit */_Bool) ((unsigned short) arr_2 [i_0] [i_0]));
    }
    var_15 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((unsigned long long int) var_5))));
        arr_7 [i_1] [20ULL] = ((/* implicit */_Bool) var_1);
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)29463)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9926771949404525462ULL)));
        var_17 = arr_9 [i_2] [i_2];
        var_18 += ((/* implicit */signed char) ((unsigned long long int) arr_5 [i_2]));
        var_19 = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_2]))));
    }
}
