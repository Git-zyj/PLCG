/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246784
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_11))));
                    arr_7 [i_0] [i_1] [i_2] [i_0] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? (var_11) : (var_1))) >= ((-(((/* implicit */int) var_8))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 4; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) min((max((max((var_1), (var_1))), (((/* implicit */int) ((unsigned short) var_2))))), (((/* implicit */int) var_3))));
                                var_16 = ((/* implicit */short) var_8);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_1] [i_2] |= ((/* implicit */short) (~(min((max((13404816325624753818ULL), (((/* implicit */unsigned long long int) var_8)))), (min((((/* implicit */unsigned long long int) var_1)), (var_6)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_3);
}
