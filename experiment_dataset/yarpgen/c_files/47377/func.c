/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47377
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
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_1))));
        var_18 = ((/* implicit */short) var_11);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_3);
        arr_4 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) var_15)), (min((var_4), (var_4)))))), (max((max((var_6), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (var_16))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_9 [i_1] = min((((/* implicit */unsigned int) min((min((((/* implicit */int) var_14)), (var_16))), (((/* implicit */int) max((var_9), (var_9))))))), (max((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)9)), (-861978094)))), (max((var_12), (((/* implicit */unsigned int) var_0)))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 23; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min((max((((/* implicit */long long int) var_5)), (var_3))), (((/* implicit */long long int) var_4)))))));
            var_20 -= ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((max((var_10), (var_16))), (max((var_10), (var_16)))))), (var_12)));
        }
    }
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned long long int) var_6);
        var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_6)), (var_2)));
    }
    var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned short) var_15)), (var_0)));
    var_23 = min((var_16), (min((max((((/* implicit */int) var_0)), (var_4))), (var_10))));
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min((((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned int) var_5))))), (min((((/* implicit */unsigned long long int) var_16)), (max((((/* implicit */unsigned long long int) var_14)), (var_2))))))))));
}
