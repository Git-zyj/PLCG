/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22253
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_6 [(unsigned char)4] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_3 [i_2]);
                    arr_7 [i_2] [(short)0] [i_0] = ((/* implicit */long long int) arr_4 [(signed char)1] [i_1]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((var_2) ? (var_9) : (((/* implicit */int) (short)0))))) ? (((((/* implicit */_Bool) (unsigned short)15244)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3)))))) : (((/* implicit */unsigned long long int) min((-9223372036854775805LL), (((/* implicit */long long int) var_12)))))));
    var_14 = ((((/* implicit */_Bool) (-((-(((/* implicit */int) (short)29445))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28499))) % (5808684109089432312LL))), (((/* implicit */long long int) (-(((/* implicit */int) var_4))))))));
}
