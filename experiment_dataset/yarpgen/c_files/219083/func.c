/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219083
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
    var_16 &= ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_17 ^= ((/* implicit */unsigned short) (((-(arr_0 [2]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_13))))));
                var_18 += ((/* implicit */unsigned char) var_13);
                arr_4 [i_0] [i_0] = (!((!(((/* implicit */_Bool) min((((/* implicit */short) (signed char)-30)), ((short)-12945)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) <= (var_15)))), (var_2)));
    var_20 = ((/* implicit */short) ((((/* implicit */int) (short)12940)) >> (((((/* implicit */int) (unsigned char)227)) - (197)))));
}
