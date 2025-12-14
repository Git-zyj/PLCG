/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22393
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
    var_19 = ((/* implicit */signed char) max((var_18), (((/* implicit */unsigned short) var_1))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 14; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) (!(((max((((/* implicit */unsigned long long int) 268427264)), (16617370650555108298ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)93)))))));
                    var_21 = ((/* implicit */short) var_9);
                    var_22 = ((/* implicit */unsigned int) arr_6 [i_0] [i_0 + 1] [i_0 - 2]);
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)67))) / (9223372036854775807LL)));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) ((-9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)142)))));
    var_24 = ((/* implicit */unsigned char) max((var_24), (var_5)));
    var_25 = ((/* implicit */unsigned short) max((((var_0) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) (!(var_2))))));
}
