/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42057
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((int) arr_0 [i_0] [i_0]))) : (((long long int) ((unsigned int) var_9))))))));
        var_14 &= arr_0 [i_0] [i_0];
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [(short)6] &= ((/* implicit */unsigned long long int) (-(arr_0 [i_1] [i_1])));
        var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(15012538669669116269ULL)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (203578086560033084ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (arr_5 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_1] [i_1])) + (2147483647))) >> (((arr_0 [i_1] [i_1]) + (8629567720636909886LL))))))));
    }
    var_16 &= ((/* implicit */long long int) var_2);
    var_17 ^= ((/* implicit */short) var_1);
}
