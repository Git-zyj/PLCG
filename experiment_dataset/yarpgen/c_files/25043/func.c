/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25043
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
    var_20 = ((/* implicit */unsigned int) max((max((var_19), (((/* implicit */long long int) min((var_12), (((/* implicit */unsigned char) var_9))))))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) >> ((((-(((/* implicit */int) var_12)))) + (37))))))));
    var_21 ^= ((/* implicit */unsigned long long int) var_2);
    var_22 *= ((/* implicit */unsigned char) var_11);
    var_23 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))) - (var_15))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (short)-24902)) != (((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((signed char) 417888817869069252ULL))), (max((((/* implicit */unsigned long long int) (~(arr_3 [i_0] [i_0])))), (var_11)))));
        arr_5 [i_0] = ((/* implicit */signed char) -59606763);
    }
}
