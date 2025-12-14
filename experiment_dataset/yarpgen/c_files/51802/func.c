/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51802
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (~(((int) arr_3 [i_0] [i_0] [i_1]))));
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) 546550432))));
            }
        } 
    } 
    var_17 = (~(((int) (~(((/* implicit */int) (short)28440))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)218)) <= (((/* implicit */int) var_6)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1675410504)) ? (var_9) : (var_7)))) ? (((/* implicit */long long int) var_8)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_11)) : (var_14)))))));
}
