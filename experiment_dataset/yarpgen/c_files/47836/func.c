/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47836
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
    var_14 = var_2;
    var_15 = ((/* implicit */int) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_16 *= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 9158572436061305781ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) : (724008007U))));
                    var_17 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((signed char) arr_8 [i_1 - 4] [i_1 - 4] [i_1 + 1]))), (((((/* implicit */_Bool) (-(var_11)))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (26ULL) : (arr_9 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) (unsigned short)2957)) ? (2778940276231404615ULL) : (11296998396229414768ULL)))))));
                }
            } 
        } 
    } 
}
