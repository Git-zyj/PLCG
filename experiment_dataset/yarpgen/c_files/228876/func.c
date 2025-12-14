/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228876
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_11 ^= (+((-(var_6))));
        var_12 = ((((/* implicit */_Bool) min(((-(var_0))), (arr_0 [i_0])))) ? ((-(((2007992314U) * (2286974988U))))) : (var_7));
        var_13 += max((var_9), (((((/* implicit */_Bool) 2256634165U)) ? (3003796282U) : (3152388698U))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_14 = ((unsigned int) ((var_3) / (arr_0 [i_1])));
        var_15 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 326597132U)) ? (arr_2 [i_1]) : (var_0)))) ? (((1077030673U) >> (((var_4) - (1961452362U))))) : (var_8));
    }
    var_16 = ((unsigned int) 3152388715U);
}
