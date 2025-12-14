/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47897
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
    var_19 = ((/* implicit */long long int) max((var_19), (var_8)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) min((arr_6 [i_0] [i_1] [(unsigned char)7]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) - (arr_1 [i_0] [i_0]))))))))))));
                var_21 = ((int) arr_5 [(unsigned char)10] [i_0] [i_0]);
                arr_8 [i_0] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0]))) | (-9223372036854775793LL)))));
                var_22 += ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [6LL]))));
                arr_9 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((signed char) (-9223372036854775807LL - 1LL))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) var_0))));
}
