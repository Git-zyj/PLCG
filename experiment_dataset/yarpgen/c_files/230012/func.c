/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230012
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 *= ((/* implicit */unsigned short) 1825312454);
        arr_4 [i_0] = ((/* implicit */unsigned int) (-((+(arr_2 [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        arr_9 [(signed char)1] = ((/* implicit */signed char) (short)-31422);
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 2; i_3 < 13; i_3 += 3) 
            {
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1)))) ? (arr_11 [i_3 + 1] [i_3 - 2] [i_3 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3 + 4] [i_3] [i_3] [i_3 - 2])))));
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((unsigned char) ((var_7) >= (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
            }
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (_Bool)0))));
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (_Bool)1))));
            arr_14 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_13 [(unsigned short)15] [(unsigned short)15] [i_1] [i_1]);
            arr_15 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1])) | (((/* implicit */int) arr_1 [i_1]))));
        }
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) != (arr_10 [i_1] [i_1])));
            var_19 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) arr_11 [i_1] [i_1] [i_1]))) << (((arr_11 [i_1] [i_1] [i_4]) - (78393427U)))));
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_13 [i_1] [i_4] [(unsigned char)14] [i_1])) : (((/* implicit */int) var_10)))))));
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    {
                        var_21 += ((/* implicit */_Bool) ((unsigned short) arr_0 [i_1] [i_4]));
                        var_22 *= ((/* implicit */unsigned char) var_11);
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((int) var_10)))));
                    }
                } 
            } 
        }
        for (int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1] [i_7])) ? (((arr_23 [i_1] [(unsigned char)1] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */long long int) arr_25 [i_1] [i_7]))));
            var_25 += ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) / (((/* implicit */int) arr_1 [i_1]))));
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7] [i_7] [i_7])) ? (arr_23 [(unsigned short)6] [i_7] [(unsigned short)6]) : (arr_23 [i_1] [i_1] [i_1]))))));
            var_27 = var_2;
        }
        arr_27 [i_1] = ((/* implicit */unsigned int) ((1414139382U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    }
    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
    {
        arr_30 [i_8] = var_10;
        arr_31 [i_8] = ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_8] [(unsigned short)7] [(unsigned short)7] [(unsigned short)7])) >= (max(((~(((/* implicit */int) arr_6 [i_8])))), (((/* implicit */int) var_4))))));
    }
    /* LoopSeq 4 */
    for (unsigned char i_9 = 2; i_9 < 21; i_9 += 3) 
    {
        arr_36 [i_9] [i_9] = ((/* implicit */unsigned short) var_0);
        var_28 = ((/* implicit */long long int) (short)32653);
        var_29 = ((/* implicit */unsigned char) max((var_29), (var_6)));
    }
    /* vectorizable */
    for (unsigned short i_10 = 2; i_10 < 9; i_10 += 2) 
    {
        var_30 *= ((/* implicit */unsigned char) (~(arr_39 [i_10 + 2])));
        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */long long int) (+(-1825312455)))) % (((long long int) var_6)))))));
        var_32 = ((/* implicit */short) (!(((_Bool) 8622904605846005039LL))));
        var_33 = ((/* implicit */short) (!(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_10]))) != (var_1)))));
        arr_40 [7LL] [(unsigned char)1] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_2) : (var_7))))));
    }
    for (unsigned char i_11 = 2; i_11 < 11; i_11 += 2) 
    {
        arr_43 [i_11] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (((var_7) / (((/* implicit */long long int) ((/* implicit */int) (short)-17325))))))), (max((var_7), (((/* implicit */long long int) arr_24 [i_11 + 1]))))));
        var_34 = ((/* implicit */unsigned int) arr_33 [i_11] [i_11]);
        arr_44 [i_11] [i_11] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_20 [i_11] [i_11 + 2] [i_11 + 2] [i_11 + 2])) ? (arr_42 [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_11]))))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-1825312457) != (((/* implicit */int) var_6)))))) : (max((max((((/* implicit */unsigned int) (unsigned char)255)), (270535121U))), (((/* implicit */unsigned int) var_6))))));
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 13; i_12 += 2) 
    {
        var_35 = arr_42 [i_12];
        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_12])) ? (arr_23 [i_12] [i_12] [4U]) : (((/* implicit */long long int) 3865738525U))));
        /* LoopSeq 4 */
        for (unsigned int i_13 = 1; i_13 < 12; i_13 += 4) 
        {
            arr_49 [i_12] |= ((/* implicit */short) (!(((/* implicit */_Bool) (short)1037))));
            arr_50 [i_12] [i_13 + 1] = (-(((((/* implicit */_Bool) arr_0 [13LL] [(short)4])) ? (var_7) : (((/* implicit */long long int) arr_25 [i_12] [(short)3])))));
            arr_51 [i_13] = ((/* implicit */int) arr_22 [i_12] [(_Bool)1] [i_12] [i_12] [i_13]);
        }
        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 2) /* same iter space */
        {
            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_12] [i_14] [i_12] [i_12])) ? (arr_10 [i_12] [i_12]) : (((/* implicit */int) arr_20 [i_12] [i_14] [i_12] [i_14])))))));
            /* LoopSeq 3 */
            for (long long int i_15 = 0; i_15 < 13; i_15 += 2) /* same iter space */
            {
                arr_58 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [2LL] [2LL])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_22 [i_12] [i_12] [i_14] [i_15] [i_15])) : (((/* implicit */int) arr_1 [i_12]))));
                arr_59 [i_12] [i_12] [(short)7] [i_15] = ((/* implicit */unsigned short) 581355522);
                var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) var_3))));
            }
            for (long long int i_16 = 0; i_16 < 13; i_16 += 2) /* same iter space */
            {
                arr_63 [i_12] [i_14] [(_Bool)1] [i_12] = ((/* implicit */unsigned char) (~(6U)));
                arr_64 [i_16] = ((((/* implicit */_Bool) arr_28 [i_12])) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [14]))))));
            }
            for (long long int i_17 = 0; i_17 < 13; i_17 += 2) /* same iter space */
            {
                var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) (signed char)105))));
                arr_68 [6] [i_14] [(unsigned char)5] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_12])) || (((/* implicit */_Bool) (signed char)-102))));
                var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-1)) <= (((/* implicit */int) (!(((/* implicit */_Bool) (short)32653)))))));
                var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) var_9))))) == (arr_23 [i_12] [i_14] [i_14]))))));
                var_42 *= ((/* implicit */short) var_12);
            }
        }
        for (unsigned int i_18 = 0; i_18 < 13; i_18 += 2) /* same iter space */
        {
            var_43 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 4999590921491118686LL)) ? (((/* implicit */int) arr_21 [i_12] [i_12] [i_18] [i_18])) : (((/* implicit */int) var_9)))) + (((/* implicit */int) var_11))));
            /* LoopNest 2 */
            for (unsigned char i_19 = 0; i_19 < 13; i_19 += 2) 
            {
                for (signed char i_20 = 2; i_20 < 10; i_20 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_21 = 0; i_21 < 13; i_21 += 2) 
                        {
                            arr_82 [i_12] [i_18] [i_19] = (-(((/* implicit */int) arr_34 [i_20 - 1])));
                            var_44 = ((/* implicit */signed char) ((unsigned int) (short)-32657));
                            arr_83 [i_21] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)45384)) != (((/* implicit */int) arr_66 [i_20 - 2] [i_20] [i_20 - 2]))));
                        }
                        var_45 = ((/* implicit */long long int) ((unsigned char) arr_11 [i_20 + 2] [i_20 + 1] [i_20 + 3]));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned char i_22 = 0; i_22 < 13; i_22 += 3) /* same iter space */
            {
                arr_86 [i_12] [i_12] [i_22] = ((/* implicit */unsigned short) var_1);
                var_46 *= ((/* implicit */signed char) ((((long long int) var_4)) & (((/* implicit */long long int) (~(((/* implicit */int) var_11)))))));
                var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) (+(((/* implicit */int) var_9)))))));
            }
            for (unsigned char i_23 = 0; i_23 < 13; i_23 += 3) /* same iter space */
            {
                arr_89 [i_12] [i_23] [i_12] [i_12] = ((/* implicit */unsigned char) arr_48 [(short)0] [(short)0] [(short)0]);
                arr_90 [i_23] [i_23] [i_18] |= ((/* implicit */signed char) (unsigned char)207);
                arr_91 [i_12] [i_12] [7LL] = ((/* implicit */long long int) arr_73 [i_12]);
                /* LoopSeq 1 */
                for (signed char i_24 = 1; i_24 < 11; i_24 += 4) 
                {
                    var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (unsigned char)0))) >= (((/* implicit */int) arr_17 [i_18] [i_23])))))));
                    arr_95 [5U] [(unsigned char)1] [i_24] [i_24] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_35 [i_18])) <= (((/* implicit */int) (unsigned short)39699))))) >= (((/* implicit */int) ((unsigned char) var_1)))));
                }
                var_49 &= ((/* implicit */unsigned char) var_2);
            }
            for (unsigned char i_25 = 0; i_25 < 13; i_25 += 3) /* same iter space */
            {
                var_50 |= -4073417735044898910LL;
                arr_98 [i_12] [0LL] [(unsigned short)10] &= ((/* implicit */unsigned int) arr_66 [7] [i_18] [i_18]);
                arr_99 [i_12] [i_25] [i_25] [i_25] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned short)30720)) ? (((/* implicit */int) arr_16 [i_12] [i_18] [i_25])) : (((/* implicit */int) (unsigned char)222)))));
                var_51 = var_1;
            }
            for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_27 = 4; i_27 < 12; i_27 += 3) 
                {
                    arr_105 [i_12] [i_27] [i_26] [i_12] [i_18] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_12] [i_12] [i_12] [i_12] [i_12])) & (((/* implicit */int) arr_22 [i_12] [i_18] [i_26] [i_27] [i_27]))));
                    arr_106 [i_12] [i_18] = ((/* implicit */signed char) var_1);
                    arr_107 [(unsigned char)6] [i_18] [i_26] [(signed char)0] |= arr_6 [i_12];
                    var_52 += ((/* implicit */long long int) ((unsigned int) ((long long int) arr_96 [(_Bool)1] [(_Bool)1] [i_26 - 1] [i_27 - 1])));
                }
                var_53 = ((/* implicit */unsigned int) max((var_53), (((/* implicit */unsigned int) arr_61 [10] [i_18] [i_26] [10]))));
            }
        }
        for (unsigned int i_28 = 0; i_28 < 13; i_28 += 2) /* same iter space */
        {
            var_54 = var_11;
            /* LoopSeq 4 */
            for (unsigned short i_29 = 1; i_29 < 12; i_29 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_30 = 0; i_30 < 13; i_30 += 1) 
                {
                    arr_116 [i_12] [i_28] [i_28] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_80 [i_12] [i_28] [(unsigned short)11] [i_29] [i_30])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_33 [i_28] [i_30]))))));
                    arr_117 [i_12] [i_28] [i_29 + 1] [(unsigned short)8] [i_30] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_80 [i_29 - 1] [i_29] [i_29 - 1] [i_29 - 1] [i_29])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)32656)) && (((/* implicit */_Bool) (short)32653)))))));
                    var_55 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 548155976)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))) <= (var_2)));
                    arr_118 [i_29 - 1] [i_12] = ((((/* implicit */int) arr_22 [i_12] [i_30] [i_12] [i_29 + 1] [i_29 + 1])) - (((/* implicit */int) arr_22 [(_Bool)1] [i_28] [i_29] [i_29 - 1] [i_30])));
                    arr_119 [i_12] [i_28] [i_30] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7928433311079512495LL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_12] [i_29 + 1] [i_29 + 1] [i_29 + 1])))));
                }
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    var_56 = ((/* implicit */signed char) max((var_56), (((/* implicit */signed char) (-(((/* implicit */int) (short)-8701)))))));
                    arr_122 [i_28] [0LL] = ((/* implicit */unsigned int) (unsigned char)169);
                }
                var_57 += ((/* implicit */unsigned int) ((_Bool) ((_Bool) (unsigned char)20)));
            }
            for (unsigned short i_32 = 1; i_32 < 12; i_32 += 1) /* same iter space */
            {
                arr_125 [i_12] [i_12] [i_12] [i_12] |= ((/* implicit */_Bool) var_2);
                arr_126 [i_12] [i_28] [i_28] [i_32] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 1825312454)) | (0U)));
                arr_127 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_120 [i_12])) ? (((/* implicit */int) ((_Bool) var_12))) : (((/* implicit */int) arr_87 [i_32 - 1]))));
            }
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) /* same iter space */
            {
                arr_131 [i_12] &= ((/* implicit */unsigned short) (~(((/* implicit */int) ((arr_52 [i_12] [i_28] [i_33]) != (((/* implicit */int) arr_0 [5U] [i_28])))))));
                arr_132 [i_12] [i_12] [i_28] [i_33] = ((/* implicit */long long int) (~(((/* implicit */int) arr_112 [i_12]))));
                /* LoopSeq 1 */
                for (short i_34 = 0; i_34 < 13; i_34 += 2) 
                {
                    arr_135 [i_12] [i_28] [i_28] [i_34] [i_34] [i_34] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -6740139411771905340LL)) ? (((/* implicit */int) ((unsigned char) (unsigned short)41830))) : (((/* implicit */int) ((signed char) (unsigned short)64)))));
                    var_58 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_71 [i_12] [i_12] [i_33]))))) != (((((/* implicit */_Bool) 8257536LL)) ? (((/* implicit */int) arr_121 [i_28] [i_28] [i_28])) : (arr_61 [i_12] [i_28] [i_33] [i_28])))));
                }
            }
            for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) /* same iter space */
            {
                var_59 = ((/* implicit */unsigned short) min((var_59), (((/* implicit */unsigned short) var_4))));
                /* LoopNest 2 */
                for (signed char i_36 = 0; i_36 < 13; i_36 += 4) 
                {
                    for (_Bool i_37 = 0; i_37 < 0; i_37 += 1) 
                    {
                        {
                            var_60 |= ((/* implicit */_Bool) ((unsigned int) arr_145 [i_37 + 1] [i_37 + 1] [i_37 + 1] [i_37 + 1] [i_37 + 1] [i_37 + 1] [i_37 + 1]));
                            var_61 = ((/* implicit */_Bool) max((var_61), (((/* implicit */_Bool) (-((((_Bool)1) ? (var_5) : (((/* implicit */int) var_6)))))))));
                        }
                    } 
                } 
                var_62 = ((/* implicit */unsigned char) max((var_62), (((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_146 [i_12] [0LL] [i_28] [i_28] [i_35])))))))));
            }
            arr_147 [i_12] [i_28] [(unsigned char)5] &= ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
        }
        arr_148 [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
    }
    var_63 = ((/* implicit */signed char) 1333805289);
    var_64 = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)64390))))), (((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_8)))))));
    var_65 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((((/* implicit */int) var_4)) + (2147483647))) << (((((/* implicit */int) var_10)) - (216)))))))) ? ((+(((/* implicit */int) max((((/* implicit */unsigned short) (short)-32654)), ((unsigned short)36088)))))) : ((+(((/* implicit */int) var_10))))));
}
