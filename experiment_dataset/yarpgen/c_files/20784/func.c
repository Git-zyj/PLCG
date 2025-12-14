/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20784
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
    for (signed char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        var_16 = arr_0 [i_0];
        var_17 ^= ((/* implicit */unsigned char) arr_0 [i_0 - 2]);
        var_18 |= ((/* implicit */signed char) ((unsigned char) arr_0 [i_0]));
    }
    var_19 = max((min((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_15))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (8372224))))), (((/* implicit */int) ((((((/* implicit */unsigned int) var_5)) + (var_14))) >= (var_8)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 2; i_2 < 8; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [(unsigned char)1] [i_2] [i_2 + 1])) << (((((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 2] [i_2 - 2])) - (55356)))));
                    var_22 = ((/* implicit */unsigned char) (+(arr_7 [i_1])));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 2) 
                        {
                            {
                                arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] |= var_9;
                                var_23 = ((signed char) var_11);
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_11 [i_2 - 2] [(signed char)6] [i_2 + 2] [i_2 + 1] [i_5 + 1])) >= (var_8)));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) == (arr_15 [i_2 + 2])));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) var_9)))));
                    arr_18 [i_3] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) 66584576)) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (arr_12 [i_3] [i_1] [i_2] [i_1]) : (var_8)))));
                }
            } 
        } 
        var_27 ^= ((/* implicit */unsigned char) (unsigned short)60603);
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [(signed char)9] [i_1])))))));
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            arr_21 [i_6] [i_6] = ((/* implicit */signed char) (+(66584576)));
            var_29 = ((/* implicit */short) var_11);
            var_30 = ((/* implicit */unsigned char) min((var_30), (arr_6 [i_6])));
        }
        for (int i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                for (unsigned short i_9 = 1; i_9 < 8; i_9 += 2) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_3))) && (((/* implicit */_Bool) arr_25 [i_1] [(unsigned char)2]))));
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_9 + 1] [i_9 + 1] [i_9])) << (((arr_11 [i_9 - 1] [i_9] [i_9 - 1] [i_9] [i_9]) - (1378426255))))))));
                        var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (_Bool)1))));
                        var_34 |= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_1] [i_7] [i_9]))));
                        var_35 = ((/* implicit */unsigned int) (unsigned short)256);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_10 = 4; i_10 < 9; i_10 += 3) 
            {
                for (long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_12 = 1; i_12 < 9; i_12 += 4) 
                        {
                            var_36 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)245)) <= (((((/* implicit */int) var_12)) + (var_0)))));
                            var_37 = ((/* implicit */long long int) ((unsigned short) ((int) var_5)));
                            var_38 = (~(arr_38 [(unsigned char)7] [i_10] [i_1] [0] [i_10] [i_12 + 1]));
                        }
                        arr_42 [(_Bool)1] [i_10] [i_1] = ((/* implicit */unsigned char) -739017460);
                        arr_43 [i_1] [i_1] [i_10] = ((/* implicit */int) ((var_5) >= (((/* implicit */int) arr_10 [4] [i_10 - 3] [i_10 - 4] [i_10 - 3]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
            {
                for (long long int i_14 = 2; i_14 < 6; i_14 += 3) 
                {
                    for (signed char i_15 = 1; i_15 < 8; i_15 += 2) 
                    {
                        {
                            var_39 = ((/* implicit */int) ((((/* implicit */unsigned int) var_0)) <= (var_14)));
                            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 2924713203U)))))) >= (608672255U)));
                            var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [9U] [i_14 + 1] [i_7] [i_1])) + (((/* implicit */int) var_9))))) ? ((-(((/* implicit */int) arr_16 [i_1] [1] [i_13] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) (unsigned short)266)))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_16 = 0; i_16 < 10; i_16 += 4) /* same iter space */
        {
            var_42 += ((unsigned short) arr_36 [i_1]);
            var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_16] [i_1]))))) ? (((/* implicit */int) arr_37 [i_16] [i_16] [i_16] [i_1])) : ((~(((/* implicit */int) arr_6 [i_1])))))))));
            /* LoopSeq 4 */
            for (unsigned char i_17 = 0; i_17 < 10; i_17 += 2) 
            {
                var_44 = ((/* implicit */unsigned char) var_3);
                arr_59 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
                var_45 = (short)32739;
            }
            for (unsigned int i_18 = 0; i_18 < 10; i_18 += 3) 
            {
                arr_62 [i_16] |= ((/* implicit */int) ((16U) >= (((/* implicit */unsigned int) 66584572))));
                var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) var_0)))))));
                var_47 ^= ((/* implicit */unsigned char) ((long long int) var_0));
                var_48 = ((/* implicit */unsigned char) var_1);
            }
            for (long long int i_19 = 0; i_19 < 10; i_19 += 2) 
            {
                var_49 = ((/* implicit */_Bool) 2097151U);
                var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) ((_Bool) arr_20 [i_1])))));
                var_51 = ((/* implicit */unsigned long long int) 1414634948U);
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 10; i_20 += 3) 
                {
                    for (unsigned char i_21 = 2; i_21 < 9; i_21 += 1) 
                    {
                        {
                            arr_71 [i_19] [i_16] [i_19] [i_20] [i_21] [i_1] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)60592))));
                            var_52 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_69 [i_21] [i_21 - 2] [i_21 - 2] [i_21 - 2] [i_21 - 2]))));
                        }
                    } 
                } 
            }
            for (unsigned short i_22 = 0; i_22 < 10; i_22 += 4) 
            {
                arr_74 [i_22] = var_11;
                var_53 = ((/* implicit */unsigned char) var_6);
                arr_75 [i_16] [i_16] [i_16] [i_1] = ((/* implicit */unsigned long long int) 1412514206);
            }
            /* LoopNest 3 */
            for (unsigned char i_23 = 2; i_23 < 6; i_23 += 1) 
            {
                for (unsigned long long int i_24 = 0; i_24 < 10; i_24 += 4) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            arr_83 [i_1] [i_23] [i_23] [i_24] = var_0;
                            arr_84 [i_1] [i_16] [i_23] [i_1] [i_23] = ((/* implicit */signed char) (~(((/* implicit */int) (short)16128))));
                            arr_85 [6U] [(signed char)8] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)52641)) | (((/* implicit */int) arr_10 [i_23] [i_23] [i_23 + 3] [i_23 + 2]))));
                            var_54 = ((/* implicit */unsigned short) (+(556425011U)));
                        }
                    } 
                } 
            } 
        }
    }
    for (signed char i_26 = 0; i_26 < 10; i_26 += 4) /* same iter space */
    {
        var_55 = ((/* implicit */unsigned char) max((var_55), (((/* implicit */unsigned char) -449324322))));
        var_56 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | ((+(arr_27 [i_26] [6] [i_26]))))) > (min((((/* implicit */unsigned int) ((unsigned char) (unsigned short)52641))), (2772027544U)))));
    }
    /* vectorizable */
    for (signed char i_27 = 0; i_27 < 10; i_27 += 4) /* same iter space */
    {
        arr_90 [i_27] = ((/* implicit */int) ((signed char) -1839288040));
        /* LoopSeq 1 */
        for (unsigned int i_28 = 0; i_28 < 10; i_28 += 4) 
        {
            arr_94 [(unsigned char)2] [i_28] [(signed char)5] = ((/* implicit */int) ((arr_72 [i_27]) / (((/* implicit */long long int) var_0))));
            arr_95 [i_27] [2ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_48 [i_27] [i_28])) >> (((((/* implicit */int) arr_48 [i_27] [i_28])) - (58557)))));
        }
        var_57 = ((/* implicit */long long int) max((var_57), (((/* implicit */long long int) ((unsigned short) (signed char)4)))));
    }
    for (signed char i_29 = 0; i_29 < 10; i_29 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_30 = 1; i_30 < 9; i_30 += 2) 
        {
            for (unsigned char i_31 = 0; i_31 < 10; i_31 += 4) 
            {
                {
                    var_58 = ((/* implicit */long long int) var_5);
                    var_59 = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_15)) >> (((/* implicit */int) (_Bool)1))))));
                    arr_104 [i_29] [i_29] [(_Bool)1] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_58 [i_30 - 1])) ? (((/* implicit */int) (unsigned short)12894)) : (((/* implicit */int) var_1)))), ((~(((/* implicit */int) (short)7889))))));
                }
            } 
        } 
        var_60 = ((/* implicit */short) max((var_60), (((/* implicit */short) ((((int) arr_48 [i_29] [i_29])) ^ ((~(((/* implicit */int) (unsigned short)52641)))))))));
        /* LoopNest 2 */
        for (int i_32 = 2; i_32 < 9; i_32 += 3) 
        {
            for (unsigned char i_33 = 0; i_33 < 10; i_33 += 4) 
            {
                {
                    var_61 -= ((((((/* implicit */_Bool) arr_13 [i_33] [i_33] [i_32 + 1] [i_32 - 1] [8ULL])) ? (((/* implicit */int) arr_13 [i_33] [i_32 - 1] [i_32 - 1] [i_32 - 1] [i_32])) : (((/* implicit */int) (signed char)28)))) / ((-(arr_38 [i_29] [i_29] [i_32 + 1] [i_29] [i_33] [i_29]))));
                    var_62 &= ((/* implicit */short) min(((+(((3738542284U) & (((/* implicit */unsigned int) -2147483643)))))), (((unsigned int) (unsigned char)26))));
                    /* LoopNest 2 */
                    for (short i_34 = 3; i_34 < 9; i_34 += 2) 
                    {
                        for (short i_35 = 3; i_35 < 9; i_35 += 1) 
                        {
                            {
                                arr_121 [i_29] [i_29] [i_29] [i_34] [i_29] [i_29] = ((/* implicit */signed char) var_2);
                                var_63 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_3))) * ((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) > (arr_4 [i_34]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_36 = 0; i_36 < 10; i_36 += 4) 
                    {
                        for (short i_37 = 0; i_37 < 10; i_37 += 3) 
                        {
                            {
                                var_64 &= ((((int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_33 [i_29] [(_Bool)1] [i_29]))))) > ((~(((/* implicit */int) (_Bool)1)))));
                                var_65 |= ((/* implicit */short) max((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_10)))), (((/* implicit */int) (short)-16135))));
                            }
                        } 
                    } 
                    var_66 = ((/* implicit */unsigned short) ((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)480)))));
                }
            } 
        } 
        var_67 -= ((unsigned short) arr_16 [i_29] [i_29] [i_29] [i_29]);
    }
    /* LoopSeq 1 */
    for (short i_38 = 0; i_38 < 22; i_38 += 4) 
    {
        var_68 = ((/* implicit */unsigned int) (((+((+(((/* implicit */int) var_9)))))) % (((((/* implicit */int) arr_129 [i_38])) << ((((((-(((/* implicit */int) var_7)))) + (172))) - (21)))))));
        var_69 = ((/* implicit */unsigned short) arr_128 [i_38] [4U]);
    }
}
