/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223069
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
    var_20 = ((/* implicit */unsigned long long int) var_12);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_21 = arr_2 [i_0] [i_0];
        var_22 ^= ((/* implicit */unsigned long long int) max((((arr_2 [i_0] [i_0]) + (arr_2 [i_0] [i_0]))), (arr_2 [i_0] [i_0])));
    }
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        arr_7 [i_1] = ((long long int) ((arr_3 [i_1 - 1] [i_1 + 2]) / (arr_3 [i_1 - 1] [i_1 + 2])));
        arr_8 [i_1 + 2] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1 - 1]);
    }
    for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) arr_9 [i_2]);
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) arr_9 [i_2]);
    }
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((max((var_18), (((/* implicit */unsigned long long int) var_11)))) <= (max((var_18), (((/* implicit */unsigned long long int) var_0))))))), (((((var_10) + (9223372036854775807LL))) << (((((var_17) + (4684127158648195286LL))) - (62LL))))))))));
}
