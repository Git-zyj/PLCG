/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40713
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-4234)) < (((/* implicit */int) (short)4234))));
    var_17 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) var_5);
                arr_5 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)5073)))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) ((4008760152U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18)))))));
}
