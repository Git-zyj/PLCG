/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4469
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
    var_17 &= ((/* implicit */unsigned char) (!(((((long long int) (unsigned char)39)) > ((~(var_2)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2 + 1] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 1] [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 1] [i_3 + 1] [i_3 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? (min((var_3), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1] [i_2 + 1] [i_3 + 1])) << (((((/* implicit */int) (unsigned short)44609)) - (44593))))))))));
                                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_12 [(unsigned char)5] [(unsigned char)1] [i_2 - 1] [i_2 - 1]);
                                var_19 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_13 [i_3 + 1] [(unsigned char)3] [(unsigned short)1] [i_2 + 1] [i_0]))))));
                            }
                        } 
                    } 
                } 
                var_20 = (unsigned char)112;
                arr_15 [i_0] [i_1] = arr_4 [(unsigned char)0] [i_1] [(unsigned char)0];
                /* LoopSeq 4 */
                for (long long int i_5 = 1; i_5 < 9; i_5 += 3) 
                {
                    var_21 = ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_1 [i_0] [i_0])) < (((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) (unsigned short)13453)) : (((/* implicit */int) (unsigned char)199))))))));
                    arr_19 [i_0] [i_1] [0LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0] [i_0])))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            var_22 = arr_8 [i_0] [i_5] [i_6];
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) -8948473749535931897LL)) ? (((/* implicit */int) (unsigned short)35286)) : (((/* implicit */int) (unsigned char)45))));
                            var_24 |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)207)) << (((3035543580155592584LL) - (3035543580155592570LL)))));
                            var_25 = arr_12 [i_0] [i_1] [i_5] [i_1];
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_5] [i_0] [i_5 + 1])) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_5] [i_6] [i_5 + 1]))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)125))));
                            var_28 = ((/* implicit */unsigned short) arr_9 [3LL] [i_6]);
                            arr_29 [i_0] [i_8] [(unsigned char)7] [i_8] = ((/* implicit */unsigned char) var_12);
                            var_29 = ((/* implicit */unsigned short) (+(var_3)));
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 4; i_9 < 9; i_9 += 3) 
                        {
                            var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5 - 1] [i_6] [i_5] [i_6]))) : (((((/* implicit */_Bool) arr_31 [i_1])) ? (arr_8 [i_1] [i_5] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
                            var_31 = ((/* implicit */long long int) arr_22 [8LL] [i_1] [6LL]);
                            var_32 = ((/* implicit */long long int) ((unsigned char) arr_2 [i_0] [i_0]));
                            var_33 += ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_9 - 1] [i_0] [i_5 - 1] [i_6])) << (((((/* implicit */int) var_10)) - (209)))));
                        }
                        arr_33 [i_0] [i_1] [i_5] [i_0] [i_1] [i_6] = var_2;
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 1; i_10 < 7; i_10 += 1) 
                        {
                            arr_37 [8LL] [8LL] [i_5] [(unsigned char)1] [i_10] &= ((/* implicit */unsigned char) arr_12 [i_10 + 3] [i_5 + 1] [(unsigned char)8] [i_5 + 1]);
                            var_34 |= arr_22 [2LL] [i_1] [i_5];
                            arr_38 [i_10 + 2] [i_1] [i_5 + 1] [i_1] [(unsigned char)8] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned short) (unsigned char)198))), (3943536249176905182LL)));
                            var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)126)) ? (3943536249176905180LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)53))) : ((-(3943536249176905182LL))))))));
                            var_36 = ((/* implicit */long long int) (unsigned char)229);
                        }
                    }
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
                    {
                        arr_43 [i_0] [i_1] [i_5] [i_1] [i_11] [i_5] &= var_5;
                        var_37 = ((/* implicit */unsigned char) var_8);
                        var_38 += ((((/* implicit */_Bool) var_5)) ? (((long long int) (unsigned short)53643)) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7145678377154485943LL)) ? (((/* implicit */int) arr_1 [(unsigned char)2] [(unsigned char)2])) : (((/* implicit */int) arr_42 [i_0]))))) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) arr_25 [i_1]))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 2) /* same iter space */
                    {
                        arr_47 [i_0] [i_0] [(unsigned short)6] [i_12] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)18)) ? (5553942562992292125LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)57))))) / (((/* implicit */long long int) ((/* implicit */int) ((3943536249176905182LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_39 [(unsigned char)8] [(unsigned short)6] [i_12] [i_12])))))))))) ? (((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)53457))))) : (var_2))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)62579))))));
                        var_39 = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_0] [i_1] [i_1] [i_5 - 1])) ? (((/* implicit */int) arr_39 [i_0] [i_1] [(unsigned char)3] [i_5 - 1])) : (((/* implicit */int) arr_39 [i_0] [i_1] [i_5 - 1] [i_5 + 1]))))), (((((/* implicit */_Bool) ((long long int) arr_22 [i_0] [i_1] [i_1]))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_5 + 1] [i_12]))))) : (-899803401440113017LL))));
                    }
                    var_40 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_1] [i_5] [i_1])) : (((/* implicit */int) arr_45 [i_0] [3LL] [i_1] [i_5 + 1]))))))))));
                }
                for (unsigned char i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    var_41 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) (unsigned char)203)))));
                    arr_50 [i_13] [(unsigned char)1] [i_1] [(unsigned char)1] |= arr_13 [i_0] [i_0] [(unsigned short)8] [i_1] [i_13];
                    var_42 = min((max((arr_27 [i_0] [i_0] [i_0] [i_1] [i_1]), (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) ((unsigned char) (unsigned char)203))));
                    var_43 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_39 [i_0] [i_1] [(unsigned char)8] [i_13]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)57))))) >= (max((((/* implicit */long long int) var_5)), (arr_44 [i_0] [i_1] [i_1] [i_13] [i_13]))))))) : (var_0)));
                }
                for (long long int i_14 = 1; i_14 < 7; i_14 += 1) 
                {
                    arr_55 [(unsigned char)3] [(unsigned char)8] [i_0] |= ((/* implicit */unsigned short) 899803401440113016LL);
                    /* LoopNest 2 */
                    for (long long int i_15 = 3; i_15 < 9; i_15 += 4) 
                    {
                        for (long long int i_16 = 1; i_16 < 9; i_16 += 4) 
                        {
                            {
                                var_44 -= ((/* implicit */unsigned char) var_8);
                                var_45 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_42 [i_16 + 1])) : (((/* implicit */int) arr_28 [i_15] [i_1] [i_15])))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_22 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) arr_9 [i_16] [i_1]))))));
                                var_46 += ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_53 [i_14 + 3] [(unsigned short)8] [i_15 - 3] [i_16 + 1]), (arr_53 [i_14 - 1] [i_15 + 1] [i_15 - 1] [i_16 + 1]))))) : (min((349434432820646119LL), (((/* implicit */long long int) (unsigned char)199)))));
                                arr_60 [i_15] [i_15] = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)95)), (arr_12 [i_16 - 1] [(unsigned short)7] [i_1] [i_1])))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0] [i_1]))) : (var_3))))), (((/* implicit */long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    var_47 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_14])) ? (arr_2 [i_0] [i_1]) : (max((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [i_14] [i_1] [i_14])) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (unsigned char)6)))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 3; i_17 < 7; i_17 += 4) 
                    {
                        var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_30 [i_0] [i_14] [i_17 + 2] [i_14 + 2] [i_14])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)29)))))))) ? (((/* implicit */int) arr_25 [i_0])) : (((/* implicit */int) (unsigned char)97))));
                        /* LoopSeq 2 */
                        for (unsigned char i_18 = 0; i_18 < 10; i_18 += 2) 
                        {
                            var_49 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_18] [6LL] [i_17 - 2] [i_14 + 1] [i_14 + 1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)54044)))))));
                            arr_68 [i_0] [(unsigned short)6] [i_14] [(unsigned short)6] [(unsigned char)5] = ((/* implicit */unsigned short) var_15);
                        }
                        /* vectorizable */
                        for (long long int i_19 = 0; i_19 < 10; i_19 += 2) 
                        {
                            var_50 |= ((/* implicit */long long int) arr_30 [i_14 + 1] [i_14 + 1] [i_17 + 2] [i_17 - 3] [i_17 + 1]);
                            var_51 -= ((/* implicit */long long int) ((unsigned char) arr_25 [i_0]));
                            arr_73 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_59 [i_19] [i_14 + 2] [i_14 + 1] [i_14 + 1] [i_19];
                        }
                        /* LoopSeq 4 */
                        for (unsigned char i_20 = 0; i_20 < 10; i_20 += 2) 
                        {
                            var_52 |= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)47))));
                            var_53 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_18 [(unsigned char)5] [i_0] [(unsigned short)0] [i_17])) ? (((/* implicit */int) arr_63 [i_0] [i_1] [i_14] [i_20])) : (((/* implicit */int) arr_65 [i_0] [(unsigned char)0] [i_14] [i_0] [i_20])))), ((~(((/* implicit */int) arr_69 [i_0] [i_0] [i_1] [i_14] [i_14] [i_17] [i_14]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (unsigned char)12))))) ? (((/* implicit */int) arr_45 [i_14] [3LL] [i_14 + 2] [i_14 - 1])) : ((-(((/* implicit */int) arr_46 [i_0] [i_1] [i_14] [i_17] [i_14] [i_1])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_14 + 1] [i_17 - 2] [i_1])))))));
                        }
                        for (unsigned short i_21 = 0; i_21 < 10; i_21 += 4) 
                        {
                            var_54 += var_6;
                            var_55 = ((/* implicit */unsigned char) var_2);
                            var_56 = ((/* implicit */long long int) ((unsigned char) max((var_9), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0] [(unsigned char)1]))))))));
                            var_57 = ((/* implicit */long long int) (+(((((/* implicit */int) var_4)) / (((/* implicit */int) var_9))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_22 = 2; i_22 < 8; i_22 += 3) 
                        {
                            arr_84 [i_0] [(unsigned short)4] [i_1] [i_14] [i_17] [i_0] = ((/* implicit */long long int) arr_11 [i_14 + 1] [i_17] [i_17 - 3] [i_17] [i_22 - 2]);
                            var_58 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6135341564662245686LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_17 + 2] [i_0]))) : (var_0)))) ? (arr_23 [(unsigned char)0]) : (((/* implicit */long long int) ((/* implicit */int) arr_83 [i_1] [i_1] [i_14 - 1] [i_14 - 1] [(unsigned short)2] [i_22 + 1] [i_22])))));
                        }
                        /* vectorizable */
                        for (unsigned char i_23 = 0; i_23 < 10; i_23 += 3) 
                        {
                            var_59 = ((8288154029325275168LL) | (-6135341564662245687LL));
                            arr_87 [i_0] [i_1] [i_17] [i_17] [i_17] [i_17] [i_23] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_85 [i_0] [i_0] [i_0] [(unsigned char)7] [i_0] [(unsigned char)5])) < (((/* implicit */int) var_6)))))) : (arr_6 [i_14 + 3] [i_1] [i_14] [i_17 - 2]));
                            var_60 = var_2;
                        }
                        arr_88 [i_0] = var_10;
                        var_61 -= ((((/* implicit */_Bool) (-((-(-3943536249176905183LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_17 - 1] [i_0] [i_14] [i_0] [i_0])) ? (var_2) : (var_16)))) ? (((((/* implicit */_Bool) arr_81 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))) : (arr_3 [i_1] [i_0]))) : (arr_8 [i_1] [i_1] [i_17]))) : (arr_70 [(unsigned char)3] [(unsigned char)3] [(unsigned char)3] [i_14] [6LL]));
                    }
                }
                for (unsigned char i_24 = 0; i_24 < 10; i_24 += 3) 
                {
                    arr_92 [(unsigned char)2] [i_0] [i_24] = ((/* implicit */unsigned short) (unsigned char)60);
                    arr_93 [i_0] &= ((/* implicit */long long int) min((var_4), (((/* implicit */unsigned short) var_10))));
                    var_62 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 349434432820646119LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -899803401440113028LL)) ? (((/* implicit */int) arr_54 [i_24] [i_24] [i_1] [i_0])) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (arr_67 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (max((-3943536249176905183LL), (((/* implicit */long long int) (unsigned char)53)))) : (((/* implicit */long long int) (~((~(((/* implicit */int) var_7)))))))));
                    arr_94 [i_24] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) max(((+(3866900646159973528LL))), (((((/* implicit */_Bool) 5169047438579343629LL)) ? (var_8) : (((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [1LL] [i_0] [i_0] [i_0]))) : (-3943536249176905175LL)))))));
                    arr_95 [i_1] [i_1] [i_0] = (unsigned char)186;
                }
            }
        } 
    } 
}
