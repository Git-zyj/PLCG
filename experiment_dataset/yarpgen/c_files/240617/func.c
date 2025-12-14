/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240617
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
    var_14 = ((/* implicit */signed char) var_11);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                var_15 += ((/* implicit */long long int) ((((max((((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (var_0))), ((+(arr_3 [i_0]))))) + (2147483647))) >> (((((/* implicit */int) ((unsigned char) arr_4 [i_0]))) - (32)))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) arr_4 [i_0]);
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 17; i_2 += 3) 
                {
                    for (long long int i_3 = 4; i_3 < 15; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) (-(var_4)));
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (+(-9223372036854775807LL))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) arr_3 [i_0 - 3]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_12)), (var_4)));
}
