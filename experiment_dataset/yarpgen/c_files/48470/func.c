/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48470
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
    var_17 = var_13;
    var_18 &= ((/* implicit */unsigned long long int) ((var_12) == (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) (short)-28688))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] |= ((/* implicit */short) (~(((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_4 [5ULL]))))));
                    var_19 = ((6377895803223929169ULL) << (((/* implicit */int) ((18334691160327557728ULL) > (((((/* implicit */_Bool) arr_0 [(short)13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (0ULL)))))));
                    arr_9 [(short)1] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [6ULL] [(short)6] [14ULL] [16ULL]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 12503167314369632064ULL)) ? (var_1) : (var_14)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (13661001129363725487ULL) : (11981688722860330891ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-1156))))))));
                }
            } 
        } 
    } 
    var_20 = var_8;
}
