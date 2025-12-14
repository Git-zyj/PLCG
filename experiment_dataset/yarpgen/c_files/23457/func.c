/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23457
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
    var_11 = ((/* implicit */unsigned char) (((_Bool)1) ? (min((min((((/* implicit */unsigned long long int) (unsigned short)35235)), (var_7))), (min((((/* implicit */unsigned long long int) (unsigned char)255)), (var_7))))) : (min((min((((/* implicit */unsigned long long int) var_2)), (8938186317223851335ULL))), (min((2471752130418068149ULL), (((/* implicit */unsigned long long int) var_6))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [i_2] [i_2 - 2] [i_1] [i_0])), (arr_8 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_1]))));
                    var_13 ^= ((/* implicit */unsigned short) min(((~(((/* implicit */int) (unsigned short)13)))), (min((-304844713), (((/* implicit */int) (signed char)-8))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43))) : (var_5))))));
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
}
