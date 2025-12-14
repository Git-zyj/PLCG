/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216083
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 3; i_2 < 12; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        var_16 += ((signed char) ((signed char) var_1));
                        var_17 = ((/* implicit */unsigned int) var_12);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
                            arr_13 [i_0] [(signed char)8] [i_0] [i_0] [i_0] [i_0] [2U] = ((/* implicit */signed char) min((var_10), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) : (max((((/* implicit */unsigned int) var_15)), (var_0)))))));
                        }
                        arr_14 [i_0] [i_1] [i_2] [i_1] [i_0] [i_3 + 4] = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))), (var_11))), (min((var_10), (((/* implicit */unsigned int) var_2))))));
                    }
                    /* LoopSeq 4 */
                    for (signed char i_5 = 3; i_5 < 12; i_5 += 1) 
                    {
                        arr_18 [i_0] [i_1] |= ((/* implicit */signed char) var_0);
                        var_19 = min((((signed char) ((unsigned int) var_11))), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))))));
                        arr_19 [i_2 - 1] [0U] = ((signed char) (signed char)-88);
                        var_20 = ((signed char) var_8);
                    }
                    for (signed char i_6 = 1; i_6 < 12; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((signed char) var_12)), (var_13))))));
                            var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((signed char) ((unsigned int) (signed char)-42)))) : (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13)))), (((/* implicit */int) ((signed char) var_10)))))));
                            var_23 = ((signed char) var_13);
                        }
                        for (signed char i_8 = 4; i_8 < 11; i_8 += 1) 
                        {
                            arr_28 [i_8] [i_6] [i_2 - 2] [i_6] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_13)), (var_6)));
                            arr_29 [i_6] [i_1] = ((/* implicit */signed char) (-(var_10)));
                            var_24 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)58))));
                            var_25 = ((/* implicit */unsigned int) min((var_1), (var_9)));
                            var_26 = ((/* implicit */unsigned int) var_15);
                        }
                        var_27 = min((((signed char) max((((/* implicit */unsigned int) var_5)), (var_8)))), (var_5));
                        var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((unsigned int) var_7)), (((/* implicit */unsigned int) var_14))))) ? (((/* implicit */int) max((var_15), (var_2)))) : (((/* implicit */int) ((signed char) var_0)))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        var_29 = ((/* implicit */signed char) var_0);
                        var_30 = ((/* implicit */signed char) ((unsigned int) var_15));
                        var_31 = ((signed char) var_15);
                    }
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))));
                        arr_35 [i_0] [i_0] [i_0] [1U] = var_9;
                    }
                    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_4), (((signed char) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_13)) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))))))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        for (signed char i_12 = 2; i_12 < 11; i_12 += 1) 
                        {
                            {
                                arr_41 [i_0] [i_1] [i_12] [i_11] [i_12] = ((/* implicit */signed char) max((min((max((((/* implicit */unsigned int) var_13)), (var_6))), (((/* implicit */unsigned int) ((signed char) var_12))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) (signed char)119)))))));
                                var_34 = var_15;
                                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_9))) ? ((-(2225814101U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_12), (((signed char) (signed char)-85))))))));
                                var_36 = var_15;
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_13 = 3; i_13 < 12; i_13 += 2) /* same iter space */
                {
                    arr_46 [i_0] [11U] [i_13] [i_13 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_11)));
                    arr_47 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13))));
                    arr_48 [i_0] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) ((signed char) var_12));
                }
                for (signed char i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    arr_51 [i_0] [i_1] [i_14] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_14))));
                    /* LoopSeq 3 */
                    for (signed char i_15 = 0; i_15 < 14; i_15 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_16 = 4; i_16 < 12; i_16 += 2) 
                        {
                            var_37 = ((signed char) ((signed char) var_9));
                            var_38 = ((/* implicit */signed char) min((var_38), (((signed char) var_5))));
                        }
                        arr_57 [i_14] = var_12;
                        var_39 = ((/* implicit */unsigned int) ((signed char) max((var_13), (var_9))));
                    }
                    for (signed char i_17 = 0; i_17 < 14; i_17 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_18 = 0; i_18 < 14; i_18 += 1) 
                        {
                            arr_64 [12U] [i_17] [i_0] [i_14] [i_14] [12U] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((signed char) ((signed char) var_13)))), (max((((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_1)) ? (var_0) : (var_6)))))));
                            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) max((((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((unsigned int) (signed char)-51)))))));
                        }
                        var_41 = ((/* implicit */unsigned int) var_9);
                    }
                    for (signed char i_19 = 0; i_19 < 14; i_19 += 1) 
                    {
                        arr_68 [i_0] [i_19] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) max(((signed char)-8), ((signed char)28)))))));
                        arr_69 [i_19] [i_14] [i_1] [i_1] [i_19] = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) var_14))), ((~(((/* implicit */int) var_14))))));
                    }
                    arr_70 [i_14] = max(((signed char)-122), ((signed char)105));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_20 = 0; i_20 < 14; i_20 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_21 = 1; i_21 < 12; i_21 += 1) 
                    {
                        for (signed char i_22 = 0; i_22 < 14; i_22 += 2) 
                        {
                            {
                                arr_80 [i_22] [(signed char)8] [i_1] [i_1] [i_0] = ((signed char) var_1);
                                var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_8)));
                                var_43 = ((unsigned int) var_0);
                                arr_81 [i_0] = ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                    var_44 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
                }
                /* LoopNest 2 */
                for (signed char i_23 = 2; i_23 < 11; i_23 += 1) 
                {
                    for (signed char i_24 = 0; i_24 < 14; i_24 += 2) 
                    {
                        {
                            var_45 = var_4;
                            var_46 = ((/* implicit */unsigned int) ((signed char) min((var_11), (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_25 = 0; i_25 < 14; i_25 += 2) 
                {
                    for (signed char i_26 = 0; i_26 < 14; i_26 += 2) 
                    {
                        for (signed char i_27 = 2; i_27 < 12; i_27 += 1) 
                        {
                            {
                                var_47 = var_8;
                                var_48 = var_6;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_28 = 0; i_28 < 10; i_28 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_29 = 3; i_29 < 7; i_29 += 2) 
        {
            for (signed char i_30 = 1; i_30 < 6; i_30 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_31 = 0; i_31 < 10; i_31 += 1) 
                    {
                        var_49 = ((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) (+(var_0))))), ((+(((/* implicit */int) var_4))))));
                        var_50 = ((/* implicit */unsigned int) var_3);
                        var_51 = ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) var_5)))));
                        var_52 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_32 = 4; i_32 < 7; i_32 += 1) 
                    {
                        var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) var_4))));
                        var_54 += var_15;
                        var_55 = ((/* implicit */signed char) ((unsigned int) var_5));
                        var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_3), (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_11)));
                    }
                    for (signed char i_33 = 0; i_33 < 10; i_33 += 1) 
                    {
                        var_57 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        /* LoopSeq 2 */
                        for (signed char i_34 = 0; i_34 < 10; i_34 += 2) 
                        {
                            var_58 = var_9;
                            var_59 = max((max((((/* implicit */unsigned int) var_2)), (var_6))), (((/* implicit */unsigned int) var_1)));
                        }
                        /* vectorizable */
                        for (signed char i_35 = 0; i_35 < 10; i_35 += 2) 
                        {
                            var_60 += ((/* implicit */signed char) var_11);
                            var_61 += ((/* implicit */unsigned int) ((signed char) ((unsigned int) var_2)));
                            var_62 = ((/* implicit */unsigned int) var_4);
                        }
                    }
                    var_63 = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) (signed char)-69))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (max((min((var_11), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) var_5))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_36 = 0; i_36 < 10; i_36 += 1) 
        {
            for (unsigned int i_37 = 0; i_37 < 10; i_37 += 2) 
            {
                for (unsigned int i_38 = 0; i_38 < 10; i_38 += 2) 
                {
                    {
                        arr_123 [i_28] [i_36] [i_36] [(signed char)8] [i_38] = var_5;
                        var_64 = ((/* implicit */signed char) min((var_64), (var_12)));
                        var_65 = ((/* implicit */unsigned int) max((var_65), (((/* implicit */unsigned int) max((((signed char) var_4)), (var_3))))));
                        arr_124 [i_28] [i_36] [i_28] [(signed char)8] [(signed char)3] = ((/* implicit */unsigned int) var_15);
                        var_66 = ((/* implicit */signed char) min((var_66), (((/* implicit */signed char) max((min((((/* implicit */unsigned int) var_14)), (var_8))), (((/* implicit */unsigned int) min((var_15), (var_1)))))))));
                    }
                } 
            } 
        } 
        var_67 = ((/* implicit */unsigned int) var_9);
    }
    var_68 = var_2;
}
