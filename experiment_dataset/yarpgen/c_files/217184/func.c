/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217184
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (((~(-91979370))) | (((int) var_5))))) == (max((arr_7 [i_0] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-24306)) + (((/* implicit */int) (short)-24314)))))))));
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (~(((((/* implicit */int) ((_Bool) (_Bool)1))) << (((arr_5 [i_0] [i_1] [i_2]) + (216496733))))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) var_1);
    var_17 = ((/* implicit */signed char) (~(((((unsigned long long int) var_10)) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) && (var_6)))))))));
    var_18 = ((/* implicit */unsigned short) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) != (var_9)))))));
}
