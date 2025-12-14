/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33072
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
    var_13 = ((/* implicit */long long int) (+(((((((/* implicit */int) (unsigned short)1256)) ^ (var_7))) ^ ((-(((/* implicit */int) (unsigned char)102))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_2] = ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (2034661644U))))) * (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)11403)) * (((/* implicit */int) var_2)))) / (arr_7 [i_0] [i_0 - 2] [i_0 + 3])))));
                    arr_10 [i_1] = ((((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((((/* implicit */int) arr_0 [i_1])) + (1958709548))))) >= (((/* implicit */int) (signed char)-122)));
                }
            } 
        } 
    } 
}
