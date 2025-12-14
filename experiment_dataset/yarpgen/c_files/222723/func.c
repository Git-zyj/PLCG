/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222723
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */int) ((max((arr_4 [i_1 - 1] [i_1]), (arr_4 [i_1 - 1] [i_1]))) - (((((/* implicit */_Bool) arr_4 [i_1 - 1] [9])) ? (((/* implicit */long long int) 719650202)) : (arr_4 [i_1 - 1] [i_1 - 1])))));
                var_11 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(1379067008)))) | (((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (arr_4 [(unsigned short)9] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned char)0])))))))) ? (((18446744073709551591ULL) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
            }
        } 
    } 
    var_12 |= ((/* implicit */signed char) ((var_9) | (var_4)));
}
