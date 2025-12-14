/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244773
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (-(((((876753094U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) << ((((~(((/* implicit */int) (unsigned char)162)))) + (193))))))))));
    var_18 = ((/* implicit */unsigned int) max((var_18), (var_12)));
    var_19 = ((/* implicit */_Bool) var_10);
    var_20 = ((/* implicit */unsigned int) max((var_20), (min((((/* implicit */unsigned int) var_14)), (var_6)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(arr_9 [i_0] [i_1 + 3] [3U] [i_0])))) > (((/* implicit */int) var_4))));
                    arr_11 [(_Bool)1] [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned int) (_Bool)1);
                    arr_12 [(_Bool)1] [i_1 + 2] [i_1 + 2] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) 0U)), (2346576139087978216ULL))), (((/* implicit */unsigned long long int) ((unsigned int) var_3)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) min((var_22), (((_Bool) max((((/* implicit */unsigned long long int) 3715676236U)), (arr_14 [i_1 + 1]))))));
                                arr_17 [i_0] [i_4] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1 + 2] [i_1 + 3] [i_4 - 1]))) < (max((25U), (1129189868U)))))), (((unsigned char) min((1212363789U), (((/* implicit */unsigned int) (unsigned char)52)))))));
                            }
                        } 
                    } 
                    arr_18 [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)232)), (var_0)))) ? (arr_0 [i_0] [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)32)) / (((/* implicit */int) var_5)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_7 [i_0] [i_0] [i_0] [i_2]), (((/* implicit */unsigned int) arr_4 [i_0])))))))) : (((((/* implicit */_Bool) max((arr_6 [i_2]), (((/* implicit */unsigned char) var_3))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) arr_15 [i_0] [i_0] [(_Bool)1]))))))));
                }
            } 
        } 
        arr_19 [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_0]);
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 4; i_5 < 12; i_5 += 2) 
        {
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (max((max((arr_16 [i_0] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 3]), (((/* implicit */unsigned long long int) var_9)))), (min((arr_16 [i_0] [i_0] [i_0] [i_0] [i_5 + 2]), (arr_16 [(_Bool)1] [(_Bool)1] [i_0] [(_Bool)1] [i_5 - 4])))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 2) /* same iter space */
            {
                arr_24 [i_0] = ((/* implicit */_Bool) (-((((-(11127208025442395518ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_0] [i_0]) >= (((/* implicit */unsigned long long int) var_15))))))))));
                arr_25 [i_0] [i_5] = ((/* implicit */_Bool) 9175439836097354272ULL);
            }
            for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_32 [i_0] [i_5] [i_7] [7U] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_5 + 2] [i_8] [i_8]))) <= (arr_30 [i_0] [i_5 + 1] [i_5 + 1] [i_8])));
                    var_24 = ((/* implicit */_Bool) max((((arr_30 [i_7 + 2] [i_7 + 2] [10U] [i_5 + 2]) & (var_12))), (arr_30 [i_7 + 1] [i_7] [i_5] [i_5 - 3])));
                    var_25 = (~(((((/* implicit */_Bool) arr_30 [i_7 + 3] [i_7 + 3] [i_7 - 2] [i_7 - 2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) | (arr_31 [(_Bool)1]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_21 [i_0]))))))));
                    var_26 = ((/* implicit */unsigned int) min((max((12297698785520355497ULL), (arr_8 [i_5 - 1] [i_5 + 3]))), (((/* implicit */unsigned long long int) var_11))));
                }
                arr_33 [i_0] [i_0] [i_5 - 1] [i_7] = ((/* implicit */_Bool) (-(min((((unsigned long long int) arr_28 [i_7 - 2] [i_5] [i_7] [i_0] [i_7] [i_7])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (4294967295U) : (0U))))))));
                arr_34 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (5016066069788221552ULL))) >> (((max((((/* implicit */unsigned long long int) var_0)), (arr_16 [i_0] [i_5 - 2] [i_5] [i_5] [i_0]))) - (5938665722755951707ULL))))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_39 [i_0] [i_0] [i_7] [5U] [i_10] = ((/* implicit */_Bool) (unsigned char)255);
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (max((((/* implicit */unsigned long long int) 4294967295U)), (9271304237612197323ULL)))));
                            arr_40 [i_0] [i_0] [i_5] [i_7 + 2] [i_9] [i_9] [i_10] = (~((((-(arr_31 [i_0]))) | (((arr_22 [i_5] [(_Bool)1] [i_9] [13U]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                            arr_41 [4ULL] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) ^ (arr_14 [i_0]))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)251)))))));
                        }
                    } 
                } 
                arr_42 [i_5 + 1] = ((/* implicit */unsigned int) (_Bool)1);
            }
        }
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                var_28 = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_12]);
                var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))));
            }
            arr_50 [(_Bool)1] = ((/* implicit */unsigned char) ((arr_16 [i_0] [i_0] [i_0] [i_11] [i_11]) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_9)))))));
        }
        /* vectorizable */
        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 2) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) (((-(2380128329U))) < (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [6ULL] [6ULL]))) - (arr_2 [i_0])))));
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (_Bool)0))))) : (((var_7) >> (((/* implicit */int) (_Bool)0))))));
            var_32 = ((/* implicit */unsigned long long int) var_12);
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (unsigned int i_15 = 0; i_15 < 15; i_15 += 4) 
                {
                    {
                        arr_60 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1086935616U)) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) 4294967295U))));
                        arr_61 [(unsigned char)3] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) 3027596851U))) / (((unsigned long long int) arr_5 [i_15]))));
                        arr_62 [i_0] [i_13] [i_14] [i_15] = ((/* implicit */unsigned int) arr_43 [i_14] [i_0]);
                        var_33 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        var_34 &= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_28 [i_0] [i_13] [i_13] [i_14] [i_14] [i_15])) > (((/* implicit */int) arr_27 [i_13])))))) >= (((16ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_13]))))));
                    }
                } 
            } 
        }
        var_35 = (-((-(((unsigned int) 4294967291U)))));
    }
    for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 2) /* same iter space */
    {
        arr_65 [12U] [i_16] = ((/* implicit */unsigned long long int) arr_48 [i_16] [i_16] [i_16]);
        var_36 = ((_Bool) (unsigned char)249);
    }
}
