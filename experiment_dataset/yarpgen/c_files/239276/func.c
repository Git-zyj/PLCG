/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239276
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 - 2] [i_2 - 1])) ? (((/* implicit */unsigned int) (+(arr_7 [i_1 + 2] [i_1 + 2] [i_2 - 3])))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (2161114215U)))));
                    arr_9 [i_2 - 3] [i_1 + 1] [i_0] = ((/* implicit */long long int) ((-9223372036854775796LL) == (((/* implicit */long long int) ((/* implicit */int) arr_5 [(signed char)17] [(signed char)17])))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_4);
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))));
}
