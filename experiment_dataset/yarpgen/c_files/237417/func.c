/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237417
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
    var_20 &= ((/* implicit */unsigned short) var_16);
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((max((((/* implicit */int) (unsigned short)65535)), (arr_0 [i_0 - 4] [i_0 - 4]))) >= (max((((/* implicit */int) arr_3 [i_0 - 1])), (arr_0 [i_0 + 1] [1])))));
                    arr_8 [0LL] [0LL] [i_2] = ((/* implicit */long long int) var_15);
                    var_22 = ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1]))) : (arr_6 [i_2])));
                    arr_9 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(arr_0 [i_2] [i_1])));
                }
            } 
        } 
    } 
    var_23 *= ((/* implicit */unsigned char) var_15);
    var_24 = ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (var_6)))));
}
