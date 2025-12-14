/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230867
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] [i_3] [i_0] [i_1] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_3 - 1])) / (arr_7 [i_0] [i_1] [i_3 - 1])))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) 562949953421312LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 562949953421282LL)) ? (562949953421323LL) : (-562949953421332LL)))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))))))));
                                arr_15 [i_0] [i_0] = ((/* implicit */signed char) arr_11 [i_0] [i_3] [i_2] [i_4] [i_3]);
                                arr_16 [(unsigned short)6] [(unsigned short)6] [(signed char)1] [i_3] [(unsigned short)6] = ((/* implicit */int) ((long long int) ((((/* implicit */int) (signed char)-40)) + (((/* implicit */int) (signed char)15)))));
                                arr_17 [3ULL] [i_1] [3ULL] [i_1] [i_1] = ((/* implicit */long long int) (~((~(((/* implicit */int) (_Bool)0))))));
                                arr_18 [i_0] [i_0] [9LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3 + 1] [i_3 - 2] [i_3 + 2])) ? ((~(((/* implicit */int) arr_11 [i_3] [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3 + 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_3 + 1] [i_3])) || (((/* implicit */_Bool) (signed char)-17)))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (short)18045);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) 
                    {
                        {
                            arr_30 [i_5] [i_5] [i_5] [i_8] = ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [9] [14LL])) ? (((/* implicit */unsigned long long int) min((562949953421331LL), (((/* implicit */long long int) 462808238))))) : (((((/* implicit */_Bool) arr_12 [i_8] [i_7] [i_6] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) var_7)) : (5847858403970859567ULL))))))));
                            /* LoopSeq 2 */
                            for (long long int i_9 = 3; i_9 < 14; i_9 += 3) 
                            {
                                arr_33 [i_5] [i_6] [i_6] [i_5] [i_9] [i_9] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_9 - 3] [i_9 - 3] [i_6] [(_Bool)0] [i_6])) ? (((/* implicit */int) (short)18032)) : (((int) 3U))))) | (min((((/* implicit */long long int) (unsigned short)65533)), (7403564937360434365LL)))));
                                arr_34 [i_5] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((unsigned long long int) max((((/* implicit */unsigned long long int) 562949953421331LL)), (18446744073709551615ULL))));
                            }
                            for (int i_10 = 0; i_10 < 15; i_10 += 1) 
                            {
                                arr_38 [(signed char)5] [i_6] [i_6] [i_5] [i_6] = ((/* implicit */signed char) (~(arr_26 [i_8] [i_8] [i_8] [i_8])));
                                arr_39 [i_6] [i_6] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_5])) ? (arr_2 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533))))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_32 [i_5] [i_5] [i_5] [i_6] [i_5] [i_8] [i_10]))))));
                            }
                            arr_40 [i_6] [i_7] [i_5] [i_6] = (~(897520642U));
                            arr_41 [i_6] [i_6] [i_7] [i_6] |= ((/* implicit */short) max((((/* implicit */long long int) ((unsigned short) 4611686018427125760ULL))), (max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)16458))))), ((~(arr_13 [i_5] [i_7] [i_5])))))));
                        }
                    } 
                } 
                arr_42 [i_5] = ((/* implicit */_Bool) arr_29 [i_5] [i_5] [i_5] [12U] [i_5] [i_5]);
                arr_43 [i_6] |= ((/* implicit */_Bool) arr_21 [i_6] [i_6]);
                arr_44 [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (3397446681U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_5] [i_6] [i_6])) ? (((/* implicit */int) arr_6 [i_5] [i_5] [i_5])) : (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
