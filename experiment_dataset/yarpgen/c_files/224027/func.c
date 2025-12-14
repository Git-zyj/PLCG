/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224027
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [5LL] [5LL]);
        var_20 = ((/* implicit */int) arr_2 [i_0]);
        var_21 = arr_3 [i_0];
        var_22 = arr_0 [i_0] [i_0 + 1];
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) arr_5 [2LL] [2LL]);
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]))));
        var_24 = ((/* implicit */unsigned short) arr_6 [i_1]);
    }
    var_25 = ((/* implicit */long long int) var_15);
    var_26 = ((/* implicit */unsigned long long int) var_10);
    var_27 = var_3;
}
