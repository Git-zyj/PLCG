/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218258
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
    var_16 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32767))))) >= (max((arr_5 [i_0 - 2] [i_0 - 1]), (arr_5 [i_0 - 1] [i_0 - 1])))));
                arr_7 [i_0] [i_0] [i_0 + 1] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551593ULL)) || (((/* implicit */_Bool) (short)-32767)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) && (((((/* implicit */_Bool) (signed char)54)) && (((/* implicit */_Bool) (signed char)114))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) var_5))))) || (((/* implicit */_Bool) var_0)))))));
}
