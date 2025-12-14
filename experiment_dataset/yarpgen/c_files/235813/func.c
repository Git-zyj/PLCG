/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235813
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
    var_14 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (!(max((arr_0 [i_0] [i_1 + 2]), (arr_0 [i_1] [i_1 + 2])))));
                var_16 = ((/* implicit */signed char) var_7);
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 14; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 4) 
            {
                {
                    arr_11 [i_4] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_4 - 1] [i_4 + 2])) : (((/* implicit */int) (signed char)127))))) : (((unsigned long long int) (signed char)-1))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 1) 
                        {
                            {
                                arr_18 [i_2] [i_3] [i_4 - 1] [i_4] [i_5] [(signed char)1] [i_6] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_3 - 1])) : (((/* implicit */int) (signed char)-30)))));
                                var_17 = ((/* implicit */signed char) (((-(arr_9 [i_2 - 1] [i_6 + 1] [i_3 + 1]))) | (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2 + 1] [i_6 + 1] [i_3 + 1]))) == (var_5))))));
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)84)) >> (((arr_1 [i_3]) - (1397290185))))), (((/* implicit */int) var_4))))))))));
                            }
                        } 
                    } 
                    arr_19 [i_2 - 1] [i_2 - 1] |= ((unsigned long long int) ((((/* implicit */int) (short)(-32767 - 1))) > (((/* implicit */int) arr_3 [i_4 - 1]))));
                    arr_20 [(signed char)10] [9U] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) -1LL)) ? (-19LL) : (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_6) : (((/* implicit */int) (signed char)-2))))) : (((((/* implicit */_Bool) var_6)) ? (19LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2])))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)111)) ? (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned int) var_12)))) : (var_3)))) * ((-(((unsigned long long int) var_6))))));
    var_20 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((var_6) / (var_12)))))));
}
