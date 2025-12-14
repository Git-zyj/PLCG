/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198879
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
    var_14 = ((/* implicit */_Bool) (short)893);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((short) (+(((/* implicit */int) ((((/* implicit */int) var_4)) >= (2147483647)))))));
                                var_16 = ((/* implicit */unsigned short) ((min((arr_4 [i_1 - 2] [i_1 - 2]), (((/* implicit */unsigned long long int) 0U)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_4 - 2] [i_1 - 2])) ? ((~(-794269722))) : (min((var_8), (((/* implicit */int) arr_13 [i_3] [i_1])))))))));
                                var_17 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (-(818614324U)))) ? (((/* implicit */int) arr_12 [i_0] [i_1])) : (var_0))));
                                var_18 = ((/* implicit */short) arr_10 [i_4] [i_1] [i_1]);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */long long int) (signed char)-13);
            }
        } 
    } 
    var_20 ^= ((/* implicit */int) var_7);
}
