/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29187
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (short)13944)) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))))))) && (((arr_1 [i_1 + 1]) == (arr_1 [i_1 - 1])))));
                var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (15707921676590734290ULL) : (((/* implicit */unsigned long long int) arr_1 [i_1 + 1])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-124)))))));
            }
        } 
    } 
    var_22 += ((/* implicit */unsigned long long int) var_0);
    var_23 = ((/* implicit */unsigned int) (unsigned short)1564);
}
