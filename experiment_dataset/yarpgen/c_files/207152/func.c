/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207152
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
    var_12 = ((var_10) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */int) ((signed char) 2299177971U))) : (((/* implicit */int) var_9))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_13 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) (signed char)-117)))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((_Bool) (signed char)-95));
        arr_5 [i_0 + 2] = ((4207278837U) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))));
        arr_6 [i_0 + 3] = ((/* implicit */_Bool) ((arr_1 [i_0 + 2] [i_0 + 3]) / (((/* implicit */long long int) arr_2 [i_0 - 2] [i_0 + 2]))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) -84836165))));
        arr_10 [i_1] = ((/* implicit */long long int) (-(var_8)));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            var_15 = ((/* implicit */long long int) (~(4207278837U)));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                var_16 *= (-(((2515401238U) + (3987283026U))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~(((/* implicit */int) arr_16 [i_3 + 1] [i_3 + 1] [i_3 + 1])))))));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    for (unsigned short i_6 = 1; i_6 < 7; i_6 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1779566057U)) ? (9551802914224139503ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */unsigned long long int) ((int) var_2)))));
                            arr_23 [i_6 + 2] [i_3] [i_2] [i_4] [i_3] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 87688473U)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)117))))) : (var_5)));
                        }
                    } 
                } 
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_3 + 1] [i_2] [i_4] [i_3] [i_3])) ? (var_5) : (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)85))) : (var_8)))));
            }
            arr_24 [i_3] [i_3 + 1] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1073741823U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))) | ((~(((/* implicit */int) var_0))))));
        }
        arr_25 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)-118)))) ^ (((unsigned int) (_Bool)1))));
        arr_26 [i_2] = var_10;
        var_20 = ((/* implicit */int) (+(16383U)));
    }
    for (short i_7 = 0; i_7 < 17; i_7 += 2) 
    {
        arr_31 [i_7] = arr_8 [i_7] [i_7];
        var_21 ^= ((min((((/* implicit */unsigned int) (signed char)-101)), (4207278837U))) & (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)3636), (((/* implicit */unsigned short) (signed char)-117)))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_8 = 1; i_8 < 20; i_8 += 4) 
    {
        arr_36 [i_8 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_8 + 1] [i_8 + 1])) * (((/* implicit */int) arr_9 [i_8 + 1] [i_8]))));
        arr_37 [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (_Bool)1))) & (-1205372190)));
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) 87688458U);
            /* LoopNest 2 */
            for (short i_11 = 1; i_11 < 10; i_11 += 2) 
            {
                for (unsigned int i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    {
                        arr_49 [i_11] [i_11] = ((/* implicit */_Bool) 2515401238U);
                        var_23 = ((/* implicit */int) max((var_23), (1717584509)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_13 = 2; i_13 < 10; i_13 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    arr_56 [i_9 - 1] [i_9 - 1] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) 87688454U))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)3613), (((/* implicit */unsigned short) (signed char)124)))))) : (4294967295U)));
                    var_24 = ((/* implicit */unsigned short) ((short) (_Bool)1));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_9 [i_9 - 1] [i_13 - 2])))) * ((+(min((((/* implicit */unsigned int) var_6)), (var_1)))))));
                }
                for (unsigned int i_15 = 0; i_15 < 11; i_15 += 4) 
                {
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) arr_1 [i_10] [i_10]))));
                    arr_60 [i_15] [i_10] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)0))));
                    /* LoopSeq 1 */
                    for (int i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (_Bool)1))));
                        arr_64 [i_9] [i_9 - 1] [i_9 - 1] [(_Bool)1] [i_9] [i_9] [i_9] = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (_Bool)1)) : (arr_27 [i_9])))));
                    }
                }
                var_28 ^= (!((!(arr_51 [i_10] [i_10] [i_13 - 2]))));
                arr_65 [i_9] [i_10] [i_13 - 1] = (((+(arr_45 [i_13 - 1] [i_13] [i_10] [i_10]))) - (((((/* implicit */unsigned int) 244919680)) - (arr_45 [i_13 - 1] [i_10] [i_9] [i_9]))));
                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) 1067271024U))), ((+(-5768904024417606888LL)))))) * (((((/* implicit */_Bool) ((arr_27 [i_13]) / (((/* implicit */int) var_4))))) ? ((-(arr_32 [i_9 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-96)) / (((/* implicit */int) (_Bool)1))))))))))));
            }
            for (signed char i_17 = 0; i_17 < 11; i_17 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned int i_18 = 0; i_18 < 11; i_18 += 2) /* same iter space */
                {
                    arr_72 [i_18] [i_17] [(unsigned short)2] [i_9] = ((/* implicit */unsigned char) arr_35 [15U]);
                    arr_73 [4U] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */int) var_6);
                    var_30 ^= ((/* implicit */unsigned int) (~(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)240)) - (209)))))));
                }
                for (unsigned int i_19 = 0; i_19 < 11; i_19 += 2) /* same iter space */
                {
                    var_31 = ((/* implicit */short) ((unsigned int) max((((/* implicit */unsigned int) arr_43 [i_9] [i_10] [i_17] [(unsigned char)10])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_17]))) + (arr_29 [(_Bool)1] [i_10]))))));
                    arr_76 [i_17] [i_17] [i_17] [i_10] = ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_59 [i_17] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9]), (arr_59 [2U] [i_9 - 1] [5] [i_9 - 1] [i_9 - 1] [i_9 - 1]))))) / (var_1));
                    var_32 += ((((/* implicit */int) (signed char)104)) >> (((((/* implicit */int) (signed char)117)) - (92))));
                    var_33 = ((/* implicit */signed char) ((int) ((var_2) ? (((/* implicit */int) arr_71 [9U] [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) arr_71 [(_Bool)1] [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1])))));
                }
                /* vectorizable */
                for (unsigned char i_20 = 0; i_20 < 11; i_20 += 4) 
                {
                    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)117)))))));
                    var_35 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1157995645U)) || ((_Bool)1))))) : (arr_57 [i_9] [i_10] [i_17] [i_9 - 1])));
                }
                /* vectorizable */
                for (signed char i_21 = 0; i_21 < 11; i_21 += 2) 
                {
                    arr_81 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = (((_Bool)1) ? (((/* implicit */int) arr_48 [i_10] [i_21] [i_21] [i_21])) : (((/* implicit */int) arr_48 [2U] [(unsigned char)4] [i_21] [i_21])));
                    /* LoopSeq 4 */
                    for (unsigned int i_22 = 2; i_22 < 8; i_22 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */short) ((-1717584508) / (((/* implicit */int) (_Bool)1))));
                        arr_84 [i_9] [i_9 - 1] [i_17] [i_9] [i_9 - 1] = ((var_6) ? (-1) : ((-(1717584509))));
                        arr_85 [8ULL] [i_21] [i_17] [i_10] [i_9 - 1] = ((/* implicit */unsigned short) var_7);
                    }
                    for (unsigned int i_23 = 2; i_23 < 8; i_23 += 4) /* same iter space */
                    {
                        var_37 = ((/* implicit */int) max((var_37), (((((/* implicit */_Bool) arr_34 [i_9] [i_9 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_79 [i_9 - 1] [i_10]))))));
                        var_38 ^= ((/* implicit */int) ((((((/* implicit */_Bool) (short)11916)) ? (((/* implicit */unsigned int) arr_35 [i_10])) : (3227696271U))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_23 - 2] [i_23 + 1] [i_23 + 2] [i_23 + 3] [i_23 + 2] [i_23 - 1] [i_23 - 2])))));
                        var_39 = ((unsigned int) var_10);
                        arr_90 [i_9 - 1] [i_10] [(_Bool)1] [i_17] [(_Bool)1] [i_23 + 3] &= ((/* implicit */int) var_7);
                    }
                    for (unsigned int i_24 = 2; i_24 < 8; i_24 += 4) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775800LL))))) : (((/* implicit */int) (((_Bool)1) || ((_Bool)1))))));
                        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_70 [i_9 - 1] [i_9 - 1] [i_24 - 2])) ? (((/* implicit */int) (_Bool)0)) : ((-(((/* implicit */int) (signed char)23))))));
                        var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((4294967287U) - (4294967279U))))))));
                        var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) arr_87 [i_9 - 1] [i_9 - 1] [i_9]))));
                    }
                    for (unsigned int i_25 = 2; i_25 < 8; i_25 += 4) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-12315)) ? (arr_28 [i_9 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        arr_97 [i_17] [5] [i_17] [(short)3] [i_17] = ((/* implicit */unsigned int) ((short) 14065606642634871635ULL));
                    }
                    var_45 = ((/* implicit */long long int) (((~(8U))) << (((/* implicit */int) var_11))));
                    var_46 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_94 [i_9 - 1] [i_10] [i_10] [i_21] [(unsigned char)4])) / (((/* implicit */int) arr_94 [i_9 - 1] [i_9] [i_17] [i_21] [i_21]))));
                }
                arr_98 [i_9] [i_10] [i_17] [i_10] = max((((/* implicit */unsigned int) var_2)), (((((/* implicit */unsigned int) arr_63 [i_9] [6ULL] [i_10] [i_17] [(short)0])) * (arr_58 [i_9] [i_10] [i_17] [i_10] [i_17]))));
            }
        }
        /* vectorizable */
        for (unsigned int i_26 = 0; i_26 < 11; i_26 += 4) /* same iter space */
        {
            arr_102 [i_9] [i_9 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_43 [i_9 - 1] [i_26] [7ULL] [i_9]))));
            /* LoopNest 3 */
            for (int i_27 = 3; i_27 < 10; i_27 += 4) 
            {
                for (short i_28 = 3; i_28 < 9; i_28 += 2) 
                {
                    for (unsigned char i_29 = 0; i_29 < 11; i_29 += 4) 
                    {
                        {
                            var_47 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_107 [i_27 - 1] [i_26] [i_27 + 1] [i_28]))));
                            var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) var_0))));
                        }
                    } 
                } 
            } 
        }
        arr_111 [i_9] = ((/* implicit */unsigned char) min(((-(((var_2) ? (((/* implicit */int) arr_51 [i_9 - 1] [(unsigned char)0] [i_9 - 1])) : (((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) arr_38 [(_Bool)0] [(short)9]))))));
        arr_112 [i_9] = ((((_Bool) (!(((/* implicit */_Bool) (short)-28617))))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_91 [i_9])) ? (((/* implicit */int) (short)-17009)) : (((/* implicit */int) var_2))))))));
        /* LoopNest 2 */
        for (unsigned char i_30 = 0; i_30 < 11; i_30 += 4) 
        {
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_32 = 0; i_32 < 11; i_32 += 4) 
                    {
                        for (unsigned int i_33 = 0; i_33 < 11; i_33 += 2) 
                        {
                            {
                                var_49 = min((max((((/* implicit */int) (signed char)-110)), (((((/* implicit */int) arr_59 [i_31] [i_31] [i_31] [i_31] [i_31] [i_31])) >> (((14065606642634871617ULL) - (14065606642634871595ULL))))))), ((~(((/* implicit */int) (_Bool)1)))));
                                var_50 = (-(min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) arr_78 [i_32] [i_31] [i_30] [i_9 - 1])) : (517065792351308563LL))), (min((4042679034552079203LL), (((/* implicit */long long int) var_10)))))));
                                var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)58333)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)17008))))) : (arr_110 [i_9] [i_30])));
                            }
                        } 
                    } 
                    var_52 = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (arr_106 [i_31] [i_30] [i_9] [i_9 - 1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_124 [i_9 - 1] [i_30] [i_30] [i_31] [i_9 - 1]))))) * (((/* implicit */unsigned long long int) arr_33 [i_9] [i_9]))));
                    var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) ((max((((/* implicit */unsigned int) (unsigned short)21614)), (1061155904U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3716202670034710446LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_9 - 1] [i_9 - 1] [i_31] [i_31] [i_9]))) : (var_10)))) ? (max((((/* implicit */int) arr_124 [3U] [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1])), (arr_27 [i_31]))) : (((/* implicit */int) min(((short)-17012), (((/* implicit */short) var_9)))))))))))));
                    var_54 = ((/* implicit */_Bool) var_1);
                }
            } 
        } 
    }
    var_55 = ((/* implicit */unsigned int) (((~(7800760108518104075ULL))) >> (((var_7) - (2833140832791725847ULL)))));
}
