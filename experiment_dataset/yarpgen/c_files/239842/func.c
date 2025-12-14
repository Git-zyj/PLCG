/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239842
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
    var_15 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) (unsigned short)65535))) >= (((/* implicit */int) (unsigned char)57)))))) : (min((((/* implicit */unsigned int) ((unsigned short) var_3))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5)))))));
    var_16 = ((/* implicit */short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)95))))))) ? (max((((/* implicit */unsigned int) ((unsigned char) (unsigned char)134))), (min((2519983102U), (((/* implicit */unsigned int) (_Bool)1)))))) : (3959142296U)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)4413)) ? (((/* implicit */int) (!(var_11)))) : ((~(((/* implicit */int) ((335824996U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)135))))))))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4410))) : (0U))))));
            }
        } 
    } 
}
