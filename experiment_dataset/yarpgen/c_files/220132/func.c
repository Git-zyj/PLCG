/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220132
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
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                arr_7 [(_Bool)1] [i_0] [i_0 + 2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) - (((/* implicit */long long int) arr_0 [i_0]))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) + (427043909314953100ULL))), (((/* implicit */unsigned long long int) arr_3 [i_0]))))));
                var_14 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_3 [i_0]))))));
                var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(unsigned char)4])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (746962744069764355ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))))) | (arr_5 [i_1] [i_0])));
                arr_8 [i_0] [i_1 - 2] [(unsigned char)15] = ((/* implicit */int) var_5);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_13);
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)65514))));
    var_18 = ((/* implicit */unsigned int) (unsigned short)35);
}
