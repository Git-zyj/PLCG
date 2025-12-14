/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44650
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
    var_14 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) ((unsigned char) ((_Bool) (_Bool)1)))) : (((/* implicit */int) (unsigned short)27360))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    var_16 = ((signed char) (!(((/* implicit */_Bool) ((long long int) var_13)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)156))) == (2724752015U)));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
    } 
}
