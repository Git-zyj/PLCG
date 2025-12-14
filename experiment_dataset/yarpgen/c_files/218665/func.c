/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218665
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
    var_18 += ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */short) (((_Bool)1) && ((_Bool)1)))), (min((var_12), ((short)17974)))))), (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)61)) - (32))))))))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (_Bool)1))));
                arr_5 [i_0] = ((/* implicit */short) (((-(arr_2 [i_1 - 2]))) < (((/* implicit */long long int) ((/* implicit */int) ((short) (-(3732052040U))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) (-(var_2)));
}
