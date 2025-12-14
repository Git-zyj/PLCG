/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42477
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_16 = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) 0)));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned int) 1712118071U)))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_18 ^= ((/* implicit */unsigned char) min(((-(((((/* implicit */int) arr_5 [i_1])) - (((/* implicit */int) var_5)))))), (((int) ((((/* implicit */long long int) 2582849225U)) / (-7827100065066365681LL))))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((int) (unsigned char)243))) - (2582849240U))), (((/* implicit */unsigned int) ((int) (unsigned char)233))))))));
        var_20 ^= ((/* implicit */unsigned int) arr_4 [i_1] [i_1]);
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (signed char)41))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -7827100065066365667LL)), (14845579222972217355ULL)))) ? (((long long int) -7827100065066365703LL)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) || (((/* implicit */_Bool) 4294967289U)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((arr_3 [i_1]), (((/* implicit */unsigned int) arr_2 [i_1] [i_1])))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((int) 2582849240U))) ? (max((((/* implicit */long long int) var_3)), (5598487528954367875LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-6031))))));
    }
    for (unsigned short i_2 = 4; i_2 < 15; i_2 += 3) 
    {
        var_21 = (unsigned char)224;
        var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) arr_8 [i_2 + 1])))));
    }
    var_23 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
}
