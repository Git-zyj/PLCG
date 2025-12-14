/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239036
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
    var_15 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) min((-8984308891878050212LL), (((/* implicit */long long int) 4036487630U))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_16 = min(((+(arr_0 [i_0]))), (((((/* implicit */_Bool) (-(4036487634U)))) ? (1635594644U) : (((258479666U) << (((6778264113711370823LL) - (6778264113711370814LL))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) min((arr_1 [i_0]), (((/* implicit */long long int) (((+(3522545677499716783LL))) == (((/* implicit */long long int) var_2)))))));
        var_17 = 2296097474U;
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_18 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)11284))));
        var_19 += arr_4 [i_1];
    }
    var_20 += ((/* implicit */unsigned int) var_9);
}
