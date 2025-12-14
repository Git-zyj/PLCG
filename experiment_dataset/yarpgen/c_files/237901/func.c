/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237901
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
    var_10 = ((/* implicit */_Bool) (short)0);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_5 [i_0 - 2]))))));
                var_12 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) (~(arr_5 [i_0 - 4])))) : ((~((~(15859792650088256862ULL)))))));
                var_13 += ((/* implicit */signed char) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_7))));
            }
        } 
    } 
}
