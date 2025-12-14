/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38647
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= ((/* implicit */unsigned short) arr_1 [i_0]);
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10622)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_14 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_2]))) / (arr_1 [i_0])));
                    arr_7 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [i_1] [i_1] [2U])), (24U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (((((/* implicit */long long int) ((/* implicit */int) var_12))) / (arr_4 [3U] [i_1] [i_2]))))), (((/* implicit */long long int) ((unsigned short) min((((/* implicit */unsigned int) (_Bool)1)), (752405477U)))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_3 = 2; i_3 < 8; i_3 += 1) 
        {
            var_15 = ((/* implicit */unsigned int) ((short) min((((((/* implicit */int) var_4)) / (((/* implicit */int) (unsigned short)5)))), (((/* implicit */int) arr_9 [8U] [i_0] [i_3 + 1])))));
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                var_16 = var_5;
                arr_12 [8U] [i_3] [i_4] &= ((/* implicit */_Bool) arr_11 [i_4] [i_3 - 1] [(unsigned char)2] [i_0]);
            }
            for (short i_5 = 1; i_5 < 10; i_5 += 2) 
            {
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_3 - 2])), (752405474U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_3 + 2] [i_3 - 2]))) : (var_11)))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) 144323636495604513LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_16 [i_0] [i_0] [i_0] [1U]), (arr_16 [2ULL] [i_3 - 2] [2LL] [i_5 + 1]))))) : (((((/* implicit */_Bool) arr_11 [(signed char)6] [(unsigned char)8] [i_5 + 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned short)6]))) : (arr_14 [i_0] [i_0]))))))));
                arr_18 [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_4 [i_0] [i_3] [i_5])))) ? (((/* implicit */int) min((arr_10 [i_5 - 1] [i_3] [i_0] [i_0]), ((_Bool)1)))) : (((/* implicit */int) (short)6387))))) || (((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_6 [(signed char)8] [(signed char)8] [i_5 - 1]))))))));
            }
            arr_19 [(_Bool)0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_10 [i_3] [i_3 + 2] [i_0] [i_0]) ? (arr_14 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))) ? (((/* implicit */int) arr_3 [6U])) : (((/* implicit */int) var_2))))) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (arr_14 [i_0] [(_Bool)1])))) : (arr_1 [i_3])))));
            /* LoopNest 3 */
            for (signed char i_6 = 1; i_6 < 8; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        {
                            arr_28 [i_6] [i_3 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_21 [i_0] [(short)8] [i_6 + 2]))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((3542561825U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)69)))))) ? (((/* implicit */int) arr_0 [i_3 - 2])) : (((/* implicit */int) arr_27 [i_0] [i_3 + 2] [i_6] [i_7] [i_8]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) arr_15 [i_3 - 1] [i_3 + 3] [i_6 + 3]))))) : (((/* implicit */int) min((((/* implicit */short) var_2)), ((short)-19692)))))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
    {
        arr_33 [i_9] = ((/* implicit */unsigned int) (short)-31071);
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                {
                    arr_39 [i_11] [i_11] [i_11] [i_9] = ((/* implicit */signed char) arr_4 [i_10 - 2] [i_10] [i_10 + 2]);
                    arr_40 [i_11] [i_11] [0U] = ((/* implicit */int) var_3);
                    /* LoopNest 2 */
                    for (short i_12 = 2; i_12 < 10; i_12 += 3) 
                    {
                        for (unsigned short i_13 = 0; i_13 < 11; i_13 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_9] [(short)3] [i_11] [i_13])) / (((((int) arr_38 [(short)0] [i_10] [i_11] [(unsigned short)9])) + (((((/* implicit */_Bool) arr_31 [i_9] [i_13])) ? (((/* implicit */int) (short)-4599)) : (((/* implicit */int) arr_45 [i_11]))))))));
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)28672)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) : (arr_1 [i_10 - 2])));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) (short)-7022);
                    var_22 = ((/* implicit */short) max((max((((/* implicit */unsigned short) arr_38 [i_10] [i_10 - 1] [i_10] [i_10 - 2])), ((unsigned short)65530))), (((/* implicit */unsigned short) arr_38 [i_9] [i_10 + 1] [(short)4] [i_10 - 1]))));
                }
            } 
        } 
        var_23 &= ((/* implicit */unsigned int) max((arr_30 [i_9] [4U]), (arr_30 [i_9] [i_9])));
        var_24 += ((/* implicit */unsigned int) arr_13 [i_9] [i_9] [i_9] [i_9]);
    }
    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 1) /* same iter space */
    {
        var_25 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2)))) / (((((/* implicit */_Bool) arr_44 [i_14] [i_14] [i_14])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_1))))));
        var_26 = ((/* implicit */signed char) min((((((/* implicit */int) arr_37 [i_14] [i_14] [i_14])) * (((/* implicit */int) arr_37 [(signed char)3] [i_14] [i_14])))), (((/* implicit */int) min((((/* implicit */short) arr_44 [i_14] [i_14] [i_14])), (((short) arr_25 [(short)9] [i_14] [i_14] [i_14])))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_15 = 4; i_15 < 6; i_15 += 3) 
    {
        for (long long int i_16 = 0; i_16 < 10; i_16 += 2) 
        {
            {
                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) min((var_6), (((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) (short)6387)), ((unsigned short)13794)))), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_21 [i_15] [i_15] [i_16])) : (((/* implicit */int) arr_9 [i_16] [i_16] [i_15]))))))))))));
                var_28 += arr_27 [i_15 + 1] [i_15 + 1] [i_15] [i_15 + 3] [i_16];
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_17 = 0; i_17 < 25; i_17 += 3) 
    {
        for (unsigned short i_18 = 0; i_18 < 25; i_18 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 25; i_19 += 1) 
                {
                    for (short i_20 = 4; i_20 < 22; i_20 += 4) 
                    {
                        {
                            arr_65 [i_17] = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) min((((/* implicit */unsigned long long int) arr_53 [i_17])), (arr_58 [i_17] [i_18] [i_19])))))));
                            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_54 [i_20 + 3] [i_20 - 3])) || (((/* implicit */_Bool) arr_57 [i_18] [i_20] [(short)12]))))))));
                            var_30 += ((/* implicit */short) min((((((unsigned long long int) var_6)) / (arr_58 [i_17] [i_17] [i_17]))), (((/* implicit */unsigned long long int) arr_54 [i_17] [i_18]))));
                            arr_66 [i_17] [i_20] [i_20] [(unsigned char)5] [i_17] [(signed char)8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)11465))) + (min((((/* implicit */unsigned int) (unsigned char)0)), (max((((/* implicit */unsigned int) (signed char)29)), (3542561821U)))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_6)), (max((max((((/* implicit */unsigned long long int) arr_62 [i_17] [i_18] [12U])), (arr_55 [i_17]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_58 [i_17] [i_18] [(signed char)24])) ? (((/* implicit */int) arr_63 [i_17] [i_17])) : (((/* implicit */int) var_0)))))))));
                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) arr_54 [i_17] [(short)8]))));
                /* LoopSeq 4 */
                for (signed char i_21 = 2; i_21 < 23; i_21 += 4) 
                {
                    arr_70 [i_17] [i_17] [i_21 + 1] [i_17] = ((/* implicit */signed char) max((arr_58 [i_21 + 2] [(unsigned char)17] [i_17]), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) -8939132987145451873LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_69 [i_17] [i_17] [i_21]))))))));
                    var_33 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((_Bool) arr_57 [(unsigned short)21] [i_17] [(unsigned char)2])) || ((!(arr_68 [i_17] [(short)17] [(short)17] [i_17])))))), (((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 24U)))) ? (((/* implicit */unsigned long long int) arr_56 [i_17] [(unsigned short)22] [i_17])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_54 [i_17] [i_21])) : (arr_55 [i_17])))))));
                }
                for (unsigned long long int i_22 = 3; i_22 < 24; i_22 += 4) 
                {
                    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((((/* implicit */_Bool) arr_59 [i_22 - 1] [(unsigned short)0] [i_18])) && (((/* implicit */_Bool) arr_58 [i_22 - 3] [i_22 + 1] [i_22 - 3])))) ? (max((((/* implicit */unsigned long long int) arr_59 [i_22 - 3] [16U] [i_18])), (arr_58 [i_22 + 1] [i_22 + 1] [i_22 - 2]))) : (arr_58 [i_22 - 3] [i_22 - 1] [i_22 - 2]))))));
                    var_35 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min(((-(0U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_63 [i_18] [i_22 + 1])))))))), (var_7)));
                }
                for (long long int i_23 = 3; i_23 < 22; i_23 += 1) 
                {
                    var_36 = ((/* implicit */unsigned int) arr_61 [i_17] [i_17] [i_18] [i_23]);
                    var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) arr_62 [i_23] [i_18] [i_17])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_63 [i_17] [i_17])))))))));
                }
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    arr_79 [18U] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (arr_67 [i_24] [i_18] [i_24]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((((/* implicit */unsigned short) arr_53 [i_18])), (var_8))), (((/* implicit */unsigned short) arr_69 [i_17] [i_17] [i_17]))))))));
                    arr_80 [i_17] [i_17] [i_24] = ((/* implicit */short) (-(max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_77 [i_17] [i_17] [i_18] [i_24])) : (((/* implicit */int) var_2))))), (arr_54 [i_24] [i_18])))));
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-4599)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_75 [i_17] [i_17])), ((unsigned short)0))))) : (arr_67 [i_17] [i_17] [i_17])));
                    var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) (~(arr_54 [i_17] [i_18]))))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_25 = 1; i_25 < 22; i_25 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_26 = 0; i_26 < 25; i_26 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_27 = 0; i_27 < 25; i_27 += 4) 
                        {
                            arr_89 [(signed char)13] [(signed char)13] [i_18] [i_17] [i_26] [i_26] [(unsigned char)21] = ((/* implicit */short) min(((+(((/* implicit */int) arr_77 [i_25 + 1] [i_17] [i_25 - 1] [i_27])))), (((/* implicit */int) min((arr_77 [i_25 + 1] [i_17] [i_25 + 1] [i_27]), (arr_77 [i_25 + 1] [i_17] [i_25 + 3] [i_25 + 1]))))));
                            var_40 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_18] [i_18])) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) arr_59 [i_18] [i_25] [i_27])) : (((/* implicit */int) min((arr_63 [i_18] [i_18]), (((/* implicit */unsigned short) arr_87 [i_17] [i_17] [i_17] [i_26] [i_27])))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-27304))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_25 - 1] [i_26] [i_25 - 1]))) / (max((arr_85 [(signed char)16] [i_18] [i_17] [21U] [i_27]), (((/* implicit */unsigned int) (short)(-32767 - 1)))))))));
                        }
                        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_82 [6LL] [i_25] [i_18] [i_17])) : (((/* implicit */int) arr_61 [i_18] [i_18] [i_25] [i_25 + 3])))))));
                        var_42 = ((/* implicit */short) arr_77 [i_17] [i_17] [i_17] [i_26]);
                        var_43 = (short)32756;
                    }
                    arr_90 [i_17] [i_18] [i_25] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                }
                for (long long int i_28 = 0; i_28 < 25; i_28 += 3) 
                {
                    var_44 = ((/* implicit */short) var_5);
                    var_45 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)0)), ((unsigned short)0)));
                    var_46 -= ((/* implicit */signed char) arr_57 [i_17] [i_18] [i_28]);
                    var_47 = ((/* implicit */short) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_74 [i_17] [21U] [i_28]))))))) ? (((/* implicit */long long int) max((min((0U), (((/* implicit */unsigned int) arr_53 [i_28])))), (((/* implicit */unsigned int) ((unsigned short) arr_67 [i_17] [i_18] [i_18])))))) : (-9223372036854775805LL)));
                    var_48 |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (4294967259U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_17] [i_18] [i_28])))))) ? (((((/* implicit */_Bool) arr_56 [i_18] [i_18] [14U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_91 [i_18] [i_28] [i_28]))) : (4176833444018775897ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_87 [i_17] [i_17] [i_18] [i_28] [i_28])))))))), (((/* implicit */unsigned long long int) min((min((arr_82 [(unsigned short)1] [i_18] [i_18] [i_28]), (((/* implicit */unsigned short) (unsigned char)171)))), (((/* implicit */unsigned short) var_2)))))));
                }
            }
        } 
    } 
}
