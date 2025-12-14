/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37558
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
    var_12 |= ((/* implicit */unsigned int) var_9);
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) max((((/* implicit */signed char) var_11)), (var_5)))) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_6)) ? (8655818028610613040ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    var_14 = ((/* implicit */signed char) (~(((((((/* implicit */int) var_2)) + (2147483647))) >> (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))) - (17682)))))));
    var_15 = ((/* implicit */short) ((unsigned short) min((((/* implicit */int) var_1)), ((+(((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_2 [i_0 + 1] [i_0 + 2]), (arr_3 [i_0 - 2] [i_0 - 2])))) ? (((arr_1 [i_0 - 1] [i_0 + 2]) << (((arr_1 [i_0 + 1] [i_0 - 2]) - (18259371329780772718ULL))))) : (min((arr_0 [i_0 - 1] [i_0 - 2]), (arr_1 [i_0 - 2] [i_0 + 2])))));
                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_1 [i_0 + 2] [i_0 - 2]) & (arr_1 [i_0 + 1] [i_0 - 2]))))));
                arr_5 [i_0 - 2] &= ((/* implicit */signed char) (~((~(arr_3 [i_1] [i_0 + 1])))));
                var_17 = ((unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
