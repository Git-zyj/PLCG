/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211903
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
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-31405)))))))) ? (var_5) : (min((3981706828U), (((/* implicit */unsigned int) (short)31398))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)31404)))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (long long int i_4 = 4; i_4 < 7; i_4 += 1) 
                            {
                                var_15 = ((/* implicit */signed char) ((min((((/* implicit */long long int) (unsigned char)247)), (-2978473230839992608LL))) / (((/* implicit */long long int) (-(((((/* implicit */int) var_2)) - (((/* implicit */int) var_10)))))))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) min((min((1835162009), (var_3))), (((/* implicit */int) ((unsigned char) max((var_3), (var_0)))))));
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((_Bool) min((((/* implicit */unsigned int) var_2)), (var_6)))))));
                            }
                            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 8682457646208892474ULL))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                            {
                                var_18 *= ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
                                var_19 = ((/* implicit */int) var_10);
                                arr_15 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-5780515231606243020LL)));
                            }
                        }
                    } 
                } 
                arr_16 [8ULL] [8ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? ((-(((/* implicit */int) var_10)))) : (((((/* implicit */int) var_10)) | (((/* implicit */int) var_2))))))) : (min((((/* implicit */long long int) ((unsigned short) var_3))), (min((var_4), (((/* implicit */long long int) var_12))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (+(var_0)))) : (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */long long int) var_5)))))))));
                                var_21 *= ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2191263456U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4))) : (var_5)));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)8)) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1321433718)) ? (((/* implicit */int) (short)-1157)) : (-1835162005))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (signed char i_10 = 2; i_10 < 8; i_10 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (-(((/* implicit */int) var_12)))))));
                                var_25 -= ((((/* implicit */_Bool) -8146412301038864914LL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
                                var_26 = ((/* implicit */_Bool) ((unsigned short) var_9));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 2; i_11 < 8; i_11 += 2) 
                    {
                        for (int i_12 = 0; i_12 < 11; i_12 += 3) 
                        {
                            {
                                arr_35 [i_11] [i_12] [i_11] [i_11] [i_11 - 2] [i_11] [i_11 + 1] = ((/* implicit */signed char) ((_Bool) var_10));
                                var_27 += ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                }
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned char) max(((~(var_11))), (((/* implicit */long long int) (~(((/* implicit */int) var_12)))))));
                    var_29 = (+(var_4));
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 2; i_14 < 10; i_14 += 1) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (var_9))))) : (max((((/* implicit */unsigned long long int) var_11)), (8682457646208892489ULL)))));
                                var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -2505021524187229975LL)) ? (var_6) : (((/* implicit */unsigned int) ((int) (signed char)12))))) >= (min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_1))))), (var_5))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 2; i_16 < 10; i_16 += 4) 
                    {
                        for (unsigned short i_17 = 1; i_17 < 9; i_17 += 2) 
                        {
                            {
                                var_32 &= ((/* implicit */unsigned int) max(((unsigned char)242), (((/* implicit */unsigned char) (signed char)4))));
                                var_33 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) (unsigned short)20307)))))));
                                var_34 = ((/* implicit */_Bool) (+(min((min((((/* implicit */long long int) (signed char)23)), (930533359858528662LL))), (((/* implicit */long long int) 2103703839U))))));
                                arr_49 [i_0] [i_13] = ((/* implicit */unsigned char) max((var_7), (((((/* implicit */_Bool) -759884801)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_18 = 0; i_18 < 11; i_18 += 2) 
                {
                    var_35 = ((/* implicit */long long int) (-(var_0)));
                    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (!((_Bool)0))))));
                    arr_52 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65506))));
                    var_37 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (var_8)));
                    /* LoopSeq 2 */
                    for (unsigned char i_19 = 3; i_19 < 8; i_19 += 1) /* same iter space */
                    {
                        arr_56 [i_19 - 2] [i_19] [i_0] = ((/* implicit */short) ((long long int) 60833748));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) >= (var_0)));
                            arr_61 [i_0] [i_19] [i_18] [i_18] [i_20] = ((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) (unsigned char)53)) : (var_0)));
                        }
                        for (unsigned int i_21 = 2; i_21 < 9; i_21 += 3) 
                        {
                            var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((-7590469958309388964LL) + (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                            arr_64 [i_0] [i_1 - 1] [i_18] [i_0] [i_21] [i_19] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 1580296284)) % (1152921504606846975LL)));
                            var_40 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) 2812627815U)) <= (18446744073709551615ULL)));
                            var_41 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 11ULL)) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) (unsigned char)247))));
                        }
                        for (int i_22 = 4; i_22 < 10; i_22 += 3) 
                        {
                            var_42 *= var_6;
                            var_43 = ((/* implicit */_Bool) (-(((long long int) (signed char)26))));
                            var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))));
                        }
                        for (signed char i_23 = 3; i_23 < 7; i_23 += 2) 
                        {
                            var_45 *= ((/* implicit */_Bool) var_6);
                            var_46 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)31950)) && (((/* implicit */_Bool) var_0)))))));
                            var_47 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)));
                        }
                        arr_70 [i_0] [i_0] [i_0] [i_18] [i_19] = ((var_1) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)247))))) : (((unsigned long long int) -6586498340759687288LL)));
                    }
                    for (unsigned char i_24 = 3; i_24 < 8; i_24 += 1) /* same iter space */
                    {
                        var_48 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 60833756)) % (var_5)));
                        var_49 = ((/* implicit */int) var_7);
                        arr_75 [i_0] [i_0] [i_18] [i_24] = ((/* implicit */unsigned int) ((signed char) (short)-4525));
                        arr_76 [i_0] [i_1 - 2] [i_18] [i_1 - 2] = ((/* implicit */int) (~(var_6)));
                    }
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_25 = 1; i_25 < 10; i_25 += 3) 
    {
        for (short i_26 = 0; i_26 < 12; i_26 += 2) 
        {
            {
                var_50 *= ((/* implicit */unsigned char) (((((~(((/* implicit */int) var_1)))) & (((/* implicit */int) (short)-10116)))) ^ (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                /* LoopSeq 3 */
                for (long long int i_27 = 0; i_27 < 12; i_27 += 1) 
                {
                    arr_86 [i_25] = ((/* implicit */signed char) ((((_Bool) var_11)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_12)), (min((var_6), (((/* implicit */unsigned int) var_0))))))) : (max((((/* implicit */long long int) (+(60833744)))), (min((var_4), (((/* implicit */long long int) (short)4524))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_28 = 0; i_28 < 12; i_28 += 2) 
                    {
                        for (short i_29 = 0; i_29 < 12; i_29 += 2) 
                        {
                            {
                                var_51 = ((/* implicit */unsigned long long int) min(((-(1835162009))), ((+(var_0)))));
                                var_52 = ((/* implicit */unsigned int) max((((/* implicit */long long int) 60833744)), (-1152921504606846950LL)));
                                var_53 = ((/* implicit */int) ((((long long int) var_9)) << (((((((/* implicit */_Bool) (short)-31939)) ? (-60833757) : (((/* implicit */int) (short)26733)))) + (60833774)))));
                                var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) (signed char)0))))), (var_11))) : (max((3957840384751862926LL), (min((7956010146221155290LL), (((/* implicit */long long int) var_1))))))));
                                arr_94 [i_25] [(unsigned short)2] [i_27] [i_25] [2U] [(unsigned short)8] = ((/* implicit */unsigned short) (+(max((var_5), (((/* implicit */unsigned int) var_9))))));
                            }
                        } 
                    } 
                    var_55 = ((/* implicit */long long int) ((unsigned short) (+(((/* implicit */int) (unsigned char)252)))));
                    /* LoopSeq 2 */
                    for (int i_30 = 0; i_30 < 12; i_30 += 3) /* same iter space */
                    {
                        var_56 = ((/* implicit */unsigned short) var_10);
                        var_57 = ((/* implicit */int) ((min((((/* implicit */long long int) (unsigned char)190)), (var_11))) % (((/* implicit */long long int) (~(((((var_3) + (2147483647))) >> (((((/* implicit */int) var_9)) - (73))))))))));
                    }
                    for (int i_31 = 0; i_31 < 12; i_31 += 3) /* same iter space */
                    {
                        arr_100 [i_25] [i_26] [i_26] [i_26] [i_26] = ((/* implicit */long long int) ((unsigned short) min((var_7), (((/* implicit */long long int) (_Bool)1)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_32 = 1; i_32 < 10; i_32 += 4) 
                        {
                            var_58 = ((/* implicit */long long int) max((var_58), (((/* implicit */long long int) (~(var_3))))));
                            var_59 = ((/* implicit */long long int) 4294967295U);
                            arr_103 [i_25 - 1] [i_25] [i_26] [2] [2] [i_32 - 1] = ((/* implicit */signed char) (_Bool)0);
                        }
                        /* vectorizable */
                        for (short i_33 = 4; i_33 < 9; i_33 += 1) 
                        {
                            var_60 = ((/* implicit */unsigned short) min((var_60), (((/* implicit */unsigned short) ((short) var_3)))));
                            arr_107 [4] [7LL] [7LL] [7LL] [i_25] = ((/* implicit */unsigned char) var_11);
                        }
                        var_61 = ((/* implicit */unsigned short) ((long long int) min(((~(((/* implicit */int) var_9)))), (1909174545))));
                    }
                    /* LoopNest 2 */
                    for (short i_34 = 0; i_34 < 12; i_34 += 2) 
                    {
                        for (unsigned short i_35 = 0; i_35 < 12; i_35 += 2) 
                        {
                            {
                                var_62 = ((/* implicit */unsigned int) (-((((-(var_4))) - (min((((/* implicit */long long int) (signed char)15)), (var_11)))))));
                                var_63 = ((/* implicit */_Bool) max((((/* implicit */long long int) min(((_Bool)1), (var_10)))), (min((((long long int) (_Bool)1)), (((/* implicit */long long int) (short)-1))))));
                            }
                        } 
                    } 
                }
                for (long long int i_36 = 2; i_36 < 9; i_36 += 2) 
                {
                    arr_115 [i_25 - 1] [(_Bool)1] [i_25] = ((/* implicit */signed char) ((min((var_1), (var_1))) || (((/* implicit */_Bool) max((-1835161996), (60833772))))));
                    /* LoopNest 2 */
                    for (unsigned char i_37 = 0; i_37 < 12; i_37 += 1) 
                    {
                        for (signed char i_38 = 0; i_38 < 12; i_38 += 4) 
                        {
                            {
                                arr_121 [(unsigned char)5] [i_26] [i_36] [i_25] = (!(((/* implicit */_Bool) var_6)));
                                var_64 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(0U)))), ((((_Bool)1) ? (-3009109318617587750LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_39 = 3; i_39 < 10; i_39 += 4) 
                    {
                        for (unsigned char i_40 = 0; i_40 < 12; i_40 += 3) 
                        {
                            {
                                var_65 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) ((signed char) var_7)))))));
                                var_66 = ((/* implicit */short) max((var_66), (((/* implicit */short) min((min((var_11), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) ((short) var_12)))))))))));
                                var_67 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_6)) : (var_11)))))) ? (var_4) : (((/* implicit */long long int) min((var_8), (var_8))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_41 = 0; i_41 < 12; i_41 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_42 = 1; i_42 < 11; i_42 += 4) 
                    {
                        for (unsigned int i_43 = 0; i_43 < 12; i_43 += 1) 
                        {
                            {
                                var_68 = ((/* implicit */unsigned char) max((var_68), (((/* implicit */unsigned char) (~((~(((/* implicit */int) (signed char)-1)))))))));
                                var_69 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3575247179U)) ? (((/* implicit */unsigned int) var_0)) : (11U)))) ? (((/* implicit */long long int) 541190372)) : (min((((/* implicit */long long int) -60833773)), (-1LL))));
                            }
                        } 
                    } 
                    arr_135 [i_25 + 1] [i_41] &= ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (max((6511023693715273989LL), (var_4))) : (var_4));
                }
                var_70 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(2992408263U)))) ? (min((var_6), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44978))))))));
                /* LoopNest 3 */
                for (int i_44 = 0; i_44 < 12; i_44 += 4) 
                {
                    for (unsigned char i_45 = 0; i_45 < 12; i_45 += 2) 
                    {
                        for (unsigned long long int i_46 = 0; i_46 < 12; i_46 += 1) 
                        {
                            {
                                var_71 = ((/* implicit */unsigned int) var_4);
                                var_72 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_1)))) * (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_11)))))));
                                var_73 -= ((/* implicit */unsigned int) (+(min((((/* implicit */long long int) (short)11926)), (var_7)))));
                                var_74 = ((/* implicit */long long int) min((var_74), (((/* implicit */long long int) (-((-(var_5))))))));
                                arr_144 [i_25] [i_25] [i_44] [i_45] [i_46] [i_25] [i_26] = ((/* implicit */long long int) ((_Bool) ((unsigned int) var_12)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_47 = 0; i_47 < 12; i_47 += 4) 
                {
                    for (signed char i_48 = 1; i_48 < 11; i_48 += 1) 
                    {
                        {
                            var_75 -= ((/* implicit */unsigned long long int) min((3273174615U), (2341665107U)));
                            var_76 = (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))));
                            var_77 = ((/* implicit */unsigned long long int) min((var_77), (((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) var_9)))), (((((/* implicit */long long int) var_6)) > (-2564666528624189096LL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_78 = ((/* implicit */unsigned int) (~(var_11)));
}
