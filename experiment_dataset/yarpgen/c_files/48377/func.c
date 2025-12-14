/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48377
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
    var_16 = max((((((/* implicit */unsigned long long int) (-(8407527420310421624LL)))) + (((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) var_10)));
    var_17 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [(unsigned short)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_0] [i_1] [i_0]))) ? (((var_2) << (((((/* implicit */int) arr_1 [i_0])) - (47380))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (3164287436U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)93))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)-32754))) ^ (5930365578686058112LL))) == (arr_4 [i_1 - 1] [i_1] [1LL])));
            }
        } 
    } 
}
