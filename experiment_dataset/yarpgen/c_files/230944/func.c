/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230944
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
    var_18 |= ((/* implicit */long long int) var_10);
    var_19 ^= var_9;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((arr_0 [i_1]), (arr_0 [i_0])))), (min((16992640786471056391ULL), (((/* implicit */unsigned long long int) 548963452U))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned int i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned int) ((unsigned short) ((((/* implicit */int) (unsigned char)100)) < (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1])))))))));
                                arr_14 [i_3] [i_0] [i_0] [i_2] [i_0] [i_0] = arr_6 [i_0];
                                var_21 = ((/* implicit */unsigned long long int) max((548963440U), (2833895330U)));
                                var_22 = ((/* implicit */unsigned long long int) arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_3 - 1]);
                            }
                        } 
                    } 
                } 
                var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_3 [i_1] [i_1] [i_1]) < (((/* implicit */unsigned int) var_0)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (1461071966U) : (arr_9 [(short)13] [i_0] [i_1] [(short)13] [i_1] [i_1]))) : (((unsigned int) arr_13 [4U] [16ULL] [i_1] [i_1] [i_1] [i_1] [i_1]))))) ? (min((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_1] [i_1])), (((((/* implicit */_Bool) arr_8 [0ULL] [i_0] [i_0] [i_0])) ? (arr_0 [i_0]) : (3746003856U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((2048218451U) == (548963452U)))))));
                /* LoopSeq 2 */
                for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        arr_19 [i_0] [7ULL] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_16 [i_1] [i_5] [i_6])) ? (arr_15 [i_0]) : (((/* implicit */unsigned int) arr_17 [i_0] [i_5] [i_1] [i_0])))))))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned int) max((var_24), ((((+(((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) + (arr_4 [4] [4]))))) / (min((((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0])), (max((((/* implicit */unsigned int) (_Bool)0)), (arr_4 [i_7] [i_0])))))))));
                            var_25 = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((548963452U), (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_0] [i_7]))))), (((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */unsigned long long int) max((arr_15 [i_0]), (arr_12 [i_0] [i_0] [i_6] [i_7])))) : (max((0ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]))))))));
                            var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551601ULL)) ? ((-(((/* implicit */int) (short)-24)))) : (((/* implicit */int) ((((((/* implicit */_Bool) -890351056)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_5] [i_6] [i_6]))))) == (18446744073709551615ULL))))));
                            var_27 += ((/* implicit */short) ((long long int) min((var_4), (((/* implicit */long long int) (~(3746003855U)))))));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((((/* implicit */_Bool) ((long long int) arr_8 [i_7] [i_6] [i_5] [i_0]))) ? ((-(max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_6])), (12710238807041379910ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_15), (((/* implicit */short) ((_Bool) var_3)))))))))));
                        }
                        arr_24 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))) : (0LL))), (0LL))) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14565)))));
                    }
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        arr_27 [i_0] [i_1] [i_0] [i_1] [i_8] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (short)-4))))));
                        var_29 = ((/* implicit */short) ((((unsigned long long int) arr_23 [i_8] [i_0] [i_1] [i_0] [i_0])) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_1])))))));
                        var_30 = ((/* implicit */_Bool) min((var_30), ((!(((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (unsigned char)253)), (arr_18 [i_0] [i_0] [i_1] [i_0] [i_8] [i_8]))), (((/* implicit */unsigned long long int) min((5719304342096497578LL), (((/* implicit */long long int) arr_20 [i_8] [i_5] [i_1] [i_1] [i_8]))))))))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned int) arr_18 [i_0] [i_1] [i_0] [(short)23] [i_0] [(unsigned short)6]);
                        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (max((((arr_28 [i_0] [i_1] [i_1] [i_9]) / (((/* implicit */unsigned long long int) 2114808825)))), (arr_26 [i_9] [i_5] [i_1] [i_0]))))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
                    {
                        var_33 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(short)10] [(unsigned short)2] [i_5] [i_1] [i_1] [i_0] [(short)10])) ? (562949953421311LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)155)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967295U)) >= (arr_26 [1LL] [i_5] [i_0] [i_0]))))) : (((((/* implicit */_Bool) 3746003843U)) ? (((/* implicit */long long int) arr_4 [i_5] [i_1])) : ((-9223372036854775807LL - 1LL))))))) ? (arr_3 [19] [19] [(short)1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (-(var_3))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_11 = 3; i_11 < 21; i_11 += 1) 
                        {
                            arr_38 [i_11 + 2] [i_10] [12LL] [i_5] [12LL] [i_1] [i_0] &= ((/* implicit */unsigned char) min((min((((var_17) & (arr_13 [18ULL] [18ULL] [(unsigned char)10] [i_5] [i_11 + 3] [i_5] [i_1]))), (((arr_0 [i_5]) / (((/* implicit */unsigned int) var_0)))))), (((((/* implicit */_Bool) 4294967295U)) ? (arr_0 [i_1]) : (((((/* implicit */_Bool) arr_35 [(signed char)14] [(short)14] [i_5] [(signed char)14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (3433162795U)))))));
                            var_34 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_8 [i_10] [i_1] [i_5] [i_0]))))))) <= (min((((/* implicit */unsigned long long int) 0LL)), (((((/* implicit */unsigned long long int) -1102138373)) + (15381845740102291409ULL)))))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            var_35 ^= ((/* implicit */int) arr_22 [i_0] [i_0] [i_5] [15LL] [i_12]);
                            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_3 [i_0] [i_10] [7]) : ((~(arr_37 [i_0] [i_12] [4] [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_5] [i_10]))) & (3746003819U)))) < (((unsigned long long int) 45316712)))))) : (((((/* implicit */_Bool) min((var_3), (3746003819U)))) ? (arr_23 [i_12] [18LL] [i_12] [i_12] [18LL]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_12] [i_12] [12LL] [i_1] [i_12] [i_0])) ? (((/* implicit */unsigned int) -520922280)) : (arr_3 [i_0] [i_1] [i_0]))))))))));
                            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [4] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (short)32367))))), (((((/* implicit */_Bool) arr_31 [i_12] [i_10] [i_5] [i_1] [3U])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))) ? (((((/* implicit */_Bool) ((signed char) arr_17 [i_0] [i_1] [i_5] [i_0]))) ? (max((arr_26 [i_0] [i_0] [(_Bool)0] [i_0]), (((/* implicit */unsigned long long int) arr_34 [i_0] [(unsigned char)12] [i_1] [i_5] [i_10] [i_12])))) : (arr_26 [i_10] [i_10] [i_5] [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -21LL))))))));
                            var_38 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_31 [i_0] [i_0] [i_1] [i_10] [i_12])), (2147483647)))) ? (((/* implicit */unsigned long long int) 2147483641)) : ((((!(((/* implicit */_Bool) var_17)))) ? (var_11) : (((unsigned long long int) (unsigned short)65535))))));
                            arr_42 [22] [i_1] [i_5] [i_10] [i_0] = ((/* implicit */unsigned int) (short)-14680);
                        }
                        for (short i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned int) min((var_39), (((((_Bool) max((var_3), (((/* implicit */unsigned int) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (arr_4 [i_0] [i_5]) : (arr_37 [i_0] [2ULL] [i_0] [i_0] [i_10] [i_10] [i_0])))));
                            var_40 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_11))))));
                        }
                        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_41 [14] [i_1] [i_5] [i_10])) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) arr_31 [i_0] [i_1] [i_5] [i_5] [i_10]))))))), (((/* implicit */unsigned long long int) (((((-9223372036854775807LL - 1LL)) != (((/* implicit */long long int) ((/* implicit */int) (short)-14701))))) ? ((~(arr_0 [i_1]))) : (((unsigned int) 2206288188U))))))))));
                        var_42 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_1] [i_5] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) 520922277)) : (13268781420134137225ULL)))) ? (var_1) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_35 [i_0] [i_5] [i_1] [i_0])))))));
                    }
                    var_43 -= ((/* implicit */unsigned int) -520922289);
                }
                for (unsigned int i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    arr_49 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) 11ULL);
                    arr_50 [i_0] [i_14] = ((((/* implicit */unsigned long long int) 9223372036854775807LL)) * (13914131869230388339ULL));
                }
            }
        } 
    } 
    var_44 += ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 396123856)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (((/* implicit */long long int) (~(var_17))))))) & (((((/* implicit */_Bool) max((var_13), (var_15)))) ? (min((18446744073709551608ULL), (((/* implicit */unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_12)))))));
    var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5765)) ? (((/* implicit */unsigned long long int) var_3)) : (var_11)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned int) var_16))))) : (var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_14)))))))) : (((/* implicit */int) var_15))));
}
