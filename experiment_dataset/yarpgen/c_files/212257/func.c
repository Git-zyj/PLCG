/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212257
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) / (max((((/* implicit */int) var_4)), (18991485)))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned int) (+((~(var_2)))));
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_3 = 2; i_3 < 20; i_3 += 4) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) var_6)))), (((/* implicit */int) var_7))));
                    var_16 = ((/* implicit */long long int) ((134216704U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)10033)))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-10048))) : (4294967295U)))))))) ^ (((((((/* implicit */_Bool) 8)) ? (1539226515U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3 - 2])))))));
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_18 = ((/* implicit */long long int) ((unsigned short) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]));
                        var_19 = max((((unsigned long long int) max((((/* implicit */long long int) var_11)), (var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)29173)) > (((/* implicit */int) (unsigned short)7451))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_20 = (~(((long long int) arr_7 [i_5] [(unsigned short)6] [(short)4] [i_1] [i_0])));
                        var_21 = ((/* implicit */_Bool) (-(268427264U)));
                        var_22 |= ((/* implicit */unsigned int) var_5);
                        var_23 = (~((~(var_9))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_6 = 2; i_6 < 20; i_6 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((long long int) var_2)))));
                    var_25 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)20846))));
                }
                var_26 = ((/* implicit */unsigned short) max((var_8), (min((((((/* implicit */int) arr_2 [i_2])) ^ (((/* implicit */int) var_1)))), (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2] [i_0]))))));
                var_27 = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (short)10033)))));
                var_28 = ((/* implicit */short) (-(-18991485)));
                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(max((((/* implicit */long long int) arr_7 [i_2] [7ULL] [i_2] [i_2] [i_2])), (-6976884190213424868LL)))))))))));
            }
            for (long long int i_7 = 3; i_7 < 22; i_7 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 4; i_8 < 21; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_9 = 1; i_9 < 23; i_9 += 4) 
                    {
                        var_30 = ((/* implicit */_Bool) -7552111537287908923LL);
                        var_31 &= ((/* implicit */_Bool) arr_12 [i_9] [i_7] [i_1] [i_0]);
                        var_32 = ((/* implicit */long long int) 8ULL);
                        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((short) ((((/* implicit */int) (unsigned short)56233)) ^ (var_11)))))));
                    }
                    arr_27 [i_7] = ((/* implicit */unsigned int) ((short) max((((((/* implicit */_Bool) -154859236)) ? (arr_0 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_8] [i_8] [i_7 - 2] [(signed char)8] [(signed char)8]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))))));
                    var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(max((var_8), (((/* implicit */int) var_6)))))))));
                }
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    var_35 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
                    /* LoopSeq 3 */
                    for (short i_11 = 4; i_11 < 23; i_11 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned int) var_3);
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3888971886U)) ? (2246420358U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10033)))));
                        var_38 = ((((/* implicit */_Bool) 140737488355327LL)) ? (649357824U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))));
                        var_39 = ((/* implicit */long long int) var_3);
                    }
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        var_40 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_7 + 1] [i_7 - 2] [i_7 - 1])) : (((/* implicit */int) arr_8 [i_7 - 3] [i_7 - 1] [i_7 + 2]))));
                        var_41 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_24 [i_7 + 1] [2U]) : (var_12)));
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 22; i_13 += 4) 
                    {
                        var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32768)) | (((/* implicit */int) arr_17 [i_0] [i_0]))))) ? (((/* implicit */int) arr_31 [i_7] [i_7 + 2] [i_7] [i_7 + 1] [i_7] [i_7 - 2] [i_7 + 2])) : (((/* implicit */int) (unsigned short)14878))));
                        var_43 = ((/* implicit */unsigned short) arr_15 [i_0] [i_0] [i_0] [i_0] [16U]);
                    }
                    arr_39 [i_7] [i_1] [i_1] [i_10] [(short)5] = ((/* implicit */short) ((unsigned int) arr_32 [i_0] [i_1] [i_7 - 1] [i_10] [i_7]));
                    var_44 = ((/* implicit */_Bool) ((int) (_Bool)1));
                    arr_40 [i_0] [i_1] [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [i_10])) ? (140737488355328ULL) : (((/* implicit */unsigned long long int) var_2))));
                }
                var_45 &= ((/* implicit */signed char) var_8);
            }
            var_46 = ((/* implicit */short) ((long long int) (((-(2199752897308191304LL))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14870))))));
            arr_41 [i_1] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-2199752897308191316LL) + (9223372036854775807LL))) >> (((-1576432378) + (1576432379)))))) ? (min((arr_21 [i_1] [19] [19] [i_0]), (var_11))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (225943177) : (((/* implicit */int) (unsigned short)24576)))))))));
        }
        for (unsigned int i_14 = 2; i_14 < 21; i_14 += 2) /* same iter space */
        {
            var_47 = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [1ULL]);
            arr_44 [i_14] = ((/* implicit */short) min((min((-107926082483798436LL), (-2199752897308191326LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), ((short)-23283)))) ? (min((arr_43 [i_0] [i_0]), (arr_42 [i_14]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
        }
        for (unsigned int i_15 = 2; i_15 < 21; i_15 += 2) /* same iter space */
        {
            var_48 = ((/* implicit */short) (((!(((/* implicit */_Bool) 17835013776072836235ULL)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_38 [i_0] [i_15] [i_0] [i_15 - 2] [i_0])), (var_12))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 3) 
            {
                arr_51 [i_16] [i_16] &= ((/* implicit */int) min((((/* implicit */unsigned long long int) 3525080999U)), (0ULL)));
                var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) (_Bool)0))));
                arr_52 [(short)20] [i_15 + 1] [(short)20] [i_0] = ((/* implicit */int) arr_16 [i_0] [i_15] [i_15] [i_15 - 1] [i_16] [i_15 - 1]);
                var_50 = max((((((/* implicit */_Bool) arr_48 [i_15] [i_15] [i_15 - 1])) ? (arr_34 [i_15] [i_15] [i_15 + 3] [i_15 + 2] [i_15 + 2]) : (arr_34 [i_15] [i_15] [i_15 + 1] [i_15 + 1] [i_15 - 1]))), (((/* implicit */int) max((((/* implicit */short) var_6)), (arr_16 [i_15 + 2] [i_15] [i_15] [i_15 - 2] [i_15] [i_15])))));
                var_51 = ((/* implicit */unsigned short) var_2);
            }
            /* LoopNest 3 */
            for (short i_17 = 2; i_17 < 23; i_17 += 4) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 2) 
                {
                    for (unsigned int i_19 = 3; i_19 < 23; i_19 += 2) 
                    {
                        {
                            var_52 = ((/* implicit */signed char) 8396134652923857282ULL);
                            var_53 = ((/* implicit */long long int) (_Bool)1);
                            var_54 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)39033)), (16383)));
                        }
                    } 
                } 
            } 
            var_55 = ((/* implicit */short) -1LL);
        }
    }
    for (long long int i_20 = 3; i_20 < 11; i_20 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_21 = 0; i_21 < 12; i_21 += 2) 
        {
            arr_68 [i_20] = ((/* implicit */unsigned short) var_8);
            arr_69 [i_20] = ((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_9)))));
            var_56 = ((/* implicit */unsigned short) ((int) (short)18));
        }
        for (unsigned short i_22 = 0; i_22 < 12; i_22 += 4) 
        {
            var_57 = ((/* implicit */short) (~(max((arr_35 [i_20 - 1] [i_22] [i_22] [i_22] [(unsigned short)11] [i_22]), (arr_35 [i_20 - 1] [i_20 - 1] [i_22] [i_20] [i_20] [i_20 - 1])))));
            var_58 = ((/* implicit */short) max((var_58), (((/* implicit */short) min((((/* implicit */unsigned int) (_Bool)1)), (2147483648U))))));
            var_59 = ((/* implicit */unsigned long long int) var_10);
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            var_60 = ((/* implicit */unsigned short) var_10);
            var_61 |= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)20945))));
            /* LoopSeq 2 */
            for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
            {
                var_62 = ((/* implicit */unsigned short) max((var_62), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_20] [i_20] [i_20] [i_23])))))));
                var_63 = ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_35 [i_20] [i_20] [i_20] [22ULL] [22ULL] [(unsigned short)9])))) / (arr_49 [i_24 - 1]));
            }
            for (unsigned int i_25 = 1; i_25 < 10; i_25 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_26 = 0; i_26 < 12; i_26 += 4) 
                {
                    var_64 = ((((/* implicit */_Bool) 2147483648U)) ? (268434432U) : (983232536U));
                    var_65 = ((/* implicit */long long int) max((var_65), (((/* implicit */long long int) ((((var_0) + (2147483647))) >> (((-16383) + (16392))))))));
                }
                var_66 = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_25] [i_25 + 2] [i_20] [i_20 - 1])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_23 [i_25 + 1] [i_20] [i_20 + 1] [i_20 + 1])));
            }
            /* LoopSeq 2 */
            for (_Bool i_27 = 0; i_27 < 0; i_27 += 1) 
            {
                var_67 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (((((/* implicit */_Bool) 1279460919766792894LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)0))));
                var_68 = ((/* implicit */unsigned short) ((long long int) (unsigned short)39036));
                var_69 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned short)26500))));
                /* LoopSeq 2 */
                for (unsigned int i_28 = 0; i_28 < 12; i_28 += 1) 
                {
                    var_70 |= ((/* implicit */int) ((unsigned int) arr_66 [i_23] [i_28]));
                    var_71 = ((/* implicit */long long int) max((var_71), (((/* implicit */long long int) var_8))));
                    var_72 &= ((/* implicit */signed char) ((arr_63 [i_20 + 1] [i_20 - 2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                }
                for (unsigned short i_29 = 1; i_29 < 9; i_29 += 4) 
                {
                    var_73 &= ((/* implicit */unsigned short) ((((unsigned long long int) arr_75 [i_29] [i_27] [i_20] [i_20])) - (((((/* implicit */_Bool) var_7)) ? (12925558094085111845ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                    var_74 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (-140737488355327LL) : (((/* implicit */long long int) arr_81 [(_Bool)1] [i_23] [i_27] [i_29 + 3]))))));
                }
            }
            for (short i_30 = 0; i_30 < 12; i_30 += 2) 
            {
                var_75 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)49363)) * (0)));
                var_76 |= ((/* implicit */unsigned short) ((((_Bool) var_5)) ? (((((/* implicit */int) var_1)) & (((/* implicit */int) (short)29987)))) : (var_11)));
                var_77 &= ((/* implicit */int) (-(((12925558094085111853ULL) | (((/* implicit */unsigned long long int) 3040702223U))))));
            }
        }
        for (int i_31 = 0; i_31 < 12; i_31 += 3) 
        {
            var_78 = max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_10)), (var_3)))), ((+(((unsigned long long int) -2011894445)))));
            /* LoopNest 3 */
            for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
            {
                for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
                {
                    for (long long int i_34 = 4; i_34 < 10; i_34 += 4) 
                    {
                        {
                            var_79 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 2147483648U)) : (0ULL)))));
                            var_80 += ((/* implicit */short) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_56 [i_33])), (25ULL)))))) ? ((+(777257337798478357LL))) : (((/* implicit */long long int) min((402653184U), (((/* implicit */unsigned int) 1883046793)))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_35 = 0; i_35 < 12; i_35 += 3) 
        {
            var_81 += ((/* implicit */_Bool) var_2);
            var_82 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) | (((/* implicit */int) var_10)))) <= (((/* implicit */int) arr_57 [3U] [3U] [i_20 - 3] [i_20] [3U] [i_20]))));
        }
        /* vectorizable */
        for (short i_36 = 1; i_36 < 10; i_36 += 3) 
        {
            var_83 = ((/* implicit */_Bool) arr_17 [(unsigned short)10] [(unsigned short)10]);
            var_84 = ((/* implicit */unsigned short) (~(var_5)));
        }
        /* LoopSeq 2 */
        for (int i_37 = 0; i_37 < 12; i_37 += 3) /* same iter space */
        {
            var_85 = ((/* implicit */unsigned long long int) max(((-2147483647 - 1)), (((int) max((var_11), (-1996070949))))));
            /* LoopNest 2 */
            for (int i_38 = 0; i_38 < 12; i_38 += 3) 
            {
                for (_Bool i_39 = 1; i_39 < 1; i_39 += 1) 
                {
                    {
                        var_86 &= (!(((/* implicit */_Bool) 17930820308949087136ULL)));
                        var_87 = ((/* implicit */_Bool) ((max((((var_8) & (413034243))), ((~(var_0))))) / (((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) (short)-1)), (var_12)))))));
                        arr_114 [i_20] [11ULL] [i_20] = ((/* implicit */_Bool) ((unsigned short) ((int) arr_33 [i_20 - 3] [i_37] [i_20 - 3] [i_39 - 1])));
                        /* LoopSeq 2 */
                        for (unsigned short i_40 = 0; i_40 < 12; i_40 += 4) 
                        {
                            var_88 = ((/* implicit */long long int) ((unsigned int) 1370347246));
                            var_89 = ((/* implicit */long long int) max((max((var_12), (((/* implicit */unsigned long long int) arr_45 [i_20 + 1])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_45 [i_20 - 1])))))));
                            var_90 = var_3;
                        }
                        for (long long int i_41 = 0; i_41 < 12; i_41 += 4) 
                        {
                            var_91 = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) (short)-4123)))));
                            var_92 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) min((((/* implicit */long long int) arr_36 [i_41] [i_39] [i_38] [i_37])), (var_9))))) ? (((((/* implicit */_Bool) 2068921528U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26490))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) max((((var_9) | (var_9))), (((/* implicit */long long int) max((2147483647U), (((/* implicit */unsigned int) (_Bool)1))))))))));
                        }
                    }
                } 
            } 
            arr_120 [i_20] [i_20] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -812942151)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_20] [i_20] [i_37]))) : (min((2147483647U), (((/* implicit */unsigned int) var_2)))))));
        }
        for (int i_42 = 0; i_42 < 12; i_42 += 3) /* same iter space */
        {
            var_93 |= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10))))) ^ (((((/* implicit */_Bool) var_7)) ? (9663346191434914503ULL) : (4467570830351532032ULL))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (arr_30 [i_20] [i_20] [i_20] [18] [i_42] [i_42])))));
            arr_125 [i_20] = ((/* implicit */unsigned int) 4095ULL);
        }
        var_94 = ((/* implicit */short) (!(min(((_Bool)1), ((_Bool)1)))));
    }
    var_95 &= ((/* implicit */long long int) var_2);
}
