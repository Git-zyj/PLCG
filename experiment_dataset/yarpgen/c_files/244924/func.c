/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244924
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_19 ^= ((((var_17) + (9223372036854775807LL))) >> (((((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_4)))) - (18319U))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_9)) / (((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2] [i_3] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_5 [i_0] [i_1] [i_3]))))))));
                            var_21 = ((/* implicit */int) ((unsigned char) ((_Bool) var_9)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((((/* implicit */long long int) var_6)) != (((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_18))))))) ? (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */long long int) var_8))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_13)))) : (var_5)))));
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                {
                    var_23 = ((/* implicit */int) (-(((var_16) & (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_6])))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            {
                                arr_22 [i_4] [i_4] [i_4] [i_8] &= ((/* implicit */long long int) arr_13 [i_4] [i_5]);
                                var_24 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_5]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
                        {
                            {
                                arr_28 [i_4] [i_6] [i_4] [i_4] [i_4] = (((-(var_17))) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5] [i_5]))));
                                var_25 = ((/* implicit */unsigned char) var_4);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
