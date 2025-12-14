/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49515
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
    var_18 |= ((((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? ((-(0))) : ((+(((/* implicit */int) (short)32760)))))) <= (((/* implicit */int) ((((((/* implicit */int) var_9)) >> (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) ((signed char) var_12)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_19 &= ((/* implicit */_Bool) ((unsigned int) var_8));
                arr_4 [i_0 + 1] = ((/* implicit */long long int) ((((4343584705019337433LL) - (-4343584705019337434LL))) != (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3))))));
                var_20 *= ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_12)))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -4343584705019337434LL)) ? (4343584705019337430LL) : (((/* implicit */long long int) 1909462246U)))))) : (((/* implicit */int) var_10)));
            }
        } 
    } 
}
