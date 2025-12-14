/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210473
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
    var_15 = ((/* implicit */int) ((-3467549382150867014LL) | (-3467549382150867016LL)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned short) ((825050973) + (-825050974)));
                    arr_8 [i_1] [i_0] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((max((-3467549382150866989LL), (((/* implicit */long long int) 825050973)))), (((/* implicit */long long int) -825050973))))) / (((((/* implicit */_Bool) (signed char)-69)) ? (15856576980178649087ULL) : (max((((/* implicit */unsigned long long int) (short)-31580)), (1769870036453582667ULL)))))));
                }
            } 
        } 
    } 
}
