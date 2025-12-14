/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224465
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
    var_20 = ((/* implicit */int) var_16);
    var_21 *= ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned char) (-((~(arr_5 [i_1])))));
                var_23 = var_5;
                var_24 = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_2 [i_0]))))));
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */unsigned long long int) max((arr_5 [i_1]), (arr_5 [i_1])))), (arr_3 [i_0] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14)))))));
                var_26 *= ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_4 [i_0]))));
            }
        } 
    } 
}
