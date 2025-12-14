/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46377
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) var_12);
                var_19 = ((/* implicit */unsigned int) ((min((min((2639363334844487287LL), (3272100654410705388LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))))) | (((((/* implicit */long long int) max((arr_0 [16LL]), (((/* implicit */unsigned int) (short)-32758))))) / (var_7)))));
                var_20 = ((/* implicit */int) max((5669007000799518789LL), (((/* implicit */long long int) (signed char)93))));
                var_21 = ((/* implicit */signed char) (-(5669007000799518803LL)));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) (+(min((((/* implicit */int) min((var_1), (var_17)))), ((+(((/* implicit */int) (signed char)93))))))));
    var_23 = ((/* implicit */long long int) var_1);
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (signed char)104))));
}
