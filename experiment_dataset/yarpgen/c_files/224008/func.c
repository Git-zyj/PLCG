/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224008
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
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        arr_4 [i_0] &= 18446744073709551615ULL;
        var_12 = var_1;
        arr_5 [i_0] [i_0] &= arr_1 [i_0];
        var_13 ^= var_11;
    }
    var_14 = var_11;
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((/* implicit */_Bool) 11787468045307805906ULL)) ? (var_5) : (18446744073709551602ULL)))));
    var_16 = var_1;
    var_17 = ((((/* implicit */_Bool) (+(13066607065380707723ULL)))) ? (((((/* implicit */_Bool) ((4898958978022307136ULL) - (8814057608447242274ULL)))) ? (var_11) : ((-(var_7))))) : ((~(((2134790348063239267ULL) * (648023993565067269ULL))))));
}
