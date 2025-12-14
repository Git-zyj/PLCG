/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202583
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 ^= ((/* implicit */_Bool) var_11);
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (!(((((/* implicit */int) arr_3 [i_0] [i_1] [i_1 + 2])) >= (((/* implicit */int) var_12)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (((((_Bool)0) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)0)))) - (((/* implicit */int) var_10))));
    var_18 += ((/* implicit */unsigned short) var_0);
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */int) (unsigned short)30719)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (_Bool)1))))))))))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)30719)) < (((((/* implicit */_Bool) (unsigned short)33188)) ? (((/* implicit */int) (unsigned short)34817)) : (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (short)-31754))))))))))));
}
