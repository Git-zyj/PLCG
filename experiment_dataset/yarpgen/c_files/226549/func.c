/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226549
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) var_9);
                var_18 = ((/* implicit */_Bool) min((((unsigned long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0]))));
                var_19 = ((/* implicit */signed char) arr_5 [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) ((var_12) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))), (((((/* implicit */int) var_7)) | (((/* implicit */int) var_9))))));
    var_21 = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned long long int) var_14))))))));
    var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_13))));
}
