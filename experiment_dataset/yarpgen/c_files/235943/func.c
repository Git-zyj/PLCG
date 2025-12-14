/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235943
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1544230802))))) : (arr_1 [i_0])));
            /* LoopSeq 2 */
            for (int i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                var_18 = ((/* implicit */unsigned long long int) ((arr_4 [i_1 - 1] [i_2]) * (((/* implicit */int) (_Bool)1))));
                arr_7 [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned char)235))))));
                arr_8 [i_0] = ((/* implicit */_Bool) (-(arr_6 [i_0 + 1])));
            }
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                var_19 = ((/* implicit */short) ((((var_4) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) arr_10 [8LL] [i_0] [8LL])))) % (((/* implicit */int) ((arr_4 [i_0] [i_1]) != (var_8))))));
                arr_12 [i_0] [i_1 - 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_1 - 1] [i_0] [i_3])) * (((/* implicit */int) (short)-28004))));
                var_20 = ((/* implicit */unsigned short) ((int) (_Bool)1));
                arr_13 [i_0] [i_0] [i_1] [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_0 + 1])) & (((/* implicit */int) (unsigned char)21)))) >> (((/* implicit */int) ((_Bool) -1544230799)))));
            }
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_17 [i_0] [(unsigned short)7] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0]))));
            /* LoopSeq 2 */
            for (short i_5 = 1; i_5 < 10; i_5 += 1) 
            {
                arr_22 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_0] [12ULL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                var_21 = ((/* implicit */_Bool) (+(((-1544230799) * (((/* implicit */int) arr_18 [11ULL] [i_4]))))));
                /* LoopSeq 3 */
                for (unsigned char i_6 = 3; i_6 < 12; i_6 += 1) 
                {
                    arr_25 [i_0] [(unsigned char)1] [i_4] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_20 [i_0 + 1] [i_4 - 1] [i_5 - 1]))));
                    var_22 = ((-1544230820) / (((/* implicit */int) arr_20 [i_5 + 3] [i_5 + 1] [i_5 + 2])));
                    var_23 += ((/* implicit */unsigned char) (((_Bool)1) || ((_Bool)1)));
                }
                for (long long int i_7 = 1; i_7 < 12; i_7 += 4) /* same iter space */
                {
                    var_24 += ((_Bool) ((((/* implicit */_Bool) 12846559792404041373ULL)) ? (arr_5 [i_0] [i_4] [0ULL]) : (((/* implicit */unsigned long long int) -1544230828))));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 1; i_8 < 10; i_8 += 2) 
                    {
                        arr_33 [i_0] [i_4 - 1] [i_4 - 1] [i_5] [i_0] [i_8] [i_8] = ((/* implicit */signed char) ((long long int) arr_2 [i_0]));
                        arr_34 [i_8] [(signed char)3] [i_0] [i_0] [3] [3] = ((/* implicit */signed char) (_Bool)1);
                    }
                    arr_35 [i_0] [i_4] = ((/* implicit */unsigned char) var_5);
                }
                for (long long int i_9 = 1; i_9 < 12; i_9 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned short) ((arr_5 [i_0 - 1] [i_4 - 1] [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_26 |= ((/* implicit */_Bool) 1544230827);
                    arr_38 [i_0 - 1] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) -7409396195600192986LL);
                }
                arr_39 [i_0] = ((16125369080348795387ULL) * (0ULL));
            }
            for (unsigned char i_10 = 4; i_10 < 11; i_10 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    arr_45 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0 - 1] [i_0] [i_4] [i_10] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4] [i_10] [i_11]))) : (7752698343235239990LL)))) ? (((/* implicit */int) arr_19 [i_4] [i_4 - 1] [i_4] [i_4 - 1])) : (((/* implicit */int) (short)16075))));
                    var_27 = (-(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)9)))));
                    var_28 = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */int) arr_20 [i_10 + 1] [i_4] [i_0])) : (arr_6 [i_0]))) - ((+(((/* implicit */int) (_Bool)1))))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    arr_49 [i_0] [i_4 - 1] [i_10] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_47 [i_10 + 2] [i_10 - 3]))));
                    arr_50 [i_12] [i_0] [i_0] [(unsigned char)7] = ((/* implicit */signed char) ((var_4) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_0] [(_Bool)1] [i_0] [i_12])) && (((/* implicit */_Bool) arr_26 [i_12] [5ULL] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) (short)-3223))));
                    /* LoopSeq 3 */
                    for (unsigned char i_13 = 1; i_13 < 9; i_13 += 1) 
                    {
                        arr_53 [i_0] [i_4] [i_0] [i_12] [i_12] [(_Bool)1] [i_12] = (_Bool)0;
                        arr_54 [i_4 - 1] [(unsigned char)11] [(unsigned char)7] [i_0] = ((/* implicit */short) ((arr_9 [i_0 - 1]) ? (((/* implicit */int) arr_9 [i_10 - 1])) : (((/* implicit */int) (!((_Bool)1))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_29 |= ((/* implicit */short) arr_27 [(_Bool)1]);
                        var_30 -= ((/* implicit */unsigned char) ((_Bool) (signed char)8));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_10 + 1])) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) arr_40 [i_0] [i_0 + 1] [i_10 + 2]))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_51 [i_0 - 1] [i_4 - 1] [i_0] [i_0] [i_10 - 4]))));
                        var_33 = var_0;
                        var_34 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_44 [i_4] [i_4] [i_15])) ? (((/* implicit */unsigned long long int) -1544230813)) : (14048016942552377830ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2321374993360756228ULL))))));
                    }
                    var_35 = ((/* implicit */signed char) ((arr_55 [i_0 - 1] [i_4] [i_4] [i_4 - 1] [i_4] [i_10 + 1] [i_12]) || (arr_55 [i_0 - 1] [i_0] [i_0 - 1] [i_4 - 1] [i_10 - 3] [i_10 + 1] [i_10 - 4])));
                }
                /* LoopSeq 1 */
                for (int i_16 = 0; i_16 < 13; i_16 += 3) 
                {
                    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (var_15)));
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (2321374993360756234ULL)))));
                    var_38 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) ^ (9146209554264779770LL)));
                    var_39 -= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_24 [i_0] [i_4 - 1] [i_4 - 1] [i_10] [i_16])) - (101)))));
                }
                arr_61 [i_0] [i_10 - 1] = ((/* implicit */short) -6427132195964181134LL);
            }
        }
        for (long long int i_17 = 0; i_17 < 13; i_17 += 3) 
        {
            var_40 = ((/* implicit */long long int) arr_26 [i_0] [i_0] [(_Bool)1] [i_17] [i_17] [i_17]);
            /* LoopSeq 1 */
            for (int i_18 = 1; i_18 < 11; i_18 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 1) /* same iter space */
                {
                    arr_72 [i_0] [i_18] [i_17] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_70 [i_0] [i_0] [i_17] [i_17] [i_18 + 1] [i_19]))) + (((/* implicit */int) (signed char)-124))));
                    /* LoopSeq 4 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_75 [i_0] [i_19] [i_19] [i_18 + 1] [(unsigned char)7] [i_0] = ((/* implicit */unsigned long long int) arr_44 [i_0] [i_17] [i_18]);
                        arr_76 [i_0 + 1] [i_17] [i_0] [(_Bool)1] [i_20] = (-2147483647 - 1);
                    }
                    for (int i_21 = 0; i_21 < 13; i_21 += 3) 
                    {
                        var_41 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (_Bool)1))) < ((+(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_21]))))));
                        arr_79 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] [i_19] [i_0 - 1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [(_Bool)1] [(_Bool)1] [i_0] [i_0 - 1]))));
                        var_42 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_40 [(_Bool)1] [i_0 - 1] [i_18 + 2]))));
                        var_43 = ((/* implicit */short) arr_58 [i_0 + 1] [i_0 + 1] [i_18] [i_19] [i_21]);
                        var_44 = ((/* implicit */_Bool) (+(((((/* implicit */int) var_12)) / (arr_65 [i_0] [i_18] [i_0])))));
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_45 |= ((/* implicit */_Bool) ((unsigned char) arr_70 [(short)10] [i_18] [i_18] [i_18] [i_18 - 1] [(_Bool)1]));
                        arr_83 [i_0] [i_17] [i_0] [i_18] [i_19] [i_22] = ((/* implicit */_Bool) (short)-3219);
                        var_46 = ((/* implicit */_Bool) arr_21 [i_18 + 2] [i_19]);
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        var_47 = (!(((4157990472417100046LL) < (((/* implicit */long long int) arr_6 [0])))));
                        var_48 = ((/* implicit */_Bool) (unsigned char)248);
                        arr_87 [i_0] [i_0] [i_0] [i_19] [(_Bool)1] [i_23] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2321374993360756255ULL))));
                    }
                    arr_88 [i_0] [(_Bool)0] [(_Bool)0] [i_0] [i_0] [i_19] = ((/* implicit */short) arr_59 [5] [i_18 - 1] [i_0] [i_0] [i_0] [i_0 + 1]);
                }
                for (unsigned long long int i_24 = 0; i_24 < 13; i_24 += 1) /* same iter space */
                {
                    var_49 = ((/* implicit */int) (-(arr_23 [i_24] [i_18])));
                    /* LoopSeq 1 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_50 = ((/* implicit */int) arr_59 [i_0] [i_25] [i_18 + 2] [i_0] [i_17] [i_0 - 1]);
                        arr_94 [i_0 - 1] [i_17] [i_0] [i_24] [i_25] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (((/* implicit */int) (_Bool)1)))))));
                        arr_95 [i_0] [i_17] [i_18 + 2] [i_0] [i_24] [i_0] = (unsigned char)207;
                        arr_96 [(_Bool)1] [i_18] |= ((/* implicit */unsigned short) ((signed char) var_3));
                    }
                    arr_97 [i_0] [(_Bool)1] |= ((/* implicit */unsigned short) arr_59 [i_0] [i_0] [i_0] [0LL] [i_0] [i_17]);
                    arr_98 [i_0] [i_0] [i_18] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_18 + 2] [i_0 + 1] [i_24]))) * ((-(var_3)))));
                    var_51 ^= ((/* implicit */_Bool) ((arr_41 [i_0 + 1] [i_17] [i_24]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-107))));
                }
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    arr_102 [i_0] [i_17] [i_0] [i_18] [i_26] = (!((_Bool)1));
                    var_52 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_9)))) ? (((var_5) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) (unsigned char)2)))) : (((/* implicit */int) arr_80 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26] [i_26]))));
                    var_53 = ((((long long int) var_3)) <= (((/* implicit */long long int) arr_6 [i_0 - 1])));
                    arr_103 [i_26] [i_0] [3ULL] [i_0] [i_0] = ((/* implicit */unsigned short) ((1257885024) / (((/* implicit */int) arr_2 [i_0]))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_27 = 0; i_27 < 13; i_27 += 2) 
                {
                    /* LoopSeq 3 */
                    for (short i_28 = 0; i_28 < 13; i_28 += 1) /* same iter space */
                    {
                        arr_110 [i_0] [i_18] = ((/* implicit */unsigned short) (unsigned char)65);
                        var_54 = (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)126))))));
                        var_55 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)67)) >> (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-125)))))));
                    }
                    for (short i_29 = 0; i_29 < 13; i_29 += 1) /* same iter space */
                    {
                        var_56 ^= ((/* implicit */short) (((-(var_1))) < (((int) var_10))));
                        var_57 |= (!(((/* implicit */_Bool) arr_99 [i_0 + 1] [i_18 + 1])));
                        var_58 = ((/* implicit */short) ((unsigned char) (short)-32728));
                    }
                    for (short i_30 = 0; i_30 < 13; i_30 += 1) /* same iter space */
                    {
                        var_59 |= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) var_5))) <= (((/* implicit */int) arr_52 [i_0 + 1] [i_17]))));
                        var_60 *= ((/* implicit */unsigned short) var_8);
                        arr_118 [i_0] [i_0] [i_18] [i_0] [i_0] [i_30] [i_30] = ((/* implicit */unsigned short) ((int) var_16));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_31 = 2; i_31 < 11; i_31 += 2) 
                    {
                        arr_121 [i_0] [i_17] [i_31] [i_17] [i_0] [i_0] = ((/* implicit */_Bool) arr_14 [i_0] [i_0]);
                        var_61 += ((((/* implicit */int) (signed char)22)) / (((int) 1895810793029901772ULL)));
                        arr_122 [i_0] = ((/* implicit */_Bool) ((arr_42 [i_31 + 2] [i_31 + 2] [i_31 + 1] [i_31 + 2] [i_31 + 1]) / (arr_42 [i_31 + 1] [i_31 - 1] [i_31] [i_31 + 1] [i_31 - 1])));
                        var_62 = ((/* implicit */long long int) ((int) arr_47 [i_0 - 1] [i_0]));
                    }
                    for (unsigned char i_32 = 0; i_32 < 13; i_32 += 3) 
                    {
                        arr_127 [i_0] [i_17] [i_17] [(unsigned short)4] [i_0] [i_32] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_68 [i_0 - 1] [i_0 - 1] [i_18 + 2]))));
                        arr_128 [i_27] [i_27] [i_32] [i_0] [i_32] = ((/* implicit */long long int) ((((/* implicit */long long int) var_7)) < (arr_117 [i_0 - 1] [i_0] [i_0] [i_0] [i_0])));
                    }
                }
            }
            arr_129 [i_0] = ((((((/* implicit */_Bool) arr_48 [i_0] [i_0])) ? (-835949504) : (((/* implicit */int) arr_47 [(unsigned char)7] [12])))) * (((/* implicit */int) ((_Bool) var_2))));
        }
        /* LoopSeq 2 */
        for (long long int i_33 = 2; i_33 < 11; i_33 += 1) 
        {
            var_63 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((1590156920190687637ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)176)))))) ? (((((/* implicit */int) arr_40 [i_0] [i_0] [(unsigned char)12])) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)114))));
            arr_132 [i_0] [i_33] = ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) arr_57 [i_0] [i_0] [i_33])))));
            arr_133 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) (short)13474)))));
            var_64 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_0 + 1] [i_0 - 1] [i_0 + 1]))));
            var_65 = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1))));
        }
        for (signed char i_34 = 3; i_34 < 11; i_34 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_35 = 2; i_35 < 9; i_35 += 3) 
            {
                var_66 = arr_11 [i_35 + 4] [i_34];
                var_67 = ((/* implicit */signed char) ((int) arr_4 [i_34 - 3] [i_0 + 1]));
                /* LoopSeq 1 */
                for (_Bool i_36 = 1; i_36 < 1; i_36 += 1) 
                {
                    var_68 = (((_Bool)1) ? (((var_13) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_63 [i_36] [i_36] [i_36])))) : (((int) var_6)));
                    var_69 *= ((/* implicit */int) ((16087836080861227248ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32746)))));
                    var_70 = ((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned long long int) arr_6 [i_0 + 1]))));
                }
                /* LoopSeq 1 */
                for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
                {
                    var_71 = ((/* implicit */signed char) 15872);
                    var_72 ^= ((((((/* implicit */_Bool) arr_14 [0ULL] [(unsigned char)8])) && (((/* implicit */_Bool) var_6)))) ? (-1069097833) : (arr_81 [i_34 - 1]));
                }
            }
            var_73 = ((/* implicit */int) ((short) (short)32756));
            var_74 = ((/* implicit */signed char) arr_111 [i_0] [i_0 - 1] [i_0] [i_34] [i_34 + 2]);
            var_75 = ((/* implicit */unsigned char) ((signed char) arr_0 [i_0]));
            /* LoopSeq 1 */
            for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
            {
                var_76 ^= ((/* implicit */_Bool) (-(132409369432331194ULL)));
                var_77 = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_11)) ? (14021466051267300579ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_15))))));
                arr_147 [i_0] [i_0] = ((/* implicit */_Bool) (-(var_6)));
                arr_148 [i_0] = ((/* implicit */_Bool) arr_141 [i_0 - 1] [i_34 - 1] [i_38]);
                var_78 = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        }
    }
    var_79 = var_12;
}
