/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224682
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
    var_20 = ((/* implicit */long long int) min((var_1), (((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0 - 2] = ((/* implicit */unsigned short) ((_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (0ULL))));
        arr_3 [i_0 - 2] [(short)1] = ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) var_18)))) ? (((long long int) min((((/* implicit */long long int) arr_0 [i_0])), (var_8)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
    }
    var_21 = ((/* implicit */long long int) max((min((((/* implicit */int) ((_Bool) (unsigned char)211))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))), (((/* implicit */int) var_6))));
}
