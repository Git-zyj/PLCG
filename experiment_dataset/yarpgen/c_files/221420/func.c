/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221420
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((((/* implicit */int) var_9)) - (((/* implicit */int) var_6)))) + (((/* implicit */int) var_9))))) : (var_5)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) ((unsigned char) arr_6 [i_2]))) : (((/* implicit */int) arr_6 [i_2]))))) && (((/* implicit */_Bool) arr_4 [i_0 - 4] [i_2])))))));
                    var_14 = ((/* implicit */int) arr_5 [i_1] [2U]);
                    arr_11 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 4825805618472880454LL)) ? (((/* implicit */int) arr_3 [i_0 + 1] [14])) : (((/* implicit */int) arr_3 [i_0 + 1] [6])))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) ((unsigned long long int) var_7));
}
