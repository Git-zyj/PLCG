/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234693
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
    var_18 -= ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) ((((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_17))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))))))));
    var_19 = ((/* implicit */_Bool) var_13);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (((+(((/* implicit */int) var_6)))) + (((/* implicit */int) min(((unsigned char)236), (((/* implicit */unsigned char) var_9))))));
                    var_20 = (-(((((/* implicit */int) var_3)) + (((/* implicit */int) (((_Bool)1) || ((_Bool)1)))))));
                }
            } 
        } 
    } 
}
