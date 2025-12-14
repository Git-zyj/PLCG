/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29301
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
    var_16 = ((/* implicit */unsigned char) ((unsigned long long int) 18446744073709551615ULL));
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70))) != (18446744073709551591ULL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((short) (~(6539722306034875942ULL))));
                arr_5 [i_0] [(short)11] = ((unsigned long long int) var_8);
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5560)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_12))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-8))))) ? ((+(((/* implicit */int) (unsigned char)129)))) : (((/* implicit */int) ((_Bool) (short)-15218)))))) : (min((((/* implicit */unsigned long long int) ((var_2) < (var_1)))), (((unsigned long long int) (signed char)117))))));
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (_Bool)1))));
            }
        } 
    } 
}
