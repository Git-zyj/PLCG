/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21410
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((3543779088U) - (3543779083U)))));
                var_13 = ((/* implicit */signed char) -646520287736864864LL);
                var_14 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_1 [i_1 + 1])))) ? (((long long int) arr_1 [i_1 + 1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)7651)) : (((/* implicit */int) arr_1 [i_1 - 1])))))));
                var_15 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((1637580883), (((/* implicit */int) arr_0 [i_0]))))) ? (min((((/* implicit */unsigned int) arr_3 [i_0] [i_1 - 1])), (1959283302U))) : (((unsigned int) arr_2 [i_0] [i_0] [i_1])))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (unsigned char)27)) + (-1542916165)))))));
            }
        } 
    } 
    var_16 |= ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
}
