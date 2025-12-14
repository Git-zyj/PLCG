/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209348
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        arr_10 [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) (signed char)7))) >= (((((((/* implicit */unsigned long long int) var_6)) >= (var_4))) ? (((((/* implicit */_Bool) -6749396045500225463LL)) ? (((/* implicit */unsigned long long int) var_3)) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_0] [i_0] [i_0]) >= (var_1)))))))));
                        arr_11 [i_1] [i_3 + 1] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) arr_1 [i_1 - 1])), (arr_2 [i_1 + 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_3 [13LL]))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            {
                                arr_17 [3U] [i_4] [i_2] [i_4] [i_1] = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_5]);
                                arr_18 [i_5] [i_1] [i_4] [8ULL] [i_1 + 2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)7)) - (((/* implicit */int) (unsigned char)0))));
                            }
                        } 
                    } 
                    arr_19 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) var_15);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (var_13)))) ? ((-(-3719912312204637610LL))) : (((/* implicit */long long int) var_10))))) ? (((unsigned int) ((((/* implicit */long long int) var_10)) - (var_5)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
}
