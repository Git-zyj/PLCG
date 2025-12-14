/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218476
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
    var_15 = ((/* implicit */long long int) 1422891412U);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */_Bool) 70364449210368LL);
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_17 = ((/* implicit */_Bool) 70364449210373LL);
        arr_6 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((((((/* implicit */_Bool) var_11)) ? (arr_5 [2ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))) | (((/* implicit */unsigned long long int) -70364449210371LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) != (8379928270094908613ULL)))))));
        var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */unsigned long long int) max((arr_0 [i_1]), (arr_0 [i_1])))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)19]))) : (70364449210370LL)))) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : (min((arr_5 [i_1]), (var_9)))))))));
        arr_7 [i_1] |= ((/* implicit */unsigned int) 70364449210374LL);
        arr_8 [i_1] = arr_4 [i_1];
    }
    /* vectorizable */
    for (short i_2 = 2; i_2 < 20; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */_Bool) (~(arr_11 [i_2 - 2])));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_9 [i_2 - 1])))))));
        var_20 ^= ((/* implicit */unsigned long long int) ((arr_9 [i_2 - 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 - 1] [i_2 + 2]))) : (((long long int) arr_11 [i_2]))));
        var_21 = ((/* implicit */unsigned long long int) arr_9 [i_2 + 1]);
    }
}
