/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38773
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 ^= ((/* implicit */signed char) min(((!(((/* implicit */_Bool) var_3)))), (((((/* implicit */int) ((signed char) var_10))) <= (((/* implicit */int) min((((/* implicit */short) var_11)), (var_5))))))));
                var_13 += ((/* implicit */unsigned long long int) (_Bool)0);
            }
        } 
    } 
    var_14 = var_11;
    var_15 = ((short) (((+(((/* implicit */int) var_0)))) + (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) < (var_8))))));
}
