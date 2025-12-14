/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217877
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
    var_19 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((arr_5 [i_1] [i_1] [i_1 - 1]) + (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */long long int) (-2147483647 - 1))) : (arr_4 [i_1]))))))));
                    var_20 *= ((/* implicit */unsigned char) (signed char)70);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_9);
}
