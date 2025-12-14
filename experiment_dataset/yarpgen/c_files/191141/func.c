/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191141
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 |= ((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_3 [i_0] [i_0] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_10))))))), ((-9223372036854775807LL - 1LL))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 9; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_12 [0U] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((int) arr_1 [i_0]));
                                var_16 *= ((/* implicit */_Bool) max((-4883394635756805022LL), (9223372036854775796LL)));
                                var_17 = ((/* implicit */signed char) -6160940912695548746LL);
                                arr_13 [9LL] [9LL] [i_3] [i_0] = ((unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            {
                                arr_22 [i_0] [12U] [i_0] [i_0] = ((/* implicit */signed char) arr_17 [i_0] [9LL] [i_0] [i_0]);
                                arr_23 [i_0] [8LL] [i_0] [8LL] = ((/* implicit */unsigned char) arr_14 [i_0] [i_1] [i_0]);
                                arr_24 [i_1] [i_6] [i_5] [i_5] [i_1] [i_1] [i_1] &= ((/* implicit */int) min((min((((/* implicit */long long int) ((var_14) / (arr_20 [0LL] [i_0] [i_5] [0LL] [i_0])))), (4883394635756805022LL))), (((/* implicit */long long int) ((unsigned int) var_5)))));
                            }
                        } 
                    } 
                } 
                var_18 -= ((/* implicit */unsigned int) ((int) ((((unsigned long long int) arr_9 [i_0] [(signed char)0] [i_1] [i_1])) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [(signed char)8] [i_0] [12]))) < (arr_4 [i_1]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 3; i_12 < 18; i_12 += 1) 
                        {
                            {
                                var_19 ^= ((/* implicit */signed char) var_4);
                                var_20 = ((/* implicit */unsigned int) var_1);
                                var_21 = ((/* implicit */unsigned long long int) min((((int) arr_30 [i_11] [i_11])), (((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_12 - 3] [i_12 + 2] [i_12 - 3] [i_8] [i_12 - 2] [i_12 + 2])) && (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) -5602015830120992682LL)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        for (signed char i_14 = 3; i_14 < 21; i_14 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) arr_39 [i_8] [i_9] [i_10] [i_13] [(_Bool)1]);
                                var_23 = ((/* implicit */_Bool) ((unsigned int) ((arr_26 [i_8]) < (arr_26 [i_8]))));
                                var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_25 [i_8])), (1426258327U)));
                                var_25 = ((/* implicit */unsigned int) arr_43 [(signed char)6] [14U] [i_8] [i_8] [i_9] [i_8]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        for (long long int i_16 = 0; i_16 < 22; i_16 += 4) 
                        {
                            {
                                arr_52 [i_16] [i_8] [i_8] = ((/* implicit */int) arr_29 [i_8] [i_8] [(_Bool)1]);
                                arr_53 [i_8] [i_9] [i_10] [i_16] &= ((_Bool) arr_32 [i_8] [i_8] [i_15] [(signed char)9]);
                                arr_54 [i_8] = ((arr_38 [21U] [21U] [21U]) - (((/* implicit */long long int) var_0)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
