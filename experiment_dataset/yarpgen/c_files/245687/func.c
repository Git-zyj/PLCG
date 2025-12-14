/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245687
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
    var_11 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) max((((arr_0 [i_1]) & (514128461))), (max((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (arr_3 [i_1] [3])))));
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 7; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_6))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) max((arr_10 [i_3 - 1] [2] [i_3] [i_3 - 1] [i_4]), ((+(arr_10 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [(short)3])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((unsigned int) ((short) (signed char)0)))) : (var_4)));
}
