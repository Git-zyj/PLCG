/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28384
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
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_8))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)9033))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_3)) & (((/* implicit */int) (short)31743)))), (-1490207431)))) : (var_8)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 2] [i_2 - 2] [i_2 + 1]))) : (arr_6 [i_2 - 3] [i_2] [i_2 - 3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12977)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_4 [i_2 + 1] [i_2 - 3] [i_2 - 3])))))));
                    arr_9 [i_1] &= ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), (((arr_6 [i_0] [i_0] [i_0]) ^ (arr_6 [i_0] [i_0] [i_2])))));
                }
            } 
        } 
    } 
}
