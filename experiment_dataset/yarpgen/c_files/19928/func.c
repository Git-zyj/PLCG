/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19928
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_5 [i_0] [i_0])), (((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */int) arr_6 [i_2] [i_1 + 2] [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_0] [i_0]))))));
                    arr_7 [i_0] [i_0] [i_1 + 4] [i_1 + 4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_1 - 2])), (var_11)))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_1 - 2]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_1 + 4]))))) : (min((((/* implicit */unsigned long long int) var_16)), (18446744073709551615ULL)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((_Bool) (signed char)77)))))));
                                var_21 = ((unsigned char) (-(((/* implicit */int) min(((unsigned char)76), ((unsigned char)0))))));
                                var_22 = ((/* implicit */_Bool) (-(((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-14718)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = var_5;
}
