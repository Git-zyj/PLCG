/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222854
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
    var_15 = ((/* implicit */int) var_6);
    var_16 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) ((17085943677924868329ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62904)))));
                arr_5 [i_0] [i_1 - 1] = ((/* implicit */unsigned short) (+(((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2632))) - (16574953147356109141ULL))))));
                arr_6 [9ULL] [0ULL] [(short)11] = ((/* implicit */long long int) max((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), (((((/* implicit */int) (signed char)-10)) + (((/* implicit */int) (unsigned short)24223)))))))));
            }
        } 
    } 
    var_18 *= ((/* implicit */_Bool) var_9);
}
