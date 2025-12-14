/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38493
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
    var_20 = ((/* implicit */unsigned char) ((((max((2487512890906745574ULL), (((/* implicit */unsigned long long int) var_19)))) == (((/* implicit */unsigned long long int) (~(243470938U)))))) ? (((/* implicit */int) var_18)) : (var_15)));
    var_21 = ((/* implicit */unsigned long long int) ((short) ((var_9) == (((/* implicit */unsigned long long int) ((var_4) ? (var_2) : (((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) 14013840536249628284ULL);
                var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) == (var_9));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_18)), (((var_9) | (4432903537459923331ULL)))));
}
