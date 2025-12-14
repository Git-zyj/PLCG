/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242806
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((unsigned short) (unsigned short)32388)))));
        arr_3 [i_0] |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (1920448393144175755ULL)))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (+(var_14)));
        arr_7 [i_1] = ((/* implicit */short) (unsigned short)57860);
    }
    var_16 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((18446181123756130304ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))), (((unsigned short) (!(((/* implicit */_Bool) var_6)))))));
}
