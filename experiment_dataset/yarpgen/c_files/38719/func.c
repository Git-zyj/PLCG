/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38719
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
    var_15 = ((/* implicit */short) 1931917469);
    var_16 |= ((/* implicit */_Bool) (-(var_4)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) arr_1 [(_Bool)1]);
        arr_2 [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1931917469)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)140)))))))) : (var_2)));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((4167131922320589721ULL) - (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
                        var_19 = ((/* implicit */unsigned short) (((-(((long long int) (_Bool)1)))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_2] [i_2])) != (((/* implicit */int) var_6))))))));
                        arr_12 [i_0] [i_0] [i_3] = 1931917472;
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            var_20 ^= ((/* implicit */long long int) 2498753153U);
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (2498753153U)));
                        }
                        for (short i_5 = 3; i_5 < 20; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */int) 648003319U);
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) 1796214142U))));
                        }
                        var_24 -= ((/* implicit */_Bool) arr_4 [i_0] [i_1]);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 13; i_8 += 4) 
            {
                {
                    arr_27 [i_6] [i_7] [i_7] = ((/* implicit */_Bool) arr_4 [i_7] [i_6]);
                    var_25 = ((/* implicit */unsigned char) var_9);
                    var_26 = ((/* implicit */long long int) arr_11 [i_6] [i_6] [i_7] [i_8]);
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) ((arr_20 [(unsigned char)0] [i_8]) != (((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_6] [i_8] [i_8]))))), (((((/* implicit */_Bool) 2216203851U)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_8 [i_6] [i_6]))))))) ? ((+(((/* implicit */int) ((unsigned short) arr_7 [i_6] [i_6] [i_6]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6])) ? (arr_21 [(unsigned char)3]) : (((/* implicit */unsigned long long int) arr_25 [i_6]))))) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) arr_5 [i_6])))))))));
                }
            } 
        } 
        var_28 = (!(((/* implicit */_Bool) (+(arr_21 [i_6])))));
        var_29 += ((/* implicit */_Bool) (-(((arr_26 [i_6] [(short)7] [i_6] [i_6]) / (arr_26 [i_6] [i_6] [i_6] [i_6])))));
        arr_28 [i_6] [i_6] = ((/* implicit */long long int) 2698106253498660431ULL);
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
    {
        var_30 = ((/* implicit */unsigned long long int) arr_22 [i_9] [i_9]);
        /* LoopSeq 1 */
        for (int i_10 = 1; i_10 < 10; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_11 = 0; i_11 < 13; i_11 += 1) 
            {
                for (unsigned char i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    {
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) arr_11 [i_9] [i_10 + 2] [i_10 + 2] [i_9]))));
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) arr_25 [(unsigned char)11]))));
                        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_21 [i_9]))) || (((/* implicit */_Bool) (unsigned char)85)))))));
                        var_34 = ((/* implicit */signed char) min((var_34), ((signed char)121)));
                    }
                } 
            } 
            var_35 = ((/* implicit */_Bool) ((unsigned long long int) (((_Bool)0) ? (((/* implicit */int) arr_22 [i_9] [i_10])) : (((/* implicit */int) (signed char)0)))));
        }
        var_36 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)14))));
    }
    /* LoopSeq 3 */
    for (signed char i_13 = 1; i_13 < 9; i_13 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (int i_15 = 0; i_15 < 13; i_15 += 1) 
            {
                {
                    arr_48 [i_13] [i_14] [12] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2078763445U)) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) arr_18 [i_13] [i_14] [i_15] [(_Bool)1]))))));
                    var_37 = ((((/* implicit */int) ((short) arr_22 [i_13 + 4] [i_13 + 1]))) << ((((-(((((/* implicit */_Bool) arr_1 [i_13 + 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10)))))) + (158))));
                }
            } 
        } 
        arr_49 [i_13] = ((/* implicit */_Bool) (short)32762);
        var_38 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_9)) ? (-3387033827286704110LL) : (((/* implicit */long long int) ((/* implicit */int) max((arr_47 [i_13]), (((/* implicit */unsigned char) arr_39 [i_13] [(signed char)2] [i_13] [i_13 + 4] [i_13 + 4] [i_13]))))))))));
        var_39 = ((/* implicit */short) var_9);
        /* LoopNest 2 */
        for (long long int i_16 = 3; i_16 < 11; i_16 += 2) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    var_40 = ((/* implicit */signed char) ((long long int) 4031855276874530945LL));
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 13; i_18 += 1) 
                    {
                        for (short i_19 = 2; i_19 < 10; i_19 += 1) 
                        {
                            {
                                arr_62 [i_13] [i_16 + 1] [i_17] [i_18] [i_16] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) -4031855276874530945LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned char)13] [(_Bool)1]))) : (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-61))))))));
                                var_41 -= ((/* implicit */_Bool) arr_10 [i_13] [(unsigned short)5] [i_13] [i_13 + 3]);
                                var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) (_Bool)0))));
                                var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_19 + 2] [3ULL] [i_17] [i_18] [i_13 - 1]))) + (18446744073709551603ULL)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (((unsigned int) arr_0 [21]))))) : (min((9073747004666314933LL), (((/* implicit */long long int) 2147483647))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 3) 
    {
        var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) 78536716))));
        var_45 = (+(((((/* implicit */_Bool) arr_14 [i_20] [16LL] [i_20] [(unsigned char)7] [i_20])) ? (min((((/* implicit */long long int) (_Bool)1)), (var_11))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (3600062194U)))))));
        var_46 = ((/* implicit */signed char) (_Bool)1);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_21 = 0; i_21 < 11; i_21 += 4) 
        {
            var_47 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) 1112879332611976479LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (80631556351422724LL))));
            var_48 = ((/* implicit */unsigned long long int) (~(((long long int) (short)5956))));
        }
        for (int i_22 = 0; i_22 < 11; i_22 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_24 = 0; i_24 < 11; i_24 += 4) 
                {
                    for (unsigned char i_25 = 2; i_25 < 10; i_25 += 4) 
                    {
                        {
                            var_49 = ((/* implicit */long long int) (((_Bool)1) ? (arr_21 [i_20]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32757)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)35)))))));
                            var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_24] [i_23 - 1] [i_23] [i_23] [i_22] [i_20])) ? (((/* implicit */int) arr_38 [i_23 - 1] [i_22] [i_23] [i_22] [i_22])) : (((/* implicit */int) arr_61 [i_22] [i_23] [i_23] [i_22] [i_22]))))) % (((long long int) (signed char)83))));
                        }
                    } 
                } 
                var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_22] [i_23])) ? (((/* implicit */int) (_Bool)1)) : (1384153137)));
                arr_81 [i_20] [i_22] [i_22] [i_20] = ((/* implicit */int) 2115172139233398461ULL);
            }
            for (long long int i_26 = 1; i_26 < 7; i_26 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_27 = 0; i_27 < 11; i_27 += 1) 
                {
                    var_52 = (+(((((/* implicit */_Bool) arr_55 [i_20] [i_22] [i_26 + 1] [(unsigned char)8])) ? (((/* implicit */int) (short)-5932)) : (((/* implicit */int) arr_17 [i_22] [i_22] [i_22] [i_26] [i_26 + 3] [(signed char)15])))));
                    var_53 = ((/* implicit */long long int) arr_39 [i_20] [i_22] [i_22] [(signed char)5] [i_20] [(unsigned char)2]);
                }
                /* vectorizable */
                for (long long int i_28 = 0; i_28 < 11; i_28 += 1) 
                {
                    var_54 = ((/* implicit */unsigned long long int) arr_52 [i_22]);
                    arr_90 [(unsigned short)6] [2ULL] [i_26] [10ULL] &= (~(((/* implicit */int) var_5)));
                    var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)63)) ? (((/* implicit */int) arr_17 [i_20] [i_26] [i_26 + 4] [4ULL] [4ULL] [i_20])) : (((/* implicit */int) arr_70 [i_26 - 1] [i_26] [i_26])))))));
                    var_56 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_26 + 1] [i_26] [i_26 - 1] [i_26 + 1])) ? (((/* implicit */int) arr_38 [i_20] [i_20] [i_26] [(unsigned char)6] [i_28])) : (((/* implicit */int) (unsigned short)65473))));
                }
                for (short i_29 = 0; i_29 < 11; i_29 += 1) 
                {
                    arr_93 [i_29] [1ULL] [i_22] [i_26] = ((/* implicit */unsigned short) arr_15 [i_20] [i_22] [i_26] [i_22] [i_26 + 1] [i_22]);
                    var_57 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                    var_58 = ((/* implicit */unsigned char) (signed char)-92);
                }
                var_59 = ((/* implicit */unsigned char) 16383U);
            }
            var_60 = ((/* implicit */unsigned long long int) arr_44 [i_22] [i_20]);
            arr_94 [i_20] [i_22] [i_22] = ((/* implicit */long long int) (signed char)-7);
        }
        for (signed char i_30 = 0; i_30 < 11; i_30 += 2) 
        {
            /* LoopNest 3 */
            for (int i_31 = 4; i_31 < 8; i_31 += 4) 
            {
                for (unsigned long long int i_32 = 0; i_32 < 11; i_32 += 1) 
                {
                    for (int i_33 = 1; i_33 < 9; i_33 += 4) 
                    {
                        {
                            arr_105 [i_20] [i_20] [i_31] [2ULL] [i_30] &= ((/* implicit */long long int) (+(-1492426821)));
                            arr_106 [i_33] [i_30] [i_30] [i_30] [i_30] = ((/* implicit */long long int) var_13);
                        }
                    } 
                } 
            } 
            var_61 = ((/* implicit */unsigned long long int) (-(((unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
            var_62 = ((/* implicit */_Bool) max(((-(((/* implicit */int) (_Bool)0)))), ((-(((/* implicit */int) max((arr_3 [i_20]), ((unsigned char)171))))))));
            var_63 = ((/* implicit */signed char) min((var_63), (((/* implicit */signed char) ((short) ((unsigned int) (-(((/* implicit */int) arr_61 [i_30] [i_20] [i_20] [i_30] [i_30])))))))));
        }
        var_64 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (!((_Bool)1)))) : ((-((-(((/* implicit */int) (unsigned char)234))))))));
    }
    for (signed char i_34 = 0; i_34 < 12; i_34 += 4) 
    {
        var_65 = ((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned char)237)) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10))))))), ((!(((/* implicit */_Bool) 603282392))))));
        arr_109 [i_34] [i_34] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 2147483647)))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)111))));
    }
}
