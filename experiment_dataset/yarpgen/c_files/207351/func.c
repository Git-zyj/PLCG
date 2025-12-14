/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207351
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((var_16) / (((/* implicit */long long int) min((arr_1 [i_0]), (929061728U))))));
                arr_4 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [i_1])))))));
            }
        } 
    } 
    var_21 ^= (!(((/* implicit */_Bool) -3923309505352155064LL)));
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_5)))) ? (var_4) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_13))) | (929061729U))) | (((((/* implicit */_Bool) var_12)) ? (var_17) : (var_18)))))));
}
