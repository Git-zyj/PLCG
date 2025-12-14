/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50947
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)48844)) * (((/* implicit */int) var_15)))))) & ((~(((/* implicit */int) ((signed char) var_8)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        arr_2 [i_0] = arr_0 [i_0 + 2];
        arr_3 [i_0] [i_0 + 3] = (short)-31130;
        arr_4 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)11)) / (((/* implicit */int) (_Bool)1))))), (min((9628855140781996064ULL), (((/* implicit */unsigned long long int) (short)10396))))));
    }
    for (unsigned short i_1 = 2; i_1 < 11; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_13))) ? (((((/* implicit */long long int) arr_5 [i_1 + 2])) ^ (arr_6 [i_1 + 2]))) : (((/* implicit */long long int) (+(arr_5 [i_1 - 2]))))));
        arr_9 [i_1] = ((/* implicit */short) max(((~(arr_6 [i_1 + 3]))), (((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (arr_6 [i_1 + 3]) : (arr_6 [i_1 + 2])))));
    }
}
