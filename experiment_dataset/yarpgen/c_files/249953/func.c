/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249953
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((arr_0 [i_0] [i_0]) << (((((unsigned long long int) ((unsigned short) 182214276U))) - (24191ULL))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) max((182214279U), (arr_0 [i_0] [i_0])))), (min((((/* implicit */unsigned long long int) 182214276U)), (14793444137268500105ULL))))));
        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_0 [i_0] [i_0])) : (var_14)))))) ? (((/* implicit */unsigned long long int) (-(var_15)))) : (((((var_12) + (14793444137268500105ULL))) / (((6460189155238316365ULL) << (((182214272U) - (182214243U)))))))));
    }
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_15))));
}
