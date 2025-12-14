/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38357
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_17 -= ((/* implicit */unsigned char) ((arr_5 [i_0 + 1] [i_0 + 1] [i_1]) < (((/* implicit */long long int) 158387245U))));
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 + 1] [i_1])) > (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */int) var_11))))));
        }
        for (long long int i_2 = 4; i_2 < 10; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_0), (((/* implicit */short) arr_2 [i_0] [i_2 + 1]))))) ? ((-(2468439556U))) : (max((4136580051U), (2736971795U)))));
                var_19 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_1 [i_0 + 1])) : (var_6))) & (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (var_5) : (((/* implicit */unsigned long long int) 1557995500U))))));
                arr_11 [i_3] [i_2 - 2] [6ULL] [i_3] = ((((/* implicit */int) ((min((-991559457), (((/* implicit */int) arr_2 [i_2] [i_3])))) <= (((((-210271156) + (2147483647))) << (((((/* implicit */int) var_9)) - (6)))))))) << (((((/* implicit */int) (unsigned short)23321)) - (23299))));
            }
            /* vectorizable */
            for (unsigned short i_4 = 1; i_4 < 10; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_15 [i_0 - 1] [i_2 - 4] [i_2 + 1] [i_4 + 2] [i_6]))));
                            arr_19 [i_0] [i_2] [i_4] [i_5] [i_5] [i_6] &= ((/* implicit */short) (((!(((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) arr_5 [i_5] [i_4 - 1] [i_4 - 1]))));
                            var_21 += ((((/* implicit */int) (unsigned short)42215)) < (((/* implicit */int) arr_8 [i_4 - 1] [i_4] [i_4])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        {
                            arr_26 [i_0] [(_Bool)0] [i_8] [2] [(_Bool)0] [i_7] [10ULL] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_7)) + (arr_12 [i_4 - 1] [i_4 + 1] [i_4 + 2] [i_4 + 1])));
                            arr_27 [(short)8] [0] [i_0] [i_0] [i_2] [0] [i_0] &= var_13;
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((arr_24 [8U] [i_0] [i_0] [i_0] [(_Bool)1] [i_0 + 1] [10LL]) >> (((((/* implicit */int) var_12)) - (6910))))))));
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (+(arr_20 [i_8]))))));
                        }
                    } 
                } 
                var_24 = ((_Bool) ((unsigned short) 356758924744889608LL));
                /* LoopSeq 4 */
                for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
                {
                    var_25 -= ((/* implicit */unsigned int) arr_14 [i_0 - 1] [(unsigned short)8] [i_2 - 3] [9ULL] [i_9]);
                    var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */int) var_9)) & (arr_21 [i_0] [i_9] [i_4 - 1] [i_0] [8])))));
                }
                for (unsigned int i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        arr_35 [i_0 + 1] [i_2] [4] [i_11] [i_10] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) | (arr_34 [i_0 - 1] [i_2 - 4] [i_11] [i_4 + 1] [i_4 + 1])));
                        var_27 = ((/* implicit */short) ((unsigned int) (-(((/* implicit */int) var_15)))));
                        var_28 = ((/* implicit */unsigned int) arr_7 [i_0]);
                        arr_36 [8LL] [i_4] [3] [i_10] [i_11] [i_10] = ((/* implicit */unsigned int) arr_24 [i_11] [(unsigned char)0] [8] [8] [i_11] [10] [0U]);
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) arr_9 [i_0 + 1] [i_11])) : (158387227U)));
                    }
                    arr_37 [i_10] [9] [i_2 + 1] [6] = ((/* implicit */unsigned int) var_0);
                }
                for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) /* same iter space */
                {
                    var_30 += ((/* implicit */long long int) ((unsigned char) arr_14 [i_0 - 1] [i_2] [i_2 - 1] [i_2 - 4] [i_4 + 2]));
                    var_31 &= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)42215))));
                }
                for (unsigned int i_13 = 0; i_13 < 12; i_13 += 4) /* same iter space */
                {
                    arr_42 [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_2 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_2 - 3] [i_4] [i_4] [i_2 - 3]))) : (((long long int) var_9))));
                    var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) arr_13 [9] [4U] [i_4] [i_0 - 1]))));
                    var_33 += ((/* implicit */_Bool) var_1);
                }
            }
            for (unsigned short i_14 = 0; i_14 < 12; i_14 += 4) /* same iter space */
            {
                var_34 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_2 [i_2 - 2] [i_0 + 1])) < (((/* implicit */int) arr_2 [i_2 - 2] [i_0 + 1])))));
                var_35 *= ((/* implicit */unsigned char) max((((/* implicit */int) var_9)), (arr_7 [i_0])));
            }
            for (unsigned short i_15 = 0; i_15 < 12; i_15 += 4) /* same iter space */
            {
                var_36 = ((/* implicit */_Bool) var_1);
                arr_48 [i_15] [i_2] [i_0 - 1] = ((/* implicit */int) min((max((((/* implicit */long long int) arr_31 [i_0 + 1] [i_2 + 2] [i_2 - 3])), (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_2 - 3] [i_2] [0] [i_2]))) - (var_2))))), (((/* implicit */long long int) max((max((-1304071830), (arr_38 [i_15]))), (min((var_13), (arr_18 [i_2] [(_Bool)1] [i_15] [i_2] [(unsigned char)1]))))))));
            }
            var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((arr_44 [i_0 + 1] [i_2 - 1] [i_2 - 1] [i_2]) ? (max((((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_0 + 1] [i_0 + 1] [(short)1] [i_2 - 4] [i_2 - 1])), (var_11)))), (2147483633))) : (((/* implicit */int) arr_0 [i_0])))))));
            var_38 = ((/* implicit */int) min((var_38), (((((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) >> (((arr_38 [i_2 - 1]) - (2020859622))))))))) >> (((((((((/* implicit */int) (unsigned short)32832)) ^ (((/* implicit */int) arr_47 [i_0] [i_0])))) >> (((/* implicit */int) ((var_6) <= (10468432825176193848ULL)))))) - (6280)))))));
        }
        for (long long int i_16 = 4; i_16 < 10; i_16 += 3) /* same iter space */
        {
            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) max((((/* implicit */long long int) var_0)), (max((min((((/* implicit */long long int) var_8)), (-9114262501427374830LL))), (((/* implicit */long long int) max((arr_23 [i_0 - 1] [i_0 - 1] [i_16 - 4] [6ULL]), (((/* implicit */int) var_8))))))))))));
            arr_51 [i_0] = ((/* implicit */unsigned int) ((((max((((/* implicit */long long int) arr_0 [i_0 - 1])), (arr_33 [2] [4U]))) / (((/* implicit */long long int) arr_4 [i_0 - 1] [i_0 - 1])))) + (((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0 - 1] [i_0 + 1]))) + (arr_14 [i_0] [i_16 - 4] [(unsigned short)8] [i_16] [i_16])))));
        }
        var_40 = ((/* implicit */unsigned int) (-(max((((/* implicit */int) arr_46 [i_0 + 1] [i_0 - 1] [i_0 + 1] [0])), (var_14)))));
        arr_52 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) max(((!(((/* implicit */_Bool) arr_39 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1])))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1] [i_0])) && (((/* implicit */_Bool) 9223372036854775807LL))))))) % (((/* implicit */int) ((((/* implicit */unsigned long long int) -9223372036854775807LL)) < (arr_41 [i_0 - 1] [i_0 + 1] [(unsigned char)5]))))));
    }
    var_41 = ((/* implicit */int) var_6);
    /* LoopSeq 2 */
    for (unsigned short i_17 = 0; i_17 < 12; i_17 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_18 = 2; i_18 < 10; i_18 += 1) 
        {
            arr_57 [i_18] [i_18] = ((((/* implicit */int) var_4)) > (-2147483634));
            /* LoopSeq 1 */
            for (unsigned short i_19 = 0; i_19 < 12; i_19 += 4) 
            {
                var_42 &= ((/* implicit */unsigned short) (~(142989288169013248ULL)));
                var_43 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_54 [i_18 + 1])) || (((/* implicit */_Bool) arr_58 [i_18] [i_18 + 2] [i_19] [i_19]))));
                /* LoopSeq 2 */
                for (short i_20 = 0; i_20 < 12; i_20 += 3) 
                {
                    arr_63 [i_17] [i_20] [i_20] [i_17] [i_18] = ((/* implicit */int) ((arr_4 [i_17] [i_18 - 1]) + (((/* implicit */unsigned int) 2147483636))));
                    arr_64 [i_17] [i_17] [i_17] [i_19] [i_20] &= ((/* implicit */short) arr_22 [i_17] [i_18] [(short)3] [i_20] [i_20]);
                    var_44 = ((/* implicit */unsigned int) min((var_44), (((unsigned int) arr_53 [i_20]))));
                }
                for (unsigned long long int i_21 = 0; i_21 < 12; i_21 += 3) 
                {
                    var_45 -= ((/* implicit */_Bool) arr_60 [i_18 - 1]);
                    var_46 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_21] [i_18 - 1] [i_18] [i_18])) && (((/* implicit */_Bool) (unsigned char)194))));
                }
            }
        }
        var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) ((-306796758) < (((/* implicit */int) arr_46 [i_17] [i_17] [i_17] [i_17])))))));
        var_48 *= ((/* implicit */unsigned long long int) max((((/* implicit */int) var_12)), (max((arr_68 [i_17] [i_17] [9] [9] [i_17]), (arr_68 [i_17] [i_17] [i_17] [(unsigned short)1] [i_17])))));
    }
    for (unsigned short i_22 = 0; i_22 < 22; i_22 += 3) 
    {
        var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) max((min((((((/* implicit */int) arr_70 [i_22])) / (var_13))), (var_10))), (-1284345714))))));
        arr_72 [i_22] = ((/* implicit */unsigned int) ((_Bool) ((max((2039358065U), (((/* implicit */unsigned int) -1163087515)))) >> (((/* implicit */int) var_9)))));
    }
    var_50 = ((/* implicit */int) max((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))) | ((~(2736971795U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) 1304071832)) : (6615097021059664428LL)))) ? (((/* implicit */int) (unsigned short)54709)) : (((/* implicit */int) var_15)))))));
    var_51 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32754)) / (-1967617882)))) ? (((/* implicit */int) var_8)) : (max((((/* implicit */int) (unsigned char)228)), (var_10)))))), (((((/* implicit */unsigned long long int) 2736971775U)) / (10717492721668098057ULL))));
}
