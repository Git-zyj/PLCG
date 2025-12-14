/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205707
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)(-127 - 1))))))))) & (((/* implicit */int) var_17))));
    var_21 = ((/* implicit */unsigned long long int) (unsigned char)228);
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (!(var_2))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (((~(((/* implicit */int) (signed char)-37)))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_13))))))));
                var_23 = ((/* implicit */signed char) ((((max((((/* implicit */long long int) -1)), ((+((-9223372036854775807LL - 1LL)))))) + (9223372036854775807LL))) << (((arr_1 [1U] [i_0]) - (2641878744844225075LL)))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) 36028797018963967ULL);
}
