/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206049
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (var_8) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))))));
                var_14 = (+(max((var_10), (((/* implicit */unsigned long long int) (unsigned short)56258)))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_1)) & (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_9)) ? (4208632725167371475ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
    var_16 = ((/* implicit */long long int) -1701998517);
    var_17 = ((/* implicit */int) var_11);
}
