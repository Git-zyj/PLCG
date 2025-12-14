/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230851
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) 1608391541U))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_13 ^= ((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                            var_14 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_1] [i_0 - 1]))));
                            var_15 += ((/* implicit */long long int) arr_12 [i_0 - 1] [i_1] [i_2] [i_3]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            {
                var_16 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) arr_6 [i_4] [i_5] [i_5] [i_4]))))) ? (min((arr_1 [i_4]), (((/* implicit */unsigned int) (signed char)-22)))) : (max((((/* implicit */unsigned int) arr_6 [i_5] [i_5] [i_4] [i_4])), (arr_5 [i_4])))));
                var_17 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)179)) || ((_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned long long int) (~(-7617071764270204747LL)))), (max((((/* implicit */unsigned long long int) (signed char)127)), (var_0)))))));
            }
        } 
    } 
}
