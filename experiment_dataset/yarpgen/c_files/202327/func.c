/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202327
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) var_14))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_4))));
                                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_7 [i_2 - 2] [i_1 + 3] [i_1] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_7 [i_2 + 1] [i_1 + 3] [i_1] [i_3]))) < (((((/* implicit */_Bool) var_4)) ? (arr_7 [i_2 + 1] [i_1 + 3] [i_1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((var_0) != (((/* implicit */int) var_10))));
    var_22 = (!(((/* implicit */_Bool) ((long long int) var_12))));
    var_23 = ((/* implicit */_Bool) (-((+(((/* implicit */int) min((((/* implicit */short) var_13)), (var_10))))))));
    var_24 = ((/* implicit */long long int) (~(max((((unsigned long long int) (unsigned short)25780)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (var_6))))))));
}
