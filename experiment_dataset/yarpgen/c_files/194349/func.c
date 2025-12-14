/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194349
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) min((1413476522297271512LL), (((/* implicit */long long int) var_13))))) * (((((/* implicit */_Bool) -9146137091446522276LL)) ? (18250653307475995168ULL) : (((/* implicit */unsigned long long int) -9146137091446522276LL)))))) | (((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_0]), (((((/* implicit */_Bool) arr_1 [2] [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((int) (_Bool)0))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (1151795604700004352ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)-13393)))))), (min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)42474)))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)42474)) : (((/* implicit */int) arr_3 [i_0])))))))));
            }
        } 
    } 
    var_18 = (~(((/* implicit */int) var_16)));
}
