/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205575
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_13 |= ((/* implicit */unsigned char) (signed char)3);
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)37254)) + (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) (unsigned char)101);
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) var_7)))))));
    var_16 = (unsigned short)65535;
}
