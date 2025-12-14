/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38798
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
    var_11 = ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */_Bool) 2147483644)) && (((/* implicit */_Bool) (unsigned short)58637)))) ? (min((((/* implicit */unsigned long long int) (unsigned short)6916)), (325379522848148810ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43686))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) ((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
        arr_3 [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9755)))));
    }
    var_13 |= ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned short) ((unsigned short) (unsigned short)63845)))), ((~(9223372036854775807LL)))));
}
