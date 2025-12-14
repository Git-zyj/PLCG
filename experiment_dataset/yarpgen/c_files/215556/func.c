/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215556
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
    var_11 = ((/* implicit */long long int) var_8);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */int) arr_6 [i_2] [i_0] [i_2] [i_2]);
                    var_12 = ((/* implicit */signed char) (short)-15622);
                    arr_8 [i_0] [i_2] [9] [i_0] = ((/* implicit */signed char) (unsigned short)29581);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) ((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)126)))));
}
