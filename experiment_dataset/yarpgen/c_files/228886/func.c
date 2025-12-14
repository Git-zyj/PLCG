/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228886
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
    var_15 = var_4;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((var_2) & (((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_1])))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [6ULL]))) : (var_8)))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 3; i_2 < 24; i_2 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) min((1380877349U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (arr_5 [i_1 - 1] [i_2 - 3])))))))));
                    arr_9 [i_0] [i_2] [i_2] [(short)3] = ((/* implicit */int) (_Bool)1);
                }
                /* vectorizable */
                for (unsigned long long int i_3 = 3; i_3 < 24; i_3 += 1) /* same iter space */
                {
                    arr_14 [i_3] [10ULL] [i_0] |= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1]))) + (arr_4 [i_1 - 1]));
                    arr_15 [20U] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-90))))) < (var_8)));
                    arr_16 [i_3] [i_1 + 1] [i_1 + 1] [i_3] = ((/* implicit */signed char) (((_Bool)1) ? (arr_0 [i_1 - 1] [i_1 + 1]) : (arr_0 [i_1 + 1] [i_1 + 1])));
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 24; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 24; i_5 += 1) 
                        {
                            {
                                var_17 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)4095))) <= ((~(var_7)))));
                                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((arr_4 [i_5 + 1]) > (var_2))))));
                            }
                        } 
                    } 
                }
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_13 [i_1 + 1] [(signed char)13] [i_1 - 1] [i_1 + 1]), (((/* implicit */unsigned long long int) arr_21 [i_1 - 1] [i_1 + 1] [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_11)), (arr_21 [i_1 - 1] [i_1] [i_1 - 1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_13 [i_1 - 1] [(_Bool)1] [i_1 + 1] [i_1 - 1])))));
                var_20 *= ((/* implicit */unsigned char) (((_Bool)1) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_21 &= ((((/* implicit */int) var_10)) > ((((+(((/* implicit */int) var_12)))) << ((((-(((/* implicit */int) var_13)))) + (7972))))));
}
