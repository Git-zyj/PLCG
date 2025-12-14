/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203028
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
    for (short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) var_4);
                var_12 ^= ((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0]));
                var_13 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_1]))) - (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (var_4) : (-5648796883852826172LL)))))) : (((((/* implicit */unsigned long long int) ((var_4) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10647)))))) % (min((((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_1])), (var_8)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) min((((unsigned char) var_0)), (((/* implicit */unsigned char) var_2)))))));
}
