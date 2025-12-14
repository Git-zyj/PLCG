/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30768
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 4; i_3 < 21; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned char) (unsigned short)13895);
                        var_17 = ((/* implicit */unsigned short) (signed char)-124);
                    }
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_11))));
                    arr_8 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_2 [i_0]) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 4] [i_2 + 3] [14LL]))) * (((var_11) ? (arr_2 [i_1]) : (arr_1 [i_0] [i_2 + 2])))))));
                    var_19 *= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) > (((((/* implicit */_Bool) arr_6 [i_1 - 3] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1])) ? (arr_6 [6LL] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124)))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_6 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [12ULL]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))) && (((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)4575)))) & (((/* implicit */int) var_15)))))));
        arr_9 [i_0] |= arr_1 [i_0] [i_0];
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                arr_15 [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (unsigned short)65531))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_10 [i_4] [i_4])) == (arr_0 [9LL] [i_5])))) : (((/* implicit */int) var_5))))) == (arr_6 [(_Bool)1] [i_4] [i_4] [i_4] [7] [i_4])));
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    arr_18 [i_0] [i_5] [(unsigned short)6] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))) - (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)4437)), (274665822U))))));
                    var_21 = ((/* implicit */_Bool) var_0);
                }
            }
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned long long int) arr_14 [i_7] [i_7] [i_0]);
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_19 [i_0] [i_4] [i_4] [i_7]) >= (arr_19 [i_0] [i_4] [i_4] [1U])))) == (((((/* implicit */_Bool) var_3)) ? (arr_20 [i_0] [i_7] [i_4] [i_0]) : (((/* implicit */int) arr_12 [i_7]))))));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_24 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4] [i_4] [i_8]))) >= (arr_19 [i_0] [i_0] [(_Bool)1] [(short)11])))) == (((/* implicit */int) ((-5940075400042561269LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1)))))))))) ^ (((unsigned long long int) var_15)));
                arr_24 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65511)) << (((((/* implicit */int) ((unsigned char) 16777215U))) - (244)))))), (min((arr_21 [i_0] [10]), (((((/* implicit */_Bool) var_13)) ? (arr_21 [i_4] [2U]) : (((/* implicit */unsigned long long int) var_7))))))));
            }
            var_25 = ((/* implicit */signed char) var_3);
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            var_26 = ((/* implicit */_Bool) arr_6 [i_9] [i_9] [i_9] [i_0] [(_Bool)1] [i_0]);
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (-(arr_7 [i_10] [i_11 + 1]))))));
                        arr_31 [i_11] [i_11 + 1] [i_10] [i_11 + 1] [4] [4] |= ((/* implicit */unsigned int) var_1);
                        arr_32 [i_0] [i_0] [i_0] [1LL] |= ((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_0] [i_9])) - (((arr_16 [i_10]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))));
                        var_28 = ((/* implicit */signed char) arr_22 [i_10] [i_11 - 1] [i_11 + 1] [i_11]);
                    }
                } 
            } 
            var_29 = ((/* implicit */signed char) arr_7 [i_0] [i_9]);
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0]) <= (((/* implicit */unsigned int) arr_13 [i_0] [i_9] [i_9] [i_0])))))) * (arr_23 [i_0] [i_0] [i_0] [i_0])));
        }
    }
    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) /* same iter space */
    {
        var_31 *= ((/* implicit */signed char) ((unsigned int) ((unsigned int) 5591973768381322443LL)));
        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_12] [i_12])) - (var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (-1045969521)))) : (min((var_0), (((/* implicit */unsigned long long int) arr_6 [i_12] [i_12] [10] [i_12] [22LL] [i_12])))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_30 [(unsigned short)12] [i_12] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_12] [i_12] [3ULL]))) : (5940075400042561268LL))) >= (((/* implicit */long long int) 0U))))))))));
        arr_35 [i_12] = ((/* implicit */unsigned char) var_8);
        arr_36 [i_12] = ((/* implicit */int) ((unsigned short) ((long long int) ((((/* implicit */_Bool) 5940075400042561268LL)) ? (arr_7 [i_12] [i_12]) : (((/* implicit */long long int) arr_17 [i_12] [18] [i_12] [i_12] [i_12] [i_12]))))));
        var_33 = ((((/* implicit */_Bool) 268435455LL)) ? (((/* implicit */long long int) 1506576237U)) : (-5940075400042561269LL));
    }
    for (unsigned int i_13 = 2; i_13 < 17; i_13 += 2) 
    {
        /* LoopSeq 4 */
        for (long long int i_14 = 1; i_14 < 16; i_14 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_15 = 0; i_15 < 19; i_15 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((arr_22 [i_13] [i_13] [i_15] [i_13]) - (((/* implicit */int) var_14))))), (((((-5591973768381322443LL) + (9223372036854775807LL))) >> (((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) 11662266U)) : (268435455LL)));
                arr_46 [i_14] [i_14 + 1] = ((/* implicit */long long int) var_12);
            }
            for (unsigned int i_16 = 0; i_16 < 19; i_16 += 1) /* same iter space */
            {
                var_35 = ((/* implicit */long long int) max((((((/* implicit */int) var_15)) - (((/* implicit */int) arr_30 [i_14 + 2] [i_14] [i_13 - 1])))), (var_10)));
                arr_49 [i_16] [i_14] [(short)2] = ((/* implicit */unsigned long long int) 11662271U);
                arr_50 [i_14] = ((/* implicit */unsigned char) -268435455LL);
                var_36 = ((/* implicit */unsigned long long int) var_11);
                arr_51 [i_13] [i_13 - 1] [i_14] = ((((/* implicit */long long int) 2788391059U)) - (4850244831099377224LL));
            }
            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) var_13))));
            /* LoopNest 2 */
            for (long long int i_17 = 2; i_17 < 17; i_17 += 4) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 19; i_18 += 4) 
                {
                    {
                        var_38 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((int) arr_57 [i_14 - 1] [(unsigned char)6] [i_14 - 1] [i_14 - 1])) : (((/* implicit */int) min((((/* implicit */unsigned short) (!((_Bool)1)))), (min((var_12), (((/* implicit */unsigned short) var_6)))))))));
                        var_39 = ((/* implicit */unsigned short) arr_27 [i_13] [i_14 + 2] [i_17 + 1] [i_18]);
                    }
                } 
            } 
            arr_58 [i_14] [i_13] [i_14] = ((/* implicit */int) ((arr_23 [i_14] [i_14] [i_13 + 2] [i_13 + 1]) <= (min((arr_1 [i_13 + 2] [i_14 + 1]), (((/* implicit */unsigned int) (unsigned char)15))))));
        }
        for (int i_19 = 0; i_19 < 19; i_19 += 2) 
        {
            arr_62 [i_13] = ((/* implicit */unsigned short) ((min((arr_26 [(signed char)19] [i_13 - 1] [i_13 + 2]), ((((_Bool)1) && (((/* implicit */_Bool) 2884700687U)))))) && (((/* implicit */_Bool) (-(((((/* implicit */int) arr_30 [i_13] [i_19] [i_13])) | (((/* implicit */int) var_11)))))))));
            var_40 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) arr_42 [i_13] [i_13] [i_19])) ? (var_1) : (((/* implicit */unsigned long long int) arr_28 [i_19])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)48865)) > (((/* implicit */int) arr_30 [2] [21LL] [i_19])))))))), (((/* implicit */unsigned long long int) 0U))));
            arr_63 [i_13 - 1] [i_13 - 1] = ((/* implicit */unsigned int) arr_61 [i_19]);
        }
        /* vectorizable */
        for (unsigned long long int i_20 = 1; i_20 < 16; i_20 += 3) 
        {
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 19; i_21 += 1) 
            {
                for (unsigned char i_22 = 1; i_22 < 17; i_22 += 1) 
                {
                    {
                        var_41 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9))) : (268435462LL))) / (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (1045969520))))));
                        var_42 *= ((/* implicit */_Bool) -5940075400042561269LL);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_23 = 0; i_23 < 19; i_23 += 2) 
            {
                var_43 = ((/* implicit */long long int) ((var_0) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) (unsigned short)65535)))))));
                /* LoopNest 2 */
                for (int i_24 = 4; i_24 < 17; i_24 += 4) 
                {
                    for (int i_25 = 0; i_25 < 19; i_25 += 1) 
                    {
                        {
                            arr_80 [i_20] [i_20] [i_23] [5U] [i_25] [i_20] = ((arr_0 [i_13 + 1] [i_20 - 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_20] [i_20] [i_23] [i_24]))));
                            var_44 = ((/* implicit */unsigned short) (_Bool)1);
                            var_45 = ((/* implicit */unsigned long long int) ((((-268435462LL) <= (5591973768381322443LL))) ? (-1175893304) : (((/* implicit */int) (unsigned char)255))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (long long int i_26 = 3; i_26 < 17; i_26 += 4) 
        {
            /* LoopNest 3 */
            for (short i_27 = 0; i_27 < 19; i_27 += 1) 
            {
                for (unsigned int i_28 = 0; i_28 < 19; i_28 += 1) 
                {
                    for (unsigned char i_29 = 3; i_29 < 18; i_29 += 2) 
                    {
                        {
                            arr_93 [i_28] [i_26] [i_27] [i_28] [i_27] [i_26] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_84 [i_13 + 1] [i_26 + 1])) + (268435462LL)));
                            var_46 += ((/* implicit */unsigned int) ((3207533241U) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)30437)) ? (((/* implicit */int) arr_55 [i_13] [i_13] [i_13] [i_13])) : (var_8))))));
                            arr_94 [i_27] [17U] [i_13 + 1] = ((/* implicit */unsigned long long int) ((unsigned short) arr_21 [i_28] [i_29 - 2]));
                            arr_95 [i_27] = ((/* implicit */unsigned long long int) ((arr_17 [i_26 - 3] [i_26 - 3] [i_27] [i_26] [i_26] [4U]) % (((/* implicit */int) var_11))));
                        }
                    } 
                } 
            } 
            arr_96 [i_13] = ((/* implicit */int) ((-8185962889714893844LL) - (((/* implicit */long long int) arr_73 [i_13] [i_26 - 2] [i_13 - 2] [i_13 - 1] [i_26]))));
            arr_97 [i_13 - 2] [i_26] [i_26] = ((/* implicit */unsigned short) ((_Bool) arr_52 [i_13] [i_13] [2ULL] [i_13]));
            var_47 += ((/* implicit */_Bool) 2258921220U);
            /* LoopNest 3 */
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                for (long long int i_31 = 2; i_31 < 17; i_31 += 3) 
                {
                    for (unsigned short i_32 = 2; i_32 < 18; i_32 += 1) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) var_1))));
                            arr_104 [i_30] [i_26] [i_13] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_13 + 1] [i_13 - 1])) ? (((/* implicit */int) arr_85 [16LL] [i_13 - 1] [i_32 - 1] [i_31 + 1])) : (((/* implicit */int) arr_85 [(unsigned short)9] [i_13 - 2] [i_32 - 2] [i_31 + 1]))));
                            arr_105 [i_32] [i_26] [i_30] [i_26] [i_32 + 1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_100 [i_31 + 2] [i_31 + 1] [i_31 + 1] [i_31 + 1] [i_31 + 1]))) | ((~(32767U)))));
                        }
                    } 
                } 
            } 
        }
        arr_106 [i_13] = ((/* implicit */_Bool) ((((2788391058U) - (((/* implicit */unsigned int) var_7)))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) -5940075400042561269LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_52 [i_13] [i_13] [i_13] [i_13])))) ? (max((((/* implicit */unsigned int) var_7)), (arr_28 [i_13]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_13] [16LL])))))));
        var_49 = ((/* implicit */unsigned char) max(((signed char)0), (((/* implicit */signed char) ((-5940075400042561269LL) >= (((((/* implicit */_Bool) arr_12 [i_13])) ? (((/* implicit */long long int) arr_48 [i_13])) : (268435464LL))))))));
        arr_107 [i_13] = ((/* implicit */unsigned char) ((((max((((/* implicit */long long int) -1045969513)), (-268435444LL))) - ((-9223372036854775807LL - 1LL)))) / (((/* implicit */long long int) max((((/* implicit */int) ((268435461LL) >= ((-9223372036854775807LL - 1LL))))), (max((((/* implicit */int) (_Bool)1)), (var_7))))))));
    }
    var_50 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_11)) - ((-(((/* implicit */int) (_Bool)1))))))));
}
