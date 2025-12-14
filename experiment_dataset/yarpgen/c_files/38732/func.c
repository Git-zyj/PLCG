/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38732
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
    var_18 = ((/* implicit */signed char) var_6);
    var_19 = ((/* implicit */unsigned long long int) (-(0U)));
    var_20 -= ((/* implicit */signed char) (~(var_7)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_21 += ((/* implicit */long long int) (signed char)127);
        var_22 = ((/* implicit */unsigned int) arr_2 [i_0]);
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (arr_5 [3LL] [3LL] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2]))))))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */signed char) -6320643223628032227LL);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_4 = 1; i_4 < 10; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_6 = 2; i_6 < 8; i_6 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_9 [i_6] [i_5])) ? (arr_13 [10ULL] [i_4]) : (arr_11 [i_3] [i_3])))));
                    var_25 *= ((/* implicit */unsigned char) arr_18 [(unsigned char)1] [i_3] [i_4 + 1] [i_6 + 2]);
                    var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31))) : (((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_11 [i_3] [i_4])))));
                }
                for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 2; i_8 < 11; i_8 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned char) arr_9 [i_4 - 1] [i_8 - 1]);
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)63)) ? (((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) (signed char)-123)))))));
                    }
                    for (short i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        var_29 = (+(arr_26 [i_3] [i_4] [i_5] [7ULL] [i_4 + 1]));
                        var_30 = ((((/* implicit */_Bool) 6040580495123368452LL)) ? (-5734976472356115298LL) : (((/* implicit */long long int) ((/* implicit */int) (short)16470))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */int) arr_7 [i_9] [i_3] [i_3])) : (((/* implicit */int) arr_7 [19LL] [i_4] [i_9]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        arr_32 [i_3] [i_3] [i_3] [i_4] [i_4] [i_3] = ((/* implicit */signed char) arr_18 [i_4 - 1] [i_4 + 2] [4U] [i_4 - 1]);
                        var_32 = ((/* implicit */short) arr_6 [i_4] [i_4 + 1] [i_4 + 1] [i_4 - 1]);
                        var_33 = ((/* implicit */long long int) (signed char)7);
                    }
                    var_34 = ((/* implicit */signed char) -4271517638879113860LL);
                    var_35 = ((/* implicit */short) (+(arr_12 [i_4 - 1] [i_4 + 2])));
                    arr_33 [i_4] [i_4] [i_5] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [(unsigned char)10] [i_4 + 2] [i_4 + 1]))));
                }
                for (long long int i_11 = 3; i_11 < 11; i_11 += 4) 
                {
                    arr_38 [i_4] = ((/* implicit */unsigned long long int) arr_12 [i_4 - 1] [i_11 - 1]);
                    arr_39 [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) arr_15 [i_3] [i_4 - 1] [i_3]);
                    var_36 = ((/* implicit */long long int) arr_18 [i_3] [(unsigned char)0] [i_3] [i_3]);
                }
                var_37 = ((/* implicit */long long int) arr_9 [i_4 + 2] [i_4 + 1]);
                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_4 + 1] [i_5] [i_5] [i_3])) ? (((/* implicit */int) arr_8 [i_4 + 2])) : (((/* implicit */int) arr_8 [i_4 - 1]))));
                var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) arr_22 [i_3] [i_3])) : (((/* implicit */int) arr_29 [i_4] [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 1]))));
                var_40 = ((/* implicit */unsigned long long int) -6320643223628032227LL);
            }
            var_41 = ((/* implicit */short) arr_11 [i_4 + 2] [i_4 + 1]);
            arr_40 [i_3] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) 21LL)) ? (((/* implicit */int) arr_0 [i_3] [i_4])) : (((/* implicit */int) arr_35 [i_3] [i_3] [i_3] [i_4 - 1] [11LL] [i_4 - 1]))));
            var_42 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)127))));
        }
        for (signed char i_12 = 0; i_12 < 12; i_12 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 1) 
                {
                    {
                        var_43 = ((/* implicit */signed char) arr_47 [i_13] [i_13] [i_13] [i_13]);
                        var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_3] [i_12] [(short)6] [i_14] [i_14])) ? (((/* implicit */int) arr_27 [i_3] [i_3] [i_3] [i_14] [i_12])) : (((/* implicit */int) arr_27 [i_3] [i_3] [i_13] [i_14] [i_14]))));
                        arr_51 [i_14] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)15))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 3) 
            {
                var_45 = ((/* implicit */unsigned char) 10119894819785385855ULL);
                /* LoopNest 2 */
                for (unsigned char i_16 = 1; i_16 < 11; i_16 += 3) 
                {
                    for (unsigned int i_17 = 2; i_17 < 10; i_17 += 1) 
                    {
                        {
                            var_46 -= ((/* implicit */short) (unsigned char)173);
                            var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_17] [i_17 + 2] [i_17] [i_17] [i_17] [(short)6] [(short)6])) ? (arr_59 [i_17] [i_17 + 2] [i_17] [(signed char)0] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_17] [i_17 + 2] [i_17] [i_17 + 1] [i_17 + 1] [i_17] [i_17 + 2]))))))));
                            arr_61 [i_17] [i_17] [1LL] [i_15] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_3] [i_12] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26075))) : (arr_5 [i_3] [i_12] [(unsigned char)7])));
                        }
                    } 
                } 
            }
        }
        for (unsigned long long int i_18 = 1; i_18 < 9; i_18 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 3) 
            {
                for (signed char i_20 = 4; i_20 < 11; i_20 += 4) 
                {
                    for (short i_21 = 0; i_21 < 12; i_21 += 4) 
                    {
                        {
                            arr_75 [8LL] [i_18] [11ULL] [i_18] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_18] [i_18]))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_73 [i_3] [(signed char)4]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_18]))))) : (arr_12 [i_18 + 2] [i_20])));
                            var_48 = ((/* implicit */signed char) arr_53 [i_19]);
                        }
                    } 
                } 
            } 
            arr_76 [i_18] = ((/* implicit */long long int) (unsigned char)179);
            var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3570360414U)) ? (((/* implicit */int) arr_58 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) (unsigned char)190))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_3] [i_18 + 1] [i_18 + 2] [6LL] [i_3] [i_18 + 2] [i_18]))) : (arr_55 [i_18 + 3])));
            var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4271517638879113859LL)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (signed char)127))));
        }
        for (long long int i_22 = 0; i_22 < 12; i_22 += 3) 
        {
            arr_79 [i_22] [i_22] = ((/* implicit */long long int) arr_23 [i_22] [i_22] [10LL] [i_22] [i_22] [i_22] [i_22]);
            var_51 = ((/* implicit */short) (~(((/* implicit */int) arr_42 [i_3]))));
            /* LoopSeq 3 */
            for (signed char i_23 = 1; i_23 < 9; i_23 += 3) 
            {
                arr_83 [i_3] [i_22] = ((/* implicit */signed char) arr_19 [i_3] [i_3] [i_3] [i_3]);
                arr_84 [i_3] [i_3] [i_22] [i_23] = ((/* implicit */unsigned char) (signed char)123);
                arr_85 [(unsigned char)3] [(unsigned char)3] [i_23] [i_23 - 1] = ((/* implicit */unsigned long long int) arr_54 [i_3] [i_3] [i_3] [i_3] [i_3]);
                /* LoopNest 2 */
                for (long long int i_24 = 0; i_24 < 12; i_24 += 1) 
                {
                    for (long long int i_25 = 0; i_25 < 12; i_25 += 2) 
                    {
                        {
                            arr_91 [i_24] [i_24] [i_22] [i_22] [i_22] [i_22] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_24]))));
                            var_52 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_53 [i_23 + 2]))));
                            arr_92 [i_3] [i_22] [i_23] [i_24] [i_25] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -3292645181277161780LL))));
                            var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_72 [i_23 + 1] [i_23 + 2] [i_23 + 3])) ? (((/* implicit */int) arr_72 [i_23 + 3] [i_23 + 1] [i_23 - 1])) : (((/* implicit */int) arr_72 [i_23 + 1] [i_23 + 1] [i_23 + 3])))))));
                            arr_93 [i_25] [i_24] [(short)3] = ((/* implicit */short) (~(((/* implicit */int) arr_68 [(signed char)5] [i_23 + 3] [i_23] [i_23 - 1]))));
                        }
                    } 
                } 
            }
            for (unsigned char i_26 = 0; i_26 < 12; i_26 += 2) 
            {
                arr_97 [i_26] [(unsigned char)5] [i_22] [(unsigned char)5] = (unsigned char)169;
                var_54 = ((/* implicit */long long int) max((var_54), (((((/* implicit */_Bool) arr_67 [i_3] [i_26] [i_22] [0LL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)82))) : (arr_67 [i_3] [i_3] [i_3] [i_3])))));
            }
            for (unsigned char i_27 = 0; i_27 < 12; i_27 += 3) 
            {
                var_55 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_65 [i_3] [i_3])) ? (((/* implicit */int) arr_65 [i_3] [i_3])) : (((/* implicit */int) arr_65 [(signed char)0] [i_3]))));
                /* LoopSeq 2 */
                for (long long int i_28 = 1; i_28 < 9; i_28 += 4) 
                {
                    var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_28 + 1] [i_27] [i_27] [i_28 + 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_87 [i_3] [i_3] [i_3] [i_3] [i_28 + 2] [i_3]))))) : (((/* implicit */int) (unsigned char)242))));
                    var_57 += ((/* implicit */signed char) arr_47 [i_3] [i_22] [i_27] [i_28]);
                    /* LoopSeq 2 */
                    for (unsigned char i_29 = 0; i_29 < 12; i_29 += 1) 
                    {
                        arr_106 [i_3] [i_3] [i_27] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_78 [(short)5] [i_27])) ? (arr_31 [i_27] [i_28 + 1] [(unsigned char)0] [(unsigned char)0] [i_28 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_68 [i_3] [i_22] [6LL] [i_29])))));
                        var_58 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_27])) ? (((/* implicit */int) arr_21 [i_3] [i_27] [(short)8])) : (((/* implicit */int) arr_104 [i_27]))))) ? (((/* implicit */int) arr_98 [i_28 + 1] [i_28 + 2] [i_28 + 1] [i_27])) : (((((/* implicit */_Bool) arr_73 [3U] [3U])) ? (((/* implicit */int) arr_105 [i_3])) : (((/* implicit */int) (unsigned char)145))))));
                        arr_107 [i_3] [i_3] [i_3] [i_3] [i_3] [i_27] = ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_22]))) : (arr_55 [i_28 - 1]));
                    }
                    for (unsigned char i_30 = 3; i_30 < 11; i_30 += 2) 
                    {
                        arr_111 [i_27] [10ULL] [i_27] [i_27] [i_27] = ((/* implicit */unsigned long long int) arr_108 [i_3] [i_3] [(unsigned char)7] [i_27] [i_3]);
                        var_59 *= ((/* implicit */unsigned char) 14797097070853737823ULL);
                    }
                }
                for (unsigned char i_31 = 0; i_31 < 12; i_31 += 4) 
                {
                    arr_114 [i_27] [i_22] [i_31] [i_27] = ((/* implicit */unsigned char) (signed char)19);
                    var_60 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) (unsigned char)71))))) ? (((((/* implicit */_Bool) arr_59 [i_3] [i_22] [i_3] [i_3] [i_31])) ? (arr_13 [i_22] [i_27]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) : (((((/* implicit */_Bool) arr_21 [i_3] [i_27] [(signed char)1])) ? (5222109165784067699LL) : (((/* implicit */long long int) ((/* implicit */int) arr_96 [i_31] [i_22])))))));
                    /* LoopSeq 2 */
                    for (signed char i_32 = 1; i_32 < 10; i_32 += 4) 
                    {
                        var_61 = ((/* implicit */long long int) arr_80 [i_32]);
                        arr_117 [i_27] [i_27] [i_27] [i_31] [i_31] [i_32] = ((/* implicit */signed char) arr_18 [i_3] [i_3] [i_3] [i_3]);
                    }
                    for (signed char i_33 = 0; i_33 < 12; i_33 += 2) 
                    {
                        var_62 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_22] [i_22]))));
                        arr_121 [i_33] [i_27] [i_22] = ((/* implicit */unsigned char) arr_26 [i_33] [i_31] [i_27] [i_22] [i_3]);
                        var_63 = ((/* implicit */long long int) arr_109 [i_3] [i_22] [0LL] [i_31] [i_22]);
                    }
                }
            }
            arr_122 [i_3] [(signed char)5] [(unsigned char)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_70 [i_3] [i_3])) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_22]))));
        }
        var_64 = ((/* implicit */unsigned char) arr_73 [i_3] [i_3]);
    }
    for (signed char i_34 = 0; i_34 < 21; i_34 += 1) 
    {
        arr_126 [i_34] = arr_123 [i_34];
        var_65 *= arr_4 [18LL];
    }
}
