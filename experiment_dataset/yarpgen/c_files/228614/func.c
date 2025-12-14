/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228614
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
    var_18 &= ((/* implicit */unsigned short) var_2);
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3146096234U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_15))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (arr_2 [i_0]))))) & (((/* implicit */int) arr_4 [i_1] [i_1] [i_2]))));
                    arr_8 [i_0] &= ((/* implicit */int) (+((-(2234327028U)))));
                }
            } 
        } 
    } 
}
