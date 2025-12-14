/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48591
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3971262849U)) ? (min((((/* implicit */int) (unsigned short)12482)), (2110390518))) : (((/* implicit */int) var_7))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_0 - 1]);
                var_17 = var_13;
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_3 - 1])), (arr_2 [i_0 + 2] [i_1 - 2]))))))));
                                var_19 += (-(max((((/* implicit */unsigned long long int) (unsigned short)12482)), (((747738491181869689ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))))))));
                                arr_15 [i_0] [i_4] [i_2] [i_4] [i_4] |= ((/* implicit */signed char) ((max((arr_2 [i_3 + 1] [i_0 + 2]), (arr_2 [i_0 + 1] [i_0 + 1]))) * (((((/* implicit */_Bool) arr_2 [i_1] [i_1 + 1])) ? (arr_2 [i_0 + 3] [i_1]) : (arr_2 [i_0] [i_1 - 1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_16);
}
