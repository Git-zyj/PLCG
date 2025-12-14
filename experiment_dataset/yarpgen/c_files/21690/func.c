/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21690
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
    var_14 |= ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))))))) : (max((arr_4 [i_1 - 1] [i_1 - 1]), (var_7))));
                arr_7 [i_0] |= ((/* implicit */unsigned char) max((arr_3 [i_1]), (((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) & (max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [i_1 - 1])))))))));
            }
        } 
    } 
}
