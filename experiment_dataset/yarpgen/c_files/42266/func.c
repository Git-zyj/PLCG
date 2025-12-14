/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42266
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
    var_20 = ((/* implicit */unsigned long long int) (signed char)-122);
    var_21 = ((/* implicit */signed char) var_6);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_22 *= ((/* implicit */signed char) max((((/* implicit */long long int) arr_3 [i_0 + 1])), (((long long int) var_14))));
                    var_23 = ((/* implicit */unsigned int) arr_2 [i_2] [i_1] [i_0]);
                }
            } 
        } 
    } 
    var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) var_5))));
}
