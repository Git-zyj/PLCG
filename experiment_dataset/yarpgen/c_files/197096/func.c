/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197096
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)166)) || (((/* implicit */_Bool) var_9))))), ((+(((/* implicit */int) var_9))))))) ? (max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (1224361573)))), (max((17242034999525231839ULL), (((/* implicit */unsigned long long int) (unsigned char)166)))))) : (((/* implicit */unsigned long long int) -1089099879))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_21 += ((/* implicit */short) ((unsigned int) ((((/* implicit */int) ((_Bool) arr_1 [i_0]))) >> (((((/* implicit */int) max(((short)-31309), (((/* implicit */short) (unsigned char)166))))) - (155))))));
        var_22 = ((/* implicit */short) ((max((((/* implicit */int) arr_0 [i_0] [i_0])), (((((/* implicit */int) arr_1 [i_0])) << (((arr_2 [i_0]) - (3431183992U))))))) | ((-((-(((/* implicit */int) arr_1 [i_0]))))))));
    }
    var_23 = var_3;
}
