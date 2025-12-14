/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30264
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
    var_12 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0ULL))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) max((18446744073709551600ULL), (19ULL)));
                                var_14 = ((/* implicit */int) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_11 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0])), (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_4)) : (18446744073709551614ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((18446744073709551611ULL) | (arr_2 [i_0])))) ? (arr_0 [i_1 + 3]) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_11))))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
    } 
    var_16 ^= ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (min((((long long int) 18446744073709551610ULL)), (((/* implicit */long long int) var_3)))));
}
