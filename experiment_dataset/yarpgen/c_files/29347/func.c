/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29347
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
    var_20 = ((/* implicit */long long int) max((var_9), (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -4320176494989999012LL)) && (((/* implicit */_Bool) (short)16383))))) : (((((/* implicit */_Bool) (short)16394)) ? (((/* implicit */int) (short)-16383)) : (((/* implicit */int) (short)(-32767 - 1)))))));
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (-(2181667837U)));
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)3158)) ? (max((var_15), (((/* implicit */unsigned long long int) arr_0 [i_1])))) : (((/* implicit */unsigned long long int) min((-485451091), (((/* implicit */int) (short)16383)))))));
                arr_7 [i_0] [(short)6] [i_1] = ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) (short)-16384)))) % (((/* implicit */int) ((short) var_14))));
                arr_8 [(short)8] [i_1] [i_1] = ((/* implicit */unsigned short) (+(max((1), (((/* implicit */int) (short)16383))))));
            }
        } 
    } 
}
