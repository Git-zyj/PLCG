/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31413
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
    for (short i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) arr_0 [i_0]);
        arr_2 [i_0] [i_0] = arr_0 [i_0 + 1];
    }
    var_17 = ((/* implicit */unsigned short) (((+(((unsigned long long int) (unsigned short)55901)))) * (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9624))) * (var_9))) / (((/* implicit */unsigned int) var_12)))))));
    var_18 = ((/* implicit */unsigned short) var_12);
}
