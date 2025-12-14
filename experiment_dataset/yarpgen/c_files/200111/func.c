/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200111
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_0)) > (var_14)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)12468)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) (short)-32759)) : (((/* implicit */int) (short)-32759))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-32759)))) : (((/* implicit */int) arr_4 [i_0])))))));
                var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((unsigned int) arr_3 [4LL] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */int) var_9)) != (((/* implicit */int) var_11)))), ((!(arr_2 [4] [i_0]))))))) : (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) -576089902)) ? (3341450991U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_16) : (((/* implicit */int) var_9)))))))));
            }
        } 
    } 
    var_20 = var_15;
}
