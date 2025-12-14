/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246824
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (-(((/* implicit */int) var_12)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 3; i_1 < 8; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                for (signed char i_3 = 4; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_1] [i_3])) ? (((/* implicit */long long int) var_5)) : (var_11))) == (((/* implicit */long long int) ((/* implicit */int) ((var_5) >= (((/* implicit */int) var_12))))))));
                        arr_10 [i_0] [i_1 - 3] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_7 [i_0] [i_3]) <= (((/* implicit */int) (signed char)37))))) >= ((-(((/* implicit */int) (short)-32761))))));
                    }
                } 
            } 
            var_15 = ((/* implicit */_Bool) (short)22755);
        }
        for (int i_4 = 3; i_4 < 8; i_4 += 4) /* same iter space */
        {
            arr_13 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) arr_5 [i_0] [i_0])) << (((arr_0 [i_4]) - (1595241679)))))));
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 10; i_5 += 4) 
            {
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) (-(arr_7 [i_0] [i_7])));
                            arr_22 [i_0] [i_4] [i_5] [i_4] [i_6] [i_7] [3ULL] = ((/* implicit */_Bool) (-(var_4)));
                            var_17 = arr_9 [i_5 + 1] [i_5 + 1] [i_5] [i_4 - 1] [i_4 - 3] [10];
                            arr_23 [i_7] &= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_7 [i_0] [i_4 - 3])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
            {
                arr_29 [i_0] [i_0] [i_9] = ((/* implicit */short) ((unsigned char) ((signed char) (-2147483647 - 1))));
                var_18 = -1179236287;
                arr_30 [(_Bool)1] |= (!(var_7));
                var_19 = ((/* implicit */int) ((unsigned char) (+(-1088623305))));
            }
            for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
            {
                arr_35 [i_0] [i_0] [i_10] = ((/* implicit */unsigned short) ((((var_7) ? (arr_26 [i_0]) : (((/* implicit */int) (unsigned short)26445)))) + (((/* implicit */int) var_10))));
                arr_36 [i_0] [i_8] [i_10] [i_10] = ((/* implicit */int) arr_20 [i_0] [i_0] [i_8] [i_10] [i_10]);
            }
            for (signed char i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    var_20 = ((/* implicit */int) 134152192U);
                    /* LoopSeq 2 */
                    for (signed char i_13 = 0; i_13 < 11; i_13 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)86))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_4)) : (var_11)))));
                        var_22 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_26 [i_13])) ? (((/* implicit */long long int) var_4)) : (arr_33 [i_0] [i_8] [i_12])))));
                        var_23 = ((/* implicit */int) (+(((((/* implicit */_Bool) (short)22755)) ? (arr_2 [i_12]) : (((/* implicit */long long int) arr_39 [i_13] [i_12] [i_11] [i_8] [i_0]))))));
                        var_24 = ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (~(((/* implicit */int) var_12)))))));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) / (arr_42 [i_12] [i_12] [i_12] [i_12] [i_12]))))));
                    }
                    for (signed char i_14 = 0; i_14 < 11; i_14 += 1) /* same iter space */
                    {
                        arr_48 [i_0] [i_8] [i_11] [i_12] [i_14] = ((/* implicit */unsigned char) ((((var_4) < (((/* implicit */int) var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                        arr_49 [i_0] [i_8] [i_0] [i_0] [i_14] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))));
                        arr_50 [i_0] [i_8] [4] [i_12] [i_14] [i_14] [i_14] = ((/* implicit */short) 18446744073709551591ULL);
                    }
                }
                var_26 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)22346)) | (arr_1 [i_8] [i_0]))) / ((+(((/* implicit */int) var_2))))));
            }
            arr_51 [i_0] = ((/* implicit */_Bool) var_0);
            /* LoopSeq 1 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_55 [i_15] [i_15] = ((/* implicit */unsigned int) var_8);
                var_27 ^= ((/* implicit */_Bool) (short)-32753);
            }
            var_28 += ((/* implicit */int) 0U);
        }
        /* LoopSeq 3 */
        for (long long int i_16 = 0; i_16 < 11; i_16 += 4) 
        {
            arr_58 [i_0] [i_16] [i_16] = ((/* implicit */int) (((~(var_5))) >= (((/* implicit */int) var_9))));
            /* LoopNest 2 */
            for (unsigned short i_17 = 0; i_17 < 11; i_17 += 4) 
            {
                for (unsigned int i_18 = 0; i_18 < 11; i_18 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_19 = 0; i_19 < 11; i_19 += 2) 
                        {
                            var_29 += ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (signed char)112)))));
                            var_30 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)43189)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60491))) : (arr_21 [i_0] [i_16] [i_19] [i_19] [i_19])));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_20 = 4; i_20 < 10; i_20 += 2) 
                        {
                            arr_69 [4LL] [i_16] [4LL] = ((/* implicit */unsigned long long int) -1364479627);
                            var_31 -= ((/* implicit */unsigned short) ((int) arr_60 [i_0] [i_20 - 4] [i_20 - 4]));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_63 [i_0] [i_17] [i_20 - 4] [i_20 - 1])) ? (((((/* implicit */_Bool) arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (25ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_16]))))) : (((/* implicit */unsigned long long int) ((int) (unsigned short)0)))));
                        }
                        var_33 = ((/* implicit */short) (!((_Bool)0)));
                    }
                } 
            } 
            arr_70 [i_0] = ((int) 2106318629);
        }
        for (unsigned short i_21 = 0; i_21 < 11; i_21 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 11; i_23 += 3) 
                {
                    for (unsigned short i_24 = 0; i_24 < 11; i_24 += 3) 
                    {
                        {
                            arr_82 [(unsigned short)6] [i_23] [i_21] [i_22] [i_23] [i_22] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_78 [i_0] [i_23] [i_23] [i_24])) || (((/* implicit */_Bool) 3487025023223998654LL)))));
                            arr_83 [i_0] [i_21] [i_0] [i_23] [i_0] [i_24] &= ((/* implicit */short) ((((/* implicit */int) var_9)) >= (((int) -950508865))));
                        }
                    } 
                } 
                var_34 += ((/* implicit */long long int) ((_Bool) arr_68 [i_0] [i_21] [(unsigned short)6] [i_22]));
            }
            for (int i_25 = 0; i_25 < 11; i_25 += 4) 
            {
                var_35 = (!((_Bool)0));
                var_36 += ((/* implicit */short) (+((-(((/* implicit */int) arr_32 [i_0] [i_0]))))));
            }
            for (int i_26 = 0; i_26 < 11; i_26 += 4) 
            {
                arr_89 [i_0] [6LL] [i_0] [i_26] = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0] [(signed char)1] [i_21] [i_0]);
                /* LoopSeq 3 */
                for (short i_27 = 0; i_27 < 11; i_27 += 2) /* same iter space */
                {
                    arr_92 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_6 [i_21] [i_0])))))));
                    arr_93 [(unsigned char)9] [i_0] [i_21] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_84 [(unsigned char)2])) / (2106318623)))));
                    arr_94 [9LL] = (-(((((/* implicit */_Bool) 1436510155)) ? (85809972) : (((/* implicit */int) (short)(-32767 - 1))))));
                    var_37 = (-(((/* implicit */int) (_Bool)0)));
                }
                for (short i_28 = 0; i_28 < 11; i_28 += 2) /* same iter space */
                {
                    var_38 = ((/* implicit */long long int) (_Bool)1);
                    var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) var_0))));
                    var_40 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_88 [1])))) || (((/* implicit */_Bool) 1868027837))));
                }
                for (unsigned short i_29 = 0; i_29 < 11; i_29 += 4) 
                {
                    var_41 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)26837)) == (((/* implicit */int) (short)22755)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_11)))));
                    arr_101 [4U] [i_0] [i_21] [i_21] [4U] [i_29] = ((/* implicit */signed char) ((int) arr_88 [(signed char)2]));
                    /* LoopSeq 3 */
                    for (int i_30 = 0; i_30 < 11; i_30 += 2) 
                    {
                        var_42 |= ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_85 [(short)8] [3U] [i_30])))))));
                        arr_104 [i_0] [i_0] [i_0] [i_26] [i_26] [i_29] [i_30] = ((/* implicit */short) var_8);
                        var_43 = ((/* implicit */short) 1073741823);
                    }
                    for (int i_31 = 0; i_31 < 11; i_31 += 1) 
                    {
                        var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) -1853945089))));
                        var_45 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-24133)) ? (((/* implicit */unsigned int) arr_80 [i_0] [i_21] [i_26] [i_26] [i_29] [i_31])) : (2013397610U)));
                        arr_107 [i_0] = ((/* implicit */unsigned int) (-(arr_66 [i_0] [i_21] [i_26] [i_29] [i_31])));
                        arr_108 [i_0] [i_0] [i_21] [i_26] [i_26] [i_29] [i_31] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_100 [i_31] [1] [i_31] [i_31] [i_31] [i_31])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))))));
                    }
                    for (int i_32 = 2; i_32 < 10; i_32 += 2) 
                    {
                        var_46 = ((/* implicit */unsigned char) (unsigned short)65527);
                        var_47 = ((/* implicit */unsigned short) ((arr_103 [i_32] [i_32] [i_32 + 1] [i_32]) == (arr_103 [5] [i_32] [i_32 - 2] [i_32])));
                    }
                }
                var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) (unsigned short)30886)) ? (((/* implicit */int) (unsigned short)60907)) : (arr_12 [i_21] [(unsigned char)10]))) : (((/* implicit */int) arr_32 [(short)10] [(short)10])))))));
                /* LoopSeq 3 */
                for (signed char i_33 = 0; i_33 < 11; i_33 += 1) 
                {
                    var_49 = ((/* implicit */int) min((var_49), ((+(((/* implicit */int) var_2))))));
                    arr_115 [i_33] [i_26] [i_21] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-31873)) || (((/* implicit */_Bool) (short)15112))));
                    var_50 ^= ((/* implicit */short) (+(((/* implicit */int) (!((_Bool)0))))));
                }
                for (signed char i_34 = 0; i_34 < 11; i_34 += 2) 
                {
                    var_51 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_34])) ? (arr_65 [i_0] [i_0] [i_0] [i_34] [i_21]) : (2106318629)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_26])) || (((/* implicit */_Bool) -2147483639))))) : (((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (_Bool)1)))));
                    arr_119 [i_0] [2] [i_21] [i_26] [i_34] = ((/* implicit */unsigned short) (((_Bool)1) ? (arr_0 [i_34]) : (((/* implicit */int) var_3))));
                    var_52 = ((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_21] [i_26] [i_21])) && (((/* implicit */_Bool) (-2147483647 - 1)))));
                    var_53 = ((/* implicit */_Bool) var_1);
                }
                for (int i_35 = 3; i_35 < 9; i_35 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_36 = 0; i_36 < 11; i_36 += 2) 
                    {
                        var_54 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_46 [i_35] [i_35 - 1] [i_35 + 2] [i_35] [i_35]))));
                        var_55 = ((/* implicit */signed char) arr_47 [i_35] [0] [i_26] [i_26] [i_36] [i_21]);
                    }
                    var_56 = ((((/* implicit */_Bool) arr_113 [i_35 + 2] [i_21] [(signed char)7] [i_35] [(unsigned char)10])) ? (var_5) : (arr_42 [i_35 + 2] [i_21] [1ULL] [i_35] [i_35 + 2]));
                    arr_126 [i_21] [i_26] [i_35] = ((/* implicit */signed char) arr_38 [i_26]);
                    arr_127 [i_0] [i_21] [i_21] [i_26] [i_26] [(unsigned short)5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_78 [i_0] [i_26] [i_26] [(signed char)10])) ? (arr_77 [i_26]) : (((((/* implicit */_Bool) 2106318629)) ? (((/* implicit */int) (short)16684)) : (((/* implicit */int) (short)-11031))))));
                    arr_128 [i_0] [i_0] [i_21] [i_26] [i_35] = ((/* implicit */int) arr_114 [i_35] [i_21]);
                }
            }
            var_57 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 15378209204523066921ULL)) ? (var_11) : (var_11))))));
            arr_129 [i_0] [i_21] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
        }
        for (int i_37 = 0; i_37 < 11; i_37 += 1) 
        {
            arr_132 [i_0] [i_37] [i_37] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41676))))) : (((/* implicit */int) arr_53 [i_0] [i_0] [2LL] [i_37]))));
            var_58 ^= ((/* implicit */long long int) var_10);
            var_59 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_8)))) * (24ULL)));
            var_60 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_66 [2U] [i_0] [i_0] [i_37] [i_37]) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))))));
            var_61 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(-138133909))))));
        }
        var_62 = ((/* implicit */int) min((var_62), (((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_116 [i_0] [i_0] [i_0] [i_0])) * (25ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_0])))))))))));
        var_63 = ((/* implicit */_Bool) var_8);
    }
    for (int i_38 = 0; i_38 < 13; i_38 += 2) 
    {
        arr_135 [i_38] = ((int) (-(((/* implicit */int) arr_133 [i_38]))));
        var_64 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8952519768167396187LL)) ? (((((/* implicit */_Bool) arr_134 [i_38])) ? (var_5) : (((/* implicit */int) arr_134 [i_38])))) : (max((-2147483625), (((/* implicit */int) var_6))))))) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (0ULL))) : (((/* implicit */unsigned long long int) 32505856U))));
    }
    var_65 = ((/* implicit */long long int) var_0);
}
