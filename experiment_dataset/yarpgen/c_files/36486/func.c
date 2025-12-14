/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36486
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
    var_14 = ((_Bool) min(((+(4240624830U))), (((/* implicit */unsigned int) var_7))));
    var_15 = ((/* implicit */_Bool) ((((((/* implicit */int) var_5)) != (((((/* implicit */_Bool) var_4)) ? (1296359041) : (((/* implicit */int) var_5)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_12))))))) : (var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                var_16 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((_Bool) var_13)))))) * (min((((/* implicit */unsigned long long int) 153576577U)), (var_3)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1137590243)) ? (-1137590265) : (-1137590255)))) & (arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])))) ? (((unsigned long long int) (_Bool)0)) : (((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) max((arr_6 [i_0] [i_0]), (((/* implicit */unsigned int) 1137590255))))) : (min((((/* implicit */unsigned long long int) arr_6 [0] [i_0])), (0ULL)))))));
                    arr_8 [i_0] [i_1 - 2] [i_1 - 2] [i_0] = ((/* implicit */int) ((var_4) | (((/* implicit */unsigned long long int) (~(1137590255))))));
                    arr_9 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (var_2))))));
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    arr_13 [(_Bool)1] [10U] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_3 [i_1])) | (((unsigned int) (_Bool)1))));
                    var_18 *= ((/* implicit */unsigned char) ((17646251571871374176ULL) / (16122827955121242478ULL)));
                }
                for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_5 = 4; i_5 < 12; i_5 += 4) /* same iter space */
                    {
                        arr_19 [(unsigned char)13] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) -1137590255);
                        /* LoopSeq 4 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [i_6] [i_5 - 4] [i_0] [i_1] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_6 [i_0] [i_4 + 1])) ? (var_6) : (((/* implicit */unsigned long long int) -1137590255)));
                            var_19 = ((/* implicit */int) ((14694976837711029754ULL) > (((/* implicit */unsigned long long int) -1137590255))));
                            arr_23 [i_0] [i_0] [i_4 + 1] [i_5] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_1 - 2] [i_1 - 2] [i_4] [i_6]))) : (arr_7 [i_0] [i_4] [i_5] [2ULL]))) * (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_26 [12U] [i_0] [i_5] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [13U] [i_4]))))) ? (arr_24 [i_0] [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_4] [i_1 - 1] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            arr_27 [(_Bool)1] [i_5] [i_4 + 2] [i_4 + 2] [i_4] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+((+(805306368U)))));
                            arr_28 [i_0] = ((/* implicit */_Bool) (~(arr_10 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1])));
                            arr_29 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */_Bool) ((unsigned int) var_2));
                        }
                        for (int i_8 = 1; i_8 < 10; i_8 += 4) /* same iter space */
                        {
                            arr_32 [10U] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(_Bool)1] [i_1])) ? (18446744073709551608ULL) : (arr_21 [i_0] [i_0] [i_0] [12U] [i_8])));
                            arr_33 [i_0] [(_Bool)1] [i_4] [i_8] [i_8] [13] [7] = ((/* implicit */unsigned char) (((-(var_12))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5 - 1] [(_Bool)0] [i_0])))));
                        }
                        for (int i_9 = 1; i_9 < 10; i_9 += 4) /* same iter space */
                        {
                            arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9] = ((/* implicit */_Bool) (((-(var_4))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                            var_20 = ((/* implicit */_Bool) (+(-1968899193)));
                        }
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
                    }
                    for (unsigned char i_10 = 4; i_10 < 12; i_10 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_11))));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_1] [i_1]))));
                        var_24 = ((/* implicit */unsigned long long int) ((unsigned int) (-(arr_24 [(unsigned char)3] [i_1 - 1] [i_4 - 1] [i_0] [(_Bool)1] [6ULL] [i_4]))));
                    }
                    for (unsigned char i_11 = 4; i_11 < 12; i_11 += 4) /* same iter space */
                    {
                        var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) min((var_2), (((/* implicit */unsigned int) arr_0 [0U])))))) ^ (var_0)));
                        var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((arr_35 [5] [5]) ? (((/* implicit */int) (_Bool)0)) : (1137590242)))) ? (((/* implicit */int) ((unsigned char) arr_2 [(unsigned char)2]))) : (((/* implicit */int) (_Bool)1)))) << (((arr_1 [i_11]) - (2026460449U)))));
                    }
                    for (unsigned char i_12 = 4; i_12 < 12; i_12 += 4) /* same iter space */
                    {
                        arr_46 [i_12] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 1137590239)) ? (1137590243) : (-1137590261)))))), (((((/* implicit */_Bool) max((arr_10 [i_0] [i_1] [i_12] [i_12]), (var_3)))) ? ((-(1070023086U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(unsigned char)11] [i_4] [6])))))));
                        arr_47 [i_12] [i_0] [i_0] = ((/* implicit */_Bool) -1137590243);
                        arr_48 [i_0] [(_Bool)1] [i_12] = min((((int) ((((/* implicit */_Bool) (unsigned char)15)) ? (5862772553666119559ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [12U] [12U])))))), (((/* implicit */int) ((_Bool) (+(arr_2 [i_0]))))));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((min((((arr_21 [i_4] [i_4] [i_4] [12] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [(_Bool)1] [i_0] [i_4] [i_4 - 1] [(_Bool)1]))))), (((/* implicit */unsigned long long int) 1137590239)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_25 [i_0] [i_1] [i_1 - 1] [i_0] [(_Bool)1]) : (((/* implicit */unsigned int) arr_37 [i_4] [i_1]))))) ? (((/* implicit */unsigned int) ((-1137590256) * (((/* implicit */int) var_11))))) : (min((((/* implicit */unsigned int) var_10)), (var_13))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 1; i_13 < 10; i_13 += 4) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 14; i_14 += 3) 
                        {
                            {
                                var_28 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1817564285U)) ? (((((/* implicit */int) arr_44 [i_0] [i_1 + 1])) / (((/* implicit */int) arr_40 [i_4 - 1])))) : ((-(((/* implicit */int) (unsigned char)114))))));
                                var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((((_Bool)1) ? (1137590246) : (-508384474)))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1] [i_4 + 1] [i_13 - 1])) ? (((unsigned int) (unsigned char)247)) : (((/* implicit */unsigned int) ((arr_41 [i_0] [i_0] [i_0] [i_13] [i_14]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_30 [i_0] [i_1 + 1] [i_1 + 1] [i_13] [i_14]))))))) : (((/* implicit */unsigned int) (-((+(((/* implicit */int) (_Bool)1)))))))));
                                arr_55 [i_0] [i_1 - 2] [i_4 + 1] [i_13] [i_4 + 1] [i_13 + 1] [i_13] = ((/* implicit */_Bool) (-(((unsigned long long int) var_9))));
                            }
                        } 
                    } 
                    arr_56 [11] [i_1] [i_4 + 2] = arr_51 [i_4 + 1] [i_1 - 1] [i_1 - 2] [i_1 - 2];
                }
                for (unsigned long long int i_15 = 1; i_15 < 12; i_15 += 2) /* same iter space */
                {
                    arr_61 [6U] [i_0] [1U] = var_5;
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_66 [i_1] [(unsigned char)9] &= (((!((!((_Bool)0))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_38 [i_0] [i_0]))))), ((-(var_3)))))));
                                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) - ((+(((/* implicit */int) (_Bool)1)))))))));
                                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((5862772553666119532ULL), (((/* implicit */unsigned long long int) 0U))))))))) * (4247492678U))))));
                                arr_67 [i_1] [i_0] |= var_13;
                            }
                        } 
                    } 
                    var_32 -= ((((var_13) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_64 [i_15 - 1] [i_1 - 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_7))))));
                    var_33 = ((/* implicit */_Bool) ((min((((((/* implicit */unsigned long long int) 1U)) / (15908733976233674339ULL))), (((/* implicit */unsigned long long int) 262143)))) * (((/* implicit */unsigned long long int) -460998547))));
                }
                for (unsigned long long int i_18 = 1; i_18 < 12; i_18 += 2) /* same iter space */
                {
                    arr_70 [i_18] [i_1] = (-(((arr_44 [i_18 + 2] [i_18 - 1]) ? (((/* implicit */unsigned long long int) var_0)) : (8012852871837446993ULL))));
                    arr_71 [i_18] [i_18] [i_18] = ((/* implicit */int) ((unsigned char) arr_20 [i_18] [1ULL] [1ULL] [1ULL] [1ULL] [1ULL]));
                    arr_72 [i_18] = ((unsigned long long int) ((((/* implicit */unsigned long long int) 0U)) / (var_4)));
                }
            }
        } 
    } 
}
