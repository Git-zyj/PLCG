/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236634
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
    var_16 ^= ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */unsigned int) -1854266964)), (((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (4097277554U))))));
    var_17 -= ((int) (!(((/* implicit */_Bool) 1749349847))));
    var_18 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) min(((((-(-9223372036854775800LL))) | (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [(_Bool)1]) == (((/* implicit */long long int) ((/* implicit */int) (short)-7558))))))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)0))))))))));
                arr_8 [i_0] [24U] = min((2147483647), (((/* implicit */int) ((_Bool) var_3))));
                var_20 = ((((arr_6 [i_0] [i_1]) + (9223372036854775807LL))) >> (((/* implicit */int) (signed char)0)));
            }
        } 
    } 
}
