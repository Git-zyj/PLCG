/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224449
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_13 ^= ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_2 [10U] = ((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)(-127 - 1))))) & (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [1U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33386))) ^ (arr_0 [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_0])), ((+(-1697140384))))))));
    }
    var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33386)) - (((/* implicit */int) min(((unsigned short)32150), (var_5))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)33386)) + (((/* implicit */int) (unsigned short)4724))))) : (min((var_10), (((/* implicit */unsigned int) (+(((/* implicit */int) var_12)))))))));
    var_15 = var_9;
    var_16 = ((/* implicit */int) var_9);
}
