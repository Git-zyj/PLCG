/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224905
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                var_20 = ((/* implicit */signed char) var_18);
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) 16031920697508845152ULL)) ? (((/* implicit */unsigned long long int) arr_2 [0] [i_1 - 1])) : (17293822569102704640ULL))) : (((/* implicit */unsigned long long int) 1240023590))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1 - 1]))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 3872295193U)) && (((/* implicit */_Bool) arr_2 [i_1] [i_0]))))) < (max((-107068888), (((/* implicit */int) var_5)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) var_8)), (((int) (-2147483647 - 1)))))) | (((((/* implicit */_Bool) ((889005921) | (((/* implicit */int) var_18))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1415457764) != (var_7))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 67108856)) : (var_1)))))));
}
