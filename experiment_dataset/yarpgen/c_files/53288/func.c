/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53288
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
    var_20 = ((((/* implicit */_Bool) var_10)) ? ((+(((9225772866158724780ULL) << (((var_18) - (15044675344211882648ULL))))))) : (min((((unsigned long long int) var_4)), (((var_7) + (9609005932588001113ULL))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (843932839384658073ULL)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_22 = ((8438921286382615888ULL) / (15382150821744411807ULL));
                                arr_13 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) max((3012914030406770292ULL), (var_4))))))));
                                arr_14 [8ULL] [i_0] [13ULL] [i_2] [9ULL] [13ULL] [i_4] = ((((/* implicit */_Bool) var_11)) ? ((-((~(602856827955236521ULL))))) : (((((/* implicit */_Bool) 4398045462528ULL)) ? (18446744073709551615ULL) : (0ULL))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) 18446744073709551615ULL)))))));
                }
            } 
        } 
    } 
}
