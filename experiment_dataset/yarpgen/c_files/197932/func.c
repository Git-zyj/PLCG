/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197932
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (-(max((((/* implicit */unsigned long long int) ((var_12) - (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))), (min((var_9), (((/* implicit */unsigned long long int) (unsigned short)5104)))))))))));
    var_14 = ((((/* implicit */_Bool) (+(var_6)))) ? (((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */long long int) (~(((/* implicit */int) var_1))))))) : (((((var_4) + (9223372036854775807LL))) << (((min((var_9), (((/* implicit */unsigned long long int) var_4)))) - (6442727253699197396ULL))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_1] [i_1] [8LL])), (var_2)))) ? (((((/* implicit */_Bool) (unsigned short)60445)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)60436)))) : (((/* implicit */int) var_5)))))));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)4773))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (var_12)))) : ((~(-468900107587785547LL))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (var_12))))))));
                    var_16 = ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)2))) >= (min((-468900107587785559LL), (((/* implicit */long long int) var_10))))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 - 3] [i_2 + 1] [i_2 + 1]))))));
                    var_17 ^= ((/* implicit */signed char) ((unsigned int) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2 + 2])) ? (var_3) : (((/* implicit */long long int) arr_5 [i_0] [(short)11] [i_0])))))));
                }
            } 
        } 
    } 
}
