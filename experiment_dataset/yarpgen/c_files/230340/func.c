/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230340
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
    var_16 = (-((~(((((/* implicit */_Bool) var_9)) ? (897468964) : (((/* implicit */int) var_3)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((long long int) ((var_13) ? (((/* implicit */unsigned long long int) var_2)) : (36028779839094784ULL))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) var_3)) ? (arr_2 [i_0]) : (((/* implicit */long long int) arr_1 [i_0]))))));
    }
}
