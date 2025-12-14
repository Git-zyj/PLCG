/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2538
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
    var_16 -= ((/* implicit */unsigned char) (+(((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_2)) ? (14774820544678528148ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24139)))))))));
    var_17 ^= ((/* implicit */unsigned short) var_6);
    var_18 ^= ((/* implicit */int) min((var_13), (var_1)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) var_11);
        var_20 = ((/* implicit */unsigned char) ((arr_1 [i_0]) | (arr_1 [i_0])));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
                var_22 = ((/* implicit */int) max((var_22), ((~(((/* implicit */int) arr_5 [i_2 + 2] [i_2 - 1] [i_2 + 3]))))));
                arr_6 [i_1] &= (+(((/* implicit */int) arr_4 [i_0] [i_2 - 1] [i_0])));
            }
            /* LoopSeq 2 */
            for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                var_23 -= ((((/* implicit */int) arr_0 [i_3 - 1] [i_3 + 2])) != (((/* implicit */int) arr_7 [i_0] [i_1])));
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_24 -= (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_3] [i_0])));
                    arr_11 [i_3] = ((/* implicit */_Bool) 1719365595U);
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [(signed char)2] [i_3 + 2] [i_3 + 2] [i_5 + 1])) ? (((/* implicit */int) arr_8 [i_3] [i_3] [(unsigned char)10])) : (((/* implicit */int) arr_10 [i_0] [i_3 - 1] [i_4] [i_3]))));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) arr_4 [i_0] [i_0] [(unsigned char)11]))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_3] [i_0]))));
                    }
                    arr_14 [i_0] [i_0] [i_3 + 2] [i_4] |= ((/* implicit */signed char) ((_Bool) arr_12 [i_3 + 2] [8U] [i_3 + 2] [i_3 + 2]));
                    var_28 = ((/* implicit */unsigned char) ((short) arr_0 [i_0] [i_0]));
                }
                for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    var_29 = arr_9 [i_0] [i_0] [i_0] [i_0] [i_0];
                    arr_17 [i_3] [i_3] = ((/* implicit */int) arr_4 [i_3 + 2] [i_1] [i_6]);
                    arr_18 [i_0] [i_1] [i_3] [i_6] [(short)3] [i_1] = ((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3 + 1] [i_3 - 1]);
                    arr_19 [i_3] [(unsigned short)3] [i_3 + 2] [i_6] = ((/* implicit */unsigned long long int) ((arr_3 [i_3 + 1]) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114)))));
                }
                for (unsigned char i_7 = 1; i_7 < 10; i_7 += 2) 
                {
                    var_30 = ((/* implicit */unsigned short) arr_1 [i_3]);
                    arr_22 [(short)4] [(signed char)12] [i_3] [i_3] = ((/* implicit */int) var_1);
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [(_Bool)1] [i_3])) ? (((/* implicit */int) arr_0 [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) var_12))));
                    var_32 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_3] [i_7 + 1] [i_3] [i_0])) ? (((/* implicit */int) arr_12 [i_7] [i_7 - 1] [i_7 - 1] [i_7])) : (((/* implicit */int) arr_10 [i_3 + 1] [i_7 + 3] [i_3 + 1] [i_0]))));
                    var_33 -= ((/* implicit */unsigned long long int) ((signed char) arr_20 [i_0] [8]));
                }
            }
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                var_34 &= ((/* implicit */short) ((_Bool) arr_2 [i_8]));
                var_35 = ((/* implicit */unsigned int) ((int) (short)-28291));
                /* LoopSeq 2 */
                for (int i_9 = 4; i_9 < 9; i_9 += 2) 
                {
                    var_36 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_23 [(signed char)9] [7ULL] [i_9])))));
                    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_9]))));
                }
                for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    arr_31 [(short)8] [i_1] [i_1] [(_Bool)1] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_10])))))));
                    var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) 2797967729126575837ULL))));
                }
            }
            arr_32 [i_0] [i_0] = ((/* implicit */unsigned int) arr_29 [i_0]);
        }
        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_8)))))))));
            arr_35 [i_0] = ((/* implicit */short) var_5);
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned short i_13 = 2; i_13 < 12; i_13 += 2) 
                {
                    for (unsigned char i_14 = 3; i_14 < 10; i_14 += 4) 
                    {
                        {
                            var_40 ^= ((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) arr_9 [i_0] [8U] [i_12] [i_12] [2ULL])))));
                            arr_44 [i_14] [(unsigned char)0] [i_14] [(unsigned char)0] [i_14] = (!(((/* implicit */_Bool) arr_30 [i_13 - 2] [i_14 + 1] [i_14] [i_14 + 3] [i_14 - 2] [i_14])));
                        }
                    } 
                } 
            } 
            var_41 -= ((/* implicit */_Bool) arr_13 [4ULL] [i_11] [i_11] [i_11] [4ULL]);
        }
        for (int i_15 = 0; i_15 < 13; i_15 += 4) 
        {
            var_42 = ((/* implicit */_Bool) arr_7 [(unsigned char)8] [i_0]);
            var_43 = ((/* implicit */int) var_15);
            var_44 = ((/* implicit */int) var_13);
        }
        /* LoopSeq 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_45 = ((/* implicit */unsigned char) arr_16 [i_0] [i_16]);
            var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) (+(((unsigned long long int) (_Bool)1)))))));
        }
        for (unsigned char i_17 = 0; i_17 < 13; i_17 += 4) 
        {
            arr_53 [i_0] [i_0] = ((/* implicit */_Bool) var_6);
            var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) arr_41 [i_0] [i_0] [i_0] [i_0] [i_0]))));
        }
        var_48 = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) > (((/* implicit */int) arr_27 [(unsigned short)11] [(signed char)4] [i_0] [i_0]))));
    }
    for (short i_18 = 0; i_18 < 13; i_18 += 2) /* same iter space */
    {
        arr_58 [(signed char)9] = ((/* implicit */int) var_10);
        /* LoopSeq 1 */
        for (unsigned int i_19 = 2; i_19 < 11; i_19 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_20 = 0; i_20 < 13; i_20 += 3) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_21 = 1; i_21 < 12; i_21 += 1) 
                {
                    arr_67 [(unsigned char)8] [(unsigned char)8] [i_18] [(unsigned short)4] |= ((/* implicit */short) (~(1290482858U)));
                    arr_68 [i_18] [i_19] [i_19] [i_21] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                }
                for (unsigned int i_22 = 0; i_22 < 13; i_22 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_23 = 1; i_23 < 11; i_23 += 4) 
                    {
                        var_49 = ((/* implicit */short) ((_Bool) arr_21 [i_18] [i_19] [i_19] [(short)9] [i_23]));
                        var_50 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_19 - 1] [i_19 + 1] [(unsigned char)0] [i_22])) - (((/* implicit */int) arr_23 [(unsigned char)10] [i_19 - 1] [i_23 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_1)) ? (arr_70 [i_22] [(unsigned char)5] [i_22]) : (((/* implicit */int) arr_5 [3ULL] [i_19] [(_Bool)0]))))))) : (arr_43 [i_18] [i_18] [i_18] [i_18] [(signed char)10] [i_22] [i_23])));
                        var_51 = ((/* implicit */unsigned int) min((var_51), ((~(var_8)))));
                        arr_76 [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) arr_49 [i_19] [(unsigned char)2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_25 [(unsigned short)6] [(short)12] [i_19] [i_18])))) * ((-(((/* implicit */int) arr_21 [i_20] [i_20] [i_19] [i_20] [i_20]))))))));
                    }
                    var_52 &= arr_61 [i_18] [i_19] [i_18] [11ULL];
                    /* LoopSeq 3 */
                    for (signed char i_24 = 0; i_24 < 13; i_24 += 3) 
                    {
                        var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) ((unsigned char) ((arr_42 [i_19 - 1] [i_19] [i_19 + 2] [i_19 + 1] [(unsigned short)12] [i_19 - 1] [i_24]) < (arr_42 [i_19 - 1] [i_19 - 1] [i_19] [i_19 + 1] [i_19] [i_19 - 1] [(unsigned char)1])))))));
                        var_54 -= (+((+(arr_33 [i_19 + 2] [i_19 + 1]))));
                        arr_81 [i_19] [(unsigned short)10] [i_20] [(unsigned short)10] [4ULL] [i_18] [i_19] = ((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) arr_71 [i_18] [i_18] [i_19] [i_19 - 2])))));
                        var_55 = ((/* implicit */signed char) ((short) (~((+(1290482871U))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_25 = 2; i_25 < 11; i_25 += 3) 
                    {
                        var_56 &= ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (arr_43 [i_22] [i_19] [(unsigned short)10] [i_22] [i_25] [i_22] [i_19 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_25] [i_25 - 1] [i_22] [i_19 + 1] [i_19 + 2])))));
                        var_57 += var_14;
                    }
                    for (unsigned int i_26 = 3; i_26 < 12; i_26 += 3) 
                    {
                        arr_87 [i_19] [i_19] = ((/* implicit */unsigned char) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_19 + 1] [i_19]))) : (arr_46 [i_19 + 1])))));
                        var_58 = ((/* implicit */short) (!(((((/* implicit */int) min((arr_38 [(unsigned char)2] [i_22] [i_22] [11ULL] [5U] [i_18]), (arr_4 [i_18] [(short)5] [i_26])))) > (((/* implicit */int) ((short) var_3)))))));
                    }
                    arr_88 [i_19] = ((/* implicit */unsigned char) arr_16 [i_20] [i_19]);
                    var_59 = ((/* implicit */unsigned short) var_8);
                }
                for (unsigned int i_27 = 0; i_27 < 13; i_27 += 2) /* same iter space */
                {
                    var_60 = ((/* implicit */signed char) ((short) arr_30 [i_18] [i_19 + 2] [(unsigned short)5] [i_27] [(unsigned short)3] [i_19]));
                    /* LoopSeq 1 */
                    for (int i_28 = 1; i_28 < 12; i_28 += 2) 
                    {
                        arr_95 [i_19] [(signed char)4] [i_19] = (((~(max((arr_33 [(_Bool)1] [(_Bool)1]), (((/* implicit */unsigned long long int) (short)-14434)))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_12 [i_19 - 1] [i_19 - 1] [i_19 + 1] [i_19 - 2])))));
                        var_61 = ((/* implicit */signed char) arr_69 [(unsigned short)7] [i_27] [i_19] [i_18] [i_28] [i_27]);
                        arr_96 [i_19] [i_19] [i_19] [i_19] [i_19] [i_27] [i_28 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_12)) != (((/* implicit */int) var_10)))) ? (((unsigned long long int) arr_91 [i_19] [i_20] [(_Bool)0] [i_28])) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
                    }
                    /* LoopSeq 2 */
                    for (short i_29 = 1; i_29 < 12; i_29 += 2) 
                    {
                        var_62 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_64 [i_19] [i_19] [i_19 - 2] [i_29 - 1])))) / (((/* implicit */int) var_11))));
                        var_63 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_74 [i_18] [i_19 + 2] [(signed char)12] [i_20] [2U] [i_29] [i_19])) * (((/* implicit */int) arr_54 [4]))))), (max((((/* implicit */unsigned long long int) (signed char)46)), (arr_41 [i_18] [(unsigned char)3] [i_20] [(signed char)7] [i_29])))))) ? ((~((+(((/* implicit */int) arr_37 [i_18] [(unsigned char)9] [i_18] [i_18])))))) : (((/* implicit */int) arr_34 [i_18]))));
                    }
                    for (int i_30 = 0; i_30 < 13; i_30 += 2) 
                    {
                        var_64 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) arr_12 [12ULL] [i_20] [i_27] [12U])))), (((/* implicit */int) arr_25 [i_19 + 2] [i_19 + 2] [i_19 - 2] [i_19 - 2])))))));
                        arr_101 [i_19] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_80 [(short)7] [(unsigned short)2] [(unsigned char)6]) ? (((/* implicit */int) arr_80 [i_18] [(short)9] [i_18])) : (((/* implicit */int) arr_80 [i_30] [i_18] [i_18])))))));
                    }
                }
                arr_102 [i_19] [i_19] [i_19] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_56 [i_18]))));
            }
            for (signed char i_31 = 1; i_31 < 11; i_31 += 3) 
            {
                var_65 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2))))), (((unsigned int) arr_94 [i_19] [i_19] [i_31] [i_31] [(_Bool)1] [i_19] [i_31])))) >= ((+(var_8)))));
                arr_105 [i_19] [10U] [i_19] = ((/* implicit */_Bool) (~(min((((/* implicit */int) arr_89 [i_31] [i_19] [i_19] [i_31] [i_31 + 1])), (((int) arr_80 [i_18] [i_18] [i_31]))))));
                var_66 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_37 [i_18] [i_19 + 2] [i_31] [i_31])) ? (((/* implicit */int) arr_37 [i_31] [i_18] [i_18] [i_18])) : (((/* implicit */int) arr_13 [i_18] [i_18] [i_31 + 1] [i_31 - 1] [i_31])))), (((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) var_13)))))));
                /* LoopSeq 1 */
                for (signed char i_32 = 0; i_32 < 13; i_32 += 2) 
                {
                    arr_108 [i_19] [(signed char)0] [i_31] [i_19] [i_32] [i_32] = ((/* implicit */short) ((_Bool) (((-(((/* implicit */int) (_Bool)0)))) < (((/* implicit */int) (short)28277)))));
                    /* LoopSeq 1 */
                    for (short i_33 = 1; i_33 < 11; i_33 += 1) 
                    {
                        arr_111 [i_18] [i_18] [i_18] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51438))) == (3004484437U)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))) && ((((-(((/* implicit */int) var_4)))) < (((/* implicit */int) max((arr_72 [(signed char)7] [i_18] [(signed char)3] [(signed char)3]), (((/* implicit */short) arr_103 [i_18] [i_19] [i_18])))))))));
                        var_67 = ((/* implicit */short) max((var_67), (((/* implicit */short) (((-(((/* implicit */int) arr_72 [i_19 + 1] [i_31 + 2] [i_33 + 1] [i_31 + 2])))) << (((((/* implicit */int) ((unsigned char) var_1))) - (49))))))));
                    }
                }
            }
            var_68 = ((/* implicit */unsigned char) min(((+(arr_70 [i_19 + 2] [i_19 - 1] [i_19 - 2]))), (max((arr_70 [i_18] [i_19 - 2] [i_19 + 2]), (arr_70 [(short)12] [i_19 - 1] [i_19 + 2])))));
            var_69 *= ((/* implicit */short) ((unsigned char) ((int) arr_104 [i_18])));
        }
        /* LoopNest 3 */
        for (unsigned char i_34 = 2; i_34 < 9; i_34 += 3) 
        {
            for (short i_35 = 0; i_35 < 13; i_35 += 2) 
            {
                for (unsigned short i_36 = 1; i_36 < 10; i_36 += 4) 
                {
                    {
                        arr_118 [i_34] [i_34] [i_35] [i_35] = ((/* implicit */unsigned short) arr_114 [i_18] [i_34] [i_35] [(signed char)11]);
                        var_70 = ((/* implicit */unsigned long long int) min((var_70), (((/* implicit */unsigned long long int) min((var_2), (max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_59 [i_36 - 1] [i_34] [i_18]))))), (arr_13 [i_18] [i_18] [i_18] [(unsigned char)6] [i_18]))))))));
                        var_71 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_16 [i_34 - 1] [i_34])) ? (((/* implicit */int) arr_16 [i_34 - 1] [i_34])) : (((/* implicit */int) arr_16 [i_34 - 1] [i_34]))))));
                    }
                } 
            } 
        } 
        arr_119 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [(_Bool)1]), (arr_2 [i_18]))))) < (arr_41 [i_18] [i_18] [i_18] [i_18] [i_18])));
    }
    var_72 |= ((/* implicit */_Bool) var_9);
}
