/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238417
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
    var_10 = ((/* implicit */unsigned char) (-(((((var_2) * (((/* implicit */unsigned long long int) var_1)))) * (((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_1) == (((/* implicit */long long int) ((/* implicit */int) var_0))))))))) ? ((-(((unsigned long long int) (short)9142)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    var_12 *= ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_13 += (-(((long long int) var_0)));
                    arr_6 [i_0] [i_0] [2LL] [i_0] = ((/* implicit */short) (_Bool)1);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_2);
}
