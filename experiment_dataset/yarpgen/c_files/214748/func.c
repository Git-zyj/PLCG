/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214748
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_11 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((-(arr_8 [i_0] [i_0] [i_0] [i_2])))))) ? (((4259247435316983150LL) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))))) : ((~(((4259247435316983150LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                    arr_12 [(signed char)22] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) (signed char)93)))));
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */signed char) min((min((((var_15) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)89)))), (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) min((var_7), ((signed char)43)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))));
}
