/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50616
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
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [(short)0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_3 [i_0])))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (arr_3 [(signed char)17])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_3 [0ULL])))) : (6187344888091880168ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)37725)) || (((/* implicit */_Bool) arr_0 [i_0]))))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    var_15 += ((/* implicit */_Bool) var_1);
                    arr_8 [11ULL] [(short)14] [2U] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) var_4))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_6 [i_2 - 2] [i_1] [i_1]))))));
                    var_16 -= ((/* implicit */short) ((unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136))) >= (8388607U)))), (var_6))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_12 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) var_7)), (var_1))), (((/* implicit */long long int) ((int) var_7)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16588)) ? (((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 31U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_14))))))) : (((/* implicit */int) var_10))));
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
                }
                for (signed char i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (int i_5 = 1; i_5 < 14; i_5 += 2) 
                    {
                        arr_20 [i_4] [6] [i_4] [6] [6] [i_4] = ((/* implicit */long long int) (((_Bool)0) || (((var_4) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 12259399185617671447ULL)) ? (12259399185617671447ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))))))))));
                        var_17 = ((/* implicit */long long int) ((((_Bool) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */unsigned long long int) -1214162640)) : (15195714433098168065ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_10 [(unsigned short)5] [(unsigned short)5] [(unsigned short)5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1]))) : (((arr_9 [i_0] [i_0] [2LL] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_14))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) var_4))))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        arr_25 [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]);
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_13))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_19 += 12259399185617671436ULL;
                            var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) -8595890907450893750LL)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2)))));
                        }
                        arr_28 [i_0] [i_1] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_14) > (((/* implicit */unsigned long long int) 1765928007))))) ^ (((/* implicit */int) var_10))));
                    }
                    arr_29 [i_1] [i_4] = ((/* implicit */long long int) 1637473391U);
                    /* LoopSeq 4 */
                    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) var_5);
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_22 [i_9] [1U] [i_4] [i_1] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_4] [i_8] [i_9]))))) : (((/* implicit */int) min((arr_22 [i_0] [i_4] [i_4] [i_0] [i_9]), (arr_22 [i_0] [i_1] [i_4] [i_8] [(_Bool)1])))))))));
                            arr_37 [i_0] [i_1] [i_0] [i_8] [0ULL] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (10720744770840213147ULL) : (((/* implicit */unsigned long long int) 1261587731164782668LL)))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2261727878U)), (2346903175570075573ULL)))) ? (((/* implicit */int) arr_7 [i_1] [i_1] [11U] [i_8])) : (((/* implicit */int) arr_22 [2ULL] [i_1] [i_4] [i_8] [i_9])))))));
                        }
                        for (long long int i_10 = 0; i_10 < 18; i_10 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-60)), ((((_Bool)0) ? (((/* implicit */unsigned long long int) var_5)) : (arr_32 [i_0] [i_0] [i_8] [i_10])))))) ? (max((((/* implicit */unsigned long long int) min((1728157214), (((/* implicit */int) var_7))))), (min((var_14), (((/* implicit */unsigned long long int) var_0)))))) : (((var_4) ? (arr_6 [i_10] [i_8] [i_1]) : (arr_32 [i_0] [i_1] [14U] [i_10])))));
                            var_24 = ((_Bool) max((((/* implicit */unsigned long long int) ((_Bool) var_0))), (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_32 [i_0] [i_1] [i_0] [i_10])))));
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((((var_13) ? (((/* implicit */long long int) 4294967295U)) : (arr_26 [i_1] [i_4] [i_1] [4ULL]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [(short)16] [(short)16] [(short)16] [i_8])) ? (((/* implicit */int) arr_24 [i_1] [i_4] [i_8] [i_10])) : (var_2))))))), (((((/* implicit */_Bool) 2033239403U)) ? (6520630731725459671ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133))))))))));
                        }
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_1 [i_0]))));
                    }
                    for (unsigned char i_11 = 2; i_11 < 16; i_11 += 2) 
                    {
                        var_27 = ((/* implicit */_Bool) min((var_27), (((479102672U) > (min((((((/* implicit */_Bool) var_12)) ? (var_0) : (((/* implicit */unsigned int) -407032758)))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)11283)) >> (((/* implicit */int) var_4)))))))))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_11 + 2] [i_11 + 2] [i_11] [i_11 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_11] [i_4] [i_4])))))) : ((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_21 [i_0] [i_1] [i_4] [i_11]))))) : ((+(8663255293053506260LL)))))));
                        var_29 *= ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_23 [i_11] [(unsigned short)10] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_5))) << (max((((/* implicit */long long int) var_11)), (arr_31 [i_0] [i_1] [i_1] [i_4] [i_11]))))) > (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                    }
                    for (unsigned long long int i_12 = 3; i_12 < 17; i_12 += 1) 
                    {
                        var_30 *= ((/* implicit */_Bool) arr_36 [i_0] [i_0]);
                        var_31 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_27 [i_0] [i_12 - 3] [i_4] [i_0] [i_12])) ? (((/* implicit */int) arr_27 [i_0] [i_12 + 1] [i_0] [i_0] [i_4])) : (((/* implicit */int) (signed char)-123)))), ((+(min((((/* implicit */int) (_Bool)0)), (var_2)))))));
                    }
                    for (unsigned int i_13 = 2; i_13 < 17; i_13 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned char) min((-8663255293053506262LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)3380)) ? (((/* implicit */int) arr_41 [i_13 - 1] [i_13 - 1])) : (((/* implicit */int) arr_41 [i_13 - 1] [i_13 + 1])))))));
                        var_33 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) 2261727878U)), (6187344888091880164ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))), ((+(3533533662U))))))));
                        var_34 = ((/* implicit */long long int) max((var_34), (min((((6300006093541768770LL) ^ (((/* implicit */long long int) 0U)))), (((/* implicit */long long int) arr_42 [i_0] [i_0] [i_0] [i_13] [i_4]))))));
                        var_35 = ((/* implicit */long long int) ((_Bool) arr_33 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [i_1]));
                    }
                }
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    var_36 = ((/* implicit */long long int) ((((((/* implicit */int) max((((/* implicit */short) (signed char)127)), ((short)18668)))) / ((+(((/* implicit */int) (_Bool)1)))))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))) > (var_6))))));
                    arr_51 [i_0] [i_1] [i_1] [i_14] = ((/* implicit */unsigned int) var_5);
                    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((5885329057273664640LL), (((/* implicit */long long int) (_Bool)0))))), ((((_Bool)1) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                    /* LoopSeq 4 */
                    for (signed char i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        arr_54 [(short)10] [i_15] [(short)10] [(unsigned char)7] = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_13)), (((signed char) (-2147483647 - 1)))));
                        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((long long int) var_4)))));
                        var_39 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [4U] [i_0])) ^ (((/* implicit */int) arr_4 [i_15] [i_15] [i_14]))))) ? (((arr_4 [(short)8] [i_1] [i_14 + 1]) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_4 [i_0] [i_14] [i_14]))));
                        var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) (~(var_5))))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -8663255293053506262LL)) ? (((/* implicit */int) arr_17 [i_14 + 1] [i_14 + 1] [i_14 + 1])) : (((/* implicit */int) var_4))));
                        /* LoopSeq 4 */
                        for (long long int i_17 = 0; i_17 < 18; i_17 += 2) 
                        {
                            var_42 -= arr_48 [i_0] [i_1];
                            var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((arr_44 [i_14 + 1] [i_14 + 1] [i_1] [i_14] [i_1]) & (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-106))))))))));
                            var_44 |= (+(813840783));
                            var_45 *= ((/* implicit */long long int) ((signed char) var_1));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_64 [i_16] [i_1] = ((/* implicit */short) ((long long int) ((((/* implicit */int) var_11)) % (((/* implicit */int) var_3)))));
                            var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_14 + 1] [i_1] [14LL])))))));
                        }
                        for (int i_19 = 0; i_19 < 18; i_19 += 2) /* same iter space */
                        {
                            arr_67 [i_0] [(signed char)0] [i_16] [(unsigned short)7] = ((/* implicit */long long int) var_6);
                            var_47 += ((/* implicit */signed char) ((var_0) << (((arr_15 [i_14 + 1] [i_14 + 1] [i_14 + 1]) - (3990177035U)))));
                            var_48 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_58 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1]))));
                            arr_68 [i_16] [i_1] [i_16] [i_16] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)5572)) < (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) var_6))));
                            var_49 = ((/* implicit */_Bool) max((var_49), (((((/* implicit */_Bool) arr_26 [i_14 + 1] [i_14 + 1] [i_19] [i_14 + 1])) && (((/* implicit */_Bool) arr_26 [i_14 + 1] [i_14 + 1] [i_1] [i_14]))))));
                        }
                        for (int i_20 = 0; i_20 < 18; i_20 += 2) /* same iter space */
                        {
                            arr_71 [(signed char)14] [i_16] [i_14] [1LL] [i_20] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_65 [0] [i_16])) ? (2074743139U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                            arr_72 [i_16] [i_16] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) <= (var_6));
                            var_50 = ((/* implicit */unsigned int) var_5);
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_21 = 1; i_21 < 17; i_21 += 3) 
                    {
                        arr_76 [i_0] [i_21] [i_0] [i_21] = ((/* implicit */unsigned long long int) arr_17 [i_0] [i_14] [(signed char)13]);
                        arr_77 [i_0] [i_21] [i_1] [i_1] [i_21] [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_21 - 1] [i_21] [i_21 - 1])) ? (arr_6 [i_14 + 1] [i_14 + 1] [i_14 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_26 [(_Bool)1] [i_1] [i_21] [3]) : (((/* implicit */long long int) ((/* implicit */int) (short)-24894))))))));
                        arr_78 [i_21] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_73 [i_21 + 1] [i_21] [i_21] [i_21 + 1]))));
                        var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_14] [i_14 + 1] [i_14] [i_14] [i_14 + 1])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_14] [i_14] [i_14 + 1] [i_14 + 1] [i_14 + 1]))))))));
                        var_52 *= ((/* implicit */unsigned long long int) (-(var_2)));
                    }
                    /* vectorizable */
                    for (short i_22 = 2; i_22 < 15; i_22 += 1) 
                    {
                        var_53 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_22 + 1] [i_14 + 1] [i_14] [i_14]))) ^ (var_14)));
                        var_54 *= ((/* implicit */unsigned long long int) ((((4611686018427387903LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_14]))))) || (((/* implicit */_Bool) ((var_13) ? (var_14) : (((/* implicit */unsigned long long int) var_9)))))));
                        var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_50 [14] [i_14] [i_22])) >= (((((/* implicit */_Bool) (unsigned char)234)) ? (2734033695U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8)))))));
                    }
                    var_56 = ((/* implicit */unsigned long long int) min((var_56), (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) min((var_0), (arr_44 [i_1] [i_1] [i_1] [i_1] [i_1])))), (((((/* implicit */_Bool) 17724069803610461558ULL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))), (((/* implicit */long long int) arr_63 [(_Bool)1] [i_1] [i_1] [i_14] [i_14])))))));
                }
            }
        } 
    } 
    var_57 -= ((/* implicit */unsigned long long int) (~(var_2)));
    var_58 = ((/* implicit */unsigned long long int) ((_Bool) var_6));
    var_59 = ((/* implicit */_Bool) min((var_59), (((/* implicit */_Bool) max((((/* implicit */long long int) min((((_Bool) var_11)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (var_14)))))), (var_5))))));
}
