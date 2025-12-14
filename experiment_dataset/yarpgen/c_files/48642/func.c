/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48642
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)29829)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) var_8)))))))) ? (max((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (signed char)-1))))), (((((/* implicit */_Bool) var_14)) ? (var_3) : (((/* implicit */int) (unsigned short)65535)))))) : (((/* implicit */int) var_11))));
    var_17 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))), ((+(((16262717128631370606ULL) << (((var_3) - (876711613)))))))));
                var_18 |= ((/* implicit */int) ((min((4294967295U), (((arr_4 [i_0 - 3]) >> (((/* implicit */int) var_8)))))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-4)))))));
            }
        } 
    } 
}
