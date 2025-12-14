/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203934
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 7; i_1 += 3) 
        {
            {
                arr_6 [(unsigned short)2] |= ((/* implicit */int) arr_4 [1] [i_1 + 4] [(unsigned char)4]);
                var_10 = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_2 [i_1]))))), (((unsigned long long int) arr_2 [i_0])))));
            }
        } 
    } 
    var_11 = ((/* implicit */_Bool) var_5);
    var_12 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) <= (((((/* implicit */_Bool) var_7)) ? (var_2) : (var_2))))))));
}
