/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206088
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
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned char)47), (((/* implicit */unsigned char) arr_6 [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) (+(min((arr_5 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) var_8)) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1099081242)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2])))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 9223372036854775807LL);
                    arr_9 [i_2] [i_2] = ((/* implicit */long long int) var_11);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_2);
    var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
    var_22 = var_8;
}
