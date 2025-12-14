/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233396
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_12 ^= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 2147483647)), (4294967293U)))), (((((/* implicit */_Bool) (short)32765)) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) var_1)), (2644435069U))), (((/* implicit */unsigned int) (_Bool)0)))))));
            var_13 = ((/* implicit */signed char) min((((((/* implicit */int) var_6)) - (((/* implicit */int) arr_1 [16] [i_1])))), (((((/* implicit */_Bool) ((short) arr_2 [17] [i_1]))) ? (((/* implicit */int) min((arr_1 [3LL] [i_1]), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (var_3))))))));
        }
        /* vectorizable */
        for (short i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            var_14 = ((unsigned int) arr_5 [i_2 - 1] [i_2 + 3] [i_2 + 2]);
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
            {
                var_15 = (signed char)9;
                arr_10 [i_0] [i_2 + 3] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2 - 1] [i_2 + 3])) ? (((/* implicit */int) arr_1 [i_2 - 1] [i_2 + 3])) : (((/* implicit */int) arr_4 [i_2 - 1] [i_2 + 3] [i_2 + 3]))));
                var_16 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (_Bool)1))))));
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (signed char)-20);
            }
            for (short i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */int) (((~(((/* implicit */int) arr_5 [(signed char)10] [i_2 + 3] [i_4])))) > (((1733021293) / (((/* implicit */int) var_9))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 3; i_6 < 16; i_6 += 1) 
                    {
                        {
                            arr_22 [i_0] [15LL] [i_0] [i_5] [i_0] = ((/* implicit */long long int) ((unsigned long long int) (_Bool)1));
                            var_18 = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_0] [i_2] [i_2] [i_2 + 1])) << (((/* implicit */int) arr_16 [i_0] [i_0] [i_4] [i_2 + 1]))))) : (((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_0] [i_2] [i_2] [i_2 + 1])) << (((((/* implicit */int) arr_16 [i_0] [i_0] [i_4] [i_2 + 1])) - (153))))));
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [(signed char)12])) << (((((/* implicit */int) arr_19 [i_0] [8] [i_0] [i_2 - 1] [i_4])) - (46701))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    arr_26 [i_0] [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_7] [11U]))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */int) arr_25 [4U] [4U] [4U] [(unsigned short)12])) > (((((/* implicit */int) var_7)) & (((/* implicit */int) arr_19 [(short)3] [i_4] [i_2] [i_2] [4]))))))));
                }
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        var_21 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (_Bool)1))))));
                        var_22 |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [(unsigned short)2] [i_2 + 1] [i_2 - 1] [(unsigned short)16]))));
                        arr_31 [i_9] [0U] [i_4] [0U] [i_0] &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_30 [i_2 + 1] [i_2] [8LL] [i_2 + 1] [(signed char)0] [8LL] [i_2 + 2]))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        var_23 -= ((/* implicit */signed char) ((unsigned int) arr_14 [i_2] [(unsigned short)14] [i_2 + 1] [(unsigned short)10]));
                        arr_36 [i_8] [(unsigned short)6] [(unsigned short)6] [i_8] [i_0] = ((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0]))) == (272596803505066326LL)))));
                        var_24 = ((/* implicit */long long int) var_6);
                    }
                    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)27))));
                        var_26 = ((/* implicit */short) ((((/* implicit */int) arr_21 [i_2 + 1] [i_4] [i_8] [i_2 + 1])) <= (((/* implicit */int) arr_21 [i_2 + 1] [i_8] [(_Bool)1] [i_8]))));
                        arr_40 [i_0] [i_0] = ((/* implicit */unsigned short) ((int) (unsigned char)9));
                        var_27 = ((/* implicit */long long int) ((((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_0] [5] [5])))))));
                    }
                    var_28 &= ((/* implicit */int) (+(var_5)));
                    var_29 = ((/* implicit */short) 1325919512U);
                }
                var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_3 [17U])))));
                var_31 = ((/* implicit */int) min((var_31), ((~(((/* implicit */int) arr_32 [i_2 - 1] [i_2 + 2] [i_2] [i_4] [i_2 - 1]))))));
            }
            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))))));
        }
        var_33 = ((/* implicit */long long int) ((((/* implicit */int) min((arr_13 [i_0] [i_0]), (((/* implicit */unsigned short) ((unsigned char) (unsigned char)86)))))) == (((/* implicit */int) ((unsigned short) arr_23 [i_0] [i_0] [i_0])))));
        var_34 -= ((/* implicit */int) min((min((arr_3 [i_0]), (((/* implicit */unsigned long long int) arr_23 [i_0] [15ULL] [i_0])))), (((/* implicit */unsigned long long int) ((arr_34 [i_0] [i_0] [14U] [15]) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) var_4)), (var_7))))))))));
        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) max((arr_1 [i_0] [i_0]), (min((max((((/* implicit */short) (_Bool)1)), (var_10))), (((/* implicit */short) (signed char)-96)))))))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        var_36 = ((/* implicit */unsigned int) var_6);
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 2; i_13 < 11; i_13 += 1) 
        {
            arr_45 [i_12] = ((/* implicit */unsigned short) arr_12 [i_12] [i_12] [i_13] [11ULL]);
            var_37 -= ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((4294967281U), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_2)))) : (((/* implicit */int) ((var_1) < (((/* implicit */int) (unsigned short)63936)))))))), (arr_18 [i_12] [i_13] [i_12] [(_Bool)1] [i_13])));
            /* LoopSeq 3 */
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                arr_48 [i_12] [2] [0U] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((arr_6 [i_12] [i_13]), (((/* implicit */unsigned short) (signed char)-79))))), (((((/* implicit */unsigned int) 2)) ^ (var_11)))))) ? (max((arr_0 [i_14 - 1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_14] [i_14 - 1] [i_14] [i_14 - 1])))));
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_56 [2U] [i_13 + 1] [i_14 - 1] [i_13 + 1] [i_16] [i_12] [i_14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)21))));
                            var_38 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_13 - 2] [i_14 - 1] [i_16]))))) && ((!(((/* implicit */_Bool) 272596803505066329LL))))));
                            var_39 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_44 [i_12] [i_14 - 1] [i_15])))))));
                            var_40 -= ((/* implicit */unsigned char) ((max((((int) var_5)), (((/* implicit */int) var_6)))) < (((/* implicit */int) (signed char)-30))));
                        }
                    } 
                } 
            }
            for (long long int i_17 = 3; i_17 < 11; i_17 += 1) 
            {
                arr_60 [i_12] [i_13 + 2] [i_12] = ((/* implicit */int) max((min((arr_54 [i_12] [i_13] [i_12] [i_13]), (((/* implicit */unsigned long long int) min((arr_57 [i_12] [i_12]), ((unsigned short)384)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)96), (((/* implicit */unsigned char) arr_49 [i_12] [5LL] [i_17] [(unsigned short)1]))))) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_14 [15U] [i_13] [i_17] [i_12])) : (((/* implicit */int) var_6)))))))));
                var_41 = ((/* implicit */unsigned char) arr_18 [i_12] [i_12] [i_13 - 1] [i_17] [i_17]);
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned int i_19 = 0; i_19 < 13; i_19 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_17 + 2] [i_17 - 1] [i_17] [i_13 + 1])) >> (((((/* implicit */int) arr_27 [i_17 + 2] [i_17] [i_13 - 2] [i_13 - 2])) - (56790))))))));
                            var_43 |= ((/* implicit */unsigned short) 14693239755194548584ULL);
                            arr_67 [i_12] [i_13] [(unsigned char)0] [(signed char)4] [i_12] = ((/* implicit */int) (~(2273371190U)));
                        }
                    } 
                } 
                var_44 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)-83)) - (((((/* implicit */int) var_7)) + (var_1)))))));
            }
            /* vectorizable */
            for (signed char i_20 = 0; i_20 < 13; i_20 += 1) 
            {
                var_45 = (~(arr_64 [i_20] [i_20] [i_13 - 2] [i_12] [i_12]));
                arr_71 [i_12] [i_13 + 1] [i_20] = ((/* implicit */short) var_8);
            }
        }
        for (unsigned short i_21 = 0; i_21 < 13; i_21 += 1) 
        {
            arr_76 [i_21] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_12] [i_12] [i_12] [i_12]))) | (var_11)))) < (min((min((11584314352086884934ULL), (((/* implicit */unsigned long long int) arr_2 [i_12] [i_21])))), (((/* implicit */unsigned long long int) arr_62 [i_12] [i_12] [i_12] [i_12]))))));
            var_46 = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_1 [i_12] [i_21])))), (((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (arr_28 [i_21] [14U] [i_21] [i_12] [14U]))))));
            /* LoopNest 2 */
            for (short i_22 = 0; i_22 < 13; i_22 += 1) 
            {
                for (unsigned int i_23 = 0; i_23 < 13; i_23 += 1) 
                {
                    {
                        var_47 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(min((arr_82 [i_12] [i_12] [10ULL] [0U] [i_12]), (((/* implicit */unsigned int) arr_29 [(short)13] [i_12] [i_12] [i_21] [i_22] [i_21] [11]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((-272596803505066326LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_12] [0U] [(signed char)10] [i_23]))))))) % (min((((/* implicit */long long int) arr_79 [i_12] [(_Bool)1] [i_22] [(_Bool)1])), (-7416437812260681327LL)))))) : (arr_37 [i_12] [i_21] [3U] [i_22] [3U] [i_23] [3U])));
                        arr_85 [i_12] = ((/* implicit */int) max(((unsigned short)40344), ((unsigned short)3968)));
                    }
                } 
            } 
            var_48 = ((/* implicit */short) min((((((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_12] [i_21] [i_12]))))) / (((unsigned int) arr_19 [i_12] [i_12] [i_12] [i_12] [i_12])))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) < (2951491098U)))), (arr_17 [i_12] [i_21] [(_Bool)1]))))));
            arr_86 [i_12] = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */long long int) min((var_2), (((/* implicit */unsigned short) var_4))))), (min((var_0), (((/* implicit */long long int) var_7)))))));
        }
        arr_87 [(_Bool)0] &= ((/* implicit */long long int) arr_42 [0U]);
        var_49 = ((/* implicit */unsigned char) min((min((max((arr_82 [i_12] [i_12] [i_12] [i_12] [i_12]), (((/* implicit */unsigned int) arr_49 [i_12] [8] [8] [i_12])))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_79 [i_12] [i_12] [i_12] [i_12])), (var_2)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (4015663390U)))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_61 [i_12] [(unsigned short)5] [(unsigned short)5] [i_12] [i_12]))))))))));
    }
    for (unsigned int i_24 = 0; i_24 < 14; i_24 += 1) 
    {
        arr_92 [(unsigned short)12] = ((/* implicit */short) ((var_11) % (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_3)))))));
        var_50 = ((/* implicit */unsigned int) arr_12 [(unsigned char)16] [i_24] [i_24] [i_24]);
    }
    var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) min((((/* implicit */int) ((var_11) == (min((var_11), (var_5)))))), (min(((-(((/* implicit */int) var_6)))), (max((var_1), (((/* implicit */int) var_4)))))))))));
}
