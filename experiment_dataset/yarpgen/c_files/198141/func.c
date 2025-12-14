/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198141
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
    for (int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((-2147483639), (592266991)))), (min((1538791436U), (2756175861U)))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */unsigned long long int) 2756175861U)), (arr_4 [i_0 - 2]))));
            }
        } 
    } 
    var_10 = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) max((var_3), (var_6)))), (((5U) % (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))), (min((((/* implicit */unsigned int) var_6)), (max((1538791435U), (((/* implicit */unsigned int) var_3))))))));
}
