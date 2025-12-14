/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51002
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
    var_16 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 6; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((arr_2 [i_0]) - (((/* implicit */int) arr_1 [8] [i_0])))) | (arr_2 [i_0])))) > (((unsigned int) 10660072103954583359ULL))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((((/* implicit */unsigned long long int) ((((((long long int) arr_2 [i_1])) + (9223372036854775807LL))) << (((((/* implicit */int) ((unsigned short) arr_2 [i_0]))) - (22346)))))) < (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))) - (((unsigned long long int) arr_2 [i_0 + 1]))))))));
            }
        } 
    } 
}
