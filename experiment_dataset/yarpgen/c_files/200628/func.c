/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200628
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
    var_19 = ((/* implicit */unsigned short) (+(((min((((/* implicit */unsigned int) var_1)), (3501821604U))) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
    var_20 = ((/* implicit */signed char) ((max((var_14), (((/* implicit */int) min(((signed char)-30), ((signed char)6)))))) >= (var_14)));
    var_21 = ((/* implicit */signed char) ((((((/* implicit */int) (!(var_5)))) % (((/* implicit */int) var_1)))) >> (((var_16) - (4952900867760710919LL)))));
    var_22 = var_16;
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    var_23 |= arr_2 [i_0] [(signed char)11];
                    var_24 ^= ((/* implicit */unsigned int) arr_1 [i_0] [i_1]);
                }
            } 
        } 
    } 
}
