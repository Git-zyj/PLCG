/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210932
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
    var_13 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_0] [(unsigned char)6] = ((/* implicit */int) ((long long int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_5 [i_2] [i_0] [i_0])))));
                    arr_9 [i_2] [i_2] [i_2] [14LL] = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) arr_2 [i_1] [i_1] [i_2])) & (((((/* implicit */_Bool) (unsigned short)7641)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 - 1])))))))));
                    arr_10 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(signed char)8] [i_1 - 1] [(signed char)8])) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_2] [i_1 - 1] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_2 - 1])))) : (((/* implicit */int) ((short) arr_5 [i_1] [i_1 - 1] [i_1])))));
                }
            } 
        } 
    } 
}
