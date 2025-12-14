/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237074
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        arr_12 [18] [(signed char)13] [18] [2U] [8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (signed char)0))));
                        arr_13 [i_3] [(signed char)16] [i_2] [i_1] [i_0] [0U] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_9 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [(unsigned char)15])));
                        arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) arr_5 [i_2 - 1] [14U]);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_9 [8U] [(unsigned char)13] [(unsigned char)13] [i_0] [i_0] [i_0])))) ? (((((/* implicit */int) arr_5 [i_0] [i_0])) / (var_7))) : ((+(arr_3 [(signed char)7] [i_0])))));
        var_18 *= arr_0 [i_0] [i_0];
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 4; i_5 < 18; i_5 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1662768249)) || (var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5 - 4]))) : (arr_9 [i_0] [i_4] [i_0] [i_4] [i_0] [(_Bool)1])));
                    var_20 -= (_Bool)1;
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [9U] [i_5 - 4] [9U] [(unsigned short)14]))))) ? (3515141066U) : (3515141066U)))));
                                var_22 = ((/* implicit */unsigned int) arr_19 [i_0] [i_4] [i_5 - 2] [i_7]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_8 = 2; i_8 < 18; i_8 += 1) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_31 [15U] [i_8] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(signed char)14] [15U] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (arr_2 [i_0]) : (779826229U))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2)))));
                                arr_32 [i_5] [i_4] [i_4] [i_5] [i_9] [i_0] = ((/* implicit */signed char) (~(var_15)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_23 ^= ((/* implicit */signed char) arr_33 [i_10] [i_10]);
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned int i_13 = 4; i_13 < 14; i_13 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_14 = 0; i_14 < 17; i_14 += 3) 
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-84)) != ((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) (unsigned char)221)) : (((((/* implicit */_Bool) arr_2 [i_10])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_10] [i_10]))))))));
                            var_25 = min((((/* implicit */unsigned int) arr_1 [i_11])), ((+(((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (779826229U))))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_11])) ? (((/* implicit */int) arr_43 [i_10])) : (((/* implicit */int) var_12))))) ? (((((/* implicit */int) arr_6 [i_13 - 3] [i_13 - 3] [i_13 - 1])) + (var_15))) : (((((/* implicit */_Bool) arr_41 [i_10] [i_10])) ? (((/* implicit */int) arr_8 [i_12])) : (((/* implicit */int) arr_11 [i_10] [i_11] [i_11] [i_13 - 3] [(signed char)15]))))));
                            var_27 = ((/* implicit */unsigned short) arr_9 [i_10] [i_12] [i_10] [i_10] [i_10] [i_12]);
                        }
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            var_28 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_9)), (arr_37 [i_11] [i_11] [(signed char)7] [i_11])));
                            arr_50 [i_13 - 4] = ((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(var_13))))));
                        }
                        /* vectorizable */
                        for (signed char i_16 = 2; i_16 < 15; i_16 += 2) 
                        {
                            var_29 = ((/* implicit */signed char) ((0U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_13 - 3])))));
                            arr_53 [i_11] [i_11] [i_16] = (((_Bool)1) ? (1003225639U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))));
                            var_30 = var_16;
                        }
                        var_31 = ((/* implicit */int) 3515141067U);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (signed char i_17 = 0; i_17 < 23; i_17 += 3) 
    {
        for (int i_18 = 2; i_18 < 20; i_18 += 4) 
        {
            for (signed char i_19 = 0; i_19 < 23; i_19 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        for (signed char i_21 = 2; i_21 < 22; i_21 += 3) 
                        {
                            {
                                arr_66 [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)0)), (3874899604U)))) ? (((/* implicit */int) arr_61 [i_18 - 2] [i_19] [i_21 + 1] [i_21 - 1])) : (((var_10) << (((((/* implicit */int) arr_61 [i_18 + 3] [(signed char)3] [i_21 + 1] [i_21 + 1])) - (62295)))))));
                                arr_67 [i_20] [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_19] [i_21 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_55 [i_19]))))) ? (((/* implicit */int) arr_61 [i_17] [i_17] [6U] [i_20])) : (((/* implicit */int) ((signed char) var_2)))));
                                var_32 = ((/* implicit */signed char) arr_62 [i_17] [i_18] [i_20]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_22 = 1; i_22 < 20; i_22 += 4) 
                    {
                        arr_71 [i_17] [i_22] [i_22] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((/* implicit */int) (signed char)(-127 - 1))))))));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (-(((/* implicit */int) var_8)))))));
                    }
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_58 [i_17] [i_18]))));
                    /* LoopNest 2 */
                    for (unsigned short i_23 = 0; i_23 < 23; i_23 += 3) 
                    {
                        for (unsigned char i_24 = 0; i_24 < 23; i_24 += 3) 
                        {
                            {
                                arr_77 [i_18 + 1] [i_23] [i_23] [4U] [i_24] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) arr_57 [(signed char)10] [i_18] [i_18 + 2])) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_74 [i_17] [i_17] [i_18] [i_17] [i_23] [i_23] [i_24])))))))), ((-(((/* implicit */int) (_Bool)1))))));
                                var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 2736560564U)) ? (3176292993U) : (3871008367U)))))));
                                var_36 = ((/* implicit */signed char) var_14);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_25 = 1; i_25 < 12; i_25 += 4) 
    {
        for (signed char i_26 = 0; i_26 < 15; i_26 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_27 = 2; i_27 < 14; i_27 += 3) 
                {
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        for (signed char i_29 = 0; i_29 < 15; i_29 += 3) 
                        {
                            {
                                var_37 = max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_75 [i_26] [i_28] [i_26] [i_25]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) arr_3 [i_26] [i_26])) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_73 [i_25] [i_26] [(signed char)14] [(signed char)1]))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-93)) != (((/* implicit */int) var_9))))) != (((/* implicit */int) var_4))))));
                                var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_25 + 1] [i_26] [i_27] [i_29])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_37 [i_25 + 3] [i_26] [i_25 + 3] [i_28])))))))));
                                var_39 = ((/* implicit */unsigned int) var_14);
                                var_40 = ((signed char) max((((((/* implicit */int) (unsigned char)0)) >> (((arr_44 [i_25] [(unsigned short)7] [i_25] [i_25] [i_29]) + (1438908913))))), ((+(((/* implicit */int) var_8))))));
                                var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) 216207425U)) ? (2390061021U) : (((/* implicit */unsigned int) -1520383186))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_30 = 3; i_30 < 14; i_30 += 2) 
                {
                    for (int i_31 = 1; i_31 < 14; i_31 += 2) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((3871008367U), (((/* implicit */unsigned int) arr_73 [i_26] [i_30 - 3] [i_31 + 1] [i_26]))))) ? (((arr_16 [(_Bool)1]) - (arr_91 [i_25 + 1] [i_26] [i_25]))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_22 [i_31])), (arr_51 [i_25 + 3] [i_26] [i_25 + 3] [i_31] [i_31 + 1])))) ? (((/* implicit */unsigned int) arr_44 [i_31 - 1] [i_26] [i_26] [i_26] [i_26])) : (arr_91 [i_26] [i_26] [(_Bool)1])))));
                            /* LoopSeq 2 */
                            for (unsigned char i_32 = 4; i_32 < 12; i_32 += 3) /* same iter space */
                            {
                                var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_24 [i_25] [i_26] [i_30] [i_26] [(_Bool)1] [i_32 - 1])) ? (((/* implicit */int) arr_90 [(_Bool)1] [(_Bool)1])) : (var_10)))))), (max(((+(var_2))), (arr_28 [6U] [15U] [6U] [6U]))))))));
                                var_44 = ((/* implicit */unsigned short) arr_74 [i_32] [i_26] [i_31 + 1] [i_26] [i_26] [i_26] [(signed char)21]);
                            }
                            for (unsigned char i_33 = 4; i_33 < 12; i_33 += 3) /* same iter space */
                            {
                                var_45 = ((/* implicit */_Bool) ((1118674303U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60)))));
                                var_46 = ((/* implicit */unsigned char) var_2);
                            }
                            var_47 = ((/* implicit */signed char) (-(((/* implicit */int) arr_96 [i_26] [i_30 - 3] [i_26]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
