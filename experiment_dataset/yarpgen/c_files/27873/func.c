/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27873
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1906373805753115630LL)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_15 = min((6750127409370603844ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) arr_3 [6ULL])) ? (-620337580050106511LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1])) + (((/* implicit */int) arr_3 [i_1])))))))));
        var_16 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_1])) ^ (2147483635))) / ((~(((/* implicit */int) arr_4 [i_1]))))));
    }
}
