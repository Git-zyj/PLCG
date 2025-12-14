/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210583
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_3] [i_4])) ? ((-(((((/* implicit */_Bool) (signed char)7)) ? (arr_5 [(_Bool)1] [i_1]) : (2753745726568579069ULL))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-11)))))))));
                                var_17 = ((/* implicit */unsigned long long int) (signed char)-8);
                                var_18 = ((/* implicit */signed char) max(((-((-(18446744073709551615ULL))))), (min(((((_Bool)1) ? (2753745726568579069ULL) : (arr_1 [i_4]))), (max((((/* implicit */unsigned long long int) arr_2 [i_2])), (var_9)))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) ((var_15) >> (((max((arr_0 [i_1]), (((/* implicit */unsigned long long int) var_4)))) - (16228748742718013938ULL))))));
            }
        } 
    } 
    var_19 -= ((/* implicit */signed char) var_6);
}
