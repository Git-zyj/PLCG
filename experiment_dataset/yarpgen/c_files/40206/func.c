/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40206
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
    var_18 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)253)) || (((/* implicit */_Bool) (unsigned char)84))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned char)14] [i_1 + 2] [(unsigned char)14])) ? (((/* implicit */int) arr_2 [(unsigned char)6] [i_1] [i_1 + 4])) : (((/* implicit */int) arr_2 [(unsigned char)4] [i_0 + 2] [i_0 + 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) : (((/* implicit */int) arr_2 [(unsigned char)14] [(unsigned char)14] [(unsigned char)14]))));
                    arr_7 [i_1] [i_1 + 1] [i_1] = arr_5 [i_1] [i_1] [i_1];
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) << (((((((/* implicit */int) var_4)) * (((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (unsigned char)41)))))) - (4745)))));
}
