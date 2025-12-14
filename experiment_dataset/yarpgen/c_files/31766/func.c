/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31766
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
    var_16 = (-(((/* implicit */int) (unsigned char)255)));
    var_17 *= (~(((/* implicit */int) ((((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (unsigned char)169)))) == (var_12)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) ^ (arr_8 [i_0] [i_0] [i_0] [(unsigned short)12])))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (unsigned short)65535);
                    var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) (short)6568)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(unsigned char)7] [i_2] [i_1 - 3] [(unsigned char)6]))))) : (((/* implicit */int) (signed char)-118))))));
                }
            } 
        } 
    } 
}
