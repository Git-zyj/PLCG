/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236591
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
    var_16 += var_11;
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_13) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_4 [i_2] [8] [i_4])) : ((+(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))) : (max((((((/* implicit */int) (unsigned char)215)) * (((/* implicit */int) (unsigned char)58)))), (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))));
                                var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_8 [(unsigned char)6]) / (min((((/* implicit */int) (unsigned char)136)), (arr_2 [16])))))) ? (((((/* implicit */_Bool) -537634364)) ? (((/* implicit */int) (unsigned char)180)) : (arr_7 [i_1 + 1] [i_1 - 2] [i_3]))) : ((+(((/* implicit */int) max((arr_12 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0] [i_0]), (arr_3 [i_2] [i_2] [i_2]))))))));
                                var_20 += ((/* implicit */_Bool) 1837556239);
                                var_21 += ((/* implicit */_Bool) arr_6 [i_1] [i_2] [i_3]);
                                var_22 -= var_14;
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min((((((/* implicit */_Bool) 0)) ? ((~(98887104))) : (max((var_5), (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1 - 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                }
                for (int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                {
                    var_24 += ((/* implicit */int) var_7);
                    /* LoopSeq 4 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_16 [18] [i_5] [i_5] [i_5] [i_5])) ? ((-(-98887104))) : (((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(unsigned char)8] [i_0] [i_0])) * (((/* implicit */int) var_14)))))) * ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (arr_14 [i_6]))))))))));
                        var_26 -= arr_11 [i_0] [i_1 - 2] [i_1] [(_Bool)1] [i_5] [i_6];
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) var_10))));
                        var_28 |= ((/* implicit */unsigned char) arr_6 [i_0] [i_1 + 1] [i_5]);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) max((((((/* implicit */int) arr_0 [18] [i_0])) | (((((/* implicit */_Bool) arr_16 [6] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)255)))))), (((/* implicit */int) ((unsigned char) arr_12 [i_0] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1] [i_5]))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            var_30 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_14), (var_15)))) ^ (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_13 [i_9] [i_8] [i_5] [i_5] [i_1] [i_1 - 2] [i_0])))))))) && (((/* implicit */_Bool) (+(max((var_13), (((/* implicit */int) var_2)))))))));
                            var_31 = ((/* implicit */int) max((var_31), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) max(((unsigned char)50), (((/* implicit */unsigned char) arr_21 [i_0] [i_1] [i_5] [i_8] [i_9]))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_8])) ? (min((-812719597), (((/* implicit */int) arr_13 [i_9] [i_8] [i_5] [i_5] [i_1] [i_1] [i_0])))) : (arr_1 [i_1 - 1])))))));
                            var_32 -= ((/* implicit */unsigned char) -1145564970);
                            var_33 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (98887104) : (((/* implicit */int) (unsigned char)151))))) ? (((/* implicit */int) min(((unsigned char)13), ((unsigned char)200)))) : ((-(arr_1 [i_1 - 3])))));
                            var_34 ^= (!(var_1));
                        }
                        var_35 += ((/* implicit */unsigned char) (~(arr_7 [i_1 - 1] [i_1] [i_1 + 1])));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_36 ^= max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_5] [i_1 + 2] [i_5])) : (((((/* implicit */int) (_Bool)1)) % (var_0))))), (((/* implicit */int) arr_11 [i_1 + 1] [i_5] [i_10] [(unsigned char)12] [i_10] [i_10])));
                        /* LoopSeq 4 */
                        for (int i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            var_37 += ((/* implicit */unsigned char) ((arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 1]) / (max((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_5])) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) var_8)))), (arr_30 [i_0] [i_1] [i_5] [i_10] [i_11])))));
                            var_38 = ((/* implicit */int) min((var_38), ((~(((/* implicit */int) (unsigned char)148))))));
                            var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_5]))));
                            var_40 = ((/* implicit */int) min((var_40), ((~(((((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_1 - 2] [i_1 + 1] [i_10])) % (1046639304)))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) arr_2 [(unsigned char)18]))));
                            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)99)), (1034547912)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -256351309)) ? (-1624598610) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_33 [i_1 + 2] [i_1 + 1] [i_1] [i_1] [i_1 - 3] [i_1 + 2])) : (((-2046436667) - (((/* implicit */int) (unsigned char)164)))))) : (((arr_16 [14] [i_1 + 2] [i_1 - 1] [i_1 + 1] [i_1]) & ((-(arr_7 [i_0] [i_0] [i_0]))))))))));
                        }
                        for (int i_13 = 0; i_13 < 20; i_13 += 1) 
                        {
                            var_43 = ((/* implicit */int) min((var_43), ((~(((arr_32 [i_1 - 2] [(unsigned char)4] [i_1] [(unsigned char)4] [i_1 + 2]) ? (((/* implicit */int) arr_0 [(unsigned char)0] [i_1 - 2])) : (min((-7375029), (var_10)))))))));
                            var_44 *= ((/* implicit */_Bool) max(((((-(((/* implicit */int) arr_37 [i_1] [i_1] [i_1] [i_1] [i_1 - 3] [(_Bool)1])))) - (((/* implicit */int) var_14)))), (((((/* implicit */_Bool) (unsigned char)30)) ? (arr_18 [i_1 + 1] [i_1] [i_1] [(_Bool)1]) : (((/* implicit */int) ((((/* implicit */int) var_1)) > (arr_1 [i_0]))))))));
                        }
                        for (unsigned char i_14 = 1; i_14 < 18; i_14 += 4) 
                        {
                            var_45 = ((/* implicit */_Bool) min((var_45), (max((((arr_33 [i_1 - 3] [i_14 + 2] [i_5] [i_0] [i_14] [i_0]) && (arr_33 [i_1 - 1] [i_14 + 1] [i_5] [i_10] [i_14 - 1] [i_5]))), ((!(arr_33 [i_1 + 1] [i_14 + 1] [i_5] [i_10] [i_10] [i_1])))))));
                            var_46 |= ((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_1 [i_14 - 1]))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_14 + 2])))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 1; i_15 < 18; i_15 += 2) 
                        {
                            var_47 = arr_27 [(unsigned char)10];
                            var_48 ^= ((/* implicit */_Bool) ((max(((!(((/* implicit */_Bool) var_12)))), (((((/* implicit */_Bool) -1108536838)) || (var_1))))) ? (((int) max((arr_10 [(_Bool)1] [i_10] [i_1] [(_Bool)1]), (((/* implicit */unsigned char) var_4))))) : (((int) arr_28 [i_15] [i_10] [i_5] [i_5] [i_1 - 3] [i_0]))));
                            var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) max((-21), ((-(-306716263))))))));
                            var_50 = ((/* implicit */_Bool) min((var_50), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_5] [i_15] [i_15 + 1] [i_15 + 1] [i_15 + 1])) ? (((/* implicit */int) arr_13 [i_15] [i_10] [i_5] [i_1] [i_0] [i_0] [i_0])) : ((-(((/* implicit */int) (unsigned char)127))))))) ? (((((((((/* implicit */int) var_3)) ^ (arr_29 [i_0] [i_1] [i_5] [14]))) + (2147483647))) >> (((max((-27), (((/* implicit */int) arr_10 [16] [i_1 + 1] [i_5] [i_10])))) - (49))))) : (((((/* implicit */_Bool) ((unsigned char) arr_13 [i_0] [i_1 + 1] [i_1] [i_5] [i_10] [i_15] [i_15]))) ? (arr_18 [i_15] [i_15] [i_15 - 1] [(unsigned char)6]) : (((/* implicit */int) arr_11 [i_15] [i_10] [(unsigned char)6] [(unsigned char)6] [i_1] [i_0])))))))));
                        }
                    }
                }
                for (int i_16 = 0; i_16 < 20; i_16 += 3) /* same iter space */
                {
                    var_51 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */int) var_2)) : (arr_14 [i_1]))) | (arr_6 [i_0] [i_0] [i_0])))) ? ((~(arr_30 [i_0] [i_1] [i_16] [i_1] [i_1 - 2]))) : ((~(((/* implicit */int) arr_32 [i_0] [i_1 + 1] [i_1] [(_Bool)0] [i_1 + 2]))))));
                    var_52 += ((/* implicit */_Bool) (+(arr_29 [i_0] [i_0] [i_16] [(unsigned char)2])));
                }
                /* vectorizable */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 20; i_18 += 2) 
                    {
                        for (int i_19 = 0; i_19 < 20; i_19 += 1) 
                        {
                            {
                                var_53 = ((/* implicit */int) min((var_53), (((arr_21 [i_1] [i_1 + 2] [i_1 - 1] [i_1] [i_1 + 1]) ? (((/* implicit */int) ((((/* implicit */int) var_1)) > (-306716263)))) : (((/* implicit */int) (_Bool)1))))));
                                var_54 |= ((/* implicit */unsigned char) arr_46 [i_18] [i_1 - 1] [i_17] [i_18]);
                            }
                        } 
                    } 
                    var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) var_13))));
                    var_56 = ((/* implicit */_Bool) min((var_56), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)7))))) ? ((+(((/* implicit */int) arr_25 [i_0] [i_1 + 1] [i_1] [i_17] [i_17])))) : (((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_1] [14] [i_17] [i_17])) ? (-269543449) : (((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [14] [i_0])))))))));
                    var_57 = ((/* implicit */_Bool) min((var_57), (((((/* implicit */_Bool) arr_10 [4] [i_1 - 2] [i_1 + 1] [i_1])) || (((/* implicit */_Bool) arr_10 [(unsigned char)10] [i_1 - 2] [i_1 - 3] [i_1]))))));
                }
                var_58 = ((/* implicit */int) max((var_58), (((/* implicit */int) var_7))));
                arr_56 [i_0] [2] [i_1] |= ((/* implicit */unsigned char) (_Bool)0);
                var_59 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 98887085)) ? (((/* implicit */int) arr_21 [i_1 + 2] [i_1 + 2] [i_1 - 2] [i_1 - 2] [i_1 - 1])) : (var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)5))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)56), (((/* implicit */unsigned char) arr_41 [(_Bool)1]))))))))));
            }
        } 
    } 
    var_60 = ((/* implicit */int) max((var_60), ((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) ^ (((/* implicit */int) var_2)))))))) : (((/* implicit */int) (unsigned char)104))))));
}
