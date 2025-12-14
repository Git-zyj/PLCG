/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51029
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
    var_18 = (~(1528198743U));
    var_19 = ((/* implicit */unsigned int) max((var_19), (var_2)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_20 -= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_21 = ((1866388676U) * (2766768553U));
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                var_22 = ((/* implicit */unsigned int) var_7);
                arr_7 [13U] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_17))));
            }
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                arr_10 [i_0] [i_1] [i_1] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_3])) || (((/* implicit */_Bool) arr_2 [i_0] [i_1]))));
                var_23 &= var_6;
                var_24 += ((/* implicit */signed char) 2766768569U);
            }
            for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    var_25 = ((/* implicit */unsigned short) ((unsigned int) arr_13 [i_0] [i_0] [i_0]));
                    var_26 = ((/* implicit */signed char) ((arr_2 [i_0] [i_1]) < (((((/* implicit */_Bool) 2344536420U)) ? (var_14) : (90448061U)))));
                    arr_17 [i_4] [i_4] [i_1] [i_1] [i_0] [i_4] = var_11;
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_3 [i_1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_1] [i_0])))))));
                    arr_18 [i_0] [i_0] [i_4] [i_0] = (signed char)127;
                }
                arr_19 [i_4] = ((/* implicit */unsigned short) (+(arr_14 [i_4] [i_1] [(unsigned short)8] [i_0] [i_0])));
            }
        }
        var_28 -= ((/* implicit */unsigned int) (unsigned short)2407);
        var_29 = ((/* implicit */unsigned short) min((var_29), (var_17)));
    }
    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_6] [i_6] [i_6])) >> (((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_6] [i_6]))))), (max((((/* implicit */unsigned int) var_7)), (2766768553U))))) - (2766768552U))))))));
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((unsigned int) ((3000620116U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56083)))))))));
    }
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
    {
        var_32 -= ((/* implicit */signed char) max((((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)4095)) || (((/* implicit */_Bool) 1793193793U)))) && ((!(((/* implicit */_Bool) 1294347163U))))))), (arr_0 [i_7])));
        arr_27 [i_7] = (unsigned short)10;
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 4) 
                        {
                            arr_39 [i_8] [i_9] [i_10] [i_11] &= arr_20 [i_7];
                            var_33 = ((((/* implicit */_Bool) 34823392U)) ? (496392639U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
                        }
                        var_34 = ((/* implicit */unsigned short) arr_25 [i_7] [i_8]);
                    }
                } 
            } 
            arr_40 [i_7] [i_8] [i_7] = ((/* implicit */signed char) ((((unsigned int) var_15)) < (((((/* implicit */_Bool) var_9)) ? (arr_35 [i_7] [(signed char)5] [i_7] [(signed char)5] [i_7] [(signed char)5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) arr_15 [10U] [i_7] [10U] [i_7] [i_7]))));
        }
        for (signed char i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            var_36 *= ((/* implicit */signed char) arr_20 [i_7]);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) 
            {
                arr_46 [i_13] [i_7] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_41 [i_13]))));
                var_37 = ((/* implicit */unsigned int) min((var_37), (var_14)));
                var_38 = ((/* implicit */unsigned short) arr_6 [i_7] [i_7] [i_13]);
                /* LoopSeq 2 */
                for (unsigned int i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    var_39 -= ((/* implicit */signed char) var_11);
                    var_40 = ((/* implicit */unsigned short) ((signed char) var_2));
                }
                for (signed char i_15 = 0; i_15 < 16; i_15 += 3) 
                {
                    arr_52 [i_15] [i_13] [i_12] [i_15] = ((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) arr_29 [i_15])))));
                    arr_53 [(signed char)5] [i_15] [12U] [i_12] [i_15] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_13])) ? (arr_45 [i_7] [i_12] [(signed char)3] [i_7]) : (arr_1 [i_7] [i_12])));
                    /* LoopSeq 4 */
                    for (unsigned short i_16 = 0; i_16 < 16; i_16 += 2) 
                    {
                        var_41 *= ((/* implicit */unsigned short) 1497482638U);
                        arr_56 [i_7] [i_12] [i_13] [i_15] [i_15] = ((/* implicit */signed char) (unsigned short)0);
                        var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_7] [i_12] [i_16])) || (((/* implicit */_Bool) var_17)))))));
                    }
                    for (unsigned int i_17 = 0; i_17 < 16; i_17 += 2) 
                    {
                        arr_59 [i_7] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_7]))) > (((((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_7] [i_12] [i_13] [i_15] [i_17]))) * (arr_35 [i_7] [i_12] [i_12] [i_13] [i_15] [i_17])))));
                        var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_7] [i_12])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65516)) >= (((/* implicit */int) arr_12 [i_7] [i_12] [i_13]))))))))));
                        var_44 |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_41 [i_17]))));
                        var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_4 [i_7] [i_12]))))));
                    }
                    for (unsigned short i_18 = 0; i_18 < 16; i_18 += 3) 
                    {
                        arr_63 [i_7] [i_7] [i_15] [i_7] [i_7] [i_7] [i_7] = ((unsigned short) (signed char)-22);
                        arr_64 [i_7] [i_12] [i_15] [i_15] [(unsigned short)10] = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) / ((~(((/* implicit */int) (signed char)-81))))));
                        var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) ((arr_24 [i_7]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_12] [i_12] [i_18]))))))));
                        arr_65 [i_18] [i_12] [i_18] [i_15] [i_18] [i_12] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3287150180U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-82))));
                    }
                    for (unsigned int i_19 = 0; i_19 < 16; i_19 += 3) 
                    {
                        arr_69 [i_12] |= ((/* implicit */unsigned int) var_13);
                        var_47 = ((/* implicit */signed char) ((arr_37 [i_13] [i_13] [i_13] [i_13] [i_19] [13U]) >= (arr_36 [i_7] [i_12] [i_7] [i_15] [i_19] [i_7])));
                    }
                    var_48 = ((/* implicit */unsigned int) min((var_48), ((-(((((/* implicit */_Bool) 2444319301U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (496392666U)))))));
                    var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 3798574630U))))))))));
                }
                var_50 = (unsigned short)51342;
            }
            /* vectorizable */
            for (unsigned int i_20 = 0; i_20 < 16; i_20 += 3) 
            {
                arr_72 [i_7] [i_7] [i_7] [i_7] = arr_21 [i_7] [i_7];
                var_51 = ((/* implicit */signed char) ((((/* implicit */int) arr_42 [i_7] [i_12] [i_20])) & (((/* implicit */int) var_7))));
                var_52 = ((/* implicit */unsigned int) max((var_52), (((arr_36 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) | ((-(arr_1 [i_7] [i_12])))))));
            }
            arr_73 [i_12] [i_7] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_20 [i_7]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)9))))))))));
        }
        for (unsigned int i_21 = 0; i_21 < 16; i_21 += 4) 
        {
            arr_78 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_48 [i_21])) && (((/* implicit */_Bool) arr_35 [i_7] [i_7] [i_21] [i_21] [i_21] [i_7]))));
            /* LoopSeq 1 */
            for (signed char i_22 = 0; i_22 < 16; i_22 += 2) 
            {
                var_53 ^= arr_48 [i_7];
                arr_81 [i_21] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)26294), (arr_75 [i_7])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))) : (var_0)))));
                arr_82 [11U] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((signed char) arr_36 [i_22] [i_22] [i_22] [i_21] [i_7] [i_7]));
                arr_83 [i_7] [i_21] [i_21] [i_21] = arr_67 [i_7] [i_7] [i_22];
                arr_84 [i_22] [i_21] [(unsigned short)10] [i_7] |= ((/* implicit */signed char) ((unsigned short) max((((/* implicit */unsigned int) ((signed char) arr_28 [i_22]))), (((((/* implicit */_Bool) (unsigned short)2417)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_45 [i_7] [i_7] [i_21] [i_22]))))));
            }
        }
        /* vectorizable */
        for (unsigned int i_23 = 0; i_23 < 16; i_23 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_24 = 0; i_24 < 16; i_24 += 3) 
            {
                var_54 *= ((((((/* implicit */_Bool) (unsigned short)63119)) && (((/* implicit */_Bool) (unsigned short)4231)))) ? (((unsigned int) (signed char)21)) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)37346)))));
                arr_92 [i_23] [i_23] [i_23] [i_23] = var_0;
                arr_93 [i_23] [i_23] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (unsigned short)28189)) : (((/* implicit */int) (signed char)-10)))));
            }
            for (unsigned short i_25 = 0; i_25 < 16; i_25 += 4) 
            {
                var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_70 [i_7] [i_7] [i_7] [8U]))))) + (arr_37 [1U] [i_25] [i_23] [(unsigned short)1] [i_7] [i_7]))))));
                var_56 = ((/* implicit */unsigned int) max((var_56), (((arr_35 [i_7] [i_23] [i_25] [i_7] [i_25] [i_7]) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                arr_96 [i_23] [i_23] [i_25] = ((/* implicit */signed char) (+(((/* implicit */int) arr_86 [i_23]))));
            }
            for (unsigned short i_26 = 0; i_26 < 16; i_26 += 2) 
            {
                var_57 = ((/* implicit */unsigned int) arr_30 [i_23] [i_23] [i_26] [i_23]);
                var_58 = (+(arr_35 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]));
            }
            arr_99 [i_7] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_85 [i_7] [i_23] [i_23])) & (((/* implicit */int) arr_58 [i_7] [i_7] [i_7] [(signed char)3] [i_7]))));
            arr_100 [i_7] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_23])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_90 [i_7] [i_7] [i_23] [(signed char)3]))))) && (((((/* implicit */_Bool) arr_50 [i_23])) || (((/* implicit */_Bool) arr_45 [i_7] [i_7] [i_7] [i_7]))))));
            arr_101 [i_7] &= ((/* implicit */signed char) arr_4 [i_7] [i_23]);
        }
    }
}
