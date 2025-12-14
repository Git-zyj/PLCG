/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31332
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
    var_10 = ((/* implicit */unsigned short) ((long long int) min((((((/* implicit */int) (unsigned char)72)) / (((/* implicit */int) var_1)))), (((/* implicit */int) ((signed char) 6246061152985689582ULL))))));
    var_11 = ((/* implicit */unsigned short) (short)-5581);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) ((int) max((((/* implicit */long long int) ((-1) <= (((/* implicit */int) var_3))))), (max((var_7), (((/* implicit */long long int) 378495205)))))));
                var_12 = ((/* implicit */signed char) var_5);
                var_13 = ((/* implicit */int) var_8);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) var_9)), (max((var_5), (((/* implicit */unsigned int) var_9)))))), (((/* implicit */unsigned int) ((_Bool) min((((/* implicit */int) var_2)), (var_9)))))));
}
