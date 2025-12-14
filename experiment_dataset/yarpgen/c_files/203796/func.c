/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203796
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [(unsigned short)6] [(unsigned char)7] = ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)161)) >> (((/* implicit */int) ((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))))));
                var_14 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_2 [i_0] [i_1])))) / (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1017)) && (((/* implicit */_Bool) (unsigned char)5)))))));
                var_15 = ((/* implicit */unsigned char) 640121881U);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
}
