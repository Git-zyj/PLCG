/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204216
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_12 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_10)) <= (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : ((~(var_2)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 6; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    var_13 = ((/* implicit */short) (~(2071853945)));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned short) ((52541360) >> ((((-(var_4))) + (4137944311012493478LL)))));
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (-(-1167443162)))) ? (((((/* implicit */int) arr_9 [i_0])) << (((((/* implicit */int) var_0)) - (178))))) : (((/* implicit */int) var_6))));
                        arr_11 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1] [i_2] [i_4])) && (((/* implicit */_Bool) arr_2 [i_4] [i_3] [i_1 + 2]))));
                    }
                    var_16 -= ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) - (((/* implicit */int) (signed char)-123))));
                }
                var_17 = ((/* implicit */unsigned char) (~(((arr_5 [i_0] [i_1 - 1]) ? ((~(var_10))) : (var_4)))));
            }
            var_18 = ((((/* implicit */_Bool) ((int) var_10))) ? (min((((((/* implicit */_Bool) var_1)) ? (arr_10 [i_0] [3ULL] [(unsigned char)8] [i_1 + 4] [i_1 + 3] [i_0]) : (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) arr_0 [i_1 - 1])))) : (min(((~(0ULL))), (((/* implicit */unsigned long long int) 2068604676)))));
            var_19 = ((/* implicit */unsigned short) (+(144115188075855871ULL)));
        }
    }
    for (int i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-50)) / (var_8)))) ? (((((/* implicit */_Bool) arr_12 [i_5])) ? (arr_12 [i_5]) : (((/* implicit */unsigned long long int) 2827180186U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_5])) & (((/* implicit */int) var_1)))))));
        arr_14 [i_5] [i_5] = ((/* implicit */unsigned long long int) min((3413572555U), (((/* implicit */unsigned int) var_5))));
        var_21 = ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-70)), (var_0)))) | ((((((~(((/* implicit */int) (unsigned short)42888)))) + (2147483647))) << (((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))) + (6582))) - (28))))));
        var_22 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_13 [i_5]))))));
    }
    for (int i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_8 = 1; i_8 < 21; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 25; i_9 += 2) 
                {
                    {
                        var_23 = ((/* implicit */int) var_5);
                        var_24 = ((/* implicit */_Bool) var_9);
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_6]))))) : ((+(((/* implicit */int) var_0))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_6])) / (((/* implicit */int) arr_23 [i_7]))));
            arr_27 [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) arr_21 [i_6]))));
        }
        for (int i_10 = 4; i_10 < 24; i_10 += 4) 
        {
            var_27 = ((/* implicit */_Bool) min((arr_17 [i_10] [i_10]), (((((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_6]))))) / (((/* implicit */unsigned long long int) min((-241694264), (((/* implicit */int) var_9)))))))));
            arr_32 [i_6] [i_10] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)7))));
        }
        /* vectorizable */
        for (short i_11 = 0; i_11 < 25; i_11 += 4) 
        {
            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_23 [(short)23])) : (((/* implicit */int) var_7))))) ? (10ULL) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) + (2147483647))) << (((8913309051031484744LL) - (8913309051031484744LL)))))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 4) 
            {
                for (short i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            arr_43 [i_6] [i_12] [i_12] [i_12] [i_6] [i_12] [i_11] = ((/* implicit */unsigned char) arr_41 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]);
                            var_29 *= ((/* implicit */short) (~(((/* implicit */int) var_0))));
                            var_30 -= ((/* implicit */_Bool) 8319130030947645501LL);
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned char i_15 = 2; i_15 < 21; i_15 += 4) 
            {
                var_31 = ((/* implicit */long long int) (-(arr_29 [i_6] [i_11] [i_15 + 4])));
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_19 [i_6] [i_15 + 3])) : (((/* implicit */int) arr_19 [i_6] [i_15 + 1]))));
            }
            for (unsigned int i_16 = 2; i_16 < 23; i_16 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_17 = 4; i_17 < 22; i_17 += 4) 
                {
                    for (short i_18 = 0; i_18 < 25; i_18 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (-(((8362620114063343619ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12))))))))));
                            var_34 = ((/* implicit */short) ((signed char) arr_41 [i_6] [i_6] [i_16] [i_17 - 4] [i_18] [(unsigned short)5]));
                        }
                    } 
                } 
                var_35 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) - (arr_55 [i_16 + 1])));
                var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_52 [i_16] [i_16 + 1] [(_Bool)1] [i_16] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_36 [i_6])) < (4194300ULL))))) : (((((/* implicit */_Bool) var_11)) ? (arr_48 [i_6] [(short)14] [i_11] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))))))))));
                arr_56 [(short)17] [i_11] [i_16] = ((/* implicit */unsigned short) var_10);
                /* LoopSeq 4 */
                for (int i_19 = 1; i_19 < 24; i_19 += 4) 
                {
                    arr_59 [i_19] [i_11] [(short)1] [i_19] = ((/* implicit */unsigned long long int) ((signed char) (short)-5779));
                    var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) (+(((-4241027708643478998LL) / (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                }
                for (short i_20 = 1; i_20 < 24; i_20 += 2) 
                {
                    var_38 = ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_50 [i_6] [i_6] [i_16] [i_20] [i_20])))) / (var_4));
                    arr_63 [i_20] [i_11] [i_16] [i_20] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_16 - 1]))));
                }
                for (short i_21 = 0; i_21 < 25; i_21 += 2) 
                {
                    var_39 = (+(((((/* implicit */int) (short)5017)) >> (((var_4) - (4137944311012493451LL))))));
                    var_40 = ((/* implicit */short) (~(441558030U)));
                }
                for (unsigned long long int i_22 = 0; i_22 < 25; i_22 += 1) 
                {
                    arr_69 [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (var_4)))) ^ (((/* implicit */int) var_7))));
                    arr_70 [i_6] [12ULL] [i_16] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) arr_50 [i_16 + 2] [i_16] [i_16] [i_16 + 2] [i_16 - 2])) : (((/* implicit */int) var_5))));
                }
            }
            for (short i_23 = 0; i_23 < 25; i_23 += 2) 
            {
                var_41 -= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_33 [i_6] [i_6])) ? (11915711720275538084ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_6] [i_11] [i_23] [i_23])))))));
                arr_73 [i_11] [i_11] = ((/* implicit */signed char) (-(((/* implicit */int) arr_23 [i_23]))));
                var_42 = ((/* implicit */short) (+(((((/* implicit */_Bool) 266338304)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_22 [i_6] [i_11] [i_11] [0LL]))))));
            }
            for (unsigned int i_24 = 0; i_24 < 25; i_24 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_25 = 0; i_25 < 25; i_25 += 2) 
                {
                    for (short i_26 = 0; i_26 < 25; i_26 += 2) 
                    {
                        {
                            arr_81 [i_25] [i_25] [i_24] [i_25] [i_26] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) (unsigned char)224)) : (-1233405973)));
                            var_43 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_80 [i_6] [i_6] [i_6] [(short)24] [i_6] [(short)24] [i_6])))))));
                            arr_82 [i_6] [i_11] [i_11] [i_24] [i_11] [i_26] = ((((/* implicit */_Bool) arr_55 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50918))) : (arr_55 [4]));
                            var_44 = ((/* implicit */unsigned short) ((-6314228694404161629LL) + (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_26] [i_11])))));
                            arr_83 [i_6] [i_11] [i_24] [i_25] [i_24] = ((/* implicit */signed char) arr_46 [i_6] [i_11]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_27 = 2; i_27 < 23; i_27 += 3) 
                {
                    arr_87 [i_6] [i_27] [i_24] [i_27] = ((/* implicit */short) (unsigned char)120);
                    /* LoopSeq 4 */
                    for (unsigned char i_28 = 3; i_28 < 23; i_28 += 2) /* same iter space */
                    {
                        var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) ((((((/* implicit */int) arr_24 [i_6])) > (((/* implicit */int) (unsigned short)13188)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))))));
                        var_46 *= ((/* implicit */unsigned int) (~(arr_77 [i_27] [i_11] [i_27 + 1] [i_11] [i_28] [i_24])));
                        var_47 &= ((/* implicit */unsigned int) ((int) 533530214U));
                        var_48 = (+(((/* implicit */int) var_1)));
                    }
                    for (unsigned char i_29 = 3; i_29 < 23; i_29 += 2) /* same iter space */
                    {
                        var_49 = ((/* implicit */int) arr_38 [i_24] [i_11] [i_24] [i_29]);
                        arr_92 [i_6] [i_11] [i_24] [i_27] [i_6] = ((/* implicit */unsigned int) ((arr_80 [i_24] [i_24] [i_27 - 2] [i_29 - 2] [i_29] [i_29 - 2] [i_29]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_44 [i_6] [(unsigned short)23] [(unsigned short)23] [i_6])) : (var_11)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_2)))));
                    }
                    for (long long int i_30 = 0; i_30 < 25; i_30 += 2) 
                    {
                        arr_97 [i_27] [i_6] [i_11] [i_24] [i_24] [i_27] [i_30] = ((/* implicit */long long int) (signed char)(-127 - 1));
                        var_50 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)23404))));
                    }
                    for (short i_31 = 2; i_31 < 24; i_31 += 4) 
                    {
                        arr_101 [i_6] [i_6] [i_27] [i_6] = ((((/* implicit */_Bool) arr_62 [i_31] [i_31] [i_31 - 2] [i_31 + 1] [i_31] [i_31 + 1])) ? (((/* implicit */int) arr_85 [i_27 - 2] [i_27] [13ULL] [i_27] [i_24])) : (((/* implicit */int) arr_19 [i_6] [i_27])));
                        var_51 = ((/* implicit */signed char) ((arr_93 [i_11] [i_27 - 1] [i_31 + 1] [i_31 + 1] [i_31 + 1]) ? (((/* implicit */int) arr_93 [i_6] [i_27 + 2] [i_31] [i_31] [i_31 - 1])) : (((/* implicit */int) arr_93 [i_27] [i_27 - 2] [i_27] [i_31] [i_31]))));
                        var_52 = ((/* implicit */signed char) (-(((/* implicit */int) arr_39 [i_6] [i_27 + 1] [i_27 + 1] [i_31 - 2]))));
                        arr_102 [(unsigned char)11] [(unsigned char)11] [i_27] [(unsigned char)11] [i_27] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_86 [i_27])) ? (((-70773261) + (var_11))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                    }
                    arr_103 [i_27] [i_27] = ((/* implicit */short) (-(arr_15 [i_27 - 2])));
                }
                var_53 |= ((/* implicit */short) (unsigned short)24);
                arr_104 [i_6] [i_11] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_67 [i_6] [i_6] [i_24] [i_6]))));
                arr_105 [i_11] [i_24] = ((/* implicit */unsigned short) var_10);
            }
            arr_106 [i_6] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_6] [i_11] [i_11]))) : (3547092463605705053ULL)));
        }
        var_54 = ((/* implicit */_Bool) ((((((/* implicit */long long int) var_8)) == (min((-1076752067232293975LL), (((/* implicit */long long int) (short)11533)))))) ? ((~(((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(2147483638))))))))));
    }
    var_55 = ((/* implicit */_Bool) ((unsigned char) var_10));
    var_56 = ((/* implicit */unsigned short) var_11);
    var_57 = ((/* implicit */unsigned short) (((((+(var_8))) + (2147483647))) >> (((var_2) - (179674689307295139ULL)))));
}
