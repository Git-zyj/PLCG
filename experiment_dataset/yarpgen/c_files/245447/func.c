/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245447
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
    var_16 -= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((unsigned int) var_5))) & (((var_1) ? (((/* implicit */unsigned long long int) var_3)) : (1400412660784795492ULL))))));
    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((long long int) var_7))) * (((unsigned long long int) (unsigned char)255)))) - (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) var_14)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_8)) : (18446744073709551615ULL)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 9; i_2 += 2) 
            {
                {
                    var_18 += ((signed char) ((int) arr_5 [i_2] [i_2 + 1] [i_2 + 1]));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)235)) - (((/* implicit */int) (signed char)126)))) * (((/* implicit */int) ((((/* implicit */int) ((signed char) (unsigned char)219))) > (((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) (unsigned short)7))))))))));
                }
            } 
        } 
    } 
}
