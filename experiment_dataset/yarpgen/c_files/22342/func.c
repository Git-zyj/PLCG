/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22342
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1 - 3] = ((/* implicit */unsigned long long int) arr_4 [i_1] [16]);
                arr_6 [i_0] [i_1 - 3] &= ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_1 [i_0 + 2]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) var_12);
    var_16 -= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)35)) >= (634760504))))));
}
