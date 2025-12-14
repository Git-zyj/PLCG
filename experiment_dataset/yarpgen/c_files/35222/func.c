/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35222
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_2))));
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) + ((+(var_12)))));
                }
            } 
        } 
    } 
    var_14 += ((/* implicit */long long int) var_5);
}
