/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214655
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
    var_12 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) - (var_1));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        arr_3 [(signed char)0] = ((/* implicit */short) ((((arr_2 [i_0 + 3]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 3]))))) * (((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 3]))) : (arr_2 [i_0 + 3])))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) var_6);
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_13 ^= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) ((unsigned short) arr_6 [i_1] [(signed char)7]))) : ((-(((/* implicit */int) var_2))))))));
        var_14 += ((((((/* implicit */_Bool) 67108848U)) ? (min((((/* implicit */unsigned int) (short)-13547)), (67108848U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))));
        var_15 += ((/* implicit */long long int) ((unsigned long long int) ((((((/* implicit */_Bool) (signed char)-15)) && (((/* implicit */_Bool) arr_6 [i_1] [i_1])))) && ((!(((/* implicit */_Bool) 4227858448U)))))));
        arr_8 [i_1] = ((/* implicit */short) min((((/* implicit */long long int) (-((~(3U)))))), (min((((/* implicit */long long int) arr_5 [i_1])), (var_11)))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), ((!(((/* implicit */_Bool) min((arr_9 [(signed char)0]), ((signed char)6))))))));
        var_17 = ((/* implicit */unsigned char) ((unsigned long long int) (-(((((/* implicit */int) (signed char)8)) >> (((-3968354906842776633LL) + (3968354906842776658LL))))))));
        arr_12 [i_2] = min((((/* implicit */unsigned long long int) var_7)), (((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_8))));
    }
}
