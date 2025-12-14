/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216977
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
    var_19 = ((signed char) max((var_6), (((/* implicit */unsigned long long int) var_3))));
    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_5)), (var_17)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (max((((/* implicit */unsigned long long int) ((unsigned char) 3940310545373886383ULL))), (2953638486680583650ULL)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_4)), (var_18)))));
    }
}
