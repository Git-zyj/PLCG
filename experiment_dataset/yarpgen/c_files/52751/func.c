/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52751
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
    var_13 &= ((/* implicit */short) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_1 [i_0])) / (5058629937020516368ULL)));
        var_15 = ((/* implicit */unsigned int) ((unsigned long long int) -158590481621904430LL));
    }
    for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        var_16 = var_0;
        var_17 = ((/* implicit */short) ((((/* implicit */int) ((short) arr_3 [i_1] [i_1]))) << (((max((((/* implicit */int) var_2)), ((-(((/* implicit */int) var_5)))))) - (43203)))));
        arr_5 [i_1] = ((/* implicit */long long int) arr_4 [i_1] [i_1]);
    }
}
