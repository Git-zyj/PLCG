/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32030
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
    var_12 |= ((((/* implicit */_Bool) (short)-8955)) ? (18119912965780987700ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) var_8);
                var_14 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-89))))) ? (var_5) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((arr_4 [i_1] [i_1 - 2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))))));
                var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) var_9)))) : ((~(((/* implicit */int) max((arr_0 [i_0 + 1]), (arr_1 [i_0]))))))));
                arr_6 [(_Bool)1] [i_1] [i_1] |= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1 + 4]))))) <= (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (_Bool)0)))))));
            }
        } 
    } 
}
