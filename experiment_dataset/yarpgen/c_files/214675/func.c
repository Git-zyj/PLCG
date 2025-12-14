/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214675
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
    var_13 = ((/* implicit */signed char) var_7);
    var_14 = ((min((max((((/* implicit */unsigned long long int) -1095346467)), (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_10)) & (var_9)))))) >> (((((int) ((((/* implicit */_Bool) 1095346466)) ? (var_3) : (var_9)))) - (1551327370))));
    var_15 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                arr_8 [(signed char)8] [i_1] [i_0] = ((/* implicit */signed char) var_9);
                var_16 -= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_10)) ? (((long long int) arr_3 [i_1 + 1])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [13LL] [(short)8])) != (((/* implicit */int) (signed char)75)))))))));
            }
        } 
    } 
}
