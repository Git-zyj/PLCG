/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47674
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((18ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14)))))))) ? (((/* implicit */int) ((unsigned short) ((short) var_12)))) : (((/* implicit */int) (unsigned char)238))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */unsigned char) ((short) arr_0 [i_0]));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((signed char) 875121305U)))));
                }
            } 
        } 
    } 
}
