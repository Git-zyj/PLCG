/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242343
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_7)), (3784981451U))) << (((((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */int) var_9)))) - (1429417570)))))) / (((((/* implicit */_Bool) (short)-17904)) ? (((/* implicit */unsigned long long int) var_13)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29113))) | (10517025033784489126ULL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] [i_1 - 2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_17)) : (var_5))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))))) & (max((arr_3 [i_0] [i_1 + 1]), (arr_3 [i_0] [i_1 + 1])))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */int) min((var_9), (((/* implicit */short) (signed char)117))))), (var_14))) : (((((((/* implicit */_Bool) 33554432)) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) var_6)))) | (((/* implicit */int) var_11))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)65535);
            }
        } 
    } 
}
