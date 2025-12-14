/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205083
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(9196297077608730081LL)))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12))))), (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8088))) : (var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_10))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [(unsigned char)7] [(unsigned short)4] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_1 [i_0 - 2]), (((unsigned short) arr_1 [i_2]))))) ? (((((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [6ULL] [i_1])), (var_16)))) & (((/* implicit */int) min((arr_2 [i_0] [i_1]), (((/* implicit */unsigned char) var_4))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(signed char)4])) ? (-9196297077608730081LL) : (var_2)))))))));
                    var_20 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 2])))))));
                }
            } 
        } 
    } 
}
