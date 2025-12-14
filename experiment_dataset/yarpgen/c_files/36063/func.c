/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36063
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
    var_12 = ((/* implicit */signed char) var_8);
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((_Bool) -3905763815299129528LL)))))) ? (max((min((429354170U), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)24639))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [17U] [i_1 + 2] [(short)7] = ((/* implicit */unsigned long long int) (~(min((2443496714U), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-4116)))))))));
                    var_14 = ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
                }
            } 
        } 
    } 
}
