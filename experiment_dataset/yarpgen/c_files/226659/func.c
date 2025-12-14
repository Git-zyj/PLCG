/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226659
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (signed char)-99))));
        var_18 = ((/* implicit */signed char) ((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))));
        arr_5 [i_0] = 18446744073709551615ULL;
        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_13))));
    }
    var_20 = ((/* implicit */unsigned char) (+(max(((((_Bool)1) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))) : (var_4)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((var_4) + (arr_7 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
        var_21 = ((/* implicit */unsigned int) arr_7 [i_1]);
    }
}
