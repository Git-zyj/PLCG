/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48658
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) (short)-1)) + (30)))))) ? (((unsigned long long int) arr_1 [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-7))))));
        var_12 ^= ((/* implicit */short) ((((var_11) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3))))) << ((((+(arr_0 [i_0]))) - (9623618979508594104ULL)))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (arr_0 [i_0])));
        var_13 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_1 [i_0]))))) >> (((var_11) - (9885006135188953539ULL)))));
    }
    var_14 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_9)), (((unsigned long long int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_5)))))));
    var_15 = var_1;
    var_16 *= ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))), (((((/* implicit */_Bool) 13881141307543477106ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2))) : (var_11))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
}
