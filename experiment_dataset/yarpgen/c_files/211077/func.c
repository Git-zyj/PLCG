/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211077
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0] [12LL] [i_0])) != (arr_0 [i_0]))))));
                            arr_9 [i_1] [i_2] [4ULL] [i_1] = arr_3 [i_0] [i_2] [i_2];
                            arr_10 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((arr_7 [i_3] [i_1] [i_1] [i_0]) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_1]))))))) && (((max((((/* implicit */int) (unsigned short)41461)), (4194303))) != (((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) (signed char)-73)) : (1448560151)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            arr_15 [i_1] = ((/* implicit */long long int) max((((((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [3U] [i_1] [i_1] [i_1] [i_1] [i_0]))) ^ (arr_4 [i_0]))) & (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)48707)) & (-4194326)))))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_8 [i_0] [i_1] [i_4] [i_5])))))))));
                            arr_16 [(short)7] [i_1] [i_4] [i_5] [i_4] = ((/* implicit */signed char) (~((-((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
                            var_18 = ((/* implicit */_Bool) arr_8 [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_6] [i_6] [i_7] [i_1 - 1]))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_6])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_6])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_6] [i_1 - 2])) < (((/* implicit */int) arr_3 [i_0] [i_1] [i_1 + 3]))))))))));
                                arr_26 [i_1] = ((/* implicit */unsigned char) arr_6 [i_1]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        {
                            arr_32 [i_0] [i_1] = max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_23 [i_0] [(_Bool)1] [i_1 - 2] [i_1 - 1] [i_0] [i_0])) : (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1 - 1] [i_1] [i_10] [i_1])) ? (((/* implicit */int) arr_23 [10] [i_1] [i_1 + 3] [(signed char)6] [i_9] [i_1])) : (((/* implicit */int) arr_23 [i_0] [i_9] [i_1 + 1] [i_10] [i_1 + 1] [i_10])))));
                            arr_33 [i_0] [i_1] [i_1 + 1] [13ULL] [i_1 + 1] [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((arr_24 [i_1] [i_1] [i_10]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_0] [i_1 + 1] [i_9] [i_10])))))))) != ((~(((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (arr_24 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_11 = 0; i_11 < 24; i_11 += 2) 
    {
        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 3) 
        {
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_14 = 1; i_14 < 21; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 24; i_15 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) 4194325);
                                var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4194325)) ^ (18446744073709551613ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_35 [i_11]))))))))) : (max((arr_40 [i_14] [i_12] [i_11]), (((/* implicit */unsigned long long int) arr_43 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        for (long long int i_17 = 2; i_17 < 22; i_17 += 3) 
                        {
                            {
                                arr_55 [i_12] [i_11] &= ((/* implicit */long long int) -4194326);
                                arr_56 [i_11] [i_12] [i_13] [i_13] = ((/* implicit */unsigned int) arr_54 [i_12] [i_13] [i_17]);
                                arr_57 [i_11] [i_12] [i_13] [i_16] [i_16] [i_11] [i_17] |= ((/* implicit */unsigned long long int) arr_35 [i_12]);
                                var_22 ^= ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_44 [i_11] [i_12] [i_13] [i_11])))) ? (((/* implicit */int) arr_44 [i_11] [i_17 - 2] [i_13] [i_16])) : ((~(((/* implicit */int) var_14))))))) && (((/* implicit */_Bool) arr_50 [i_11] [i_17])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 24; i_18 += 1) 
                    {
                        for (unsigned int i_19 = 2; i_19 < 22; i_19 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26988)) / (((/* implicit */int) (signed char)25))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((_Bool) arr_42 [i_11] [i_12] [i_13]))))), ((~((~(((/* implicit */int) (unsigned char)252))))))));
                                var_24 = ((/* implicit */_Bool) (unsigned short)24531);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_20 = 3; i_20 < 21; i_20 += 3) 
                    {
                        for (unsigned short i_21 = 1; i_21 < 21; i_21 += 3) 
                        {
                            {
                                arr_69 [i_13] [i_20] [i_13] [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) (signed char)-1)))));
                                arr_70 [i_13] = ((/* implicit */unsigned short) max(((signed char)45), (arr_49 [i_11] [i_12] [i_13] [i_13] [i_21])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
