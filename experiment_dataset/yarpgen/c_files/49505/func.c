/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49505
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
    var_20 = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) var_10)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))), (((long long int) var_15)))), (((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) var_14)))))));
    var_21 = ((/* implicit */unsigned int) var_3);
    var_22 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */int) arr_2 [i_0 - 1]);
                var_24 = ((/* implicit */unsigned char) max((((/* implicit */signed char) ((_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 2]))), ((signed char)116)));
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (arr_3 [(signed char)13] [(_Bool)1] [i_0 + 1])))) ? (((long long int) arr_3 [i_1] [i_1] [i_0 - 2])) : (((/* implicit */long long int) max((arr_3 [i_0] [(signed char)21] [i_0 + 1]), (((/* implicit */int) (short)10974)))))));
            }
        } 
    } 
}
