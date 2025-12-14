/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190750
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
    for (int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */short) max(((+(var_11))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) ((int) var_10))))))));
                    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [(short)6])) ? (arr_4 [i_1]) : (max((var_4), (((/* implicit */long long int) var_9))))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((var_11) != (((/* implicit */long long int) ((/* implicit */int) var_6))))))) - (min((arr_1 [i_1]), (((/* implicit */long long int) var_10)))))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-62))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_13 -= ((/* implicit */signed char) arr_4 [i_1]);
                                var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) == (max((arr_13 [i_0] [i_1] [i_0 - 1] [i_3 - 1]), (arr_13 [i_0] [i_1] [i_0 - 1] [i_3 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 ^= var_0;
    var_16 &= ((/* implicit */int) (signed char)-62);
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        for (long long int i_6 = 1; i_6 < 13; i_6 += 2) 
        {
            {
                var_17 = arr_16 [i_5] [i_6 - 1] [i_5] [i_6 - 1] [i_6 - 1];
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (signed char)62))));
            }
        } 
    } 
}
