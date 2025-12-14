/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239936
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
    var_14 = var_0;
    var_15 ^= ((/* implicit */signed char) ((((/* implicit */int) var_0)) - (max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))))));
    var_16 = ((/* implicit */signed char) max((((max((var_6), ((_Bool)1))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) max((var_3), ((signed char)127)))))), (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_17 ^= ((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_3])), (arr_7 [i_0] [i_2] [(signed char)18])))), (max((((((/* implicit */_Bool) (signed char)0)) ? (arr_2 [i_2]) : (((/* implicit */int) arr_3 [i_1] [i_1 - 1] [i_1 - 1])))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_0])), (var_2))))))));
                            var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1])) && (((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1])))) ? (((((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_13))))) * (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) var_4))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)16))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))));
                            var_19 |= ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_3] [i_1 - 1])) * (((/* implicit */int) var_0))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_20 = arr_7 [i_0] [i_1] [i_0];
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 21; i_6 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) * (((((/* implicit */int) (signed char)127)) / (((/* implicit */int) (signed char)72))))));
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_4 [i_5] [i_5])))))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 3 */
                for (unsigned short i_7 = 2; i_7 < 21; i_7 += 2) 
                {
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((((((/* implicit */int) (signed char)95)) + (((/* implicit */int) (signed char)105)))), (max(((-(((/* implicit */int) arr_7 [i_0] [i_7] [i_7])))), (((/* implicit */int) max((((/* implicit */signed char) var_4)), (arr_20 [i_0] [i_1 - 1] [i_7 - 2])))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        for (signed char i_9 = 1; i_9 < 19; i_9 += 2) 
                        {
                            {
                                var_23 ^= ((/* implicit */int) var_11);
                                arr_29 [i_1] [i_8] [i_7] [i_0] [i_1] = ((/* implicit */signed char) var_4);
                            }
                        } 
                    } 
                    arr_30 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_1] [(unsigned char)8] [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (((((/* implicit */_Bool) max((var_10), (var_3)))) ? (((/* implicit */int) max((var_5), (arr_27 [i_0])))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_1] [i_0] [(signed char)14])) ? (((/* implicit */int) arr_24 [i_1])) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) var_13))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        for (int i_11 = 1; i_11 < 22; i_11 += 1) 
                        {
                            {
                                var_24 ^= ((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_12 [i_1 - 1] [i_7] [i_1 - 1] [i_11 + 1]))) <= (((((/* implicit */int) var_3)) + (((/* implicit */int) (signed char)77))))));
                                arr_38 [i_0] [i_1] = ((/* implicit */signed char) max(((unsigned char)220), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) var_11))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_7] [i_7])) | (((/* implicit */int) var_5))))))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_12 = 3; i_12 < 20; i_12 += 1) /* same iter space */
                {
                    arr_41 [i_0] [12] [i_1] = ((/* implicit */unsigned char) arr_0 [i_1]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 20; i_13 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_13] [i_1] [i_13] [i_13] [i_13] [i_1 + 1])) * (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_48 [i_13] [i_13] [i_14] |= ((/* implicit */_Bool) arr_0 [(unsigned char)21]);
                            arr_49 [i_0] [i_1] [i_12 - 3] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_1] [i_12 - 2])) ? (((/* implicit */int) arr_23 [i_1] [i_12 - 2])) : (((/* implicit */int) arr_35 [i_12 + 1] [i_12 + 1] [i_12 + 2]))));
                            var_26 = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_25 [i_1] [i_13] [(unsigned char)14])) - (((/* implicit */int) arr_8 [i_0] [(signed char)0] [i_0] [i_0] [i_1]))))));
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_21 [i_0] [i_13] [i_12 + 3]))));
                        }
                    }
                }
                for (unsigned short i_15 = 3; i_15 < 20; i_15 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_0 [i_15 + 1])), (((((/* implicit */int) ((signed char) arr_45 [i_0] [i_0] [(unsigned char)22] [i_0]))) + (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_26 [i_0] [i_0] [(unsigned short)5] [i_15] [i_15])) : (((/* implicit */int) (unsigned char)166))))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_16 = 0; i_16 < 23; i_16 += 2) /* same iter space */
                    {
                        arr_55 [i_1] [i_1 + 1] [i_15] [i_15] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_15 + 1] [i_15 - 3])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_15 - 2] [i_15 - 1])) : (((/* implicit */int) arr_23 [i_1] [i_15 + 3])))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((var_11) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1])) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1])))) : (((/* implicit */int) ((unsigned short) arr_45 [i_1 - 1] [i_1 - 1] [i_15 + 1] [i_15 - 2])))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 23; i_17 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned char) (-(((arr_33 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1]) ? (((/* implicit */int) arr_33 [i_1] [i_1 - 1] [i_1 + 1] [(_Bool)0])) : (((/* implicit */int) arr_44 [i_1] [i_1 - 1]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_18 = 0; i_18 < 23; i_18 += 3) 
                        {
                            var_31 |= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_56 [i_0] [i_1 - 1] [i_1] [i_15 + 2] [i_15]))));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_53 [i_1 - 1] [i_15 - 3] [(unsigned char)2] [(unsigned char)13] [i_15] [i_17])) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))));
                            var_33 ^= ((/* implicit */signed char) arr_26 [i_15 - 3] [i_17] [i_15 - 3] [4] [i_0]);
                        }
                        for (signed char i_19 = 0; i_19 < 23; i_19 += 3) 
                        {
                            var_34 ^= ((/* implicit */unsigned char) arr_31 [i_19] [i_15 - 3] [i_1] [i_15] [i_1 + 1] [i_1]);
                            var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_51 [i_17]), (arr_51 [i_17])))) ? (((/* implicit */int) max((var_5), (((/* implicit */signed char) var_11))))) : (((((/* implicit */int) var_10)) - (((/* implicit */int) var_4)))))))));
                            var_36 = ((/* implicit */_Bool) max((((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)-72))))), (((((((/* implicit */_Bool) arr_46 [i_0] [i_1 + 1] [i_15 + 1] [i_1 + 1] [i_0])) ? (((/* implicit */int) arr_45 [i_0] [(unsigned char)8] [i_0] [i_0])) : (((/* implicit */int) var_6)))) & (((/* implicit */int) var_5))))));
                        }
                        var_37 = (!(((/* implicit */_Bool) var_0)));
                        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)68)) | (((/* implicit */int) var_7))))))));
                        arr_65 [i_1] [i_15] [i_17] = max((max(((unsigned char)191), (((/* implicit */unsigned char) var_1)))), (((/* implicit */unsigned char) arr_33 [i_0] [i_0] [i_0] [i_17])));
                    }
                    for (signed char i_20 = 3; i_20 < 20; i_20 += 2) 
                    {
                        arr_68 [i_1] [i_1] [i_0] [i_20] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) var_6)))));
                        var_39 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_32 [i_0])), (((((/* implicit */_Bool) arr_58 [i_1] [i_15] [i_15 + 2] [i_15 - 3] [i_20 - 1] [i_20])) ? (((/* implicit */int) arr_58 [i_1] [i_0] [i_1] [i_15 - 3] [i_20 + 1] [i_20 + 1])) : (((/* implicit */int) (signed char)-45))))));
                        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_52 [i_15 - 1] [i_15 - 1] [i_1 - 1] [i_0])))))));
                    }
                    for (signed char i_21 = 3; i_21 < 19; i_21 += 1) 
                    {
                        var_41 = ((/* implicit */signed char) arr_34 [i_1 - 1] [i_21 + 4]);
                        var_42 = ((((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) (signed char)-123))), (arr_28 [i_21 - 3] [i_1] [i_15] [i_21])))) - (max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) max(((unsigned char)145), ((unsigned char)36)))))));
                        var_43 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) max((arr_43 [(signed char)0]), (((/* implicit */unsigned char) var_1)))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) < (((/* implicit */int) (unsigned char)194))))) : (((/* implicit */int) ((signed char) var_2)))));
                    }
                }
            }
        } 
    } 
    var_44 ^= ((/* implicit */signed char) (((-((-(((/* implicit */int) var_1)))))) / (((/* implicit */int) var_13))));
}
