/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224674
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
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_11 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((unsigned long long int) var_7)) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8)))))))));
                    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (var_7))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_7))))))));
                    var_13 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) var_3)), (var_7))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5))))));
                    arr_8 [i_2] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) ((max((var_6), (((/* implicit */long long int) var_10)))) == (((/* implicit */long long int) min((var_10), (((/* implicit */int) var_1)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
    var_15 = ((/* implicit */unsigned long long int) (-(var_6)));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? ((((((_Bool)1) || (((/* implicit */_Bool) -5098190816153926579LL)))) ? (((/* implicit */unsigned long long int) ((long long int) var_0))) : (min((((/* implicit */unsigned long long int) var_6)), (var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_4) * (var_4)))) ? (((var_10) * (((/* implicit */int) var_3)))) : (((/* implicit */int) ((var_4) == (var_4)))))))));
    var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (max((var_6), (((/* implicit */long long int) var_1))))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (var_10)))) / (max((var_9), (((/* implicit */unsigned long long int) var_2))))))));
}
