/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206885
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
    var_16 = ((/* implicit */short) 208289680U);
    var_17 = ((/* implicit */int) var_7);
    var_18 = ((/* implicit */signed char) var_10);
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (unsigned short)43948))) ? (((/* implicit */int) var_0)) : (min((arr_1 [i_0 + 1] [i_2 + 1]), (((/* implicit */int) var_5)))))))));
                    var_20 = ((/* implicit */unsigned short) ((short) ((unsigned long long int) (unsigned short)21588)));
                }
            } 
        } 
    } 
}
