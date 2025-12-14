/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41813
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
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_2] = ((/* implicit */signed char) ((547842896) > (547842868)));
                    arr_8 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */long long int) (unsigned char)28)), (708969307006457361LL))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (short)2047)))))));
                }
            } 
        } 
    } 
    var_14 = var_0;
    var_15 *= var_4;
}
