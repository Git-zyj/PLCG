/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219606
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
    /* vectorizable */
    for (int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) ((((((/* implicit */int) var_2)) + (2147483647))) << (((arr_1 [i_0 + 1] [i_0 + 1]) - (137938213)))));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((var_10) ? (((/* implicit */unsigned long long int) var_0)) : (16722006571433108237ULL))) : (((/* implicit */unsigned long long int) (~(var_0))))));
        var_14 = ((/* implicit */unsigned int) arr_1 [i_0 - 4] [i_0 - 1]);
    }
    for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        arr_5 [i_1 + 1] = ((/* implicit */_Bool) ((((var_3) != (((long long int) var_3)))) ? ((~(arr_3 [i_1 + 1]))) : (9223372036854775807LL)));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (arr_3 [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((-9223372036854775807LL - 1LL)) : (arr_3 [i_1 + 2]))))));
    }
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (_Bool)1))));
    var_17 = ((((/* implicit */int) var_8)) < ((((-(((/* implicit */int) var_10)))) ^ (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)82)))))));
}
