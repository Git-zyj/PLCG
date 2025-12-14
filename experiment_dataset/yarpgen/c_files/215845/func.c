/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215845
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10479673554138821997ULL)) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (var_14)));
            }
        } 
    } 
    var_20 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) var_14)) ? (max((10479673554138821979ULL), (var_12))) : (((((/* implicit */_Bool) 10229685723996297467ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (7967070519570729619ULL))))), (((/* implicit */unsigned long long int) var_11))));
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) < (var_14))))) : (var_4)))) ? (var_5) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30))) : (7967070519570729617ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) - (var_10))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (7967070519570729612ULL))))));
}
