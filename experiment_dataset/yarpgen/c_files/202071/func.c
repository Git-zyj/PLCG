/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202071
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
    var_13 = ((((((var_4) - (var_7))) - (((unsigned int) var_8)))) ^ (var_7));
    var_14 = ((/* implicit */long long int) min((max((min((((/* implicit */unsigned int) var_0)), (784267302U))), (((/* implicit */unsigned int) var_8)))), (((((/* implicit */_Bool) ((var_2) >> (((((/* implicit */int) var_11)) - (21335)))))) ? (946887868U) : (946887849U)))));
    var_15 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_0] [i_0])) / (((int) 3348079428U)))) - (((/* implicit */int) min(((unsigned short)10840), (((/* implicit */unsigned short) arr_1 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        var_16 = 3348079428U;
                        var_17 = ((/* implicit */unsigned int) arr_6 [i_2] [i_2] [i_2 - 1] [i_2 - 2]);
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_18 -= ((/* implicit */signed char) ((784267294U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1040)))));
                        arr_14 [i_0] [i_0] [i_2] = ((/* implicit */short) 2819434420U);
                        var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 3510699997U)) ? (((/* implicit */int) ((short) arr_13 [i_0] [i_0] [i_0]))) : (1580349264)));
                        var_20 = ((/* implicit */_Bool) ((int) var_12));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 2; i_5 < 12; i_5 += 4) 
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned char) var_8);
                        arr_18 [i_0] [i_1] [i_2 + 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) + (1376778264U)))) ^ (((1826593457796041605ULL) + (((/* implicit */unsigned long long int) 3348079445U))))));
                        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_1] [i_2 + 1] [i_2 - 1])) - (((/* implicit */int) ((signed char) var_10)))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_6 = 3; i_6 < 11; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_6 + 1] [i_6 + 1] [i_6 + 1])))))));
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 1117098277U))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_6] [i_6 - 1] [i_7] [i_7] = ((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)27)) | (((/* implicit */int) (signed char)7))))));
                            arr_26 [i_7] [i_7] |= ((/* implicit */unsigned short) (_Bool)0);
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_16 [i_0 + 1] [i_2 - 2] [i_6 + 2] [i_6 - 3])))))));
                        }
                    }
                    var_25 = arr_4 [i_0] [i_0] [i_2 - 1];
                }
            } 
        } 
        arr_27 [i_0] [i_0] = ((/* implicit */unsigned int) arr_10 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]);
        /* LoopSeq 2 */
        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            arr_31 [i_0] [i_8] = ((/* implicit */signed char) 1212869034U);
            /* LoopNest 2 */
            for (unsigned int i_9 = 1; i_9 < 11; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_37 [i_10] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_34 [i_0] [i_0] [i_10]))) | (((/* implicit */int) arr_12 [i_0 - 2]))));
                        arr_38 [i_0 + 1] [i_8] [i_9 - 1] = min((((((/* implicit */int) arr_36 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 + 1])) / (((/* implicit */int) arr_36 [i_9 - 1] [i_9] [i_9 - 1] [i_9])))), (((/* implicit */int) (unsigned short)2997)));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                for (int i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    for (unsigned short i_13 = 1; i_13 < 9; i_13 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)120))))) / (3510699994U)));
                            var_27 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) arr_33 [i_13 + 3] [i_11] [i_0])), (arr_15 [i_0] [i_8] [i_11] [i_11] [i_13]))), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (unsigned short)60533)), (var_4))) - (((/* implicit */unsigned int) ((/* implicit */int) ((14712318099863285996ULL) < (((/* implicit */unsigned long long int) 946887849U)))))))))));
                            arr_47 [i_8] [i_13 + 4] = ((/* implicit */unsigned int) max((((/* implicit */int) min((arr_20 [i_0] [i_0] [i_0 - 2] [i_11]), (arr_20 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_13 + 1])))), (((int) 784267309U))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_14 = 1; i_14 < 10; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 13; i_15 += 1) 
            {
                for (unsigned short i_16 = 0; i_16 < 13; i_16 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0]))) ^ (arr_32 [i_16] [i_16] [i_16] [i_16])));
                        arr_56 [i_0] [i_0] [i_15] [i_16] = ((/* implicit */int) ((2276330131U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0 - 1])))));
                        arr_57 [i_0] [i_0 - 2] [i_14] [i_0 - 2] [i_16] [i_16] = ((/* implicit */unsigned int) ((unsigned char) arr_9 [i_14 - 1] [i_14 + 3] [i_14 + 3] [i_14 + 3] [i_14 + 3] [i_14]));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_17 = 0; i_17 < 13; i_17 += 4) 
            {
                arr_60 [i_0] [i_0 - 2] [i_0] [i_0 - 2] |= ((3177869018U) >> (((((/* implicit */int) (unsigned short)19531)) - (19504))));
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_14] [i_14 + 3] [i_14 + 3] [i_14 - 1] [i_14] [i_14])) : (((/* implicit */int) arr_0 [i_0 - 1])))))));
                var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18405))) < (946887849U))))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_65 [i_0] [i_0] [i_0] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_14 + 2] [i_14 + 3] [i_14 + 1] [i_14 - 1])) >> (((((/* implicit */int) arr_20 [i_14 - 1] [i_14 + 2] [i_14 + 1] [i_14 + 1])) - (18)))));
                arr_66 [i_14] [i_14 + 1] = ((/* implicit */unsigned short) 17448287669600753723ULL);
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 2) 
                {
                    for (unsigned int i_20 = 2; i_20 < 10; i_20 += 2) 
                    {
                        {
                            arr_73 [i_0] [i_18] = ((/* implicit */long long int) ((((784267287U) | (3303092105U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61406)) && (((/* implicit */_Bool) 3510699992U))))))));
                            arr_74 [i_14 + 2] [i_18] [i_20 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_70 [i_0] [i_14 + 3] [i_18] [i_0] [i_14 + 3]))));
                            arr_75 [i_0] [i_18] [i_19] [i_18] = (~(arr_53 [i_14 - 1] [i_14 + 2] [i_20 - 2] [i_14 - 1]));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_21 = 2; i_21 < 12; i_21 += 1) 
                {
                    for (unsigned short i_22 = 2; i_22 < 9; i_22 += 3) 
                    {
                        {
                            arr_81 [i_0 - 2] [i_0 - 2] [i_18] [i_21] [i_22 - 1] = ((/* implicit */unsigned long long int) arr_71 [i_0 + 1] [i_0 + 1] [i_14] [i_22 + 4] [i_22] [i_22 + 4]);
                            var_31 += ((int) arr_34 [i_22 + 3] [i_22] [i_22 + 1]);
                            arr_82 [i_0] [i_14] [i_18] [i_21 - 1] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_14] [i_14 - 1] [i_22]))) | (((unsigned int) arr_40 [i_14])));
                            var_32 &= ((/* implicit */unsigned short) ((unsigned int) arr_41 [i_21]));
                        }
                    } 
                } 
            }
            arr_83 [i_0] [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(-481565624))))));
        }
    }
    for (unsigned char i_23 = 1; i_23 < 13; i_23 += 1) 
    {
        var_33 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((8446808752571986232LL), (((/* implicit */long long int) min((3123117021U), (((/* implicit */unsigned int) (unsigned char)228)))))))), (((((/* implicit */unsigned long long int) ((3366531604U) + (arr_87 [i_23 + 2] [i_23 + 2])))) - (((unsigned long long int) arr_84 [i_23]))))));
        var_34 ^= ((/* implicit */unsigned char) (+(3177869018U)));
    }
    for (unsigned char i_24 = 2; i_24 < 8; i_24 += 3) 
    {
        var_35 = ((/* implicit */int) ((long long int) (-(928435692U))));
        /* LoopNest 2 */
        for (int i_25 = 0; i_25 < 12; i_25 += 1) 
        {
            for (unsigned int i_26 = 2; i_26 < 10; i_26 += 1) 
            {
                {
                    var_36 = ((/* implicit */signed char) min((arr_10 [i_24] [i_24] [i_24] [i_24] [i_24]), (((/* implicit */unsigned short) ((unsigned char) (_Bool)0)))));
                    var_37 = ((/* implicit */unsigned short) max((arr_8 [i_24 + 4] [i_24 + 4]), (((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (arr_33 [i_24] [i_24] [i_24]))) <= (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42294))) * (3510700002U)))))));
                    arr_94 [i_24] [i_24] [i_24] [i_24] = ((/* implicit */signed char) var_0);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_27 = 0; i_27 < 13; i_27 += 3) 
    {
        for (unsigned short i_28 = 1; i_28 < 11; i_28 += 4) 
        {
            {
                arr_100 [i_27] [i_27] [i_27] &= ((/* implicit */unsigned short) (((((-(min((7160894840324706384LL), (arr_16 [i_27] [i_27] [i_27] [i_28 - 1]))))) + (9223372036854775807LL))) << (((((/* implicit */int) ((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)6020)))))) - (1)))));
                arr_101 [i_27] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) (+(1750394461U)))))));
                var_38 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31900))) == (3805569316U)));
                /* LoopNest 3 */
                for (unsigned int i_29 = 0; i_29 < 13; i_29 += 3) 
                {
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        for (unsigned int i_31 = 4; i_31 < 10; i_31 += 2) 
                        {
                            {
                                var_39 = ((/* implicit */short) arr_108 [i_27] [i_27] [i_29] [i_27] [i_27]);
                                var_40 ^= ((/* implicit */int) ((((/* implicit */_Bool) 373029347U)) ? (12261832611958240111ULL) : (((/* implicit */unsigned long long int) 1306211257U))));
                                arr_109 [i_28 + 2] [i_28 - 1] [i_28] [i_28] [i_28] [i_28] = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_51 [i_28] [i_29]) >= (784267287U)))) >> (((max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)28))) / (8446808752571986232LL))), (((/* implicit */long long int) 1002498033U)))) - (1002498006LL)))));
                                arr_110 [i_27] [i_28 + 1] [i_27] [i_29] [i_29] [i_28 + 1] |= ((/* implicit */int) ((((((/* implicit */_Bool) min((var_11), (((/* implicit */short) var_3))))) && (((/* implicit */_Bool) ((signed char) var_5))))) && (((/* implicit */_Bool) arr_77 [i_27] [i_27] [i_29] [i_30] [i_31 + 3]))));
                                arr_111 [i_28] [i_31 + 1] = min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 3348079422U)), (arr_107 [i_27])))) || (((/* implicit */_Bool) arr_69 [i_28] [i_28] [i_28 - 1] [i_28] [i_28] [i_28])))), (((((unsigned int) var_10)) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) == (var_2))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
