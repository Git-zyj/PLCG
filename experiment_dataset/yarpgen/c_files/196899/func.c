/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196899
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) arr_4 [(signed char)11] [i_1]);
                arr_6 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((5321004656801072864ULL), (((/* implicit */unsigned long long int) 1673765916)))))));
                var_15 = ((/* implicit */unsigned char) 1673765916);
                var_16 = ((/* implicit */long long int) arr_1 [i_1]);
            }
        } 
    } 
    var_17 = ((/* implicit */int) min((var_17), (max((-1673765939), (((/* implicit */int) (_Bool)1))))));
    var_18 = ((/* implicit */unsigned short) ((min((max((((/* implicit */long long int) var_0)), (var_9))), (((/* implicit */long long int) var_10)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_11)))));
}
