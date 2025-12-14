/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239750
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] [i_1] = (!(((/* implicit */_Bool) (+(11U)))));
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
                        {
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)19464)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) % (((arr_13 [i_0] [i_2 - 1] [(unsigned char)6] [0U] [i_3] [i_1 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_2 + 3] [i_0] [i_0] [i_3] [i_1 - 3]))) : (1479874939U))))))));
                            var_16 += ((/* implicit */unsigned short) 1501120743U);
                            var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= (((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_8 [i_1]) : (1501120743U)))));
                            var_18 = 1501120714U;
                        }
                        for (int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                        {
                            arr_20 [i_1] = ((/* implicit */unsigned short) 769534125U);
                            var_19 -= ((/* implicit */_Bool) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 769534140U)))))) + (max((1501120743U), (((/* implicit */unsigned int) arr_1 [i_2])))))));
                            arr_21 [i_5] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1348007109U)))))));
                            var_20 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_19 [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 3] [i_2 + 1] [i_1 - 3])) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (short)-28793))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_14 [(short)8]))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned short) (unsigned short)7)))));
                            var_23 += ((/* implicit */unsigned short) min(((-(min((((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_2] [i_0] [i_2])), (1085852037U))))), (((/* implicit */unsigned int) (unsigned char)17))));
                        }
                        var_24 -= ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)21455)) == (((/* implicit */int) arr_0 [i_1 - 3])))) ? (((/* implicit */int) (!(arr_13 [i_2 + 1] [i_3] [i_2 - 1] [i_1 - 2] [i_3] [i_1])))) : (((/* implicit */int) arr_12 [i_1 - 3] [i_2 - 1] [i_3] [i_2 + 3]))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        arr_26 [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 769534125U)) ? (65362993U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)44)) || (((/* implicit */_Bool) 6030940032760402401LL))))))));
                        arr_27 [i_0] [i_1] [i_2] [i_7] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 4088161943U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1 + 1] [i_1] [i_7]))))) : (((var_2) + (((/* implicit */int) (short)19116))))))) ? ((-(arr_16 [i_2 + 3] [i_1] [i_1 + 1] [i_1] [i_1 - 1] [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_15 [i_1] [i_1 - 3] [i_1] [i_1] [i_1])) : (-1416587470))))));
                        arr_28 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((_Bool) var_10)) ? ((+(((/* implicit */int) (short)19116)))) : (((/* implicit */int) arr_23 [i_2] [i_2 + 3] [i_2 + 3] [i_2] [i_2 + 2] [i_2] [i_2])))))));
                        var_25 = ((/* implicit */unsigned int) (short)28801);
                    }
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_26 ^= arr_19 [i_0] [i_0] [i_1 - 2] [i_0] [i_0] [i_8] [i_8];
                        /* LoopSeq 2 */
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(-1416587470)))))))) * (var_14))))));
                            var_28 -= ((/* implicit */signed char) (((!(var_6))) ? (max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)28792)))), (((/* implicit */int) ((_Bool) arr_11 [i_2 + 1] [i_1] [i_2 + 1] [i_2 + 1]))))) : (((/* implicit */int) arr_22 [i_0] [i_1 + 1] [i_2 - 1]))));
                            arr_35 [i_0] [i_1] [i_1] [i_9] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */int) (unsigned short)21455)) == (((/* implicit */int) (unsigned short)44075))))), (((short) (_Bool)1))))) ? (min((-6030940032760402377LL), (((/* implicit */long long int) (short)-28788)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127)))));
                            var_29 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (var_10)));
                            var_30 = ((/* implicit */unsigned short) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (unsigned short i_10 = 1; i_10 < 18; i_10 += 4) 
                        {
                            arr_39 [i_0] [i_1] [i_1] [i_10 + 2] = ((/* implicit */_Bool) (short)-19117);
                            var_31 ^= ((/* implicit */unsigned short) ((short) (+(arr_25 [i_10 + 1] [i_2 + 2] [i_10 + 1] [i_8]))));
                            var_32 = (+(((/* implicit */int) (short)-28778)));
                        }
                        arr_40 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_0] [i_1] [i_2 + 1] [i_8] [i_1]))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_8] [i_2] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (2243579339U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_8] [i_0] [i_0] [i_2] [i_1] [i_0] [i_0]))) : (arr_24 [i_1 - 2] [i_2 - 1] [i_8] [i_8] [6] [i_8])))));
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_8] [i_1] [i_2] [i_1] [i_0])) ? (((/* implicit */int) (unsigned short)65533)) : (((/* implicit */int) arr_34 [i_0] [i_1] [2U] [i_0] [i_8]))))) ? (((/* implicit */int) arr_34 [16U] [i_1] [i_8] [i_8] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) 769534140U)))))));
                        arr_41 [i_8] [i_2 + 2] [i_1] = ((/* implicit */unsigned char) arr_33 [i_0] [i_1] [i_2] [i_2] [(unsigned char)5] [i_8]);
                    }
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        arr_46 [i_11] [i_1] [(unsigned short)1] [i_11] [i_1] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (short)28804)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 0U)) ? (arr_33 [(_Bool)0] [i_0] [i_1 + 1] [(_Bool)0] [i_2] [i_11]) : (((/* implicit */long long int) var_0)))))) & (((/* implicit */long long int) ((/* implicit */int) (!(arr_23 [i_1 + 1] [i_2 + 1] [i_2] [i_2] [i_2] [i_2] [i_2 + 1])))))));
                        var_34 += ((((/* implicit */unsigned int) ((/* implicit */int) (short)-28769))) | (((((/* implicit */_Bool) arr_19 [i_2 + 2] [i_11 + 1] [(_Bool)1] [i_1 - 2] [(unsigned short)8] [(unsigned short)6] [i_1])) ? (arr_25 [(unsigned char)2] [i_11 + 1] [i_2 + 1] [(unsigned char)2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2 + 3] [i_11 + 1] [i_2] [i_1 + 1] [i_2] [i_0] [i_11]))))));
                        var_35 = ((/* implicit */_Bool) min(((~(((/* implicit */int) var_3)))), (((/* implicit */int) (_Bool)1))));
                        var_36 |= ((/* implicit */unsigned char) var_6);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 4; i_12 < 17; i_12 += 3) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) (-((+((+(((/* implicit */int) var_4)))))))))));
                                arr_54 [i_0] [i_1 - 2] [i_2] [i_12 - 1] [i_13] [i_1] = arr_8 [i_1];
                                var_38 = ((/* implicit */signed char) (unsigned short)0);
                            }
                        } 
                    } 
                }
                for (unsigned int i_14 = 3; i_14 < 19; i_14 += 2) 
                {
                    var_39 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)64278))))) ? (((2793846548U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1 - 1] [i_14 - 2] [i_14 + 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2084035485U)) ? (((/* implicit */int) arr_37 [i_1])) : (((/* implicit */int) arr_22 [i_1 + 1] [i_14 - 2] [i_14 - 2]))))));
                    arr_57 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)21450))));
                    /* LoopSeq 2 */
                    for (unsigned short i_15 = 0; i_15 < 20; i_15 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_16 = 0; i_16 < 20; i_16 += 3) 
                        {
                            var_40 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-30235)) : (-13))))) * (((/* implicit */int) ((unsigned short) var_7)))));
                            var_41 *= (((!(((/* implicit */_Bool) (signed char)0)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4292006018U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) (unsigned short)61989))))));
                        }
                        for (unsigned short i_17 = 4; i_17 < 19; i_17 += 3) 
                        {
                            arr_69 [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned char)127);
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned short)49667)) : (-2012179679)));
                        }
                        var_43 -= ((/* implicit */signed char) (unsigned short)65534);
                        var_44 = (unsigned short)57693;
                        var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(67107840U)))) ? ((-(((/* implicit */int) arr_66 [i_0] [i_1 - 3] [i_14] [i_15] [i_14 - 3])))) : ((~(((/* implicit */int) ((short) arr_48 [i_0] [i_0] [i_1] [i_14] [i_15])))))));
                        arr_70 [i_14] [i_1] [i_1] [i_15] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max(((short)-28773), ((short)-28793))), ((short)28776)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_38 [i_14 - 1] [i_1] [i_1 - 2] [i_1 + 1] [i_0])), (arr_61 [i_0] [i_1] [i_1 - 3]))))) : (4227859455U)));
                    }
                    for (signed char i_18 = 0; i_18 < 20; i_18 += 1) 
                    {
                        var_46 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [(unsigned short)16] [(unsigned short)16]))));
                        arr_73 [i_18] [i_1] [i_14] [i_1] [i_0] = ((var_13) ^ (3604254478U));
                    }
                    var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) var_11))));
                    arr_74 [i_14 - 2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_24 [i_1] [i_1 - 3] [i_1 - 3] [i_14] [i_14] [i_14 - 1])) ? (arr_24 [i_0] [i_0] [i_1 + 1] [i_1] [i_14] [i_14 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))));
                }
            }
        } 
    } 
    var_48 += var_10;
}
