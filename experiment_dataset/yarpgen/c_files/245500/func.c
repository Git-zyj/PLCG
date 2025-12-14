/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245500
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 2; i_3 < 21; i_3 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */int) (unsigned char)62)), (1649258535)))), ((-(max((((/* implicit */long long int) -1)), (var_10)))))));
                        var_17 ^= ((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_0 [i_3 - 1])))))));
                        arr_9 [(short)6] [(short)6] |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (((((/* implicit */_Bool) arr_6 [i_1 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_6 [i_1 - 2])))));
                    }
                    for (short i_4 = 2; i_4 < 21; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 1; i_5 < 20; i_5 += 4) 
                        {
                            arr_14 [i_0] [i_1 - 2] [i_0] [i_4 - 2] [i_5 + 1] = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
                            arr_15 [i_0] [i_0] [i_5 - 1] = ((/* implicit */unsigned int) var_3);
                        }
                        var_18 |= ((/* implicit */unsigned short) ((signed char) (-(arr_12 [i_4 - 1] [i_4] [i_2] [i_2 + 3] [i_2]))));
                        var_19 -= ((/* implicit */int) arr_10 [i_0] [i_0]);
                        arr_16 [8ULL] |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) >= (var_1))))) <= (var_11)));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 2; i_6 < 20; i_6 += 1) 
                    {
                        var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_5))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6] [i_2]))))))) : (((((/* implicit */_Bool) arr_10 [i_0] [(short)3])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0])))))));
                        arr_20 [i_6] [i_0] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
                    }
                    for (signed char i_7 = 3; i_7 < 20; i_7 += 4) /* same iter space */
                    {
                        var_21 -= ((/* implicit */_Bool) 1);
                        var_22 = ((/* implicit */_Bool) (+(min((5), (((/* implicit */int) arr_22 [(unsigned char)16] [i_1 + 1] [i_1] [i_1] [i_1 + 1]))))));
                        arr_24 [i_0] [i_1] [i_1 - 3] [i_2] [i_0] [i_7] = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                    }
                    for (signed char i_8 = 3; i_8 < 20; i_8 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (unsigned char)134))));
                            var_24 -= ((/* implicit */unsigned int) 17650750884546746918ULL);
                        }
                        arr_30 [i_0] [i_8] [i_8 - 1] [i_8 - 3] = 1833943999U;
                        arr_31 [i_0] [i_1] [i_2 + 3] [i_8] = ((/* implicit */long long int) -5);
                        var_25 = ((((unsigned int) (unsigned short)42833)) >> ((((-(((var_10) >> (((/* implicit */int) (_Bool)1)))))) + (3174741269521579655LL))));
                        arr_32 [i_0] [i_8 - 2] [i_8 - 2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) var_8);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_10 = 2; i_10 < 11; i_10 += 1) 
    {
        for (signed char i_11 = 1; i_11 < 11; i_11 += 4) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) (unsigned short)42833);
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        for (unsigned int i_14 = 1; i_14 < 9; i_14 += 1) 
                        {
                            {
                                arr_45 [i_10 - 2] [i_10] [i_10] [i_10] [i_10] [i_12] [i_10 + 1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_8 [i_12]), (((/* implicit */unsigned char) var_9)))))) > (((((/* implicit */_Bool) var_10)) ? (arr_33 [i_11 + 1] [i_10 - 1]) : (arr_33 [i_11 + 1] [i_10 - 2])))));
                                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_14] [i_12] [i_14] [i_14 - 1] [i_12] [i_14])) || (((/* implicit */_Bool) min((13076622907568007454ULL), (((/* implicit */unsigned long long int) 1833943999U)))))));
                                arr_46 [(short)8] [i_13] [i_12] [i_10] [i_11] [(short)8] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((((/* implicit */int) (signed char)-1)) < (((/* implicit */int) var_15))))))) / (((/* implicit */int) var_9))));
                                arr_47 [i_14] [i_12] [i_12] [i_12] [i_10 - 2] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)-118)))))) * (arr_3 [i_13] [i_14 + 3]))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))));
                                arr_48 [0U] [i_11 - 1] [(short)4] [i_12] [i_13] [(short)4] |= ((/* implicit */signed char) ((((/* implicit */_Bool) 67108863ULL)) && (((/* implicit */_Bool) 14520836799513607337ULL))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_15 = 2; i_15 < 9; i_15 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_16 = 0; i_16 < 12; i_16 += 3) /* same iter space */
                        {
                            var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_1)))) ? (min((((/* implicit */int) (short)-1)), (arr_29 [(unsigned char)16] [14] [14] [i_15] [i_16] [i_15 + 3]))) : (max((var_1), (arr_29 [i_11] [2] [i_12] [2] [i_16] [i_15 + 2])))));
                            arr_55 [(signed char)6] [(unsigned char)0] [i_12] [i_16] &= ((/* implicit */unsigned char) var_15);
                            arr_56 [(signed char)8] &= ((/* implicit */unsigned int) ((short) 1));
                        }
                        for (unsigned int i_17 = 0; i_17 < 12; i_17 += 3) /* same iter space */
                        {
                            arr_60 [i_10 + 1] [(short)2] [i_17] [i_12] [i_17] |= max((((/* implicit */int) (_Bool)1)), (0));
                            var_29 = ((/* implicit */int) 0ULL);
                        }
                        var_30 = ((/* implicit */short) ((int) ((int) ((((/* implicit */_Bool) arr_19 [i_10 - 1] [i_12] [i_10 - 1] [9U] [i_12] [i_15 - 2])) ? (((/* implicit */int) var_15)) : (var_1)))));
                    }
                }
            } 
        } 
    } 
}
