/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235268
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
    var_16 = ((((/* implicit */_Bool) var_3)) ? (var_1) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_1))) - (((/* implicit */unsigned long long int) (+(0LL)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((int) ((arr_6 [i_0] [i_1] [i_2] [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_0] [i_1]) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2])))))))))))));
                    var_18 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_4 [5]))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(signed char)6] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (29LL)))))));
                    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned short) -28LL))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (15ULL) : (((/* implicit */unsigned long long int) 798940171)))) : (((/* implicit */unsigned long long int) (+(var_5)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(arr_0 [i_0]))) < (964117195)))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(arr_7 [i_0])));
                }
            } 
        } 
    } 
    var_20 ^= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((0LL) | (((/* implicit */long long int) var_10))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (1802123102) : (((/* implicit */int) (short)4095)))) : (((/* implicit */int) var_4))))));
}
