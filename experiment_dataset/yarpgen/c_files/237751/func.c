/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237751
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
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0)))))), ((-(((-732157247) - (((/* implicit */int) var_7))))))));
    var_17 = ((/* implicit */long long int) 4253747486U);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((var_0) | ((-(((/* implicit */int) (signed char)48))))))), (min((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2] [i_2])), (41219809U)))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0])) % (((((/* implicit */_Bool) arr_5 [i_2] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_2] [i_1]))))));
                }
            } 
        } 
    } 
}
