/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249789
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_4 [i_0] [1U] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) 1033150691U)))));
                arr_5 [i_0] [i_0] [(short)10] = ((/* implicit */short) ((_Bool) min((((/* implicit */long long int) var_1)), (var_0))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1572991921)) != (arr_2 [i_2 - 1])))), (var_8)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 15; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [(unsigned char)2] [i_2 - 1] [i_2] [15LL] = ((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)121)), ((short)16995)));
                                var_13 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 1528950650)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17010))) : (2378008021U)))));
                                var_14 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 5005923615606253576LL)) ? (((/* implicit */int) (short)-16996)) : (((/* implicit */int) (short)16996))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1 + 2] [i_0] [i_0] &= ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)51)), ((+(((/* implicit */int) arr_13 [i_2 - 1] [10LL] [9LL]))))));
                    var_15 = var_4;
                    arr_16 [i_2] [(short)14] [i_2] [i_2] = ((/* implicit */unsigned int) (signed char)16);
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                {
                    arr_21 [(short)14] [i_0] [i_0] [10ULL] &= ((((/* implicit */int) ((short) -91002285))) + (((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])));
                    var_16 = ((/* implicit */long long int) min((var_16), (var_0)));
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) -8595536255557570113LL))));
                    arr_22 [i_5] [i_5] = ((/* implicit */_Bool) ((long long int) arr_1 [i_0] [i_5]));
                }
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)3841)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_24 [i_1] [i_1 + 1] [4]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 11910815042467128128ULL)) ? (-402839970) : (((/* implicit */int) ((_Bool) (unsigned short)61710))))))));
                    arr_26 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(min((arr_19 [i_0] [i_1 + 1] [i_1 - 1]), (((/* implicit */long long int) min((arr_17 [i_6] [4] [4]), (arr_3 [13ULL]))))))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) min((arr_13 [i_0] [i_1 + 1] [i_6]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_6] [i_1 + 2] [i_1 + 2]))))))))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 3 */
    for (short i_7 = 2; i_7 < 14; i_7 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 3; i_8 < 14; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 16; i_9 += 4) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_21 = ((/* implicit */short) (unsigned short)3491);
                        arr_38 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */int) ((unsigned int) ((long long int) 7887050461151081346LL)));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)187))));
        /* LoopNest 3 */
        for (unsigned int i_11 = 1; i_11 < 13; i_11 += 3) 
        {
            for (unsigned short i_12 = 2; i_12 < 14; i_12 += 2) 
            {
                for (int i_13 = 2; i_13 < 12; i_13 += 1) 
                {
                    {
                        arr_49 [(signed char)10] [i_11] [i_13] [9U] [(signed char)10] = ((/* implicit */unsigned long long int) var_5);
                        var_23 = ((/* implicit */unsigned char) min((925567325), (((/* implicit */int) (signed char)-20))));
                        arr_50 [i_7] [i_12] [i_12] [i_13] &= ((/* implicit */signed char) min((((/* implicit */long long int) max((4087719115U), (((/* implicit */unsigned int) (unsigned char)176))))), ((+(arr_45 [i_12] [i_12 - 2] [i_12 + 2] [10ULL])))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_14 = 2; i_14 < 14; i_14 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 3) 
        {
            arr_58 [i_15] [i_14] [i_14 - 2] = ((/* implicit */signed char) arr_8 [i_14 + 1]);
            arr_59 [i_14 - 2] [(unsigned char)2] [i_15] |= ((/* implicit */long long int) ((((/* implicit */int) (signed char)-107)) == (((/* implicit */int) var_11))));
        }
        for (signed char i_16 = 1; i_16 < 14; i_16 += 3) 
        {
            var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)113)))) % (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_7)))));
            var_25 = ((/* implicit */int) 1578977316U);
        }
        for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 3) /* same iter space */
        {
            arr_64 [i_14] = ((/* implicit */unsigned short) -880790531);
            /* LoopSeq 1 */
            for (short i_18 = 2; i_18 < 15; i_18 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_19 = 2; i_19 < 14; i_19 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_20 = 1; i_20 < 14; i_20 += 3) 
                    {
                        var_26 = ((/* implicit */int) ((unsigned int) arr_57 [i_14] [3]));
                        var_27 += ((/* implicit */long long int) ((_Bool) arr_37 [14LL] [i_17] [i_18 - 1] [i_19 - 1]));
                    }
                    for (int i_21 = 2; i_21 < 12; i_21 += 4) 
                    {
                        var_28 = var_2;
                        var_29 = ((/* implicit */int) 2255466779U);
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)32042)))))));
                        var_31 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)199))));
                        arr_74 [(short)5] [i_19] [i_19 + 2] [(unsigned short)12] [14] [i_14 + 1] [i_14 + 1] = ((/* implicit */unsigned short) ((arr_42 [(signed char)3] [1LL] [i_18 - 2]) ? (16923570587578223308ULL) : (((/* implicit */unsigned long long int) var_7))));
                    }
                    var_32 = ((/* implicit */int) max((var_32), ((-(var_4)))));
                    arr_75 [i_14] [i_18] [i_19] = ((/* implicit */int) 16923570587578223309ULL);
                    arr_76 [13LL] [13LL] [i_18] [11U] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)68))))) - (arr_48 [i_18] [i_18 - 2] [i_18] [i_18 + 1])));
                }
                /* LoopSeq 2 */
                for (unsigned short i_22 = 1; i_22 < 15; i_22 += 4) 
                {
                    var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2118448721828721645LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (14100145740396741357ULL))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_23 = 1; i_23 < 15; i_23 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3689152928964359138LL)) ? (arr_48 [i_14] [i_14] [i_14] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) (short)-29285)) : (((/* implicit */int) var_1))));
                        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((unsigned long long int) var_9)))));
                        var_36 = ((/* implicit */long long int) (~(-1748863602)));
                    }
                    for (unsigned char i_24 = 1; i_24 < 15; i_24 += 1) /* same iter space */
                    {
                        arr_87 [i_24] [i_22] [(short)6] [i_17] [i_14] [15ULL] [i_14] = ((/* implicit */long long int) (-(2076062488072535375ULL)));
                        var_37 = (+(((/* implicit */int) (short)18744)));
                        arr_88 [i_14] = ((((/* implicit */int) var_9)) | ((~(arr_40 [i_14]))));
                    }
                    for (unsigned char i_25 = 1; i_25 < 15; i_25 += 1) /* same iter space */
                    {
                        arr_92 [i_25] [i_18] [i_14] [i_25] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_63 [i_14 - 2] [i_14 + 1]))));
                        arr_93 [i_14] [i_14] [(unsigned char)3] [(signed char)4] [15ULL] [i_25] = ((/* implicit */unsigned char) var_6);
                        var_38 = ((/* implicit */long long int) max((var_38), ((+(4186594490901154397LL)))));
                        var_39 += ((/* implicit */long long int) ((int) (unsigned char)57));
                    }
                    var_40 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)57))) : (arr_51 [i_14 + 2])));
                    var_41 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)84))) * (2039500517U)));
                }
                for (unsigned int i_26 = 3; i_26 < 14; i_26 += 2) 
                {
                    arr_98 [i_26] = var_8;
                    arr_99 [i_18] [i_26] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_86 [i_26 - 1] [i_18 - 1] [i_14] [(short)10] [i_14 - 2])) ? (arr_86 [i_26 + 1] [i_18 + 1] [(_Bool)1] [(signed char)5] [11U]) : (((/* implicit */int) (unsigned short)62053))));
                    arr_100 [i_14 + 1] [i_14 + 1] [(unsigned char)13] [i_26] [i_26] = ((/* implicit */signed char) (+(arr_73 [i_18] [i_18 - 2] [i_18] [i_18 + 1] [i_18 - 1] [i_18 + 1])));
                }
                var_42 = ((/* implicit */signed char) ((long long int) 609658823U));
            }
            /* LoopNest 2 */
            for (signed char i_27 = 0; i_27 < 16; i_27 += 3) 
            {
                for (signed char i_28 = 4; i_28 < 14; i_28 += 4) 
                {
                    {
                        arr_107 [i_14] [(short)0] [(short)0] [(signed char)3] [i_27] = arr_12 [i_14 + 1] [i_14 - 2] [i_14 + 1] [i_14 + 2] [i_28 + 1];
                        /* LoopSeq 3 */
                        for (int i_29 = 0; i_29 < 16; i_29 += 1) /* same iter space */
                        {
                            var_43 *= ((/* implicit */unsigned char) ((unsigned int) var_2));
                            var_44 -= ((/* implicit */unsigned long long int) ((unsigned short) 383144576));
                            var_45 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_47 [(short)10] [12ULL] [i_28 + 1] [12ULL]))));
                        }
                        for (int i_30 = 0; i_30 < 16; i_30 += 1) /* same iter space */
                        {
                            arr_114 [i_27] [i_27] = ((/* implicit */short) var_5);
                            var_46 = ((/* implicit */unsigned long long int) ((unsigned int) var_1));
                            var_47 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2664349642U))));
                        }
                        for (int i_31 = 0; i_31 < 16; i_31 += 1) /* same iter space */
                        {
                            arr_117 [i_27] = ((/* implicit */int) ((((/* implicit */_Bool) arr_80 [i_14 - 2] [i_17] [i_28 - 1] [i_31])) ? (5284318443210387638ULL) : (arr_80 [i_17] [i_27] [i_28 - 3] [i_28 - 3])));
                            var_48 ^= -1278045990;
                        }
                        var_49 = ((/* implicit */unsigned int) -7887050461151081347LL);
                    }
                } 
            } 
            arr_118 [i_14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
        }
        for (unsigned long long int i_32 = 0; i_32 < 16; i_32 += 3) /* same iter space */
        {
            arr_122 [i_32] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)22120)) << (((((4875555752801426200ULL) & (((/* implicit */unsigned long long int) -7887050461151081347LL)))) - (182694989913016341ULL)))));
            /* LoopSeq 2 */
            for (unsigned int i_33 = 0; i_33 < 16; i_33 += 3) 
            {
                var_50 *= ((/* implicit */unsigned long long int) 1938968156);
                arr_125 [3LL] [i_32] = ((/* implicit */long long int) ((unsigned char) 7887050461151081363LL));
            }
            for (short i_34 = 4; i_34 < 13; i_34 += 1) 
            {
                arr_128 [i_32] [i_14] [i_32] = ((/* implicit */signed char) (+(((/* implicit */int) var_11))));
                var_51 = ((/* implicit */unsigned char) (-(((arr_29 [i_14]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43415)))))));
            }
            var_52 = ((/* implicit */long long int) ((var_3) ? (((/* implicit */unsigned int) 488645263)) : (2859658631U)));
        }
        /* LoopSeq 1 */
        for (signed char i_35 = 2; i_35 < 15; i_35 += 1) 
        {
            arr_131 [i_14] [i_35] [i_35 - 2] = ((/* implicit */unsigned short) (~(var_0)));
            var_53 = 2161811983903361639LL;
        }
    }
    for (short i_36 = 2; i_36 < 14; i_36 += 3) /* same iter space */
    {
        var_54 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)22140))));
        var_55 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)54504))))), (((((/* implicit */long long int) ((/* implicit */int) (short)-14134))) / (6180996466533350480LL)))));
        var_56 = ((/* implicit */int) max((var_56), (((/* implicit */int) ((var_10) - (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) / (((unsigned int) (signed char)-29))))))))));
        var_57 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) var_2)), (max((4898319279159249703LL), (2161811983903361631LL))))), (((/* implicit */long long int) var_2))));
    }
    var_58 = ((/* implicit */unsigned int) min((((short) 71108058)), (var_9)));
}
