/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44080
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
    var_10 &= ((/* implicit */signed char) (~((+(((/* implicit */int) (!(var_5))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) (~(var_1)));
                var_12 = ((/* implicit */unsigned char) var_3);
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 3])) ? ((~(((/* implicit */int) arr_3 [i_1 + 2])))) : (((/* implicit */int) arr_3 [i_1 - 2]))));
                arr_7 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_1 + 1])), (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_1 [i_0])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) var_0);
    /* LoopSeq 4 */
    for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) var_1);
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_9);
    }
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
    {
        var_14 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [(unsigned char)5]))))) ? (((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */long long int) arr_9 [i_3])) : (var_6))) : (var_7)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-127))))) : (var_6)));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_5]))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned short) var_5);
                            var_17 = ((/* implicit */int) max((var_17), ((+(((((/* implicit */_Bool) arr_16 [i_7] [i_3] [i_3])) ? (var_4) : (((/* implicit */int) var_8))))))));
                        }
                        for (unsigned short i_8 = 1; i_8 < 17; i_8 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_8 - 1]))));
                            arr_28 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27984)) ? (212588665340539335ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        arr_29 [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(var_2)));
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_27 [i_3]))));
                    }
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
                    {
                        arr_34 [(short)11] [15U] [i_5] [i_3] [i_3] [(signed char)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)37536))))) ? ((+(var_1))) : (((/* implicit */int) arr_32 [(unsigned short)2] [(unsigned char)6] [i_5] [i_9]))));
                        arr_35 [i_3] [i_5] [i_4] [(signed char)7] [i_3] [i_3] = ((/* implicit */unsigned int) var_5);
                    }
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_23 [i_3] [i_3] [(_Bool)1] [i_5] [6ULL] [6ULL]))));
                        arr_38 [11ULL] [i_4] [i_4] [(unsigned short)13] [i_3] [i_10] = ((/* implicit */int) arr_12 [i_3] [i_3]);
                        arr_39 [i_3] [(_Bool)1] [i_3] [i_5] [i_10] = ((/* implicit */unsigned long long int) (-((-(var_6)))));
                        arr_40 [i_3] [i_5] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_1)))) ? (arr_27 [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_36 [i_5] [i_4] [i_5] [i_4] [i_10]))))) ? (var_1) : ((-(var_4))))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_11 = 0; i_11 < 18; i_11 += 4) 
                    {
                        arr_43 [i_3] [i_4] [i_3] [i_5] [i_11] = ((/* implicit */unsigned char) (~(var_3)));
                        var_21 = ((/* implicit */unsigned short) var_9);
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 2; i_12 < 17; i_12 += 4) 
                    {
                        var_22 -= ((/* implicit */unsigned short) arr_17 [i_4] [i_4] [i_12]);
                        arr_46 [i_3] = ((((/* implicit */_Bool) arr_33 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_33 [i_3] [i_5] [i_3] [i_3])));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 1; i_14 < 17; i_14 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 18; i_15 += 4) 
                    {
                        arr_56 [i_3] [11U] [i_14 + 1] [i_14] [i_3] [i_14] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_51 [i_14 + 1] [i_14 - 1] [i_14 + 1] [i_14 - 1]))))));
                        var_23 = ((/* implicit */signed char) (~((~(18234155408369012262ULL)))));
                        arr_57 [i_3] [i_13] [i_13] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) arr_37 [i_14] [i_3] [i_14] [i_13]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 18; i_16 += 1) 
                    {
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_49 [i_16] [i_16] [i_16])))))));
                                arr_62 [i_3] [i_13] [i_3] [i_16] [(signed char)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_3] [i_14 + 1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : ((-(arr_59 [i_3] [i_3] [i_3])))))) ? ((-(((/* implicit */int) arr_23 [i_17] [i_17] [i_17] [i_17 - 1] [i_17] [i_17 - 1])))) : (((/* implicit */int) arr_32 [i_13] [i_14 + 1] [i_17] [i_17 - 1]))));
                                arr_63 [i_3] [i_13] [i_3] [i_16] [(_Bool)1] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_14 - 1])))))));
                                var_25 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_18 = 0; i_18 < 18; i_18 += 4) 
        {
            for (int i_19 = 3; i_19 < 16; i_19 += 4) 
            {
                {
                    arr_71 [i_3] [(unsigned short)2] [i_3] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_61 [i_19 - 3] [i_19 + 1] [i_19 + 2] [i_3] [i_19 - 1])) ? (arr_61 [i_19 + 2] [i_19 + 1] [i_19 - 1] [i_3] [i_19 - 3]) : (((/* implicit */unsigned int) var_4))))));
                    var_26 = ((/* implicit */signed char) (-(((/* implicit */int) (!(arr_55 [i_19] [i_19 + 1] [i_3]))))));
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (~(((/* implicit */int) arr_68 [i_19] [i_18] [i_18] [i_3])))))));
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_68 [i_3] [i_3] [i_18] [i_3]))))) ? ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_44 [i_19])) : (arr_30 [i_3] [(signed char)6] [i_19] [i_19]))))) : (((/* implicit */int) var_9)))))));
                    arr_72 [i_3] [i_18] [i_18] [i_19] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_67 [i_19 - 2]))));
                }
            } 
        } 
    }
    for (unsigned short i_20 = 0; i_20 < 18; i_20 += 3) /* same iter space */
    {
        var_29 += ((/* implicit */signed char) arr_73 [i_20] [(short)6]);
        arr_77 [i_20] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))));
        var_30 = ((/* implicit */signed char) (~(arr_75 [i_20])));
    }
    /* vectorizable */
    for (short i_21 = 0; i_21 < 12; i_21 += 2) 
    {
        arr_80 [i_21] = ((/* implicit */_Bool) (~(var_2)));
        /* LoopNest 2 */
        for (signed char i_22 = 0; i_22 < 12; i_22 += 1) 
        {
            for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
            {
                {
                    arr_87 [i_21] [i_22] [i_23] = (!(((/* implicit */_Bool) var_6)));
                    arr_88 [i_21] [i_22] [i_23] = ((/* implicit */short) (~(((/* implicit */int) arr_85 [i_21] [i_21]))));
                    arr_89 [10U] [(_Bool)1] [i_23 + 1] = ((/* implicit */unsigned short) var_2);
                    /* LoopSeq 3 */
                    for (signed char i_24 = 0; i_24 < 12; i_24 += 2) /* same iter space */
                    {
                        arr_92 [i_22] [0LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18234155408369012280ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) : (18234155408369012284ULL)))) ? (((/* implicit */unsigned int) (~(var_1)))) : ((+(var_3)))));
                        var_31 -= (+(arr_1 [i_22]));
                        var_32 ^= ((/* implicit */unsigned long long int) var_8);
                        arr_93 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */signed char) var_8);
                    }
                    for (signed char i_25 = 0; i_25 < 12; i_25 += 2) /* same iter space */
                    {
                        arr_96 [i_21] [0] [(signed char)2] [0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_69 [i_21] [17] [i_23 + 1]))));
                        arr_97 [i_25] [(unsigned short)3] [i_22] [i_21] = ((/* implicit */short) arr_75 [i_23 + 1]);
                    }
                    for (signed char i_26 = 0; i_26 < 12; i_26 += 2) /* same iter space */
                    {
                        arr_100 [i_21] [i_22] [i_21] [i_26] = ((/* implicit */unsigned long long int) var_7);
                        arr_101 [i_23 + 1] [i_26] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
                        var_33 = ((/* implicit */short) (-(arr_61 [i_23] [i_23 + 1] [i_23 + 1] [i_21] [i_23])));
                    }
                }
            } 
        } 
        arr_102 [i_21] &= ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (arr_18 [i_21] [i_21] [i_21] [i_21]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)41))))));
    }
    /* LoopSeq 1 */
    for (int i_27 = 2; i_27 < 16; i_27 += 4) 
    {
        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_6)))) ? ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_103 [i_27])) : (((/* implicit */int) arr_104 [i_27])))))) : (var_4))))));
        /* LoopSeq 1 */
        for (short i_28 = 0; i_28 < 20; i_28 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_29 = 0; i_29 < 20; i_29 += 2) 
            {
                for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) 
                {
                    {
                        arr_113 [14] [i_30] [i_29] [i_30] = ((/* implicit */short) arr_105 [i_27]);
                        /* LoopSeq 2 */
                        for (long long int i_31 = 0; i_31 < 20; i_31 += 3) 
                        {
                            arr_116 [i_27] [i_30] [i_27] [i_31] [i_31] = ((/* implicit */int) min((arr_106 [i_28]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) var_1))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_106 [i_30]))))))))));
                            arr_117 [i_27] [i_30] [i_30] [i_31] = ((/* implicit */unsigned int) ((min((arr_109 [i_30 + 1] [i_30 + 1] [i_30] [i_30]), (arr_109 [i_30 + 1] [i_30 + 1] [i_30] [i_30]))) ? (min((((/* implicit */int) arr_109 [i_30 + 1] [i_30 + 1] [i_30] [i_30])), (var_2))) : (((/* implicit */int) (!(arr_109 [i_30 + 1] [i_30 + 1] [i_30] [i_30]))))));
                        }
                        /* vectorizable */
                        for (int i_32 = 0; i_32 < 20; i_32 += 2) 
                        {
                            var_35 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_104 [i_27 + 4])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_104 [12]))))) : ((~(var_2)))));
                            arr_122 [i_30] [i_30] = (!(((/* implicit */_Bool) var_3)));
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1918484384U)) ? (((/* implicit */int) (unsigned short)37552)) : (var_2)));
                        }
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_109 [i_27] [i_28] [i_29] [i_30 + 1]))))) ? (((/* implicit */int) arr_111 [i_27] [i_27] [i_27] [i_27 + 4] [i_27])) : (max(((~(((/* implicit */int) arr_119 [i_27] [i_28] [i_29] [i_29] [i_30])))), (((((/* implicit */_Bool) arr_115 [i_27] [i_27] [i_28] [i_28] [i_29] [i_29])) ? (var_1) : (((/* implicit */int) var_9))))))));
                        arr_123 [i_27] [i_30] [i_30] [i_30] = ((/* implicit */signed char) var_3);
                    }
                } 
            } 
            arr_124 [i_27 + 3] [i_28] = ((/* implicit */long long int) var_3);
        }
    }
}
