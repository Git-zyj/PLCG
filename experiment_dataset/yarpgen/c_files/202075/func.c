/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202075
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (+(((((((((/* implicit */_Bool) (short)28672)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (signed char)112)))) + (2147483647))) >> (((((((/* implicit */unsigned int) 171680982)) + (1129724742U))) - (1301405700U)))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_19)) & (((/* implicit */int) (short)28681))))) ? (((((/* implicit */int) (unsigned char)18)) ^ (((/* implicit */int) (short)28701)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)238))))));
                }
            } 
        } 
    } 
    var_21 = ((max((((/* implicit */int) min(((_Bool)1), (var_14)))), (((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)-121)))))) < (((/* implicit */int) var_3)));
}
