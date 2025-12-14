/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244088
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
    var_13 = ((short) ((_Bool) ((signed char) var_6)));
    var_14 = var_3;
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0 - 3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_5 [i_0 - 1] [i_0] [(signed char)15])))) : (((unsigned int) arr_4 [i_0] [i_0] [i_0 - 3]))))) ? (((unsigned int) ((signed char) arr_5 [i_0] [i_0] [6U]))) : (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned int) arr_2 [1U])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [i_1] [i_0] [i_0 - 3])))))));
                var_16 = ((/* implicit */unsigned short) arr_5 [i_0] [(unsigned char)8] [i_1 - 1]);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((signed char) var_3));
}
