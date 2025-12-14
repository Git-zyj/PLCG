/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35747
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
                {
                    arr_11 [i_1] [i_2] [i_2] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_1] [i_2]))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1] [16U] = ((/* implicit */long long int) arr_6 [i_0]);
                        arr_15 [(_Bool)1] [i_1] [(_Bool)1] [(_Bool)1] [i_3] = ((/* implicit */short) arr_3 [i_0] [23ULL]);
                        arr_16 [i_0] [i_2] [4LL] [i_3] = ((/* implicit */signed char) var_7);
                        var_10 = ((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_3]);
                        var_11 += ((/* implicit */long long int) ((int) var_9));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) ^ (255641813U)));
                        arr_19 [17ULL] [i_4] [i_2] [i_1] [i_0] [i_0] = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(short)15]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [0U] [0U] [(unsigned short)18] [i_5]))))))));
                            arr_23 [i_5] [(_Bool)1] [i_2] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_22 [i_0] [i_0] [i_0] [i_0] [20LL]))) && (((/* implicit */_Bool) arr_1 [i_0]))));
                            var_14 ^= ((/* implicit */_Bool) arr_2 [i_0]);
                            var_15 = ((/* implicit */signed char) ((unsigned long long int) var_4));
                        }
                    }
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 23; i_8 += 4) 
                        {
                            {
                                arr_34 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_8 + 1] [i_8 + 1] [(signed char)13] [i_6] [i_6])) && (((/* implicit */_Bool) arr_33 [i_8 + 1] [i_8] [i_8 + 1] [i_8] [i_8] [(_Bool)1]))));
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) ((1698017429333277827LL) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [22U] [i_1] [i_6] [(_Bool)1])))));
                    var_18 *= ((/* implicit */_Bool) ((unsigned short) 18446744073709551615ULL));
                    arr_35 [i_0] [23LL] [i_6] = ((/* implicit */unsigned long long int) arr_18 [1U] [i_1] [i_1] [i_1]);
                    /* LoopSeq 1 */
                    for (int i_9 = 1; i_9 < 21; i_9 += 1) 
                    {
                        arr_38 [i_0] [i_0] [i_0] = ((/* implicit */int) ((arr_36 [i_9 + 1] [i_9 + 3] [i_9 + 3] [i_9 + 1]) + (((/* implicit */long long int) arr_9 [i_9 + 1] [i_9 + 3] [i_9 + 3] [i_9 + 1]))));
                        arr_39 [i_0] = arr_24 [i_0] [i_0] [(_Bool)1];
                    }
                }
                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_5)) : (1164436274))) - (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)112))) % (1698017429333277827LL)))) || (((/* implicit */_Bool) (+(3865890778386072812LL)))))))));
                arr_40 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned short) max((((((/* implicit */int) var_2)) != (((/* implicit */int) var_5)))), (((_Bool) arr_24 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_10 = 4; i_10 < 17; i_10 += 3) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (signed char i_12 = 4; i_12 < 20; i_12 += 2) 
            {
                {
                    arr_51 [i_10] = ((/* implicit */short) (unsigned short)65535);
                    /* LoopSeq 1 */
                    for (short i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_21 [i_10 - 1] [i_10 - 1] [i_13] [i_10 - 1] [i_10 - 1] [6ULL] [i_10 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_10 + 1] [i_10 + 1] [i_12 - 3] [i_13])))))))))));
                        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)15)) && (((/* implicit */_Bool) 4222124650659840ULL))));
    var_23 = ((/* implicit */signed char) var_7);
}
