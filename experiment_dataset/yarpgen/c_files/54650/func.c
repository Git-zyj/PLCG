/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54650
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (~(arr_0 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) max((arr_0 [i_1] [i_1]), (((/* implicit */unsigned int) (_Bool)1))));
        var_19 += ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) + (arr_1 [i_1] [i_1]))) - (((/* implicit */unsigned long long int) arr_4 [2ULL])));
    }
    var_20 = ((/* implicit */unsigned int) var_1);
    var_21 += ((/* implicit */signed char) 2787607501U);
}
