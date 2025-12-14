/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189885
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    arr_7 [(_Bool)1] |= ((max((((0ULL) << (((13913184410039116296ULL) - (13913184410039116271ULL))))), (((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_0] [i_1] [(_Bool)1] [i_2]))))) > ((+(arr_2 [i_0] [i_1 - 1] [i_2 - 2]))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) 16530273818099246927ULL))));
                    arr_9 [i_1] [i_2] = min((arr_2 [i_0] [i_1] [i_2]), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5)))) ^ (((arr_1 [i_2]) ? (arr_3 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_0]))))))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2 - 2] [i_1 + 1] [i_0])))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_15 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_0] [i_1]))));
                    arr_16 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_17 [i_0] [i_1] [i_1] = ((max((arr_5 [i_1 - 1] [i_1] [i_1] [i_3]), (((/* implicit */unsigned long long int) arr_12 [i_1 - 2] [i_1 - 3])))) * (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))), (((arr_2 [i_3] [i_1] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))));
                    arr_18 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_3] [i_1 - 3]))))) ? (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_1]))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_13 [i_3] [i_0]))))) : (((/* implicit */unsigned long long int) ((arr_12 [i_1 - 2] [i_1 + 1]) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 1916470255610304706ULL))))) : (((/* implicit */int) ((_Bool) 16530273818099246927ULL))))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_1] [i_0] [i_1] = max((((arr_6 [i_0] [i_1] [i_4]) ? (arr_14 [i_1 + 1]) : (((arr_11 [i_1] [i_1] [i_4]) ? (arr_13 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_4]))))))), (((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) 0ULL)))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_26 [i_0] [i_1] [i_1] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_13 [i_4] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_5]))) : (arr_0 [i_1])))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16))));
                        arr_27 [(_Bool)0] [i_1] [i_4] [i_5] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_16))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5] [i_1] [(_Bool)0] [i_0])) ? (1296137392234608483ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) var_7)))))) : (((((/* implicit */_Bool) max((arr_23 [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((arr_23 [i_4]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((arr_24 [i_0] [i_1] [i_4] [i_5]) & (arr_13 [i_0] [i_1])))))));
                    }
                    arr_28 [i_4] [(_Bool)0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 17150606681474943133ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) >> ((((~(((/* implicit */int) (_Bool)0)))) + (10)))))) ? (max((9467589463509506368ULL), (((/* implicit */unsigned long long int) min((arr_11 [i_0] [i_1] [i_4]), (var_0)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (_Bool)1))))))));
                    arr_29 [(_Bool)0] = ((_Bool) ((((/* implicit */int) arr_12 [i_1 - 1] [i_4])) | (((/* implicit */int) arr_12 [i_1 - 1] [i_0]))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                arr_36 [i_8] [i_8] [i_1] [i_7] [i_1] [i_1] [i_0] = 17942087444125760043ULL;
                                arr_37 [i_0] [i_8] [i_6] [i_1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (arr_3 [i_1] [i_1] [i_1 - 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1 + 1]))))) : (((/* implicit */int) min((arr_19 [i_1] [i_1]), (arr_19 [i_0] [i_0]))))));
                                arr_38 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) | (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_13 [i_1 - 3] [i_1 - 1])))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))), (arr_14 [i_6])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_45 [i_1] [i_1] [i_1] = (_Bool)0;
                                arr_46 [i_0] [i_1] [i_1] [i_1] [i_6] [i_9] [i_10] = ((/* implicit */_Bool) (((((_Bool)1) && (((/* implicit */_Bool) arr_33 [i_6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_0]))))))) : ((~(((/* implicit */int) (_Bool)1))))));
                                arr_47 [i_0] [i_1] [i_1] [i_9] [i_10] = ((/* implicit */unsigned long long int) arr_6 [i_1 + 1] [i_1 - 1] [i_10 - 1]);
                            }
                        } 
                    } 
                    arr_48 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(var_17)))), ((((_Bool)1) ? (18262039645456721926ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 6871848062297163410ULL)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_6])) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_17))))) : (min((min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_3 [i_0] [i_1] [i_6]))), (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_43 [i_6] [i_1] [i_1] [i_1] [i_0])))))))));
                }
                /* LoopNest 3 */
                for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 3; i_13 < 9; i_13 += 1) 
                        {
                            {
                                arr_57 [i_0] [i_1] [i_1] [(_Bool)1] [i_12] [i_13] = ((/* implicit */_Bool) (+(arr_51 [i_13] [(_Bool)1] [i_11])));
                                arr_58 [i_0] [i_1] [i_11] [i_12] [i_1] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_41 [i_0] [i_12] [i_11] [i_1] [i_13 - 2])))) | (((/* implicit */int) arr_41 [i_12] [i_1] [i_11] [i_1] [i_13 - 3]))));
                            }
                        } 
                    } 
                } 
                arr_59 [2ULL] &= var_7;
                arr_60 [i_1] [i_1] [i_1] = min((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))), ((_Bool)0));
            }
        } 
    } 
    var_20 = var_5;
}
