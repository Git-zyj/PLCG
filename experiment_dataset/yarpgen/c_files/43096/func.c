/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43096
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
    var_11 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_6)) : (min((((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (max((var_3), (var_10)))))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((~(var_7))) : (var_0)));
    var_13 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_3))))), (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_0)) : (var_5))), (((/* implicit */unsigned long long int) var_8))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = var_7;
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0])))))));
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 1634712947U)) ? (1030056791270284514ULL) : (((/* implicit */unsigned long long int) 2660254349U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4024)) ? (2660254348U) : (1634712947U))))));
    }
}
