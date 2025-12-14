/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242006
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) 340220353732116689ULL)) ? (((((/* implicit */_Bool) max((var_10), (var_10)))) ? (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3)))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) (-(min((arr_2 [i_0] [i_1 - 1]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0])))))))));
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [12])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (signed char)-80))))) : (arr_3 [i_0] [i_1 + 1] [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) 712459365U)) : (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) (short)-10516)))))) : (340220353732116699ULL)))));
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) var_7)), (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (var_11)))) * ((+(1179396441U))))))));
}
