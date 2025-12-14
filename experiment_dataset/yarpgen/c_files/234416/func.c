/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234416
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) ((signed char) ((arr_0 [i_0]) ^ (arr_0 [i_0]))));
        /* LoopSeq 4 */
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            var_12 = ((/* implicit */long long int) (_Bool)0);
            /* LoopNest 3 */
            for (signed char i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        {
                            var_13 |= ((/* implicit */_Bool) min((((int) arr_1 [i_4])), (((/* implicit */int) (unsigned char)0))));
                            var_14 = ((/* implicit */_Bool) max((var_14), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (134086656U))))))));
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (signed char)44))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) arr_5 [i_4] [i_3] [i_2 + 1] [i_0]))))));
                            var_16 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (short)(-32767 - 1)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                var_17 = ((/* implicit */signed char) var_10);
                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_0 [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) var_6)))))) : (((((/* implicit */_Bool) (signed char)-16)) ? (3290613508613114775LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
                /* LoopSeq 3 */
                for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    var_19 = ((/* implicit */long long int) var_7);
                    /* LoopSeq 2 */
                    for (long long int i_7 = 3; i_7 < 20; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */_Bool) var_6);
                        var_21 = ((/* implicit */short) -7182796199208302759LL);
                        var_22 = ((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_7 - 3]))))), (var_0)));
                        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_1]))));
                    }
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_20 [13ULL] [13ULL] [i_1 - 1] [i_6] [i_8]))))));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_4))));
                        var_26 = ((/* implicit */unsigned short) var_7);
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 1; i_9 < 20; i_9 += 2) 
                    {
                        var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1 + 1] [i_1 + 1] [i_9 - 1] [i_1 + 1] [14]))))))));
                        var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)122)))))));
                        var_29 -= ((/* implicit */long long int) var_0);
                        var_30 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_1)))) ? ((+(arr_4 [i_1 - 1]))) : (((/* implicit */int) ((_Bool) var_5)))));
                    }
                    for (signed char i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_6 [i_0] [i_1 + 1] [i_1 + 1]))) % (((((/* implicit */int) var_3)) - (((/* implicit */int) (_Bool)0))))));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7151)) ? (arr_3 [i_1 - 1] [i_1 + 1]) : (((/* implicit */unsigned int) var_4))))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (arr_3 [i_1 - 1] [i_1 - 1]))) : (((/* implicit */unsigned int) 1366669937))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned char) arr_3 [i_0] [i_5]);
                        var_34 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))));
                        var_35 = (((_Bool)0) ? (((/* implicit */int) ((short) (_Bool)0))) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                        var_36 -= ((/* implicit */unsigned short) (_Bool)0);
                    }
                }
                /* vectorizable */
                for (unsigned int i_12 = 0; i_12 < 21; i_12 += 2) 
                {
                    var_37 = ((/* implicit */unsigned char) -1LL);
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned int) ((int) arr_19 [i_12] [i_12]));
                        var_39 = ((/* implicit */unsigned long long int) ((int) arr_14 [i_1] [i_1]));
                    }
                }
                for (signed char i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    var_40 = ((/* implicit */unsigned int) var_10);
                    var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) var_3))));
                    /* LoopSeq 1 */
                    for (signed char i_15 = 2; i_15 < 19; i_15 += 3) 
                    {
                        var_42 |= ((/* implicit */unsigned int) ((((var_9) / (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)(-32767 - 1))) / (((/* implicit */int) var_8))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_15 - 1])) : (((/* implicit */int) arr_2 [i_1 - 1] [i_15 + 1])))))));
                        var_43 = ((/* implicit */long long int) (short)32767);
                        var_44 = ((/* implicit */short) min((((unsigned short) var_9)), (((/* implicit */unsigned short) max((var_5), (arr_17 [i_15] [i_1] [(unsigned char)18] [i_1] [i_0]))))));
                    }
                }
                var_45 = (-(0U));
            }
        }
        /* vectorizable */
        for (unsigned long long int i_16 = 2; i_16 < 18; i_16 += 4) 
        {
            var_46 = ((/* implicit */short) var_8);
            var_47 = ((/* implicit */long long int) var_0);
        }
        for (short i_17 = 1; i_17 < 20; i_17 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_18 = 0; i_18 < 21; i_18 += 3) 
            {
                for (long long int i_19 = 0; i_19 < 21; i_19 += 1) 
                {
                    for (int i_20 = 2; i_20 < 19; i_20 += 2) 
                    {
                        {
                            var_48 = ((/* implicit */long long int) (-(((((/* implicit */int) var_2)) ^ ((-(((/* implicit */int) var_2))))))));
                            var_49 = ((/* implicit */signed char) (short)7150);
                            var_50 = ((/* implicit */short) var_4);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_21 = 1; i_21 < 17; i_21 += 2) 
            {
                for (signed char i_22 = 0; i_22 < 21; i_22 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_23 = 0; i_23 < 21; i_23 += 2) /* same iter space */
                        {
                            var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) (~((~(3744794061U))))))));
                            var_52 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7151))) : (min((2780630908U), (((/* implicit */unsigned int) ((signed char) var_7)))))));
                            var_53 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) arr_6 [i_0] [i_17 - 1] [i_21]))));
                        }
                        /* vectorizable */
                        for (signed char i_24 = 0; i_24 < 21; i_24 += 2) /* same iter space */
                        {
                            var_54 = ((/* implicit */short) (~(((/* implicit */int) (short)-11011))));
                            var_55 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_17 [i_17 + 1] [i_21] [i_17 - 1] [i_17 - 1] [i_17 - 1])) + (2147483647))) >> ((-(((/* implicit */int) var_7))))));
                        }
                        for (signed char i_25 = 0; i_25 < 21; i_25 += 2) /* same iter space */
                        {
                            var_56 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_5)), (3744794061U))), (((/* implicit */unsigned int) ((signed char) (_Bool)1)))));
                            var_57 = ((/* implicit */unsigned long long int) min((var_57), (((/* implicit */unsigned long long int) ((int) -2718704780526934872LL)))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_26 = 0; i_26 < 21; i_26 += 2) 
                        {
                            var_58 = ((/* implicit */unsigned short) ((long long int) var_8));
                            var_59 = (!(((/* implicit */_Bool) 0U)));
                            var_60 = ((/* implicit */long long int) (~(((((/* implicit */int) var_5)) & (((/* implicit */int) arr_25 [i_0] [i_0] [18ULL] [i_21] [18ULL] [i_22] [i_26]))))));
                            var_61 = ((long long int) arr_61 [i_0] [i_17 + 1] [i_21] [i_21] [1]);
                        }
                    }
                } 
            } 
        }
        for (long long int i_27 = 0; i_27 < 21; i_27 += 3) 
        {
            var_62 ^= ((/* implicit */unsigned int) (-(((((/* implicit */long long int) ((/* implicit */int) var_1))) | (arr_64 [(unsigned short)8] [i_27] [i_27] [i_0] [i_0] [(unsigned short)8] [(unsigned short)8])))));
            var_63 = ((/* implicit */short) max(((~(arr_15 [i_0] [i_27]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))));
            var_64 = ((/* implicit */unsigned char) (_Bool)0);
            /* LoopSeq 2 */
            for (int i_28 = 2; i_28 < 18; i_28 += 1) 
            {
                var_65 = ((/* implicit */signed char) max((var_65), (((/* implicit */signed char) (+(((unsigned int) (signed char)-71)))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_29 = 2; i_29 < 19; i_29 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        var_66 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (max((arr_51 [i_0] [i_27] [i_28] [i_29 + 1]), (((/* implicit */unsigned long long int) var_4)))));
                        var_67 |= ((/* implicit */int) var_1);
                        var_68 = ((/* implicit */unsigned int) max((((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)32767))))) || (((/* implicit */_Bool) ((unsigned char) arr_64 [i_27] [i_0] [i_27] [i_28] [i_28] [i_29] [i_29])))))), ((signed char)0)));
                    }
                    for (unsigned long long int i_31 = 1; i_31 < 20; i_31 += 2) 
                    {
                        var_69 = max((((/* implicit */short) ((((/* implicit */_Bool) min(((short)(-32767 - 1)), (((/* implicit */short) (signed char)(-127 - 1)))))) || ((!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))), ((short)(-32767 - 1)));
                        var_70 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / ((+((+(var_10)))))));
                        var_71 = arr_4 [i_29];
                        var_72 = ((/* implicit */_Bool) max((var_72), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_32 = 0; i_32 < 21; i_32 += 3) 
                    {
                        var_73 = ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_40 [i_27] [i_28] [i_27])), (0U)));
                        var_74 |= ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (short)-4078)) ? (((/* implicit */int) arr_77 [i_29 - 2] [i_28 + 1] [i_28 - 1] [i_28 + 2] [i_28 - 2])) : (((/* implicit */int) arr_77 [i_29 + 1] [i_28 - 2] [i_28 - 1] [i_28 + 3] [i_28 + 3]))))));
                        var_75 = ((/* implicit */_Bool) (unsigned char)181);
                    }
                    for (signed char i_33 = 3; i_33 < 19; i_33 += 4) 
                    {
                        var_76 = ((/* implicit */int) var_1);
                        var_77 = ((/* implicit */unsigned char) 4294967295U);
                    }
                }
                for (unsigned char i_34 = 0; i_34 < 21; i_34 += 1) 
                {
                    var_78 = ((/* implicit */unsigned int) var_3);
                    /* LoopSeq 1 */
                    for (unsigned char i_35 = 0; i_35 < 21; i_35 += 1) 
                    {
                        var_79 = var_0;
                        var_80 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [(signed char)0] [i_27]))));
                        var_81 = ((/* implicit */unsigned int) max((var_81), (var_6)));
                        var_82 = ((/* implicit */int) var_2);
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                    {
                        var_83 = ((/* implicit */int) ((unsigned int) 3153427754U));
                        var_84 = ((/* implicit */int) (short)(-32767 - 1));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_37 = 0; i_37 < 21; i_37 += 1) 
                    {
                        var_85 = ((/* implicit */_Bool) min((var_85), (((/* implicit */_Bool) var_0))));
                        var_86 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_10))))));
                    }
                    /* vectorizable */
                    for (long long int i_38 = 1; i_38 < 20; i_38 += 3) 
                    {
                        var_87 = ((/* implicit */unsigned long long int) ((_Bool) -16384));
                        var_88 = ((/* implicit */unsigned int) var_7);
                        var_89 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_29 [i_0] [i_0] [i_28 - 2] [i_0]))) ? (((/* implicit */int) arr_21 [i_0] [i_27] [i_28 + 3] [i_34] [i_27])) : (arr_44 [20ULL] [i_27] [20ULL])));
                    }
                    for (short i_39 = 4; i_39 < 20; i_39 += 3) 
                    {
                        var_90 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) var_1)))))) ? (-1527797583) : (((((/* implicit */int) (short)(-32767 - 1))) ^ (((/* implicit */int) var_2))))));
                        var_91 = ((/* implicit */signed char) max((var_91), (((/* implicit */signed char) arr_36 [(signed char)15] [(unsigned char)0] [i_34] [i_34]))));
                    }
                }
            }
            /* vectorizable */
            for (signed char i_40 = 0; i_40 < 21; i_40 += 3) 
            {
                var_92 = ((/* implicit */short) (+(var_4)));
                /* LoopNest 2 */
                for (signed char i_41 = 0; i_41 < 21; i_41 += 2) 
                {
                    for (long long int i_42 = 0; i_42 < 21; i_42 += 2) 
                    {
                        {
                            var_93 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) ((unsigned int) var_4)))));
                            var_94 = ((/* implicit */int) ((unsigned int) var_6));
                            var_95 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) arr_32 [i_0] [i_27] [i_40] [i_41] [i_42])) : (((/* implicit */int) arr_60 [i_0] [i_27] [i_40] [(unsigned short)2] [i_42] [i_42] [i_27]))));
                            var_96 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                            var_97 += ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 841079442)));
                        }
                    } 
                } 
                var_98 = ((/* implicit */_Bool) ((signed char) var_7));
            }
        }
    }
    var_99 = (-(var_10));
}
