/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193821
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned long long int) (+(max((-5228369086066528961LL), (((/* implicit */long long int) (unsigned char)128))))));
                                var_17 = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_0 + 2] [i_0 - 1]))) ^ (arr_7 [i_1 - 1] [i_2] [i_2] [i_0 + 1]))));
                                var_18 *= ((/* implicit */unsigned long long int) 3021329453U);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_11 [11LL] [11LL] [i_1] [i_1] [i_1] [i_5]))));
                        var_20 = ((/* implicit */int) arr_15 [i_0 + 2] [i_1 + 1]);
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        arr_20 [i_6] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned int) (~(var_4)));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((arr_17 [i_0] [i_0 - 1] [i_0] [i_0]) ? (((/* implicit */int) arr_17 [i_0] [i_0 - 1] [(signed char)7] [i_0])) : (((/* implicit */int) arr_17 [i_0] [i_0 - 1] [i_0] [i_0 - 2]))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1273637857U)) ? (1273637868U) : (1273637857U))))));
                        }
                        for (int i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((unsigned int) 1273637843U));
                            var_24 |= ((/* implicit */unsigned int) (signed char)127);
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */short) (-(((/* implicit */int) min((arr_15 [i_9 + 3] [i_0 - 2]), (((/* implicit */unsigned short) (signed char)15)))))));
                                var_26 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)139))))), ((~(1073741824U)))));
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)31914)) ? ((~(arr_13 [i_0] [(signed char)5] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) 1256224598448605470LL))));
                                var_28 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1] [i_0 - 2]))) * (((((/* implicit */_Bool) arr_6 [i_9 + 1])) ? (arr_6 [i_9 + 1]) : (arr_6 [i_9 - 1])))));
                                var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_21 [i_0] [i_1 - 1] [i_0] [i_9] [i_10]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_30 |= var_7;
}
