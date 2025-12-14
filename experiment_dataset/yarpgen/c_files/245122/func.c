/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245122
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
    var_16 += ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_11)), (var_14))))))));
    var_17 = ((/* implicit */_Bool) var_12);
    var_18 = (+((+(((((/* implicit */_Bool) var_9)) ? (var_3) : (var_4))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)34))) : (((arr_3 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0] [i_0])) | (((/* implicit */int) min((min(((unsigned short)59115), (((/* implicit */unsigned short) (unsigned char)34)))), (((/* implicit */unsigned short) min((arr_0 [(unsigned short)16]), (arr_0 [(unsigned short)10]))))))))))));
                var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [i_0] [i_0])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)64)) : (var_2)))))), (min((((/* implicit */unsigned int) arr_2 [i_0])), (arr_3 [i_0])))));
            }
        } 
    } 
}
