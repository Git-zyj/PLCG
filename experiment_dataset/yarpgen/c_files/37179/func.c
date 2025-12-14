/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37179
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */long long int) arr_1 [i_0]);
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((((/* implicit */long long int) ((var_6) ? (4294967295U) : (var_8)))) != (((((/* implicit */_Bool) 4294967292U)) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [(unsigned char)9]))))) ? (((/* implicit */long long int) ((int) (+(var_16))))) : (((((/* implicit */_Bool) (unsigned char)228)) ? (max((var_14), (((/* implicit */long long int) var_7)))) : (max((arr_5 [i_0] [i_0]), (((/* implicit */long long int) var_9))))))));
                var_19 = ((/* implicit */short) arr_2 [i_0] [i_1]);
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (-(1U)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_2))))) : (min((8LL), (((/* implicit */long long int) -1996713666))))));
    var_21 ^= ((/* implicit */int) 7108971226149185864ULL);
    var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)12460)), (2872708316U)))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))))) - (((long long int) 9223372036854775807LL))));
}
