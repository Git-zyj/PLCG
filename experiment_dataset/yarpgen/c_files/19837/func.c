/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19837
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [4]))));
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0])))) <= ((-(max((-1637985997), (-1637985997))))))))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_14 = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_5 [i_1])))) + (((/* implicit */int) (signed char)-122))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1])))))) && (((arr_3 [i_1]) != (((/* implicit */long long int) ((/* implicit */int) var_4))))))) ? (((/* implicit */int) min((max((arr_5 [(_Bool)1]), (((/* implicit */unsigned char) var_10)))), (arr_5 [i_1])))) : ((~(-1384149977))))))));
    }
    for (int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) : (arr_7 [i_2]))), (((/* implicit */long long int) var_3))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_2]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2] [i_2])) != (-1637985997)))) : (((/* implicit */int) arr_8 [i_2])))) : (((/* implicit */int) arr_8 [i_2]))));
        var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((arr_6 [i_2] [i_2]) || (((/* implicit */_Bool) arr_7 [i_2])))))));
    }
    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        arr_14 [i_3] = ((/* implicit */int) arr_12 [i_3] [i_3]);
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (((((((arr_12 [i_6] [i_6]) & (arr_12 [20U] [i_4]))) + (9223372036854775807LL))) << (((max((((/* implicit */long long int) arr_13 [i_3])), (var_7))) - (43LL)))))));
                                arr_28 [i_3] [i_4] [i_5] [i_6] [i_5] [i_7] = ((min((((((/* implicit */_Bool) arr_19 [i_3] [i_5] [i_5] [i_3])) ? (((/* implicit */long long int) 1384149968)) : (arr_24 [i_5]))), (((/* implicit */long long int) ((arr_16 [i_6] [(unsigned char)14]) & (arr_16 [(_Bool)1] [i_6])))))) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_25 [i_5])))));
                                arr_29 [i_3] [i_5] [i_4] [i_5] [i_6] [8LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [9LL]))))) | (arr_23 [i_6 + 2] [i_6 - 1] [i_6 + 3] [i_6 + 3] [22LL] [i_6 + 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_18 [(_Bool)1])) : (((/* implicit */int) arr_10 [i_3] [i_3]))))) || (((/* implicit */_Bool) arr_20 [i_5]))))) : (((/* implicit */int) ((signed char) min((((/* implicit */long long int) var_1)), (arr_26 [i_3] [i_5] [5U] [i_3] [6U] [i_3])))))));
                                var_18 *= (-(arr_16 [i_3] [i_5]));
                            }
                        } 
                    } 
                    arr_30 [i_3] [i_5] [i_4] [i_5] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */int) arr_18 [i_4])) : (((/* implicit */int) arr_18 [i_4])))), (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) ((arr_10 [i_3] [i_4]) && (((/* implicit */_Bool) -1637985997))))))))));
                    var_19 = ((/* implicit */signed char) -1384149977);
                    var_20 += ((/* implicit */unsigned int) min(((-(arr_22 [i_3] [i_3] [(_Bool)1] [14U] [i_3] [i_3]))), ((-(((/* implicit */int) arr_15 [i_4] [i_4]))))));
                    var_21 = ((/* implicit */unsigned char) arr_11 [i_3] [i_4]);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            arr_33 [i_3] [i_3] [i_3] = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_10 [10U] [i_8])), (((((/* implicit */_Bool) arr_20 [12U])) ? (arr_20 [0U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_3] [i_3] [12U] [i_3])))))));
            var_22 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_3] [i_8])) ? (((/* implicit */int) arr_13 [i_8])) : (((/* implicit */int) arr_13 [i_3]))))), (arr_16 [i_8] [i_3]))) << ((((-((-(((/* implicit */int) var_9)))))) - (124)))));
            var_23 = ((/* implicit */unsigned char) ((((_Bool) max((((/* implicit */long long int) var_6)), (arr_24 [20U])))) && (((/* implicit */_Bool) min((((unsigned int) var_5)), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_25 [20U]))))))))));
        }
        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            arr_38 [(signed char)13] = ((/* implicit */long long int) ((min((((/* implicit */int) min((arr_19 [i_3] [i_9] [18LL] [i_3]), (((/* implicit */signed char) var_12))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_36 [i_3] [i_9])) : (((/* implicit */int) arr_10 [i_3] [i_3])))))) < (((/* implicit */int) min((arr_35 [i_3]), (arr_35 [i_3]))))));
            /* LoopSeq 2 */
            for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    arr_43 [i_3] [12] [(_Bool)1] [i_3] [i_11] = ((unsigned char) ((unsigned char) arr_24 [i_11]));
                    arr_44 [(unsigned char)1] [(unsigned short)13] [i_10] [15U] [i_3] [i_3] = ((/* implicit */signed char) min(((((-(arr_11 [i_3] [i_3]))) % (((unsigned int) arr_26 [i_9] [i_11] [i_10] [i_10] [i_11] [i_10])))), (((/* implicit */unsigned int) (((-(((/* implicit */int) var_11)))) / (-1637985989))))));
                    /* LoopSeq 2 */
                    for (signed char i_12 = 3; i_12 < 23; i_12 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */long long int) ((unsigned short) (-(arr_26 [i_3] [i_10] [i_12 - 1] [i_12] [i_12 - 1] [i_12]))));
                        arr_47 [(_Bool)1] [(signed char)6] [i_3] [(_Bool)1] [(unsigned short)23] [(signed char)10] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_45 [(_Bool)1] [(_Bool)1] [i_10] [i_11] [i_10]))))) ? (((((/* implicit */_Bool) arr_41 [i_12 - 1] [i_10])) ? (arr_41 [i_12 - 3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_12 - 3] [i_12 - 3]))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_9] [i_11])))))));
                    }
                    for (signed char i_13 = 3; i_13 < 23; i_13 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) (-(min((max((((/* implicit */int) arr_50 [i_9] [i_11])), (arr_32 [i_13] [i_10]))), (arr_22 [i_13 + 1] [i_13] [i_13 + 1] [i_11] [i_13] [6LL])))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) max((((/* implicit */int) (((!(arr_10 [(_Bool)1] [i_11]))) && (arr_17 [i_3] [i_13 - 1])))), (((arr_27 [i_11] [i_13 - 3]) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_13 [i_13 - 2])))))))));
                    }
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_48 [8LL])))))) * ((-(min((1073741824U), (((/* implicit */unsigned int) arr_35 [i_3])))))))))));
                }
                var_28 = (-((-(arr_24 [i_10]))));
            }
            for (unsigned int i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((_Bool) min((((arr_15 [i_3] [i_9]) ? (arr_11 [i_3] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3]))))), (((/* implicit */unsigned int) arr_13 [18]))))))));
                    /* LoopSeq 4 */
                    for (signed char i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
                    {
                        arr_59 [i_14] [i_3] = ((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned char) ((((arr_40 [i_3]) ? (arr_41 [i_15] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) <= (((((/* implicit */_Bool) var_4)) ? (arr_24 [i_16]) : (((/* implicit */long long int) 1384149994)))))))));
                        arr_60 [i_16] [(unsigned short)6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_16] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_3]))) : (max((((/* implicit */unsigned int) arr_13 [(signed char)8])), (arr_39 [i_14])))))) ? ((-(max((((/* implicit */unsigned int) arr_18 [i_9])), (arr_39 [i_3]))))) : (min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_3] [i_3]))))), (arr_54 [i_9] [i_9] [(_Bool)1])))));
                    }
                    for (signed char i_17 = 0; i_17 < 24; i_17 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned char) arr_10 [i_14] [i_15])), (arr_46 [(_Bool)1] [i_15] [i_9] [i_3]))))))), (arr_26 [i_3] [i_17] [i_14] [i_15] [i_3] [i_17]))))));
                        var_31 *= ((/* implicit */unsigned int) arr_46 [(_Bool)1] [i_9] [i_14] [6U]);
                        var_32 = ((signed char) ((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_15]))) : (arr_23 [i_14] [i_9] [i_14] [i_15] [i_9] [i_15])));
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_17] [i_9]))))), ((-(arr_11 [8U] [i_14])))))))));
                    }
                    for (signed char i_18 = 0; i_18 < 24; i_18 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_15 [i_3] [i_3]) ? ((-(((/* implicit */int) arr_21 [i_18] [i_9])))) : ((-(((/* implicit */int) arr_51 [(unsigned short)20] [i_9] [i_15] [i_15]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_14] [i_9]))) : (arr_12 [i_9] [i_14])))) ? (((3588968522U) % (var_6))) : (max((arr_57 [15U] [i_9] [(unsigned char)12] [i_15] [i_18]), (((/* implicit */unsigned int) 1384149977)))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_18 [i_15]))))))))));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_34 [i_9])) * (((/* implicit */int) arr_34 [i_14]))))) < (((((/* implicit */_Bool) arr_41 [i_15] [i_18])) ? (arr_41 [i_15] [i_14]) : (arr_41 [i_3] [i_3])))));
                        var_36 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_64 [i_3] [i_3] [i_3] [i_3] [i_3])) ? (arr_64 [(signed char)22] [i_18] [i_18] [5U] [i_18]) : (arr_64 [i_15] [i_14] [i_14] [i_9] [i_18])))));
                    }
                    /* vectorizable */
                    for (signed char i_19 = 0; i_19 < 24; i_19 += 2) /* same iter space */
                    {
                        arr_67 [i_14] [i_15] [i_14] [i_14] [(_Bool)1] [i_3] = ((/* implicit */_Bool) ((arr_40 [i_3]) ? (arr_22 [i_3] [i_3] [i_3] [i_19] [i_3] [i_3]) : (((arr_66 [i_19] [i_15] [i_14] [i_9] [i_3]) ? (((/* implicit */int) arr_19 [0U] [i_9] [i_19] [(unsigned short)20])) : (((/* implicit */int) arr_10 [5] [i_15]))))));
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_9])) ? ((-(((/* implicit */int) arr_35 [19])))) : (((/* implicit */int) arr_48 [i_9]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_20 = 0; i_20 < 24; i_20 += 4) 
                    {
                        var_38 = ((unsigned int) var_0);
                        var_39 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_46 [i_3] [i_9] [i_14] [i_15])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10)))) << ((((((-(((/* implicit */int) arr_42 [i_9])))) + (28))) - (15)))));
                        arr_71 [5LL] [(_Bool)1] [0U] [i_14] [(signed char)14] [i_15] [i_20] = ((/* implicit */signed char) arr_58 [23U] [i_9] [i_14] [i_15] [i_9] [i_20] [i_9]);
                        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) (((-(min((arr_57 [i_3] [i_9] [i_14] [i_3] [i_20]), (arr_37 [i_20] [(unsigned short)16] [i_14]))))) << (((((/* implicit */int) arr_40 [i_3])) & ((-(((/* implicit */int) var_5)))))))))));
                    }
                    for (unsigned char i_21 = 2; i_21 < 23; i_21 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned char) min((((unsigned int) ((arr_36 [i_15] [i_15]) && (((/* implicit */_Bool) arr_46 [i_3] [i_9] [i_3] [i_15]))))), (min((arr_64 [i_21 - 2] [i_21 - 1] [i_21 - 2] [i_21 - 2] [i_9]), (arr_64 [i_21 - 2] [i_21 - 2] [i_21 + 1] [i_21 + 1] [(unsigned char)15])))));
                        var_42 = (~(((unsigned int) min((arr_53 [(signed char)1] [i_9] [i_9] [i_9]), (((/* implicit */unsigned int) arr_36 [(_Bool)1] [i_21]))))));
                    }
                }
                var_43 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_73 [i_3] [(unsigned short)14] [i_9] [i_9] [i_14])))) && (((/* implicit */_Bool) (+(arr_73 [i_3] [i_3] [i_3] [i_3] [i_3]))))));
                var_44 = ((/* implicit */_Bool) max((705998773U), (((/* implicit */unsigned int) 1637986021))));
            }
            arr_74 [i_3] [i_9] [i_9] = ((/* implicit */_Bool) var_5);
            /* LoopSeq 1 */
            for (long long int i_22 = 1; i_22 < 22; i_22 += 2) 
            {
                var_45 = ((/* implicit */_Bool) -1384149977);
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 24; i_23 += 1) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            arr_83 [i_3] [i_3] [i_3] [i_3] [i_3] [i_24] [19LL] = ((/* implicit */_Bool) (((((-(((/* implicit */int) arr_68 [20U] [21U] [i_22] [i_9] [21U])))) > (((/* implicit */int) var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_18 [i_3]))))))) : ((-(arr_54 [i_22 + 2] [i_3] [10LL])))));
                            var_46 = ((/* implicit */int) min((((arr_37 [22U] [i_22 + 2] [i_22 + 2]) | (arr_37 [i_22] [i_22 + 2] [i_22 + 2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [(unsigned short)19] [i_9])) ? (((/* implicit */int) arr_10 [i_22] [i_22 + 1])) : (((((/* implicit */int) arr_77 [i_3] [i_3] [(unsigned char)7] [i_23])) >> (((/* implicit */int) var_0)))))))));
                            var_47 *= ((/* implicit */_Bool) ((arr_53 [i_22 + 2] [i_9] [(unsigned char)4] [(_Bool)1]) | (((/* implicit */unsigned int) ((/* implicit */int) min((arr_45 [i_3] [i_23] [i_22 - 1] [11U] [i_9]), (arr_45 [i_3] [i_9] [i_22 - 1] [i_23] [16U])))))));
                            var_48 = ((/* implicit */long long int) max(((-(arr_22 [i_3] [i_3] [i_3] [i_24] [(_Bool)1] [i_3]))), ((-(((/* implicit */int) ((4294967265U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    for (unsigned int i_26 = 0; i_26 < 24; i_26 += 2) 
                    {
                        {
                            var_49 += ((/* implicit */unsigned int) arr_12 [i_9] [i_26]);
                            var_50 = ((/* implicit */long long int) max((var_50), (((long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_45 [i_3] [i_9] [i_22 + 2] [i_25] [i_26]))))), (arr_69 [(_Bool)1] [i_22 - 1] [i_22 + 2] [i_9]))))));
                        }
                    } 
                } 
            }
        }
        arr_88 [i_3] [i_3] = ((/* implicit */unsigned short) (_Bool)1);
    }
    var_51 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) * (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (unsigned char i_27 = 0; i_27 < 11; i_27 += 3) 
    {
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            {
                var_52 *= ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) arr_68 [13U] [i_28] [i_28] [i_27] [i_27])), (((arr_92 [i_27] [i_27]) & (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                /* LoopNest 2 */
                for (long long int i_29 = 0; i_29 < 11; i_29 += 3) 
                {
                    for (unsigned char i_30 = 0; i_30 < 11; i_30 += 2) 
                    {
                        {
                            var_53 = ((/* implicit */signed char) max((((/* implicit */unsigned int) min((arr_72 [16LL] [16LL] [i_29] [i_29] [i_28]), (((((/* implicit */int) arr_77 [i_27] [i_27] [i_27] [i_27])) & (((/* implicit */int) arr_49 [i_30] [i_30] [(signed char)15] [i_27] [(unsigned char)6] [i_27]))))))), (((((arr_11 [i_28] [i_27]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_77 [i_30] [i_29] [i_27] [i_27]))))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) arr_52 [(_Bool)1] [i_28] [19U] [i_28])))))))));
                            var_54 = ((/* implicit */unsigned char) min(((-(arr_7 [i_30]))), (min((arr_7 [i_30]), (((/* implicit */long long int) arr_77 [i_27] [i_28] [i_30] [i_30]))))));
                            var_55 = ((/* implicit */int) max(((-(arr_70 [i_27] [i_28] [i_29] [i_29] [i_30]))), (((unsigned int) min((var_11), (var_0))))));
                            arr_104 [i_27] [i_27] [(unsigned short)4] [i_29] [(unsigned char)8] [i_30] = ((/* implicit */unsigned char) max(((-(min((((/* implicit */long long int) arr_79 [i_27] [i_28] [i_28] [19LL] [i_29] [i_29] [i_29])), (arr_3 [i_27]))))), (((/* implicit */long long int) ((((3221225471U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_28]))))) ? (arr_54 [i_27] [i_28] [20U]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_75 [i_27] [i_29] [i_30]))))))))));
                        }
                    } 
                } 
                var_56 = ((/* implicit */_Bool) ((signed char) min((arr_66 [i_27] [i_27] [i_28] [10] [i_28]), (arr_66 [i_27] [i_27] [i_27] [i_27] [i_27]))));
            }
        } 
    } 
    var_57 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((min((((/* implicit */long long int) var_1)), (var_7))) | (((/* implicit */long long int) (-(((/* implicit */int) var_0))))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_0), (var_9)))))));
    var_58 += ((/* implicit */unsigned int) ((unsigned short) (-(((/* implicit */int) var_8)))));
}
