/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206522
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
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6144)) * (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_6 [i_0 + 1])))))));
                    arr_10 [i_0 + 1] [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)99);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (unsigned short)6142);
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (~(max((((/* implicit */int) (short)-22051)), (((((/* implicit */_Bool) 1707424989U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)59392)))))))))));
    var_16 = ((/* implicit */unsigned int) var_6);
}
