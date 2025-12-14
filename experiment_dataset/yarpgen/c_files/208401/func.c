/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208401
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
    var_14 -= ((/* implicit */_Bool) (~(var_12)));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_15 = max(((~(((((/* implicit */_Bool) (short)11902)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))), (min((max((((/* implicit */unsigned long long int) var_4)), (2233785415175766016ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-10736)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
        var_16 = ((/* implicit */unsigned short) arr_1 [i_0]);
    }
    for (unsigned int i_1 = 2; i_1 < 17; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 16; i_2 += 3) 
        {
            arr_9 [(signed char)0] [i_2] [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)48)) ? (16212958658533785600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4344))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? ((-(var_2))) : (((2253233187U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
            var_17 -= ((/* implicit */int) var_0);
        }
        arr_10 [i_1] [i_1 - 1] = ((unsigned int) arr_4 [i_1 - 1]);
        var_18 = ((/* implicit */long long int) (~(5479665381030196955ULL)));
    }
    var_19 = var_13;
}
