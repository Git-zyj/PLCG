/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54385
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
    var_18 = ((((/* implicit */_Bool) ((unsigned long long int) min((var_16), (((/* implicit */unsigned int) var_0)))))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) (-(var_10)))) ? (min((16ULL), (((/* implicit */unsigned long long int) (unsigned char)9)))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [i_1]))) ? (((/* implicit */unsigned long long int) (-((+(arr_1 [i_0])))))) : ((+(17ULL)))));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [(unsigned char)4] [i_2] = ((/* implicit */unsigned long long int) ((((unsigned long long int) min((var_17), (var_17)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_4 [i_3 + 2] [15ULL])) : (((/* implicit */int) arr_4 [i_3 + 2] [i_3 + 2])))))));
                                arr_14 [(unsigned char)1] [(unsigned char)1] [i_1] [i_2] [i_2] [12ULL] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_8 [i_0] [i_0] [i_0] [i_0]) != (((unsigned long long int) arr_1 [i_1]))))) > ((((-(((/* implicit */int) (unsigned char)127)))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3] [i_4])))))))));
                            }
                        } 
                    } 
                    arr_15 [(unsigned char)13] [i_2] [i_2] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) / (arr_12 [i_2 + 1] [i_2] [i_2] [i_2] [i_2 + 2] [i_2]))) * (((((/* implicit */_Bool) (~(arr_2 [i_0] [i_0] [i_0])))) ? ((+(arr_8 [19ULL] [i_2] [19ULL] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                    arr_16 [10ULL] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_1])) / (((/* implicit */int) (_Bool)1)))) >> (((((((/* implicit */_Bool) 15798907361350205781ULL)) ? (var_17) : (var_17))) - (15290292018322656474ULL)))))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_2 [i_0] [i_0] [i_0]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 19; i_5 += 4) 
                    {
                        for (signed char i_6 = 4; i_6 < 20; i_6 += 3) 
                        {
                            {
                                arr_21 [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (arr_10 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_6] [i_2] [i_1] [i_0])) | (((/* implicit */int) arr_19 [i_0] [i_0] [(_Bool)1] [i_0] [i_0])))))))))));
                                arr_22 [i_0] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */unsigned char) arr_8 [i_0] [i_2] [12ULL] [(unsigned char)16]);
                            }
                        } 
                    } 
                    arr_23 [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) 16383U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2]))) : (var_1))) < (((unsigned long long int) var_10)))))));
                }
                for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    var_20 = (i_7 % 2 == zero) ? (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_16)) ? (var_8) : (7U)))))), (max((((arr_20 [i_0]) >> (((arr_10 [i_0] [i_7]) - (7047935096676033787ULL))))), (((/* implicit */unsigned long long int) min((arr_11 [i_0]), (arr_5 [i_7] [16U] [(_Bool)1]))))))))) : (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_16)) ? (var_8) : (7U)))))), (max((((arr_20 [i_0]) >> (((((arr_10 [i_0] [i_7]) - (7047935096676033787ULL))) - (13097849480653142746ULL))))), (((/* implicit */unsigned long long int) min((arr_11 [i_0]), (arr_5 [i_7] [16U] [(_Bool)1])))))))));
                    arr_28 [(unsigned char)2] [i_1] [i_7] = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [8ULL] [i_1] [i_1] [8ULL]))))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (_Bool)1)))))) == (((/* implicit */int) ((arr_12 [i_0] [i_0] [i_7] [i_0] [i_1] [i_7]) <= (arr_12 [i_0] [12ULL] [i_7] [i_0] [i_0] [i_0]))))));
                    arr_29 [i_7] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0ULL))))), (max((var_10), (3139599850308085625ULL)))));
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 4) 
                {
                    arr_33 [(_Bool)1] [i_8] = ((((/* implicit */unsigned long long int) (((_Bool)1) ? (3U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_8])))))) - (arr_10 [i_0] [i_0]));
                    arr_34 [i_0] [i_1] [i_8] = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0] [i_0]);
                    var_21 = (signed char)-116;
                }
                for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) (~(((unsigned long long int) 2425105588070205173ULL))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_39 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_10] [i_9 + 1] [i_9 + 1])) ? (((/* implicit */int) arr_32 [i_10] [i_9 - 1] [i_9 + 1])) : (((/* implicit */int) arr_24 [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1]))))) : (((2425105588070205173ULL) % ((-(arr_30 [i_0] [i_1] [(_Bool)1] [10U])))))));
                        var_24 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (max((((/* implicit */unsigned long long int) var_12)), (arr_31 [i_9])))));
                        arr_43 [i_0] [i_0] [i_1] [i_9] [i_9] [i_10] = ((/* implicit */_Bool) arr_39 [(signed char)9] [3ULL]);
                        arr_44 [i_10] = ((/* implicit */unsigned char) arr_42 [i_10] [i_10] [i_10] [i_0]);
                        arr_45 [i_0] [11U] [i_9] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (arr_17 [i_10] [i_1] [i_10])))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_24 [i_0] [10ULL] [i_9] [i_0])), (var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0] [i_10]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) arr_41 [i_10] [17ULL] [i_10])) ? (arr_18 [i_0] [i_0] [i_1] [i_0] [i_10] [i_10]) : (var_9)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        arr_48 [2U] [i_1] [2U] [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))))));
                        var_25 = (~(arr_30 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 - 1]));
                        arr_49 [i_0] [i_1] [i_1] [(unsigned char)10] [i_9] [9ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [(unsigned char)0] [(unsigned char)10] [(signed char)7] [(unsigned char)10]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_50 [i_11] [i_0] = ((((/* implicit */_Bool) arr_8 [i_9] [i_9] [i_9] [i_9 - 1])) ? (((unsigned long long int) 15412689236891341572ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                        arr_51 [i_0] [i_0] [i_9] [i_11] = ((((/* implicit */unsigned long long int) arr_46 [i_9 - 1] [i_9 - 1])) - (arr_12 [i_9 - 1] [i_9 + 1] [i_0] [i_9 + 1] [i_9 - 1] [i_9 - 1]));
                    }
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (+(10217319067689418460ULL))))));
                        var_27 &= ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) 4160749568U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)129))))), (((/* implicit */unsigned long long int) arr_27 [i_12])))), (((((/* implicit */_Bool) arr_2 [(unsigned char)6] [i_9 - 1] [i_9])) ? (var_2) : (((/* implicit */unsigned long long int) var_16))))));
                    }
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_40 [i_0] [i_1] [16ULL] [i_9 + 1]), (arr_40 [6ULL] [(_Bool)1] [6ULL] [i_9 - 1])))) ? (arr_40 [i_1] [i_1] [i_1] [i_9 + 1]) : ((+(arr_40 [12ULL] [14ULL] [i_1] [i_9 + 1]))))))));
                    arr_56 [(unsigned char)11] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (-(arr_18 [i_9] [i_1] [0ULL] [i_9] [i_1] [i_9])));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 1; i_13 < 19; i_13 += 4) 
                {
                    for (signed char i_14 = 1; i_14 < 19; i_14 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) (-((-((-(var_7)))))));
                            var_30 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!((_Bool)1)))), ((+(var_8)))))), ((+(var_1)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 += ((((/* implicit */_Bool) var_12)) ? (var_9) : (((((/* implicit */_Bool) max((4294967292U), (var_16)))) ? ((((_Bool)1) ? (var_17) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
    var_32 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_6)) ? (min((var_12), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) < (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 15798907361350205786ULL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)123)) || (((/* implicit */_Bool) 8229425006020133155ULL))))) : (((/* implicit */int) var_14)))))));
    var_33 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) (~(var_12)))), (min((16738220165095520490ULL), (var_2))))) | ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)88))) | (var_9)))))));
}
