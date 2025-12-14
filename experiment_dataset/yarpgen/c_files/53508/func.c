/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53508
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (-1050826998) : (((/* implicit */int) (_Bool)1)))) : (var_10))) : ((-((+(((/* implicit */int) var_9)))))))))));
    var_12 = var_10;
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            var_13 = (!(((/* implicit */_Bool) 1775870143U)));
            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29536)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))) : (1010181892U)));
            arr_5 [i_0] = ((/* implicit */_Bool) (~(3763456185U)));
        }
        var_15 -= (!(((/* implicit */_Bool) var_8)));
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 4; i_3 < 15; i_3 += 4) 
            {
                for (unsigned int i_4 = 3; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_16 = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_12 [i_2] [i_2] [i_0] [i_3 + 3]))))));
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))));
                        arr_16 [i_0] [i_0] [i_3 + 1] [i_3 + 1] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0])))))));
                        arr_17 [(signed char)14] [i_2] [i_3] [0] [i_2] [i_0] = ((((/* implicit */_Bool) 34359738112LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_12 [(unsigned char)8] [i_4] [i_0] [i_4 + 1])));
                    }
                } 
            } 
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (1775870143U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(short)12])))))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_8)) : (524960677253424590ULL))))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-118))));
            var_20 = ((/* implicit */signed char) (+((-(((/* implicit */int) (signed char)(-127 - 1)))))));
            /* LoopSeq 3 */
            for (unsigned int i_6 = 1; i_6 < 17; i_6 += 2) 
            {
                arr_24 [i_6] [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1610198029)) ? (2548434984U) : (4294967295U)));
                var_21 = ((/* implicit */short) (~((~(((/* implicit */int) arr_3 [i_0] [i_0]))))));
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_6 - 1])))))));
                var_23 = ((/* implicit */unsigned short) (!((!(arr_1 [i_0] [i_5])))));
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (+(arr_11 [i_6 - 1] [(short)16] [(short)16] [i_6 - 1]))))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-492)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(arr_22 [i_7] [(signed char)8] [i_7] [i_7]))))));
                arr_28 [i_7] [i_7] [(signed char)13] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0]))))) ? ((-(arr_23 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5] [i_7])))));
                /* LoopSeq 2 */
                for (unsigned int i_8 = 2; i_8 < 15; i_8 += 1) 
                {
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(4294967295U)))) ? ((+(arr_13 [i_0] [i_7]))) : (var_0)));
                    /* LoopSeq 4 */
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
                    {
                        arr_34 [i_0] [i_9] [i_7] [i_0] [i_0] |= ((/* implicit */unsigned char) (-(1023LL)));
                        var_27 = ((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_8 + 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_10) : (-1050826998)))) : ((+(-8444004168637070900LL))));
                        arr_35 [9U] [i_0] [(_Bool)1] [i_0] [(_Bool)1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_29 [i_8 - 1] [i_8 + 2] [i_8] [i_8 - 1]))));
                    }
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (6583008996775067378LL))) : (((/* implicit */long long int) var_8))));
                        var_29 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_25 [i_10] [i_8 - 1] [i_5] [10U])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14321)))))));
                        var_30 = ((/* implicit */signed char) (+(((/* implicit */int) arr_30 [i_8 + 2] [i_5] [i_8 + 2] [i_5]))));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37793)))));
                    }
                    for (long long int i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                    {
                        arr_42 [i_0] [i_8] [i_7] [i_5] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_37 [i_8 + 2] [i_8 - 2] [i_8 - 1] [i_8 - 2] [i_8 + 2] [i_8] [i_0]))));
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967292U)) ? (3621134763U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124)))))) ? (((((/* implicit */_Bool) (unsigned short)27406)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (short)12288)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37793)))))));
                        arr_43 [i_0] [i_5] [i_0] [i_5] [(_Bool)0] = (+((~(var_6))));
                        var_33 = ((/* implicit */_Bool) (~(8073274158468090563ULL)));
                        var_34 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_30 [i_0] [i_5] [i_7] [i_8]))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_35 += ((/* implicit */long long int) (+(((/* implicit */int) arr_29 [i_8 + 2] [i_8] [i_8 - 2] [i_8 - 1]))));
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1050826998))))))))));
                        var_37 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? ((~(((/* implicit */int) (signed char)0)))) : (((/* implicit */int) var_4))));
                        arr_46 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)2982))));
                    }
                }
                for (int i_13 = 1; i_13 < 17; i_13 += 4) 
                {
                    var_38 = ((/* implicit */signed char) (~((-(((/* implicit */int) (short)10715))))));
                    /* LoopSeq 3 */
                    for (signed char i_14 = 2; i_14 < 17; i_14 += 4) 
                    {
                        var_39 |= ((/* implicit */signed char) (-(arr_36 [i_0] [i_13 - 1] [i_14 + 1] [i_13 - 1] [i_14 + 1])));
                        var_40 += ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_37 [i_0] [i_14 + 1] [i_14 + 1] [i_13] [i_14 + 1] [i_13] [i_14])))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_14] [i_14] [i_14] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_14] [i_14]))))))));
                    }
                    for (signed char i_15 = 4; i_15 < 17; i_15 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) (+(((/* implicit */int) (_Bool)1)))))));
                        arr_57 [8U] [i_13] [i_0] [(_Bool)1] [i_0] [i_5] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1))));
                    }
                    for (signed char i_16 = 4; i_16 < 17; i_16 += 1) /* same iter space */
                    {
                        var_42 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_0]))))));
                        arr_62 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [0U] [0U] [0U] [i_13] [0U] [i_13 - 1] [i_13])) ? (((/* implicit */int) arr_31 [i_0] [i_0] [i_13] [i_7] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_4))));
                        var_43 = ((/* implicit */unsigned int) (~(12ULL)));
                    }
                    arr_63 [i_0] [i_5] [i_0] [i_7] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_5] [i_0] [i_13])))))));
                }
            }
            for (unsigned short i_17 = 0; i_17 < 18; i_17 += 2) 
            {
                var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [(unsigned short)8] [i_0] [i_5] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_8)));
                arr_67 [i_17] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) -3466107320573091108LL)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (_Bool)1)));
            }
            /* LoopSeq 1 */
            for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
            {
                arr_70 [i_0] [(_Bool)1] [i_0] = (!(((/* implicit */_Bool) (signed char)-4)));
                var_45 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-74))));
                var_46 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_10)))) ? (((((/* implicit */_Bool) 6781954482169451570LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))) : (3187505142U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [i_5] [(unsigned short)2])) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) arr_31 [i_0] [i_0] [9U] [i_5] [i_5] [i_18] [i_18 + 1])))))));
            }
        }
        for (signed char i_19 = 0; i_19 < 18; i_19 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_20 = 0; i_20 < 18; i_20 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_21 = 0; i_21 < 18; i_21 += 2) 
                {
                    for (unsigned int i_22 = 0; i_22 < 18; i_22 += 3) 
                    {
                        {
                            arr_84 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_21] [15LL] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_72 [i_21] [i_19] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [7] [i_19])))))) ? (arr_52 [i_22] [i_21] [i_20] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
                            var_47 = ((/* implicit */short) ((((/* implicit */_Bool) arr_69 [i_21] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_81 [(unsigned char)17])) ? (var_5) : (var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-2983)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)52))) : (-6480047595532699165LL))))));
                            var_48 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)2))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_23 = 0; i_23 < 18; i_23 += 2) 
                {
                    for (signed char i_24 = 2; i_24 < 15; i_24 += 2) 
                    {
                        {
                            arr_92 [(short)11] [i_0] [i_24] = ((/* implicit */unsigned int) (~(12ULL)));
                            var_49 = (!(((/* implicit */_Bool) (short)(-32767 - 1))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_25 = 0; i_25 < 18; i_25 += 2) 
                {
                    for (unsigned short i_26 = 2; i_26 < 17; i_26 += 3) 
                    {
                        {
                            var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) (~(((/* implicit */int) var_4)))))));
                            var_51 = (~((-(((/* implicit */int) (_Bool)1)))));
                            var_52 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 14LL)) ? (1829115959) : (((/* implicit */int) (signed char)114))));
                            var_53 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
                            var_54 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (short i_27 = 0; i_27 < 18; i_27 += 2) /* same iter space */
                {
                    var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 3869821191U)) : (var_5)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))));
                    var_56 = ((/* implicit */unsigned int) min((var_56), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (14036784012194088637ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_27] [i_19]))))))))));
                    var_57 &= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_51 [i_0] [i_19] [i_20] [i_27]))));
                }
                for (short i_28 = 0; i_28 < 18; i_28 += 2) /* same iter space */
                {
                    arr_105 [i_0] [(_Bool)1] [i_19] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_0] [i_19] [i_0] [i_28]))) : (20LL)));
                    arr_106 [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))));
                    arr_107 [i_0] [i_19] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5035906607296408018LL)) ? (8537170929810373795LL) : (20LL)));
                }
                for (short i_29 = 0; i_29 < 18; i_29 += 2) /* same iter space */
                {
                    var_58 = ((/* implicit */short) (+(((/* implicit */int) (short)-2983))));
                    var_59 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)));
                }
            }
            for (signed char i_30 = 0; i_30 < 18; i_30 += 4) /* same iter space */
            {
                arr_114 [i_0] [i_0] [i_0] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48712))) : (375347676U)));
                arr_115 [i_0] = ((/* implicit */_Bool) (+(-8537170929810373795LL)));
                /* LoopNest 2 */
                for (unsigned short i_31 = 0; i_31 < 18; i_31 += 4) 
                {
                    for (signed char i_32 = 0; i_32 < 18; i_32 += 3) 
                    {
                        {
                            var_60 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_86 [i_19])) ? (var_0) : (var_0)));
                            arr_121 [i_0] [i_19] [i_19] [i_30] [i_0] [i_0] [1U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3658649537917973482LL)) ? (((/* implicit */int) (unsigned short)51559)) : (var_10)));
                            arr_122 [i_0] [17LL] [i_30] = (~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_74 [i_31] [(_Bool)1] [i_19] [i_0])) : (((/* implicit */int) (short)31154)))));
                            var_61 = ((/* implicit */short) (~((-(((/* implicit */int) arr_110 [i_0] [4ULL] [i_30] [i_32]))))));
                        }
                    } 
                } 
                var_62 = ((/* implicit */unsigned short) (+(arr_75 [i_30] [i_0] [2LL])));
                arr_123 [i_0] [i_0] [i_0] = (!(var_7));
            }
            /* LoopNest 2 */
            for (long long int i_33 = 2; i_33 < 17; i_33 += 1) 
            {
                for (unsigned int i_34 = 0; i_34 < 18; i_34 += 3) 
                {
                    {
                        var_63 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_19] [i_0]))) : (var_3)));
                        var_64 &= ((/* implicit */unsigned long long int) (-(var_8)));
                    }
                } 
            } 
            arr_131 [i_0] [i_0] [i_19] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_0] [(_Bool)1] [i_19] [(_Bool)1] [i_19] [i_19])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (arr_87 [i_19] [i_0] [(short)12] [i_19]) : ((-(594890094U))));
            /* LoopNest 2 */
            for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
            {
                for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                {
                    {
                        arr_136 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
                        var_65 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_13 [i_0] [i_19]))))));
                        var_66 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_120 [i_19] [i_19] [(_Bool)1] [3U] [i_19])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_3 [i_35] [i_19]))))) : (arr_53 [i_0] [i_19] [i_0] [i_36] [i_36])));
                    }
                } 
            } 
        }
        arr_137 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) var_9)) ? (3531847356U) : (((/* implicit */unsigned int) arr_82 [i_0] [i_0] [i_0] [(short)12] [i_0])))) : (((/* implicit */unsigned int) arr_83 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
}
