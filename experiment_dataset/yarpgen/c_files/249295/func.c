/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249295
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)60029))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((var_15) ? ((-(var_13))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)60)))))))));
    }
    var_16 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_15)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)65466))))))) : ((+(3921026010U))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 2; i_1 < 14; i_1 += 1) 
    {
        for (int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((((/* implicit */int) ((2026422716U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) >= ((+(((/* implicit */int) arr_4 [i_1] [i_2])))))) ? (((/* implicit */int) (unsigned short)31013)) : ((-(((/* implicit */int) (signed char)6)))))))));
                arr_8 [i_1] = ((/* implicit */signed char) ((int) (+(((/* implicit */int) arr_6 [i_1] [i_1 - 1])))));
                arr_9 [(unsigned short)2] [i_2] |= ((/* implicit */unsigned short) (~(arr_7 [i_1 + 2])));
            }
        } 
    } 
}
