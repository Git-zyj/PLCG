/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230937
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
    var_10 = ((/* implicit */short) (+(((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) arr_1 [i_0 - 1]);
        var_12 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (arr_0 [i_0])))) >= (((/* implicit */int) arr_0 [i_0]))));
        var_13 = ((/* implicit */long long int) arr_1 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1]))))) || (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))) >= ((~(((/* implicit */int) arr_4 [i_1]))))))));
        var_15 += ((/* implicit */short) var_2);
    }
}
