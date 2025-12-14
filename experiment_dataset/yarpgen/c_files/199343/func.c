/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199343
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
    var_12 = ((/* implicit */unsigned int) (_Bool)0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0 + 1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2379381336U))) * (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                arr_7 [i_0] = ((/* implicit */short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((int) min((((/* implicit */short) arr_2 [i_0])), (arr_3 [i_0] [i_0])))))));
                arr_8 [i_0] [i_1 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_5 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned long long int) 602213469))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_0 + 1] [i_0 + 1]) == (((/* implicit */unsigned long long int) 1423423572)))))) : (((arr_5 [i_0 + 1] [i_0 + 1]) >> (((arr_5 [i_0 + 1] [i_0 + 1]) - (2903708091073288212ULL)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) var_4);
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))) : (1928690714387252661ULL)))) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7)))))))) ? (((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (max((((/* implicit */unsigned int) var_1)), (var_5))))) : ((-(4294967295U))));
}
