/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201156
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) ((short) var_4))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2)))));
    var_14 = ((/* implicit */unsigned int) max((var_9), (((/* implicit */unsigned long long int) max((((unsigned int) var_1)), (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))))))));
    var_15 ^= ((/* implicit */unsigned char) var_10);
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((/* implicit */unsigned int) var_8)), (((((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (4294967295U))) % (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) ((18446744073709551615ULL) | ((+(var_9)))));
                arr_4 [(signed char)4] &= ((/* implicit */long long int) arr_1 [i_0]);
            }
        } 
    } 
}
