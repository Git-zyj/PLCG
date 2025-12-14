/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30320
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
    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) - (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((short) var_3))) : (((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */int) var_11)) : (var_4)))))) ? (((var_13) - (((/* implicit */int) ((signed char) 1789548485U))))) : (max((((((/* implicit */int) (unsigned char)84)) + (((/* implicit */int) (unsigned char)180)))), (((/* implicit */int) ((unsigned char) var_2)))))));
    var_19 += (((_Bool)1) ? (((/* implicit */unsigned int) -1920393909)) : (((unsigned int) max((((/* implicit */unsigned int) (unsigned char)202)), (9U)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((long long int) 1U));
                    arr_9 [i_1] [i_1] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
                }
            } 
        } 
    } 
}
