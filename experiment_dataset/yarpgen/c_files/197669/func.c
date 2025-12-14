/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197669
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (var_2) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551596ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_10))))) ? (max((((/* implicit */unsigned long long int) var_6)), (var_1))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)0)), (4423852507957941108LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 24; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) min((var_21), (((0) <= (((/* implicit */int) (_Bool)0))))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_9 [i_3 - 2] [i_3] [i_3 - 3] [i_3] [i_3 + 1] [i_3 - 1])), (((((/* implicit */_Bool) 1ULL)) ? (18446744073709551615ULL) : (arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [(unsigned short)0]))))) <= (((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((unsigned long long int) 18446744073709551615ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (((/* implicit */short) arr_2 [i_4])))))))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) ((min((var_4), (arr_7 [i_1]))) ? (((/* implicit */int) (_Bool)1)) : (((arr_7 [i_1]) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) var_16))))));
                var_24 = ((/* implicit */unsigned short) var_7);
            }
        } 
    } 
    var_25 = ((/* implicit */int) var_14);
    var_26 = ((/* implicit */signed char) ((var_16) ? (((((var_12) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ? (((var_15) / (var_0))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)79)))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_19))))))));
}
