/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49763
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
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_13)))) ? (min((var_4), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) & (var_4)))), (max((((/* implicit */unsigned long long int) var_2)), (var_5))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_8)) << (((/* implicit */int) var_12)))), (((((/* implicit */int) (unsigned short)0)) << (((/* implicit */int) var_7))))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2294337873U)) && (((/* implicit */_Bool) 262143U))));
                    arr_8 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (signed char)0);
                    var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((((/* implicit */unsigned long long int) var_13)) - (var_5))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [12U] [i_1 + 1]))) * (arr_4 [i_0]))))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(var_6)))))))));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */short) max((((/* implicit */int) var_2)), (((((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_0))))) | (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))))));
}
