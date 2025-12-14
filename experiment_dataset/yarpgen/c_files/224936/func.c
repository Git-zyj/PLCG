/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224936
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
    var_15 -= ((/* implicit */long long int) (+(min((min((((/* implicit */unsigned long long int) 2105955120468526008LL)), (4667544688412298590ULL))), (min((18446744073709551615ULL), (var_9)))))));
    var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) arr_0 [i_1]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_9 [10LL] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((unsigned char) 16896324424740171578ULL));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((-2097775643) / (arr_5 [i_0 - 2] [i_0]))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_10 [i_0 - 1] [i_0 - 1])))));
                                var_20 ^= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_0]) & (((/* implicit */unsigned long long int) 4294967295U))))) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) & (1926400601)))))));
                                arr_18 [i_0] [i_1] [i_0] [i_4] [(unsigned char)0] [i_3] [i_5] |= ((/* implicit */unsigned int) max(((~(((-1LL) % (((/* implicit */long long int) var_14)))))), (((/* implicit */long long int) (+(1926400591))))));
                                var_21 &= ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_5]);
                            }
                        } 
                    } 
                    arr_19 [i_0] [(unsigned char)14] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) -1926400591)) & (arr_1 [i_0 - 2]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 3801779921U)) < (arr_1 [i_1])))))));
                    arr_20 [(unsigned char)0] [i_1] [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((int) var_1))), (arr_8 [i_1] [i_1] [i_1])))) : (arr_12 [i_0] [i_1] [i_1] [10] [i_0])));
                }
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [(short)6])) ? (((/* implicit */int) (short)-24924)) : (((/* implicit */int) (short)27785))));
                    var_23 -= ((/* implicit */int) ((((((/* implicit */int) (short)32767)) != (-1926400591))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)30))))));
                    var_24 = ((/* implicit */_Bool) var_11);
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (_Bool)1))) | (((/* implicit */int) arr_11 [i_0 - 2] [i_0 + 1] [i_0 - 2]))));
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) var_2))));
                }
            }
        } 
    } 
}
