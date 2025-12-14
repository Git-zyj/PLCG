/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21449
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
    var_11 = ((/* implicit */unsigned char) 276144699697637565LL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((arr_0 [i_0 - 2]) & (((/* implicit */unsigned long long int) -1997348188)))) & ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (4608020357737292254ULL))))))));
        var_13 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1997348170)) ? (((/* implicit */long long int) 1434128717)) : (-276144699697637575LL)));
    }
    for (long long int i_1 = 2; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned char) (((_Bool)0) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((4608020357737292251ULL) << (((arr_0 [i_1]) - (1896113784966875575ULL)))))) ? (max((var_9), (((/* implicit */int) var_7)))) : (var_9))))));
        /* LoopSeq 2 */
        for (int i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_1]))))) ? (max((max((((/* implicit */unsigned long long int) (unsigned short)13)), (4608020357737292280ULL))), (((/* implicit */unsigned long long int) arr_7 [i_1 - 2])))) : (var_4)));
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((((_Bool)1) ? (13838723715972259385ULL) : (((/* implicit */unsigned long long int) -1997348188)))) - (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 2])) ? (-276144699697637575LL) : (((/* implicit */long long int) arr_5 [i_1] [i_1]))))) - (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 13838723715972259353ULL))))));
        }
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            var_16 = ((/* implicit */short) max(((+(4608020357737292262ULL))), (max((((13838723715972259353ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)(-32767 - 1))), (var_0))))))));
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    arr_17 [i_1] [i_3] [i_1] [i_4] [i_5] [i_5] = ((/* implicit */_Bool) arr_4 [i_1] [(_Bool)1]);
                    arr_18 [i_1] [i_3] [i_4] [i_5] = ((long long int) ((unsigned char) ((-1616010918) - (-1110469133))));
                    /* LoopSeq 4 */
                    for (short i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [i_1] [i_3] [i_4] [i_5] [i_6] [10ULL] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) | (arr_9 [i_1] [i_3] [i_4])))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) arr_7 [i_1 - 1])))));
                        arr_22 [i_1] [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 2] = ((/* implicit */unsigned long long int) ((unsigned int) ((signed char) arr_19 [i_1] [i_3] [i_4] [i_5] [i_6])));
                        arr_23 [i_6] [i_3] [i_1] [i_3] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 - 1])) ? (((/* implicit */unsigned long long int) var_0)) : (var_5)))))) ? (min((((/* implicit */unsigned long long int) ((unsigned char) -1075142550578860139LL))), (((((/* implicit */_Bool) arr_14 [i_1] [i_3] [0U] [i_6])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6898))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_17 ^= ((/* implicit */int) max((((((/* implicit */_Bool) (((_Bool)0) ? (1075142550578860138LL) : (var_1)))) ? (((/* implicit */unsigned int) ((int) 3567158958U))) : (arr_16 [(unsigned short)8] [i_3] [i_4] [i_6]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) arr_2 [i_5]))))) ? (((/* implicit */int) arr_13 [i_6] [i_1 - 2] [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_1 [i_4])))))))));
                        arr_24 [i_1] [i_5] [i_4] [i_3] [i_1] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31882))) : (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))))))) ? (((var_8) & (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */int) var_10))))))) : (((unsigned long long int) max((13838723715972259361ULL), (arr_14 [i_1] [i_1] [i_1] [(unsigned char)2])))));
                    }
                    for (short i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned short) max((13838723715972259361ULL), (var_4)));
                        var_19 = ((/* implicit */_Bool) (signed char)18);
                        arr_28 [i_1 - 2] [i_1] [i_1 - 2] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_3);
                        arr_29 [i_1] [i_7] [i_5] [i_4] [i_3] [i_1] [i_1] = ((/* implicit */signed char) max((min((((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) var_6))))))));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)18)) >= (((/* implicit */int) ((unsigned char) 0))))))) - (((((((/* implicit */unsigned long long int) 1075142550578860146LL)) - (4608020357737292254ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (var_9))))))))));
                    }
                    for (short i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
                    {
                        arr_33 [i_1] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_5 [i_1] [(unsigned char)3]))) / (((/* implicit */int) var_6))))), (((((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) arr_32 [i_1] [i_3] [i_1] [i_5] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && ((_Bool)1))))) : ((-(314705502145187265LL)))))));
                        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_1) << (((((/* implicit */int) arr_13 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) - (7148))))))));
                        var_22 ^= (~(((long long int) (unsigned char)255)));
                    }
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        arr_38 [(short)5] [i_1] [i_4] [i_5] [(signed char)9] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (signed char)-110))) | (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_9)))))))) <= (4608020357737292262ULL)));
                        arr_39 [i_1] [i_5] [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
                    }
                }
                for (long long int i_10 = 1; i_10 < 10; i_10 += 3) 
                {
                    arr_44 [i_1 + 1] [i_1] = ((/* implicit */signed char) var_2);
                    arr_45 [i_1] [i_4] [i_4] [i_1] [7LL] [i_1] = ((/* implicit */unsigned int) (+(((unsigned long long int) (signed char)-110))));
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 1; i_11 < 8; i_11 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_11 [i_1 - 2] [i_3] [i_1]))), (min((arr_11 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_1))))));
                        var_24 = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    for (unsigned short i_12 = 1; i_12 < 8; i_12 += 4) /* same iter space */
                    {
                        arr_53 [i_1] [(_Bool)1] [i_4] [i_4] [i_10] [i_10] [2LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 214435612U)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (unsigned char)55))));
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((short) max((((((/* implicit */int) arr_32 [i_1] [i_1] [i_4] [i_1] [i_4])) * (((/* implicit */int) arr_27 [i_1] [i_1] [i_4] [i_4])))), ((~(((/* implicit */int) var_7))))))))));
                        arr_54 [i_3] [i_1] [i_4] [i_10] [0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-22938)) >= (((((/* implicit */int) max((arr_26 [i_1] [i_3] [i_3] [i_4] [i_3] [i_12]), (((/* implicit */unsigned char) arr_2 [i_1]))))) << (((max((31ULL), (((/* implicit */unsigned long long int) var_1)))) - (4003506229946630597ULL)))))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_7))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_14 = 2; i_14 < 8; i_14 += 4) /* same iter space */
                    {
                        arr_63 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */signed char) var_3);
                        arr_64 [i_1 - 2] [(_Bool)1] [i_1 - 2] [i_4] [i_1] |= ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (arr_16 [i_1 - 2] [i_14 + 3] [i_13] [i_1]));
                    }
                    for (signed char i_15 = 2; i_15 < 8; i_15 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */short) 2599334273U);
                        var_28 *= var_5;
                    }
                    for (signed char i_16 = 2; i_16 < 8; i_16 += 4) /* same iter space */
                    {
                        arr_73 [i_16 + 2] [(unsigned short)2] [i_4] [i_16] [i_1] = ((/* implicit */short) ((unsigned short) (-(2599334286U))));
                        arr_74 [(unsigned char)3] [i_1] [i_1] [i_13] [(unsigned char)3] [i_13] [i_3] = ((/* implicit */long long int) ((((var_0) >= (((/* implicit */int) var_3)))) ? (arr_60 [i_16 + 2] [i_1] [i_16 - 1] [i_1] [i_1 - 1]) : (((/* implicit */unsigned int) ((int) var_5)))));
                    }
                    for (signed char i_17 = 2; i_17 < 8; i_17 += 4) /* same iter space */
                    {
                        arr_77 [i_17 - 1] [i_1] [i_4] [i_1] [i_1] [i_1 - 2] = ((/* implicit */_Bool) var_1);
                        var_29 -= ((((/* implicit */int) (short)-1)) / (((/* implicit */int) (short)32760)));
                    }
                    arr_78 [i_13] [i_1] [8LL] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-22943))) | (4080531687U)));
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */int) arr_70 [i_13] [(short)3] [i_4] [i_3] [i_1] [i_1])) / (((/* implicit */int) arr_70 [i_1] [2ULL] [i_3] [2ULL] [i_4] [i_13])))))));
                    arr_79 [i_4] [i_4] [i_4] [i_4] [i_1] [10] = ((/* implicit */short) 13934775788368428730ULL);
                }
                for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 1) 
                {
                    var_31 = ((/* implicit */short) (-((-(((int) var_6))))));
                    var_32 = ((/* implicit */_Bool) (+(60)));
                    arr_82 [i_1 + 1] [i_1] [(short)5] [i_1] [i_1] = ((/* implicit */short) 925465265722940252LL);
                    arr_83 [i_1] [i_1] [i_1] [i_1 - 2] = ((/* implicit */int) min((((/* implicit */long long int) (+(((/* implicit */int) var_7))))), (((long long int) (short)6477))));
                }
                var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((max((((12172394791151111039ULL) <= (13838723715972259336ULL))), (((((/* implicit */_Bool) var_10)) && (arr_55 [i_1] [i_1] [i_1] [i_4] [i_1 - 2]))))) ? (((/* implicit */unsigned long long int) 1695633038U)) : (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)47258))))), (max((arr_62 [i_1 + 1] [i_1 + 1] [7LL] [(short)10] [i_1 + 1]), (((/* implicit */unsigned long long int) arr_67 [0] [i_3] [i_1] [i_1] [i_3] [i_1 - 1])))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_19 = 0; i_19 < 11; i_19 += 2) 
                {
                    arr_86 [i_1] [i_4] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_3 [i_1]);
                    arr_87 [i_1] [i_1] [i_1] [i_1] [i_19] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_30 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1]))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_1] [5])))));
                }
                /* vectorizable */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_21 = 0; i_21 < 11; i_21 += 1) 
                    {
                        var_34 = ((/* implicit */int) arr_4 [i_1] [i_1 - 2]);
                        var_35 = ((((/* implicit */_Bool) arr_25 [i_21] [i_4] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_1 - 1] [i_1 + 1]))) : ((-(1695633010U))));
                        arr_94 [1ULL] [1ULL] [i_1] [5] [5] [i_4] = ((/* implicit */long long int) var_8);
                        var_36 = (unsigned char)100;
                    }
                    var_37 = ((/* implicit */unsigned char) var_8);
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)3)) ? (arr_36 [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 2]) : (((/* implicit */unsigned long long int) var_0))));
                    arr_95 [(unsigned short)2] [i_1] [i_20] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_5))))));
                }
                var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) max((((/* implicit */unsigned int) (short)22942)), ((+(0U))))))));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_23 = 0; i_23 < 11; i_23 += 3) 
                {
                    var_40 -= ((/* implicit */int) ((((/* implicit */int) (unsigned char)2)) >= (((/* implicit */int) (unsigned short)60846))));
                    /* LoopSeq 2 */
                    for (long long int i_24 = 0; i_24 < 11; i_24 += 4) 
                    {
                        arr_105 [i_24] [i_1] [i_22] [i_22] [i_1] [(unsigned short)3] = ((/* implicit */_Bool) arr_72 [i_1] [i_1 - 2] [i_1]);
                        arr_106 [i_1] [i_3] [i_3] [i_3] [i_3] = (short)-22579;
                    }
                    for (unsigned long long int i_25 = 0; i_25 < 11; i_25 += 3) 
                    {
                        var_41 |= ((/* implicit */unsigned char) var_0);
                        arr_111 [i_25] [i_1] = ((/* implicit */unsigned char) (short)0);
                        arr_112 [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (_Bool)1))));
                        arr_113 [i_1 + 1] [i_1] [i_1 + 1] [5LL] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) / (arr_59 [i_1])))) && (((/* implicit */_Bool) var_8))));
                        arr_114 [i_1] [i_1] [(unsigned char)0] [i_23] = ((/* implicit */signed char) ((var_0) < (((/* implicit */int) arr_40 [i_25] [i_25] [i_25] [i_25] [i_25]))));
                    }
                    arr_115 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-22591))));
                    var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_71 [i_1] [i_1])) ? (((long long int) var_5)) : (9223372036854775802LL)));
                    var_43 &= ((/* implicit */long long int) var_8);
                }
                var_44 = ((/* implicit */unsigned short) arr_99 [i_1] [i_3] [i_1] [(unsigned char)10] [i_3] [i_3]);
            }
            /* LoopNest 2 */
            for (short i_26 = 1; i_26 < 10; i_26 += 3) 
            {
                for (long long int i_27 = 0; i_27 < 11; i_27 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_28 = 1; i_28 < 9; i_28 += 3) 
                        {
                            var_45 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) - (((((/* implicit */_Bool) arr_35 [i_1 - 1] [i_1] [i_26 - 1] [i_27] [(short)2])) ? (((2909032545U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21))))) : (488595464U)))));
                            arr_125 [i_1] [i_3] [i_26] [i_27] [i_28] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) -1LL))) ? (((/* implicit */unsigned long long int) arr_48 [i_28] [i_28 + 2] [(unsigned short)6] [i_28] [i_28 - 1] [i_26] [i_1 - 2])) : ((+(4608020357737292254ULL)))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_29 = 0; i_29 < 11; i_29 += 2) 
                        {
                            var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) 31ULL))));
                            var_47 = var_7;
                        }
                        arr_129 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (short)-22579))) >= (7062389743519845975LL))) ? (((/* implicit */int) (unsigned short)448)) : (((/* implicit */int) ((unsigned char) var_10))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                        {
                            var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) arr_59 [i_26 + 1]))));
                            arr_133 [i_1] = ((/* implicit */short) ((unsigned long long int) ((var_5) - (arr_36 [i_1 - 2] [i_30] [i_26] [i_27] [i_27]))));
                        }
                        arr_134 [i_1] [i_1 - 1] [i_1] [i_1] [i_1] = ((/* implicit */short) -9223372036854775788LL);
                    }
                } 
            } 
            arr_135 [i_1] [i_3] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_116 [i_3] [i_3] [i_3])) ? (((/* implicit */int) max(((unsigned short)448), (((/* implicit */unsigned short) (_Bool)1))))) : (max((-1314836583), (var_9))))) - ((+(((/* implicit */int) var_10))))));
        }
    }
    var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) var_2))));
}
