/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218842
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
    var_14 ^= ((/* implicit */unsigned long long int) ((((var_6) + (9223372036854775807LL))) >> (((max((((/* implicit */long long int) var_10)), ((+(8040248471748678567LL))))) - (8040248471748678507LL)))));
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (((max((var_3), (((/* implicit */unsigned long long int) 8040248471748678567LL)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22094))))))))));
    var_16 = ((/* implicit */long long int) var_1);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (min((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-8040248471748678550LL))), (((/* implicit */long long int) max((var_0), (((/* implicit */unsigned char) var_7))))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) -8040248471748678568LL)) ? (-1) : (((/* implicit */int) var_13)))), (((var_11) / (((/* implicit */int) (short)63)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 22; i_2 += 3) 
            {
                {
                    var_18 &= ((/* implicit */signed char) ((long long int) max((min((((/* implicit */long long int) arr_4 [i_0] [i_1])), (arr_3 [(unsigned short)16] [i_1] [i_2]))), (((/* implicit */long long int) arr_4 [i_0] [i_1 - 1])))));
                    var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((signed char) (unsigned char)224))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [(unsigned char)13] [(unsigned char)13])) : (((/* implicit */int) arr_1 [i_2] [i_1])))))), (((int) (unsigned char)224))));
                    var_20 &= ((/* implicit */unsigned char) max((max((((/* implicit */int) arr_5 [i_1 - 1] [i_2 + 1])), (var_12))), ((+(((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1]))))));
                }
            } 
        } 
    } 
}
