/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227050
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
    var_14 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        arr_4 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [3ULL]))) : (((((var_8) ^ (var_8))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_4)))))))));
        arr_5 [i_0] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_13)) : (var_7)));
        var_15 &= ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_1)) : (var_7));
    }
    for (short i_1 = 2; i_1 < 11; i_1 += 2) 
    {
        var_16 &= ((/* implicit */unsigned int) var_2);
        arr_8 [i_1] [i_1] &= ((/* implicit */short) var_0);
    }
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_4))));
    var_18 = ((/* implicit */unsigned int) var_10);
}
