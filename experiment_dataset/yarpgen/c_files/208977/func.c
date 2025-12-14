/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208977
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
    var_12 = ((((/* implicit */int) (unsigned char)35)) + (((/* implicit */int) (_Bool)0)));
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191))) : (min((10614021998007881654ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (((((var_1) + (9223372036854775807LL))) >> (((/* implicit */int) var_6)))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)104)) ^ (((/* implicit */int) (_Bool)1))))));
    var_14 |= (~(((((/* implicit */int) (short)-22546)) ^ (((/* implicit */int) (unsigned char)37)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_0] [i_2] = (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 - 2] [i_2 - 2] [i_2 - 2]))) : (-2155268768165925529LL))));
                    arr_12 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) max((var_10), ((!(((/* implicit */_Bool) (signed char)93))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) (signed char)2))))), (arr_7 [i_0])))));
                }
            } 
        } 
    } 
}
