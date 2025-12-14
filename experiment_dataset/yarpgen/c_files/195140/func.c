/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195140
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
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((_Bool) ((signed char) var_6))))));
    var_13 = ((/* implicit */unsigned char) (((-(((long long int) var_0)))) - (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) arr_3 [i_1]))));
                arr_5 [i_1] [i_0] &= max((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_3 [i_0 - 1])), ((unsigned short)38113)))), (min((((/* implicit */long long int) arr_1 [i_0 - 1] [i_0 + 1])), (arr_0 [i_0 + 2]))));
                var_15 -= ((/* implicit */short) (~(((/* implicit */int) min((min((((/* implicit */unsigned short) arr_4 [i_1] [i_0 + 1] [i_0])), ((unsigned short)0))), (max((((/* implicit */unsigned short) arr_3 [(_Bool)1])), ((unsigned short)65530))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_6);
}
