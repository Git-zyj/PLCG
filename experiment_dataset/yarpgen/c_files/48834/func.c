/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48834
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
    var_17 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_14)) ? (arr_3 [i_0] [i_0] [5U]) : (((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_3)))), (((/* implicit */int) arr_2 [i_2] [i_1])))))));
                    arr_7 [i_0] [(unsigned char)3] [i_2] [i_0] = ((/* implicit */unsigned long long int) 2013265920U);
                }
            } 
        } 
    } 
}
