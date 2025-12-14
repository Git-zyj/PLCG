/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23489
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
    var_13 *= ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((min((arr_0 [i_0 - 2]), (((/* implicit */long long int) (unsigned char)63)))), (((/* implicit */long long int) (unsigned char)44))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_4))));
            }
        } 
    } 
    var_15 = min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)127)))) - (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) 2134185072)) : (-7210538831294577023LL)))) ? (18259072260315552701ULL) : (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */int) var_10))))))));
}
