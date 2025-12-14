/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33144
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
    var_17 = ((/* implicit */int) var_3);
    var_18 = ((/* implicit */long long int) min((var_16), (((/* implicit */unsigned short) min((((/* implicit */short) var_15)), (var_5))))));
    var_19 = ((/* implicit */unsigned char) var_5);
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)61)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))), (var_1)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */_Bool) var_3);
                        var_22 *= ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_1])) <= (((/* implicit */int) arr_9 [i_3] [i_2] [i_0] [i_0] [i_0]))))), ((-(((/* implicit */int) var_0))))));
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_1))));
                        var_24 = ((((((/* implicit */_Bool) (~(var_11)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [(signed char)8]))))) : (arr_0 [i_0]))) != (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)80))))));
                    }
                    for (long long int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (var_9)))));
                        arr_12 [i_0] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4] [i_0])) ? (((/* implicit */int) arr_5 [i_4] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_4] [i_2] [i_1] [i_0]))))) ? (((((_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4] [i_2] [i_1] [i_0]))) : (var_14))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_5 [i_4] [(short)20] [i_2] [(signed char)1])) + (arr_8 [i_0] [8]))))))));
                    }
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                    {
                        arr_15 [i_5] = ((/* implicit */long long int) arr_0 [i_1]);
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) + (((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_5] [i_5])) ? (arr_14 [i_5] [i_5] [i_5] [i_0]) : (((/* implicit */unsigned int) 1004962345))))));
                    }
                    var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)178)) ? (1624330993996936764LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)166))))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_28 = ((/* implicit */int) ((((/* implicit */int) ((var_14) == (((/* implicit */unsigned long long int) var_11))))) < (((arr_5 [i_0] [4U] [i_2] [4U]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_11)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (arr_14 [i_0] [(_Bool)0] [i_1] [(_Bool)0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)175))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        var_30 += ((unsigned int) ((((/* implicit */int) var_3)) << (((((var_4) + (4737041813129353815LL))) - (21LL)))));
                        /* LoopSeq 3 */
                        for (int i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            arr_23 [i_7] [i_7] [13U] [13U] [i_7] [i_0] = ((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0] [i_7] [i_8]);
                            var_31 *= ((/* implicit */unsigned char) ((arr_21 [i_1] [i_8] [i_8]) ^ (arr_21 [i_1] [i_1] [i_8])));
                            arr_24 [i_0] [i_0] [i_2] [i_7] [i_2] = ((/* implicit */_Bool) arr_22 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
                        }
                        for (int i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            arr_27 [i_1] [i_1] [i_7] [i_7] [16] = (+((+(((/* implicit */int) var_15)))));
                            var_32 = arr_10 [i_0];
                            var_33 = ((/* implicit */short) ((arr_26 [i_0] [i_0] [i_0]) / (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_3 [i_0] [8])) : (((/* implicit */int) var_10))))));
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_11 [i_0] [i_1] [(_Bool)1] [i_7] [(_Bool)1] [i_9]) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_10 [i_0])))));
                        }
                        for (short i_10 = 1; i_10 < 19; i_10 += 3) 
                        {
                            arr_31 [i_7] [16LL] [i_7] = arr_9 [i_0] [(short)13] [(short)13] [(short)13] [i_10 + 1];
                            arr_32 [i_7] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_2] [18LL] [i_10 + 2]))));
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((((/* implicit */_Bool) arr_7 [6ULL] [i_10 + 1] [i_10 + 1] [i_10 + 2] [i_10 - 1] [i_10])) ? ((~(var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_10])) ? (arr_28 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [(unsigned char)15] [i_0] [(unsigned char)15] [i_0]))))))))));
                            arr_33 [i_1] [i_1] [i_1] [i_7] [i_7] &= ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)44079))))));
                            arr_34 [i_0] [i_1] [i_1] [i_0] [i_7] [i_7] = ((/* implicit */int) ((arr_20 [i_0] [i_7] [i_7] [i_10 + 1] [i_7]) & (arr_20 [i_7] [i_7] [i_7] [i_10 - 1] [i_10])));
                        }
                    }
                    for (unsigned int i_11 = 2; i_11 < 20; i_11 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((max((arr_36 [i_11 + 1] [i_11 - 1] [i_11 - 2] [i_11 + 1]), (arr_36 [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_11 - 1]))) < (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) var_13)))))))))));
                        arr_38 [i_0] = ((/* implicit */unsigned short) (((-((~(5LL))))) > (arr_10 [i_1])));
                    }
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        arr_41 [i_2] [i_2] [i_1] [(unsigned char)11] = 1496273847256650417ULL;
                        arr_42 [19] [19] [i_2] [10LL] = ((/* implicit */unsigned long long int) var_7);
                        var_37 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_9 [i_12] [i_2] [(signed char)8] [(signed char)8] [(signed char)8])) || (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_12])))) ? (((/* implicit */unsigned int) ((var_15) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)21473))))) : (var_8))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_6)))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_12])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_12])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_12])))))))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_13 = 2; i_13 < 20; i_13 += 2) 
                    {
                        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) var_0))));
                        var_39 = ((/* implicit */unsigned int) ((var_6) >= (var_4)));
                        arr_45 [i_0] [i_1] [i_2] [i_2] [i_13 - 2] = ((/* implicit */short) (((-(((((/* implicit */int) var_3)) * (((/* implicit */int) (signed char)96)))))) + (((((/* implicit */int) arr_16 [i_0] [i_13 + 1] [i_2] [i_0] [i_2])) - (((/* implicit */int) arr_16 [11LL] [i_13 + 1] [i_13 + 1] [i_13] [i_2]))))));
                        var_40 = ((/* implicit */unsigned long long int) 2203467578U);
                    }
                    /* vectorizable */
                    for (unsigned short i_14 = 4; i_14 < 20; i_14 += 3) 
                    {
                        var_41 = ((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_1] [0ULL]);
                        /* LoopSeq 2 */
                        for (long long int i_15 = 1; i_15 < 20; i_15 += 1) 
                        {
                            arr_50 [(unsigned char)0] [11LL] [i_2] [(_Bool)1] [i_15] = ((/* implicit */long long int) ((_Bool) ((_Bool) arr_28 [i_0] [i_1] [19LL] [i_14 + 1])));
                            var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_39 [i_1] [(unsigned short)5] [i_2] [(unsigned short)8] [(unsigned short)1] [(unsigned short)8])) ? (((/* implicit */long long int) 1681727787)) : (arr_2 [i_1]))) + (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)155)) << (((var_6) + (6687470185053591641LL)))))))))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 21; i_16 += 1) 
                        {
                            var_43 = var_12;
                            var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) (~(var_11))))));
                        }
                        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_2] [i_14 - 1])) || (((/* implicit */_Bool) var_13))));
                    }
                    /* vectorizable */
                    for (long long int i_17 = 0; i_17 < 21; i_17 += 2) 
                    {
                        var_46 = ((/* implicit */long long int) max((var_46), (((((/* implicit */_Bool) arr_10 [i_1])) ? (arr_10 [i_0]) : (arr_10 [i_17])))));
                        var_47 ^= ((/* implicit */unsigned long long int) arr_55 [i_0] [i_1] [i_2] [i_17]);
                        var_48 = (~(((((/* implicit */int) arr_17 [i_0] [i_0])) << (((arr_37 [i_0] [i_1] [8U] [i_2] [i_2] [5LL]) - (693014580U))))));
                    }
                }
            } 
        } 
    } 
}
