/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235209
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 316428479)) ? (((/* implicit */long long int) 316428456)) : ((-(6884003346029531657LL)))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_14 = ((/* implicit */unsigned long long int) min((var_14), (4451899145153940343ULL)));
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_10))));
        }
    }
    var_16 -= ((/* implicit */unsigned long long int) (-(((unsigned int) (~(((/* implicit */int) var_12)))))));
}
