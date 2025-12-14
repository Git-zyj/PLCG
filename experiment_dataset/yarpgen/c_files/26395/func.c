/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26395
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
    var_15 = ((/* implicit */unsigned int) var_0);
    var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) var_2)))), (var_6)));
    var_17 = ((/* implicit */unsigned char) 1326522092U);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))) : (3076440191U))) % (((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-22)))))))) ? (min((((2851420182U) * (1994558094U))), (min((((/* implicit */unsigned int) -396780122)), (0U))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)210), (((/* implicit */unsigned char) ((3745264729U) <= (((/* implicit */unsigned int) -268435456))))))))));
        arr_4 [i_0] &= ((/* implicit */unsigned char) min(((~(((/* implicit */int) (unsigned char)145)))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)2)), ((unsigned char)58))))));
    }
}
