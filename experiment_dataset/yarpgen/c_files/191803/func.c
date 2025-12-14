/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191803
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */int) ((short) arr_4 [i_1] [i_1] [i_1]));
                arr_6 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))));
                arr_7 [i_0] = ((/* implicit */signed char) ((unsigned long long int) -8486760986261796096LL));
                arr_8 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (short)29482))));
                arr_9 [i_0] [(unsigned char)12] [i_0] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) arr_3 [i_0])))), ((-(((/* implicit */int) (short)29469))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_9);
    var_20 = ((/* implicit */short) var_2);
}
