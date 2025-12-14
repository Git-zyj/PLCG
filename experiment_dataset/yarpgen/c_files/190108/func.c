/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190108
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
    var_19 = min((min((var_10), (min((var_15), (var_5))))), (var_4));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0 - 1] [i_0]);
        var_21 = ((/* implicit */int) ((((((arr_0 [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) - (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [6]), (((/* implicit */unsigned short) arr_1 [i_0] [i_0])))))))) % (((arr_0 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) arr_1 [1ULL] [i_0]))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) arr_2 [i_0]))))) < (((/* implicit */int) ((arr_0 [i_0] [i_0]) > (arr_0 [i_0] [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) max((arr_2 [i_1]), (((/* implicit */unsigned short) arr_7 [i_1]))));
        var_22 ^= ((/* implicit */unsigned int) arr_1 [8LL] [i_1]);
        arr_9 [4LL] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_7 [i_1])), (arr_5 [i_1] [i_1]))))) <= (arr_0 [i_1] [i_1])));
    }
    var_23 |= ((/* implicit */unsigned short) var_17);
    var_24 = ((/* implicit */unsigned short) var_3);
}
