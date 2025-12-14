/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222960
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
    var_12 = max((var_0), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) == ((+(((/* implicit */int) (unsigned short)20))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_1 + 1] [i_4] [i_0 - 1]))) : (arr_3 [i_2 + 1] [i_2 - 1])));
                                var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))));
                            }
                        } 
                    } 
                    arr_11 [i_0] [i_1] [i_0 - 1] = ((/* implicit */int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (long long int i_5 = 1; i_5 < 7; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1778370891U)))))));
                        var_16 = ((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2]);
                    }
                }
                /* vectorizable */
                for (short i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                {
                    var_17 = var_9;
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 2; i_7 < 7; i_7 += 2) 
                    {
                        var_18 -= ((/* implicit */_Bool) (unsigned short)65535);
                        var_19 = ((/* implicit */unsigned char) var_4);
                        var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (signed char)-16)) & (((/* implicit */int) (unsigned short)65535))))));
                        arr_22 [i_0] [i_0] [i_1] [i_7 - 2] = (((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? ((+(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((short) var_1))));
                    }
                }
                for (short i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)109)), ((unsigned short)65520))))) == (((((/* implicit */_Bool) -510418188412596964LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18446744073709551615ULL)))))) : (((/* implicit */int) min((arr_9 [i_0] [i_0 - 1] [i_0] [i_8] [i_1 + 1]), (arr_9 [i_8] [i_0 - 1] [i_1 + 1] [i_0 - 1] [i_1 + 1]))))));
                    var_22 = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) 1799496928U)) || (((/* implicit */_Bool) (unsigned short)0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 24932054)))) : (((((/* implicit */_Bool) arr_3 [i_8] [i_8])) ? (4004239937U) : (((/* implicit */unsigned int) var_1)))))), (((/* implicit */unsigned int) var_1))));
                }
                /* LoopSeq 4 */
                for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 1) 
                {
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) max((((/* implicit */int) var_8)), ((+(((/* implicit */int) (unsigned short)65535)))))))));
                    var_24 = ((/* implicit */short) min((((/* implicit */unsigned int) (signed char)-16)), (((unsigned int) (signed char)113))));
                }
                /* vectorizable */
                for (signed char i_10 = 1; i_10 < 6; i_10 += 2) 
                {
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (~((~(((/* implicit */int) arr_1 [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        for (int i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            {
                                arr_39 [i_1 + 1] [i_0 - 1] [i_11] [i_1] [i_11] = ((/* implicit */int) ((_Bool) ((unsigned int) var_1)));
                                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((845898867) / (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65524))) - (arr_31 [i_1 + 1] [i_10] [i_11] [i_12])))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */int) max((var_27), ((-(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_4)) : (-246273708)))))));
                    /* LoopNest 2 */
                    for (short i_13 = 4; i_13 < 8; i_13 += 4) 
                    {
                        for (unsigned short i_14 = 1; i_14 < 7; i_14 += 3) 
                        {
                            {
                                arr_45 [i_0] [i_1] = ((((/* implicit */_Bool) arr_2 [i_13] [i_14])) ? (4626422162370798933LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))));
                                arr_46 [i_0 - 1] [i_1] [i_0 - 1] [i_1] [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_13 - 4] [i_13 - 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_14 + 2]))))) : (((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_15 = 4; i_15 < 8; i_15 += 2) 
                {
                    arr_50 [i_0] [i_1] [i_0 - 1] = var_9;
                    arr_51 [i_1] [i_1] [i_15 - 3] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_42 [i_1 - 1] [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_29 [i_0] [i_0 - 1] [i_0 - 1] [i_15 - 3])))) : ((~(((/* implicit */int) var_2))))))));
                    arr_52 [i_1] [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((((arr_19 [i_0 - 1] [i_1 + 1] [i_15 + 2] [i_15 - 1]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16696))))) << (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) var_5)))) + (131)))));
                    var_28 = ((/* implicit */long long int) arr_31 [i_15 - 4] [2] [i_15] [i_15 - 3]);
                    arr_53 [i_0] [i_15] [i_1] [i_1] = ((/* implicit */int) var_7);
                }
                /* vectorizable */
                for (unsigned short i_16 = 1; i_16 < 6; i_16 += 1) 
                {
                    var_29 = ((/* implicit */unsigned short) ((arr_30 [i_0] [(_Bool)1] [i_0] [i_0 - 1]) - (arr_30 [i_0] [i_0] [i_0] [i_0 - 1])));
                    arr_58 [i_16] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_17 = 0; i_17 < 14; i_17 += 3) 
    {
        for (int i_18 = 0; i_18 < 14; i_18 += 4) 
        {
            for (long long int i_19 = 0; i_19 < 14; i_19 += 2) 
            {
                {
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_7))) && (((_Bool) ((((/* implicit */_Bool) arr_62 [i_19] [3LL] [i_19])) ? (((/* implicit */int) arr_59 [i_17])) : (((/* implicit */int) var_10)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_20 = 0; i_20 < 14; i_20 += 2) 
                    {
                        arr_67 [i_17] [i_18] [i_19] [i_19] [i_17] [i_20] = ((/* implicit */long long int) var_10);
                        var_31 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 64424509440ULL)) ? (arr_65 [i_19] [(_Bool)1] [(_Bool)1] [i_19] [i_19] [i_19]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12)))))) ? (((arr_66 [i_19] [i_18]) - (((/* implicit */int) arr_59 [i_17])))) : ((+(-1)))))) ? (((max((2113929216U), (((/* implicit */unsigned int) (unsigned short)54311)))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_17] [i_17] [i_19]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31873)))));
                        arr_68 [i_17] [i_18] [i_17] [3] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_61 [i_20] [i_18])) ? (((/* implicit */int) var_9)) : (1274336355))) - (((((/* implicit */int) var_2)) & (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) : (min((((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221))))), (((/* implicit */unsigned long long int) arr_66 [i_17] [i_20]))))));
                        var_32 = ((/* implicit */int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)112))))), (min((((/* implicit */unsigned int) (unsigned short)65535)), (4263609560U)))));
                        var_33 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) 17113349651321065550ULL)) ? ((+(((/* implicit */int) (unsigned short)25961)))) : (((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)131)))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_66 [i_20] [i_19])))))));
                    }
                    /* vectorizable */
                    for (int i_21 = 2; i_21 < 13; i_21 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned char) (+(arr_64 [i_21 - 2] [i_21 + 1] [i_17] [i_21 + 1])));
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_21] [i_21 - 2] [i_17] [i_17])) ? (((((/* implicit */int) arr_63 [i_17])) << (((((((/* implicit */int) (short)-4373)) + (4403))) - (17))))) : (((/* implicit */int) var_8))));
                        var_36 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (7605920551310073025LL) : (arr_64 [i_18] [i_18] [i_21] [i_18]))))));
                        arr_72 [i_17] = ((/* implicit */_Bool) (+(arr_69 [i_21] [i_17] [i_21] [i_21 + 1])));
                        arr_73 [i_17] [i_17] [i_19] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1)) % (((/* implicit */int) arr_60 [i_17]))))) ? (arr_64 [i_21 - 2] [i_18] [i_17] [i_21]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */unsigned int) var_1)) : (arr_69 [i_18] [i_17] [i_17] [i_18]))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_22 = 0; i_22 < 14; i_22 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_23 = 2; i_23 < 11; i_23 += 4) 
                        {
                            arr_80 [i_17] [i_17] [i_19] [(unsigned short)4] [(_Bool)1] = ((((/* implicit */_Bool) (-(2147483644)))) ? (((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_70 [i_23])))) : (((/* implicit */int) arr_63 [i_23 - 2])));
                            var_37 = ((/* implicit */int) min((var_37), (((int) 0ULL))));
                        }
                        for (int i_24 = 0; i_24 < 14; i_24 += 4) 
                        {
                            arr_85 [i_19] [i_19] [i_19] [i_17] [i_19] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_63 [i_17]))));
                            arr_86 [i_22] [7] [7] [7] [i_17] = ((/* implicit */_Bool) ((unsigned short) arr_75 [i_17] [i_17]));
                        }
                        for (short i_25 = 2; i_25 < 11; i_25 += 4) 
                        {
                            arr_89 [i_17] = ((/* implicit */int) ((long long int) arr_62 [i_25 + 2] [i_25] [(_Bool)0]));
                            arr_90 [i_17] [i_18] [i_19] [i_17] [i_25 - 2] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_71 [i_17] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) arr_70 [i_17]))) : ((-9223372036854775807LL - 1LL))))));
                            arr_91 [i_17] [i_18] [i_17] [i_22] [i_17] = ((arr_76 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]) <= (((/* implicit */int) (signed char)125)));
                        }
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            arr_95 [i_17] = ((/* implicit */unsigned char) ((int) arr_84 [i_17] [i_19] [i_19] [i_19] [i_19]));
                            var_38 = ((/* implicit */_Bool) ((arr_64 [i_17] [i_18] [i_17] [i_18]) % (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_0))))));
                            arr_96 [i_17] [i_17] [i_17] = ((/* implicit */short) (+(arr_83 [i_17])));
                            var_39 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-39))))) : (var_7)));
                        }
                        var_40 = ((/* implicit */unsigned int) ((_Bool) var_0));
                        var_41 = ((/* implicit */long long int) -3);
                    }
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_77 [i_17] [i_18] [i_19] [i_27]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_84 [i_18] [12] [i_19] [i_19] [i_19]) : (((/* implicit */int) arr_70 [i_17]))))) ? ((-(((/* implicit */int) (signed char)-126)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)32767)) : (-1496785170))))))))));
                        arr_101 [7U] [(signed char)0] [i_17] = ((/* implicit */short) (~(((((/* implicit */int) arr_92 [i_17] [i_18] [i_19] [i_27] [i_19] [i_27] [i_18])) << (((((((/* implicit */_Bool) arr_87 [(short)12] [(short)12] [i_17] [i_27] [i_27])) ? (((/* implicit */unsigned int) 1955597661)) : (arr_71 [i_17] [i_17]))) - (1955597650U)))))));
                        arr_102 [i_17] [i_17] [i_17] [i_17] = (i_17 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_81 [i_17] [i_18] [i_27])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))), (((((-1372545328) + (2147483647))) << (((((/* implicit */int) arr_77 [i_17] [i_17] [i_17] [i_27])) - (14789)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) arr_62 [i_19] [i_18] [i_19])), (-1955597645)))) ? (arr_94 [i_17] [i_17] [i_17] [i_17] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) ((short) (short)-31862)))))) : ((+(3974579097783208465LL)))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_81 [i_17] [i_18] [i_27])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))), (((((-1372545328) + (2147483647))) << (((((((/* implicit */int) arr_77 [i_17] [i_17] [i_17] [i_27])) - (14789))) - (46214)))))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) arr_62 [i_19] [i_18] [i_19])), (-1955597645)))) ? (arr_94 [i_17] [i_17] [i_17] [i_17] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) ((short) (short)-31862)))))) : ((+(3974579097783208465LL))))));
                        var_43 = ((/* implicit */unsigned int) arr_87 [i_17] [i_17] [i_17] [i_17] [13ULL]);
                    }
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))) : (4294967295U))) >> (((3671099092U) - (3671099063U)))))) ? (((/* implicit */unsigned int) ((((int) var_7)) ^ (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) arr_82 [i_28] [i_28] [(unsigned char)8] [(short)13] [2ULL])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_88 [i_17] [i_17] [i_17]))))) : ((~(var_0)))))));
                        arr_106 [i_17] = 0;
                        var_45 = ((/* implicit */unsigned int) min((((((arr_76 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28]) | (((/* implicit */int) (unsigned short)18711)))) - (((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_11))))))));
                        arr_107 [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3726))) % (max((((/* implicit */long long int) var_0)), (-9223372036854775791LL)))))));
                    }
                    var_46 = (-(((/* implicit */int) (_Bool)0)));
                }
            } 
        } 
    } 
    var_47 &= ((/* implicit */short) (~(var_7)));
}
