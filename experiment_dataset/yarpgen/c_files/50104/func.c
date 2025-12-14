/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50104
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
    var_20 = ((/* implicit */short) var_16);
    var_21 = ((/* implicit */unsigned char) ((max((var_13), (((/* implicit */long long int) var_19)))) + (((/* implicit */long long int) var_4))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_22 += ((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]));
        var_23 *= ((/* implicit */short) arr_0 [i_0]);
        var_24 *= ((/* implicit */int) var_10);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */short) ((unsigned char) arr_1 [i_0]))), (var_14)));
    }
    for (unsigned char i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    {
                        var_25 = ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_3] [i_4]))) : (arr_11 [i_1] [i_2] [i_3] [i_3]));
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) max((min((arr_5 [i_1] [i_1]), (((/* implicit */long long int) var_5)))), (((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (arr_9 [i_1] [11ULL] [i_1 - 1] [11ULL]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1]))))))))));
                        var_27 = ((/* implicit */short) ((_Bool) (_Bool)1));
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (arr_6 [i_1])));
                    }
                } 
            } 
            arr_13 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_4) * (((/* implicit */int) var_10))))) ? (((((/* implicit */int) (unsigned short)42420)) ^ (((/* implicit */int) arr_3 [i_1 - 1])))) : (((/* implicit */int) ((((/* implicit */int) ((arr_10 [i_1] [9] [i_1] [i_1 - 2]) < (arr_10 [i_1] [i_1] [i_2] [i_2])))) > (((/* implicit */int) var_18)))))));
        }
        for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 3) 
        {
            var_29 = ((/* implicit */long long int) arr_4 [i_1 - 2]);
            var_30 += ((/* implicit */long long int) (!(var_7)));
            /* LoopSeq 2 */
            for (short i_6 = 1; i_6 < 13; i_6 += 1) 
            {
                arr_18 [i_1] [i_5] [i_6] = ((((/* implicit */_Bool) arr_4 [10LL])) ? ((-((-(((/* implicit */int) var_15)))))) : (((/* implicit */int) max((arr_7 [i_1] [i_1]), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) > (arr_14 [i_1 - 2] [i_1]))))))));
                /* LoopSeq 3 */
                for (unsigned short i_7 = 1; i_7 < 13; i_7 += 1) 
                {
                    var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) var_12))));
                    arr_22 [i_1] [i_5] [i_5] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_4 [i_1 - 2]))) > (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_15 [(_Bool)1] [i_1] [(signed char)5])), (arr_11 [i_1] [i_5] [i_6 + 2] [i_7 + 1])))))))));
                    /* LoopSeq 3 */
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        var_32 *= ((/* implicit */unsigned char) ((unsigned int) ((unsigned long long int) arr_8 [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 1])));
                        var_33 += arr_11 [i_1] [i_1] [i_6] [i_7];
                        arr_26 [(signed char)11] [i_7] [i_7] [i_6] [(signed char)10] [i_7] [i_1] = ((/* implicit */unsigned short) arr_10 [(unsigned char)4] [i_6] [i_5] [i_1]);
                    }
                    for (int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        arr_29 [i_1] [i_7] [i_1] = ((/* implicit */short) arr_1 [i_1]);
                        var_34 = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */unsigned long long int) (!(arr_20 [i_7] [i_7] [i_6] [i_5] [(signed char)13] [i_7])))), (arr_11 [12U] [i_5 - 3] [i_6] [i_7 - 1]))));
                        arr_30 [i_1] [i_1] [i_1] [i_1] [i_6 + 1] [(signed char)12] [i_1] &= var_6;
                        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) arr_28 [i_1 - 2] [i_5] [i_7] [i_9] [i_5]))));
                        var_36 = ((/* implicit */unsigned short) var_1);
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_7 + 2]))));
                        arr_33 [i_7] [(signed char)13] [i_5 - 3] [(signed char)13] [i_10] = ((/* implicit */unsigned char) arr_31 [i_10] [i_5] [(short)6] [i_7] [i_7] [i_6] [i_5 - 3]);
                    }
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) arr_28 [0U] [i_6] [i_1] [i_1] [i_1]))));
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_6)) | (((((/* implicit */_Bool) arr_12 [(unsigned char)1] [(short)3])) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_11 [i_1] [5ULL] [(_Bool)1] [5ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(signed char)10] [i_5] [i_6])))))));
                }
                /* vectorizable */
                for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    arr_40 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */unsigned int) ((signed char) arr_12 [i_12] [i_5 + 1]));
                    var_40 = ((/* implicit */long long int) arr_11 [i_1] [i_5] [0LL] [i_12]);
                }
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_44 [i_13] [i_5 + 2] [i_1] = ((/* implicit */short) ((_Bool) ((arr_34 [i_1] [i_1] [i_5 - 3] [i_1]) * (arr_34 [i_1 - 1] [i_5] [i_13] [i_1]))));
                arr_45 [i_1] [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) (~(var_3)));
                var_41 = ((/* implicit */unsigned int) var_13);
            }
            /* LoopSeq 3 */
            for (unsigned char i_14 = 0; i_14 < 16; i_14 += 1) 
            {
                var_42 = ((/* implicit */unsigned char) (!(arr_0 [i_5 + 1])));
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 1) 
                {
                    var_43 = (~((-(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_35 [i_5] [i_15])))))));
                    var_44 = var_15;
                    arr_53 [i_1] [i_1] [i_1] [i_1] [i_15] [i_1] = ((/* implicit */unsigned int) var_8);
                    var_45 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_28 [i_1 - 1] [(_Bool)1] [i_5 + 1] [i_14] [(signed char)12])) > (((/* implicit */int) arr_32 [i_1] [i_5] [i_14] [i_5] [8LL] [13U])))))));
                    var_46 &= ((/* implicit */int) ((arr_41 [i_1] [i_5] [i_14]) ? (((long long int) (-(((/* implicit */int) arr_35 [(unsigned char)15] [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (arr_39 [i_5 + 2] [i_1 - 2])))))));
                }
            }
            /* vectorizable */
            for (signed char i_16 = 0; i_16 < 16; i_16 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_17 = 0; i_17 < 16; i_17 += 2) /* same iter space */
                {
                    arr_60 [i_1 - 2] = (-(((/* implicit */int) arr_1 [i_1 - 1])));
                    arr_61 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) arr_39 [i_5] [i_1]);
                    var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) (-(((/* implicit */int) arr_46 [i_1] [i_5] [i_1 + 1] [i_17])))))));
                }
                for (unsigned char i_18 = 0; i_18 < 16; i_18 += 2) /* same iter space */
                {
                    var_48 = ((/* implicit */_Bool) arr_59 [i_5 + 1]);
                    var_49 = ((/* implicit */_Bool) min((var_49), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_1] [(short)12] [i_5] [i_5] [i_16] [i_18]))))) > (((/* implicit */int) var_2))))));
                    /* LoopSeq 1 */
                    for (int i_19 = 0; i_19 < 16; i_19 += 4) 
                    {
                        arr_66 [i_1] [(unsigned char)14] [(signed char)6] [i_18] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_23 [i_1 - 2] [i_5] [i_5 + 2]))));
                        var_50 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    }
                    var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_10 [i_1 - 2] [i_5] [i_16] [i_16]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_46 [i_1 + 1] [i_5] [i_1 + 1] [i_18])) : (((/* implicit */int) arr_65 [i_1] [i_5] [(unsigned char)11] [i_18] [6LL]))))) : (((((/* implicit */_Bool) arr_3 [14ULL])) ? (arr_38 [i_5] [i_5] [i_1] [i_5] [i_5 - 3] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_18] [i_16] [i_1])))))));
                    arr_67 [(unsigned char)13] [i_5 + 2] [i_5] = ((/* implicit */signed char) (~(arr_56 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_5 - 1])));
                }
                var_52 *= ((/* implicit */_Bool) ((arr_34 [(unsigned short)10] [i_5] [10LL] [i_1]) / (arr_36 [i_1] [i_1] [i_5 - 2] [i_16])));
                var_53 *= ((((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_1] [i_5 + 2] [i_5 - 3] [i_1 - 1] [i_1 - 1] [i_16]))) < (arr_38 [i_1 + 1] [i_1 + 1] [i_5 - 3] [i_5 - 1] [i_5 + 2] [i_16]));
            }
            for (signed char i_20 = 0; i_20 < 16; i_20 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_54 = ((/* implicit */_Bool) min((var_54), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_1] [(unsigned short)2] [i_1 - 2] [(unsigned short)2] [i_5 - 3] [i_5])) - (((/* implicit */int) arr_51 [11LL] [i_1] [i_1 + 1] [i_1 - 1] [i_5 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(-757461283)))))) : (((unsigned long long int) -757461283)))))));
                    var_55 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_3 [4])), (arr_21 [i_1 + 1] [i_5] [i_20] [i_21])))) ? (((var_7) ? (((/* implicit */long long int) arr_4 [i_1 - 2])) : (-8441620250848303203LL))) : (((/* implicit */long long int) arr_16 [i_1] [i_1 - 2] [i_1]))))) ? (((((/* implicit */_Bool) ((int) var_2))) ? (((((/* implicit */int) arr_41 [i_1] [i_20] [(unsigned short)10])) >> (((((/* implicit */int) (signed char)-46)) + (55))))) : (((/* implicit */int) arr_50 [i_5] [(short)1] [i_1 + 1] [i_1])))) : (((/* implicit */int) arr_8 [i_1] [i_5] [i_20] [i_21]))));
                    var_56 = ((/* implicit */short) var_10);
                }
                for (short i_22 = 0; i_22 < 16; i_22 += 3) 
                {
                    var_57 |= ((/* implicit */unsigned char) 11508310824621849038ULL);
                    arr_77 [i_1 - 1] [i_22] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_22] [i_20] [i_22] [i_22] [i_1] [i_1]))))) ? (((/* implicit */int) arr_1 [4ULL])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_64 [i_22] [6] [i_20] [6] [i_1])) : (((/* implicit */int) var_10)))))));
                    arr_78 [i_1 - 2] [i_22] = ((/* implicit */short) min((((((/* implicit */_Bool) ((unsigned short) var_8))) ? (arr_72 [i_22] [i_5 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [(signed char)13] [i_1]) >= (((/* implicit */long long int) arr_49 [13LL] [i_5] [i_5 - 3] [i_22])))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_49 [i_22] [i_20] [i_1] [i_22])))))));
                    var_58 = ((/* implicit */signed char) min((var_58), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_9)) != ((~(arr_59 [i_20]))))))));
                }
                arr_79 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max((arr_25 [i_1] [i_1] [i_20] [i_5 - 3] [(unsigned char)4] [i_20]), (arr_25 [i_1] [(unsigned short)6] [i_20] [i_20] [i_5 + 1] [i_20])));
            }
        }
        var_59 *= ((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) arr_0 [i_1])))));
        arr_80 [5ULL] [i_1 - 1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_52 [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 1] [(signed char)7])))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_50 [i_1] [i_1] [i_1] [i_1])) < (((/* implicit */int) arr_42 [i_1 - 1] [7ULL] [(_Bool)1] [(_Bool)1]))))))) : (arr_58 [i_1] [i_1] [10LL])));
        /* LoopSeq 1 */
        for (signed char i_23 = 0; i_23 < 16; i_23 += 1) 
        {
            var_60 += ((/* implicit */unsigned char) var_5);
            arr_84 [2U] [i_23] [1ULL] = ((/* implicit */int) ((unsigned int) (+(((arr_23 [i_1] [i_23] [i_23]) ? (((/* implicit */unsigned long long int) var_3)) : (arr_36 [i_1] [i_23] [i_1] [i_23]))))));
        }
    }
    var_61 = ((/* implicit */_Bool) (~(var_13)));
    var_62 = ((/* implicit */unsigned int) var_19);
}
