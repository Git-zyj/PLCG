/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230194
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = (signed char)50;
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) min((((((/* implicit */_Bool) 3760839416993295411ULL)) ? (49855264U) : (49855264U))), (((/* implicit */unsigned int) ((unsigned short) 4245112031U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) var_5)) : (arr_0 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (_Bool)0);
    }
    var_15 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (var_7) : (var_10)));
    var_16 -= ((((/* implicit */_Bool) var_3)) ? (var_13) : (((unsigned int) (_Bool)1)));
}
