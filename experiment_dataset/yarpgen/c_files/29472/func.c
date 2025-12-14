/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29472
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
    var_12 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */int) max((arr_3 [i_2] [i_1]), (arr_4 [i_1 - 2] [i_1 - 3] [i_2 + 2] [i_2 + 1])));
                    var_14 = max((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) arr_1 [i_2 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 - 2]))) : (arr_2 [i_2 - 1]))));
                    var_15 = ((/* implicit */unsigned char) max((((unsigned long long int) min((((/* implicit */unsigned int) var_3)), (var_1)))), (max((((/* implicit */unsigned long long int) arr_1 [i_2 - 2])), (min((var_4), (13510798882111488ULL)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((signed char) max((arr_9 [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 1] [i_2]), (arr_9 [i_2] [i_2 - 2] [i_2] [i_2 - 2] [i_2]))));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_2] [i_2]))));
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_2 [i_3])) ? (((((/* implicit */_Bool) var_8)) ? (17U) : (((/* implicit */unsigned int) -2)))) : (arr_7 [i_4] [i_4] [i_2] [i_4]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
