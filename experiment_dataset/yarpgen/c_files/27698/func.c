/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27698
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
    var_20 = ((/* implicit */unsigned short) var_9);
    var_21 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_22 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) || (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) -1))))))), (4294967295U)));
        var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)20030)) ? (((/* implicit */int) (unsigned short)17157)) : (((/* implicit */int) (unsigned short)9612))))), (((min((4149557061U), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    var_24 = ((/* implicit */int) 4294967295U);
}
