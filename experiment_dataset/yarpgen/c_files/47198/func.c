/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47198
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
    var_19 |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) var_5)) ? (4192256LL) : (((/* implicit */long long int) -1832536557)))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) + (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)7283)), (min((var_18), (1334366029))))))));
    var_20 |= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) >= (-1071099956)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_4 [0ULL] [i_1 + 2] [i_2]) : (((/* implicit */unsigned long long int) 3059968227U)))) >> ((((~(((/* implicit */int) var_7)))) + (9428))))) <= ((+(((arr_4 [i_0] [i_0] [i_2]) ^ (arr_4 [i_2] [i_1] [i_2])))))));
                    arr_8 [i_2] [i_2] &= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) var_15)) : (arr_4 [i_0] [i_0] [i_2]))) >= (max((arr_4 [i_0] [i_1 + 3] [i_2]), (((/* implicit */unsigned long long int) 3059968227U)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (((((/* implicit */_Bool) min((arr_5 [20] [i_1] [2U] [i_2]), (((/* implicit */unsigned short) (short)-20812))))) ? (((long long int) arr_4 [i_2] [i_0] [i_2])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_2])) >= (((/* implicit */int) arr_2 [i_0] [i_1]))))))))));
                }
            } 
        } 
    } 
}
