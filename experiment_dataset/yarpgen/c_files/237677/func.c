/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237677
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
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [(unsigned short)11] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (234881024U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_1]))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_0] [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) (short)32759))))))))));
                    var_11 = ((/* implicit */int) ((min((((/* implicit */unsigned int) var_3)), (arr_6 [i_0 - 1] [i_0 - 1]))) > (((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1])) ? (arr_6 [i_0 - 2] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-30773)))))));
                    var_12 = ((/* implicit */unsigned long long int) var_10);
                    var_13 = ((/* implicit */long long int) ((((/* implicit */long long int) 1173036372)) < (-1LL)));
                    arr_10 [13LL] [i_2] = ((((/* implicit */int) var_7)) * (((/* implicit */int) (_Bool)0)));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) var_7);
}
