/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19211
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        arr_2 [i_0 - 2] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (unsigned char)202))));
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (unsigned short i_2 = 3; i_2 < 12; i_2 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) arr_7 [i_2 - 2] [i_2 + 1])) : (((/* implicit */int) var_7)))) <= ((~(((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 3]))))));
                var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_7 [(signed char)7] [(unsigned char)7])), ((~(((/* implicit */int) (_Bool)0))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 3) /* same iter space */
                    {
                        var_21 -= ((/* implicit */unsigned char) arr_4 [i_3]);
                        /* LoopSeq 2 */
                        for (signed char i_5 = 2; i_5 < 11; i_5 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_1] [i_1] [i_2] [i_3 + 1] [i_4] [i_4] [i_4]))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (~(((/* implicit */int) var_17)))))));
                            var_24 = ((/* implicit */int) -3LL);
                            var_25 += ((/* implicit */unsigned long long int) arr_12 [i_5] [(unsigned char)11] [i_3 + 1] [(signed char)1] [i_5 + 2] [(signed char)5] [3]);
                            arr_15 [i_1] [i_2] = ((/* implicit */long long int) (~((~(((/* implicit */int) var_3))))));
                        }
                        for (signed char i_6 = 2; i_6 < 11; i_6 += 2) /* same iter space */
                        {
                            arr_19 [i_2] [i_2 + 1] [i_2] [i_4] [i_2] = ((/* implicit */signed char) arr_9 [i_3] [i_3] [i_3]);
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_3] [i_4] [i_6 + 1] [i_6 + 2] [i_2])) ? (var_15) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)53))))))))));
                            var_27 = ((/* implicit */unsigned long long int) 4294967295U);
                            var_28 = ((/* implicit */int) arr_18 [i_1] [i_2 - 1] [i_3 + 1] [i_4 + 2] [i_6 - 2]);
                        }
                        var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [i_2] [i_2] [i_2] [i_3] [i_4] [i_1])) ? (4754227027839809834LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)37402))))) : ((~(arr_6 [i_1] [i_1] [i_2]))));
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 3) /* same iter space */
                    {
                        arr_24 [i_2] [(_Bool)1] [(_Bool)1] [i_7 + 1] = ((/* implicit */unsigned int) (~(5381759100501008191LL)));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_1] [i_2 - 3])) | (((/* implicit */int) (unsigned short)7209))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)37402)) && (((/* implicit */_Bool) var_7))));
                        var_32 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) var_8))))));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 3) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned long long int) arr_17 [i_1] [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [(_Bool)1]);
                        arr_27 [i_3] [i_2] [(unsigned char)0] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)73)) <= (269547257))) ? (((/* implicit */int) (unsigned char)178)) : (((((/* implicit */int) (unsigned char)42)) / (((/* implicit */int) (unsigned short)28119))))));
                        var_34 = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_8 + 2] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8] [1ULL] [i_8 + 1])) | (((/* implicit */int) var_12))));
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 3) /* same iter space */
                    {
                        arr_30 [i_2] [i_2] = ((/* implicit */signed char) arr_25 [i_1] [(unsigned short)2] [i_2] [i_9] [i_9]);
                        var_35 -= ((/* implicit */signed char) (~(1938528246U)));
                        var_36 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_9] [i_9] [7] [i_9] [(_Bool)1] [i_9 - 1] [i_9])) ? (arr_3 [i_3 + 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))));
                        arr_31 [i_1] [10LL] [i_2] = ((/* implicit */unsigned char) 876524266);
                        arr_32 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_25 [(signed char)9] [i_2 - 2] [i_2] [i_2 - 3] [i_2 + 1]) / (((/* implicit */int) var_9))))) ? (var_15) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)51)))))));
                    }
                    var_37 = ((/* implicit */unsigned char) arr_20 [i_1] [i_2]);
                    arr_33 [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) ((2356439080U) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (var_2)))))));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_10 = 1; i_10 < 11; i_10 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 12; i_11 += 2) 
                    {
                        for (signed char i_12 = 4; i_12 < 11; i_12 += 3) 
                        {
                            {
                                var_38 -= ((/* implicit */int) (_Bool)0);
                                var_39 = (~(((/* implicit */int) var_17)));
                                var_40 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                                var_41 += ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) >> (((arr_6 [i_1] [i_1] [10U]) - (1500567036U)))));
                            }
                        } 
                    } 
                    arr_41 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_10)))) / (((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))));
                    var_42 = ((/* implicit */unsigned char) (~((~(-176051512)))));
                    var_43 -= ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) var_17)) + (2147483647))) >> (((/* implicit */int) var_16))))));
                }
                /* vectorizable */
                for (unsigned char i_13 = 1; i_13 < 11; i_13 += 2) /* same iter space */
                {
                    arr_44 [i_2] [6LL] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) - (((((/* implicit */_Bool) 13820986790896234250ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_29 [i_1] [i_1] [i_1] [i_13] [i_13])))));
                    var_44 = 2356439049U;
                    var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 13632977705901261752ULL)) ? (2528053832663172777ULL) : (((/* implicit */unsigned long long int) 2356439025U))));
                    var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1]))) + (15918690241046378839ULL))))));
                }
                for (unsigned char i_14 = 1; i_14 < 11; i_14 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        var_47 += max((arr_20 [i_1] [4LL]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1425992100)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-549975359457714310LL)))) ? (((arr_21 [i_1] [i_1]) / (((/* implicit */int) arr_16 [i_14] [i_14])))) : (-1463430092))));
                        var_48 = ((/* implicit */unsigned char) var_4);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_16 = 1; i_16 < 11; i_16 += 1) /* same iter space */
                        {
                            arr_51 [i_1] [i_2 - 2] [i_2] [i_15 - 1] [i_16] [(unsigned short)12] = ((/* implicit */int) var_10);
                            var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) ((arr_22 [i_16] [i_16 - 1] [(signed char)6] [i_16] [i_16 - 1] [i_15 - 1]) ? (((/* implicit */int) arr_9 [i_16 - 1] [(unsigned short)12] [i_16 - 1])) : ((~(((/* implicit */int) (unsigned char)154)))))))));
                            var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) arr_37 [i_1] [i_2] [(unsigned short)12] [(signed char)6] [i_16 + 1] [i_14]))));
                            var_51 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                        }
                        /* vectorizable */
                        for (int i_17 = 1; i_17 < 11; i_17 += 1) /* same iter space */
                        {
                            var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -674755109)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6730))) : (-7715148889119947220LL)));
                            var_53 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)94))));
                        }
                        arr_54 [i_14] [i_2] [i_14] [i_14] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_52 [i_2 - 1] [i_2 - 1] [i_14 + 1] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_52 [i_2 - 1] [i_2 - 1] [i_14 + 2] [i_15 - 1] [(signed char)5] [i_15 - 1] [5U])))));
                    }
                    var_54 = ((/* implicit */long long int) max(((~(((/* implicit */int) var_0)))), (((/* implicit */int) var_9))));
                    var_55 = ((/* implicit */unsigned char) (~(1938528246U)));
                }
                var_56 = ((/* implicit */unsigned long long int) min((var_56), (((/* implicit */unsigned long long int) (signed char)106))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
    {
        for (unsigned int i_19 = 2; i_19 < 11; i_19 += 1) 
        {
            {
                var_57 = ((/* implicit */unsigned short) min((var_57), (arr_35 [(unsigned char)11] [i_19 - 2])));
                var_58 += ((/* implicit */long long int) ((arr_42 [(unsigned short)12]) <= (((/* implicit */unsigned long long int) max((arr_45 [i_18] [i_19 - 2] [i_18 - 1]), (arr_45 [i_18] [i_19] [i_18 - 1]))))));
                var_59 = ((/* implicit */unsigned char) min((var_59), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (min(((~(1126304331))), (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (-1677416545981125134LL)))) ? ((~(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) arr_46 [i_18] [i_19] [i_18] [i_19 + 2])) ? (-1) : (((/* implicit */int) arr_4 [i_18])))))))))));
            }
        } 
    } 
    var_60 = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_17)) + (((/* implicit */int) ((((/* implicit */int) var_0)) == (1083047743))))))));
}
