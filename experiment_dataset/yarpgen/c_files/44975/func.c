/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44975
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
    var_19 ^= max((max(((~(3U))), (((/* implicit */unsigned int) max((var_12), (var_18)))))), (((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10733))) : (3073999163U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)2))));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_21 |= ((/* implicit */unsigned char) ((arr_6 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_13))));
                            var_23 ^= var_12;
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_2] [i_2])))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_15 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0]))));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_5))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_16 [i_1] [i_2] [i_5] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-29480)))))));
                            arr_24 [i_2] [i_5] [i_2] = ((/* implicit */unsigned char) ((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115)))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) var_0)))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_29 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8184)) ? (arr_6 [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
                var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (arr_25 [i_7] [i_1] [i_0])))) && ((_Bool)1)));
            }
        }
        for (signed char i_8 = 1; i_8 < 22; i_8 += 2) 
        {
            var_31 |= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_13 [i_8] [i_8] [i_8] [i_8 + 1] [i_8] [i_8]))) ? (max((arr_22 [i_8 + 2] [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 1]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) max((var_17), (((/* implicit */int) (unsigned short)62820)))))));
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [(short)8] [i_0])) ? (min(((+(((/* implicit */int) (unsigned char)7)))), (((/* implicit */int) var_9)))) : (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned int i_9 = 1; i_9 < 20; i_9 += 1) 
        {
            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) var_16))));
            var_34 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-15))));
            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) (short)10716)) : (((/* implicit */int) (short)-20946))));
        }
        for (short i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (short i_11 = 2; i_11 < 23; i_11 += 3) 
            {
                for (short i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            arr_45 [i_0] [i_10] [i_11 - 2] [i_12] [i_13] = ((/* implicit */unsigned char) max((var_8), (((/* implicit */unsigned int) arr_12 [i_10]))));
                            arr_46 [i_0] [i_0] [i_10] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned char) var_14)), (var_12)));
                        }
                        for (unsigned char i_14 = 2; i_14 < 20; i_14 += 2) 
                        {
                            var_36 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_16)) ? (max((var_8), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_13), (var_12))))))), (var_8)));
                            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))));
                        }
                        /* LoopSeq 4 */
                        for (long long int i_15 = 0; i_15 < 24; i_15 += 3) 
                        {
                            arr_51 [i_0] [i_10] [i_11 - 1] [i_12] [(short)20] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? ((~(((arr_26 [i_0] [i_12] [i_11] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_12))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) (short)32767)))))));
                            var_38 &= (short)32759;
                            var_39 = ((/* implicit */short) var_6);
                            var_40 |= ((/* implicit */unsigned int) var_4);
                        }
                        for (unsigned char i_16 = 2; i_16 < 23; i_16 += 3) 
                        {
                            var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) arr_6 [i_10] [i_10]))));
                            var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_11 [16U])) ? (var_5) : (arr_25 [i_11 - 2] [i_16 - 2] [i_11 - 2]))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) ^ ((~(((/* implicit */int) var_0))))))))))));
                            var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (+(min((((arr_11 [8U]) << (((((/* implicit */int) var_2)) - (208))))), (((/* implicit */unsigned int) var_2)))))))));
                            var_44 = ((/* implicit */short) max((var_44), (((short) max((arr_20 [i_0] [i_11 - 2]), (((/* implicit */unsigned short) var_15)))))));
                        }
                        for (long long int i_17 = 0; i_17 < 24; i_17 += 1) 
                        {
                            var_45 &= ((/* implicit */int) min(((signed char)6), ((signed char)101)));
                            var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) 971790434U)) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) (short)7))));
                            var_47 ^= ((/* implicit */unsigned long long int) (unsigned char)196);
                        }
                        for (unsigned char i_18 = 4; i_18 < 23; i_18 += 4) 
                        {
                            var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) ((_Bool) var_4)))));
                            var_49 = ((/* implicit */_Bool) arr_61 [i_0] [i_10] [i_11 - 1] [i_11 - 1] [i_18 - 4]);
                            var_50 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_11 - 1] [i_18 + 1] [i_11 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_18))))), ((~(var_5)))));
                            var_51 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))))), (var_11)))) : ((~(((/* implicit */int) max((((/* implicit */unsigned char) arr_28 [i_10] [i_10])), (var_11))))))));
                        }
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_19 = 0; i_19 < 24; i_19 += 3) 
            {
                var_52 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (arr_43 [i_0] [i_0] [i_19] [i_19] [i_10] [i_19])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_10] [i_10])) || (((/* implicit */_Bool) var_8))))))) : (((/* implicit */int) var_6))));
                var_53 ^= ((/* implicit */unsigned char) var_3);
                var_54 = ((/* implicit */unsigned char) min((var_54), (((/* implicit */unsigned char) min((3461941246U), (((/* implicit */unsigned int) var_7)))))));
                arr_64 [i_0] [i_10] [i_0] = max((-680144115), (min((((/* implicit */int) min((var_3), (((/* implicit */short) (_Bool)1))))), ((-(((/* implicit */int) (_Bool)0)))))));
            }
            for (unsigned int i_20 = 1; i_20 < 22; i_20 += 1) 
            {
                var_55 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_18))))) ? (var_8) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_27 [i_10])), (var_1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_62 [i_20] [i_20] [18ULL])));
                /* LoopSeq 4 */
                for (signed char i_21 = 0; i_21 < 24; i_21 += 4) 
                {
                    var_56 = ((/* implicit */_Bool) min((var_56), (((/* implicit */_Bool) arr_43 [i_21] [i_21] [i_20 + 2] [i_0] [i_10] [i_0]))));
                    /* LoopSeq 2 */
                    for (unsigned int i_22 = 1; i_22 < 20; i_22 += 4) 
                    {
                        var_57 = 1152921504606846975ULL;
                        arr_75 [i_0] [i_0] [i_0] [i_0] [i_21] [i_0] [i_0] |= ((/* implicit */signed char) max((((/* implicit */int) arr_60 [i_21] [i_21] [i_21] [i_21])), (max((((/* implicit */int) var_9)), (var_7)))));
                        var_58 = ((/* implicit */signed char) var_2);
                    }
                    for (unsigned int i_23 = 0; i_23 < 24; i_23 += 1) 
                    {
                        var_59 = ((/* implicit */unsigned char) max((var_59), (((/* implicit */unsigned char) var_7))));
                        var_60 = ((/* implicit */unsigned char) min((var_60), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) max((arr_21 [i_0] [i_10] [i_20 + 1] [i_21] [i_21] [i_10] [i_23]), (((/* implicit */short) (signed char)-1))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-109))))))))));
                        var_61 ^= ((/* implicit */_Bool) (unsigned short)20599);
                        var_62 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
                    }
                    var_63 ^= ((/* implicit */_Bool) (signed char)83);
                }
                for (int i_24 = 1; i_24 < 23; i_24 += 3) /* same iter space */
                {
                    var_64 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_0] [i_24 - 1] [i_20 + 2])) || (((/* implicit */_Bool) (signed char)7)))))));
                    var_65 = ((/* implicit */signed char) min((var_65), (((/* implicit */signed char) ((((/* implicit */_Bool) 13U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10716))) : (2147483648U))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_25 = 0; i_25 < 24; i_25 += 2) 
                    {
                        arr_84 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] [i_10] = ((/* implicit */unsigned int) max(((~(((/* implicit */int) var_15)))), ((~(((/* implicit */int) (unsigned short)4378))))));
                        var_66 = ((/* implicit */_Bool) max((var_66), (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (min((arr_34 [i_0]), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_0])))))), (arr_6 [i_20] [i_20]))))));
                        var_67 *= ((/* implicit */unsigned int) (_Bool)0);
                        var_68 |= ((/* implicit */signed char) arr_25 [i_0] [i_0] [i_0]);
                        var_69 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-4867)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_24 + 1] [i_24] [i_10] [i_24]))))) : (min((((((/* implicit */_Bool) arr_43 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20 - 1])) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_24] [i_20 - 1] [i_0])))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_26 = 1; i_26 < 21; i_26 += 3) 
                    {
                        var_70 = ((/* implicit */int) max((var_70), (((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) arr_76 [i_26] [i_10] [i_20] [i_20 + 2] [i_26 + 3] [i_24] [i_26 + 2])) : (((/* implicit */int) arr_76 [i_26] [i_24] [i_24] [i_24] [i_26] [i_26] [i_26 - 1]))))));
                        var_71 -= ((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) (short)-32756)) : (arr_42 [i_24 + 1] [i_24 + 1] [8U] [8U] [i_24 + 1])));
                        arr_87 [i_10] [i_26] [i_26] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_20 + 1] [i_24 + 1] [i_20 + 1] [i_24] [i_24 - 1] [i_26 + 1])) ? (arr_18 [i_10] [i_26] [i_26] [i_26] [i_26 + 2] [i_26 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17)))));
                        arr_88 [i_0] [i_24 + 1] [i_20] [i_20] [i_20] [i_10] [i_20] = ((/* implicit */_Bool) (~(var_1)));
                    }
                }
                for (int i_27 = 1; i_27 < 23; i_27 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_28 = 0; i_28 < 24; i_28 += 1) 
                    {
                        var_72 = ((/* implicit */unsigned char) min((var_72), (((/* implicit */unsigned char) arr_81 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        var_73 *= ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_27 - 1] [i_27])) ? (arr_6 [i_27 + 1] [i_27]) : (((/* implicit */long long int) 31457280U)))) > (((/* implicit */long long int) ((int) (signed char)4)))));
                        arr_95 [i_10] [i_20] [i_10] [i_10] = ((/* implicit */short) min((((/* implicit */unsigned int) var_7)), (2858897863U)));
                        var_74 = ((/* implicit */unsigned char) max((var_74), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-113))))) && (((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)127)), ((short)-16964)))))))));
                    }
                    var_75 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_68 [i_0] [i_0] [i_10])) ? (((((/* implicit */_Bool) arr_21 [i_20] [i_20] [i_20] [i_20 - 1] [i_10] [i_20] [i_20 + 2])) ? (var_1) : (((/* implicit */int) arr_68 [i_10] [i_20 + 1] [i_10])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_10)))))));
                }
                for (unsigned int i_29 = 0; i_29 < 24; i_29 += 2) 
                {
                    var_76 = ((/* implicit */unsigned long long int) var_16);
                    /* LoopSeq 1 */
                    for (signed char i_30 = 0; i_30 < 24; i_30 += 4) 
                    {
                        var_77 = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_67 [i_0] [i_30] [i_20 + 1])))), (((((/* implicit */int) (unsigned short)3)) / (((/* implicit */int) (_Bool)1))))));
                        var_78 = ((/* implicit */_Bool) min((var_78), (((/* implicit */_Bool) (~(((((/* implicit */int) (short)-22226)) + (((((/* implicit */_Bool) var_17)) ? (var_7) : (((/* implicit */int) var_15)))))))))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned short i_31 = 0; i_31 < 24; i_31 += 2) 
                {
                    var_79 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_102 [i_31])) ? (((/* implicit */int) var_0)) : (var_7)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_36 [i_31] [i_31] [i_31]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-4867)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_9))));
                    var_80 = ((/* implicit */short) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned char)237))))))) ? (((/* implicit */int) arr_32 [i_20] [i_10] [i_0])) : (((/* implicit */int) min((arr_29 [i_20 + 1] [i_10] [i_20 + 1]), (arr_29 [i_20 + 1] [i_10] [i_0]))))));
                }
                var_81 = ((/* implicit */unsigned int) max((var_81), (((/* implicit */unsigned int) (~(var_17))))));
            }
            for (short i_32 = 0; i_32 < 24; i_32 += 2) 
            {
                arr_107 [i_10] [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
                var_82 = ((/* implicit */short) max((var_82), (((/* implicit */short) min((((/* implicit */int) var_2)), (min((((((/* implicit */int) var_4)) / (((/* implicit */int) var_3)))), (max((((/* implicit */int) var_3)), (-125216319))))))))));
            }
            var_83 = ((((/* implicit */_Bool) (+(arr_36 [i_0] [i_0] [i_0])))) ? (max((arr_52 [i_0] [i_10] [i_0] [i_0] [i_10]), (arr_36 [i_0] [i_0] [i_0]))) : (arr_36 [i_0] [i_10] [i_10]));
            var_84 = ((/* implicit */short) var_5);
        }
        var_85 &= ((((/* implicit */_Bool) ((144115188075855872ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-30776), (((/* implicit */short) (unsigned char)127)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */signed char) (_Bool)1)))))) : (max((20U), (((/* implicit */unsigned int) (short)0)))))));
    }
}
