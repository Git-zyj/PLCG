/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28668
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
    var_16 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_12))))))), (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_13)), (5599759269085809212LL)))) ^ (((var_12) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) var_3);
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] [i_1] = (!(((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 + 2])));
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 + 1])))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) /* same iter space */
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_0] [i_4] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_2 - 1] [i_4]))));
                            var_19 += ((/* implicit */unsigned char) var_8);
                            arr_14 [i_1] [i_3] [i_3] [i_2 - 1] [i_1] [i_1] = ((/* implicit */short) arr_7 [i_0] [i_1]);
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (((-(-5599759269085809213LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [(unsigned char)3])) : (((/* implicit */int) arr_9 [i_0]))))))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                        {
                            arr_19 [i_1 + 2] [i_0] [i_0] [i_0] |= ((/* implicit */int) ((short) (-(5599759269085809212LL))));
                            arr_20 [i_1] [i_2 - 1] [i_1] = arr_8 [i_1] [i_2] [i_2] [i_2];
                            arr_21 [i_0] [i_0] [i_1] [i_2] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_21 ^= ((unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_1])) / (-295715768)));
                        }
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                        {
                            arr_26 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [(unsigned char)10] [i_1] [i_1] [i_1 + 2] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_25 [i_1]))));
                            var_22 += ((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (arr_23 [(unsigned char)0] [i_1] [(unsigned char)0] [i_6])))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) arr_12 [(signed char)5] [i_1 - 2] [i_2] [i_2] [i_6]))))))));
                            arr_27 [(short)7] [i_1] [i_2 - 1] [i_1] [i_6] = ((/* implicit */_Bool) ((-295715768) & (((/* implicit */int) arr_1 [i_1 + 2]))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((_Bool) arr_29 [i_0] [(unsigned char)8] [i_8])))));
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
                    {
                        var_25 = (!(((/* implicit */_Bool) var_13)));
                        arr_37 [i_1] = ((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [(unsigned char)2] [i_0] [i_0] [i_0]);
                    }
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
                    {
                        arr_40 [i_1] [8] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)22682)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                        arr_41 [i_1] [i_1] [1] [i_8] [1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_24 [i_0] [i_1] [i_1] [i_1] [i_1] [3]))));
                    }
                    /* LoopSeq 4 */
                    for (short i_11 = 2; i_11 < 9; i_11 += 4) 
                    {
                        arr_44 [i_0] [i_1] [i_1] [(short)0] [i_11 + 3] [i_7] [i_0] = ((/* implicit */unsigned int) arr_12 [i_11 + 3] [i_11] [i_11] [i_11] [i_0]);
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_14))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        arr_48 [i_1] = ((/* implicit */int) ((unsigned char) arr_8 [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1]));
                        var_27 = ((/* implicit */int) arr_38 [i_8] [i_1 + 1] [i_1] [i_1] [i_1 + 2] [i_1 + 2] [i_1]);
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) -3067144261474342625LL))));
                    }
                    for (long long int i_13 = 3; i_13 < 11; i_13 += 3) 
                    {
                        arr_51 [i_0] [i_1] [i_1] [i_7] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_49 [i_1 + 2] [i_1] [i_13 - 3] [i_0] [i_13 - 1]))) & (arr_23 [i_1 + 1] [i_1 + 1] [i_13 - 3] [i_8])));
                        var_29 = ((/* implicit */int) min((var_29), ((-(((/* implicit */int) arr_49 [i_1 + 1] [i_1 + 1] [i_13 - 3] [i_1 + 1] [i_13 - 3]))))));
                        var_30 = ((/* implicit */unsigned char) (!(arr_38 [(short)8] [i_13 - 2] [(unsigned short)2] [(short)8] [9] [i_0] [i_0])));
                    }
                    for (unsigned char i_14 = 3; i_14 < 9; i_14 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned char) var_1);
                        var_32 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1 - 1] [i_14] [i_14 + 1] [(_Bool)1] [i_1 - 1] [(unsigned short)6])) ? (((/* implicit */int) arr_17 [i_14] [i_8] [9U] [9U])) : (((/* implicit */int) (unsigned short)22682))));
                        arr_55 [(unsigned short)1] [i_0] [i_1] [i_8] [i_14 + 1] [i_1] = ((/* implicit */unsigned short) ((short) var_8));
                        var_33 = ((/* implicit */unsigned char) ((short) arr_31 [i_7] [i_7] [i_7] [i_7] [i_14 + 1] [i_8]));
                    }
                }
                for (short i_15 = 3; i_15 < 11; i_15 += 4) 
                {
                    arr_60 [i_0] [i_1] [i_1] [(unsigned char)10] [i_15] = ((/* implicit */unsigned char) ((long long int) arr_11 [i_0] [i_1 - 2] [i_7] [i_15] [i_1 + 2] [i_15 + 1] [i_1 + 2]));
                    var_34 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) arr_52 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1])) : (arr_16 [i_0] [i_7] [i_15 - 2] [i_1] [i_1 - 1])));
                    var_35 = ((/* implicit */unsigned short) -1401948708581608702LL);
                }
                /* LoopSeq 3 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    arr_63 [(unsigned short)3] [i_0] [i_1] [i_1] [i_16] = ((/* implicit */signed char) var_2);
                    var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 - 2] [i_1] [i_1 - 1] [i_1] [i_1 + 2] [i_1] [i_1 + 2])))))));
                    var_37 = ((/* implicit */_Bool) ((long long int) arr_15 [i_1] [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_1] [i_1 + 2]));
                    var_38 = ((/* implicit */_Bool) max((var_38), ((!(((/* implicit */_Bool) ((5599759269085809212LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_7] [5U] [i_0] [i_0] [i_1]))))))))));
                    var_39 = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((arr_31 [0] [8LL] [i_1 + 2] [i_1 - 1] [8LL] [i_1 - 2]) >> (((((/* implicit */int) arr_25 [i_1])) - (6633)))))) : (((/* implicit */unsigned short) ((arr_31 [0] [8LL] [i_1 + 2] [i_1 - 1] [8LL] [i_1 - 2]) >> (((((((/* implicit */int) arr_25 [i_1])) - (6633))) - (19098))))));
                }
                for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    arr_67 [i_0] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)94))) < (var_5))) ? (((/* implicit */int) arr_65 [i_1] [i_1] [i_7] [i_7])) : (((/* implicit */int) (short)31678))));
                    var_40 = ((/* implicit */unsigned int) arr_62 [i_0] [i_0] [(_Bool)1] [i_0]);
                }
                for (unsigned char i_18 = 2; i_18 < 10; i_18 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_19 = 3; i_19 < 9; i_19 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((arr_53 [i_0] [i_0] [i_1 - 1] [i_18 + 2]) < (((/* implicit */int) (unsigned short)42853)))))));
                        var_42 = arr_50 [i_19 - 1];
                        arr_76 [i_1] [i_7] = ((((/* implicit */_Bool) arr_66 [i_1 + 2] [i_1 + 2] [i_18 + 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((((_Bool)0) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_0))))));
                    }
                    for (long long int i_20 = 0; i_20 < 12; i_20 += 4) 
                    {
                        var_43 |= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_75 [i_0] [i_0] [i_0] [8LL] [i_18 + 2] [8LL]))));
                        arr_79 [i_0] [(unsigned short)8] [i_18] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (((((/* implicit */_Bool) arr_75 [i_1] [i_1] [i_7] [i_18] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (0U)))));
                        var_44 = ((/* implicit */unsigned char) ((unsigned short) arr_74 [(short)0] [i_18 + 2] [i_7] [i_1 - 2] [i_0]));
                        var_45 += ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)31678)) : (((/* implicit */int) (_Bool)0)))));
                    }
                    var_46 = ((/* implicit */unsigned short) arr_31 [i_0] [i_0] [i_0] [i_1 - 2] [i_0] [i_0]);
                    var_47 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_69 [i_0] [i_18 + 1] [i_1] [i_7])) <= (((/* implicit */int) arr_69 [i_18 + 2] [i_1] [i_1] [i_0]))));
                    var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_62 [i_18 - 1] [i_7] [i_0] [i_0])) ? (arr_16 [i_0] [i_0] [i_1 + 1] [i_1] [i_18 - 1]) : (((int) arr_62 [i_0] [i_0] [i_0] [i_0]))));
                    var_49 = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_1])) ? (((/* implicit */int) arr_25 [i_1])) : (((/* implicit */int) arr_25 [i_1]))));
                }
            }
        }
        for (short i_21 = 0; i_21 < 12; i_21 += 4) 
        {
            var_50 = ((/* implicit */long long int) max((var_50), (((/* implicit */long long int) (!(((/* implicit */_Bool) -5599759269085809213LL)))))));
            var_51 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)0))));
        }
        for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 4) 
        {
            arr_85 [i_22] [i_0] = ((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) arr_28 [(unsigned char)8] [i_0] [i_0])))));
            arr_86 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_12))));
            /* LoopSeq 1 */
            for (unsigned char i_23 = 3; i_23 < 11; i_23 += 1) 
            {
                arr_89 [i_0] [i_22] [i_23] [i_23 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (arr_32 [i_0] [i_22] [i_22] [i_23]))))));
                var_52 = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) arr_32 [i_0] [i_22] [i_0] [i_23])))));
                var_53 = ((/* implicit */unsigned long long int) arr_61 [i_22] [(unsigned short)10] [(unsigned short)10] [i_22] [i_22] [i_22]);
                var_54 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_58 [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_11 [(short)2] [i_22] [i_22] [i_22] [i_22] [i_22] [i_22]))))) : (arr_18 [i_23 - 1] [i_23 - 2] [i_23 - 2] [i_23 - 2] [i_23 + 1]));
            }
            var_55 = ((/* implicit */unsigned long long int) (!(var_10)));
            arr_90 [i_22] = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)64));
        }
    }
}
