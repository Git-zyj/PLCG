/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34900
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_0 - 2] [i_0 - 2] [i_2] [i_2] |= ((/* implicit */int) var_7);
                    arr_9 [i_0 + 4] [i_2] = ((/* implicit */signed char) var_5);
                    arr_10 [i_0 + 4] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) (signed char)30)) : (((/* implicit */int) var_2))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_8);
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
}
