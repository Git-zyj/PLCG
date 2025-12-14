/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25393
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) -1242194912))) << (((((/* implicit */int) var_4)) + (75)))));
    var_15 &= min((((unsigned char) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_0))))), (((/* implicit */unsigned char) ((signed char) var_13))));
    var_16 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) var_3);
                arr_6 [i_1] [9] = min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (var_5)))) : (max((1657619618), (((/* implicit */int) (unsigned char)233))))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) - (((((/* implicit */_Bool) var_13)) ? (var_13) : (var_13))))));
                arr_7 [i_1] [i_0] &= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_1])) - (((/* implicit */int) ((unsigned char) arr_0 [6ULL] [i_1])))))) + (min((((/* implicit */long long int) arr_3 [i_1 - 1] [i_1 - 3] [i_1 - 4])), (arr_4 [i_1 - 4] [i_1 - 4])))));
            }
        } 
    } 
}
