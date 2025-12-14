/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206018
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
    var_14 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 6; i_2 += 3) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) > (var_5)));
                    var_15 = ((/* implicit */_Bool) max((var_15), (max(((_Bool)0), ((_Bool)1)))));
                    var_16 &= var_2;
                    arr_7 [i_0] [i_2] [i_1] [i_2] = ((/* implicit */short) min((var_0), (((/* implicit */unsigned long long int) var_3))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_2 + 1])))))));
                }
            } 
        } 
    } 
}
