/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240028
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
    var_11 = ((/* implicit */unsigned char) (unsigned short)31025);
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) var_1))) << (((((/* implicit */int) (unsigned short)31025)) - (31020)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) var_2);
                arr_7 [i_0] = var_4;
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_1);
}
