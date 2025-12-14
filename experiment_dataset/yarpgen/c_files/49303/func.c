/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49303
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) var_1)) ? (((var_11) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [(_Bool)1])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) max((max((((/* implicit */short) arr_0 [i_1])), (var_8))), (((/* implicit */short) ((unsigned char) var_12)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [(short)7])) : (((/* implicit */int) arr_0 [(short)16]))))) ? (((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) (unsigned char)139)) : (2147483647))) : (((/* implicit */int) arr_0 [i_1]))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_6)) ^ (((/* implicit */int) max((var_1), (((/* implicit */short) arr_4 [i_1] [i_1] [i_0])))))))));
                arr_7 [i_1] = ((/* implicit */signed char) ((((_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_3 [i_1] [(signed char)4] [i_1])) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
    {
        for (short i_3 = 3; i_3 < 18; i_3 += 4) 
        {
            {
                arr_15 [i_2] = ((/* implicit */signed char) ((unsigned int) arr_12 [i_2]));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 19; i_4 += 2) 
                {
                    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_14 = var_12;
                            /* LoopSeq 4 */
                            for (unsigned char i_6 = 2; i_6 < 17; i_6 += 1) 
                            {
                                var_15 = ((/* implicit */long long int) max(((signed char)103), (((/* implicit */signed char) (_Bool)1))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_5 + 2] [i_2 - 1] [i_3 + 1] [i_6 + 3]))))) ? (arr_18 [i_3 - 2] [i_4 + 1] [i_4]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5 + 2] [i_2 + 1] [i_3 + 2] [i_6 - 1])))))));
                            }
                            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                            {
                                arr_27 [i_2] [i_3] [(short)1] [i_4] [i_7 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_4])) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_9 [i_2])), (var_12))))))) ? (((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_5 + 2])) ? (max((arr_25 [i_2] [10LL] [i_4] [i_3 - 1] [i_4 + 1] [17] [i_7 - 1]), (((/* implicit */unsigned long long int) arr_23 [i_7] [i_4] [i_4 + 1] [i_4] [i_2])))) : (((unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_20 [i_4]))))))));
                                arr_28 [i_2] [i_3] [i_4] [(_Bool)1] [i_4] = ((/* implicit */unsigned char) ((max((((/* implicit */int) max((arr_21 [18LL] [i_3 + 2] [i_4 + 1] [18LL] [i_4 + 1]), (var_8)))), ((+(((/* implicit */int) var_11)))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20883)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_2]))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_21 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_5 + 1] [(_Bool)1])))))))));
                            }
                            /* vectorizable */
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                            {
                                arr_32 [i_2] [i_2] [i_4] [i_4 - 1] [i_5 + 3] [12] [i_4 - 1] = ((/* implicit */long long int) var_2);
                                arr_33 [i_8] [i_4] [i_5 + 3] [i_4] [i_4] [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)4)))) || (((/* implicit */_Bool) ((int) arr_18 [i_2 + 2] [i_2 + 2] [i_4])))));
                            }
                            /* vectorizable */
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                            {
                                var_17 *= ((/* implicit */unsigned char) var_8);
                                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4 - 1] [i_9]))) < (arr_22 [i_4]))) ? ((~(((/* implicit */int) arr_21 [15] [i_5 + 1] [(short)17] [i_3] [i_2])))) : (((var_11) ? (((/* implicit */int) arr_35 [i_9] [i_5] [i_4 - 1] [i_3 + 2] [(signed char)4])) : (((/* implicit */int) var_0))))));
                                arr_37 [i_2] [(unsigned short)8] [i_4] [i_4] [(_Bool)1] [i_5 + 3] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_9] [i_9] [(unsigned short)1] [i_3 - 1] [i_9])) & ((~(((/* implicit */int) arr_16 [i_2] [i_4] [i_4] [i_2]))))));
                                var_19 = ((/* implicit */unsigned char) var_11);
                            }
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) max((max((((((/* implicit */int) arr_8 [(_Bool)1] [(short)5])) != (((/* implicit */int) arr_26 [i_3] [i_2] [i_2])))), (var_6))), (max(((_Bool)1), ((_Bool)1)))));
                var_21 -= ((/* implicit */unsigned char) max(((~(((/* implicit */int) ((((/* implicit */_Bool) arr_29 [14] [(signed char)8] [i_2 + 1] [i_3 - 1] [i_2 + 1])) && (var_6)))))), (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (arr_12 [i_2]))))));
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    var_22 |= ((/* implicit */signed char) var_9);
                    arr_40 [i_2] [i_3] [i_2] = ((((/* implicit */int) (short)4980)) > (((/* implicit */int) (short)-3729)));
                    arr_41 [0] [0] [i_3 - 1] = ((/* implicit */unsigned short) max(((-(((((/* implicit */int) arr_19 [i_2] [(unsigned short)5] [i_10] [i_10])) >> (((((/* implicit */int) arr_29 [i_10] [(signed char)12] [(short)6] [(_Bool)1] [i_2 - 1])) - (630))))))), (((int) (short)3719))));
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 1; i_12 < 18; i_12 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((short) var_5))), (arr_25 [i_2 - 1] [i_2 + 1] [i_10] [i_2 + 2] [(short)18] [i_2 + 2] [i_3 - 1])))) ? (((/* implicit */int) ((_Bool) ((signed char) arr_10 [i_10] [i_11])))) : (max((((((/* implicit */int) var_1)) & (((/* implicit */int) var_8)))), (((/* implicit */int) max((((/* implicit */short) var_4)), (arr_29 [i_10] [i_3] [12ULL] [i_11] [i_12]))))))));
                                arr_46 [i_3] [i_3] [i_11] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_12))) || (((/* implicit */_Bool) var_9))))), (var_9)));
                                var_24 = ((/* implicit */_Bool) var_2);
                                var_25 |= ((/* implicit */signed char) arr_31 [i_2] [i_3 - 2] [i_10] [(short)17] [i_12] [i_10] [(unsigned short)13]);
                            }
                        } 
                    } 
                }
                for (signed char i_13 = 1; i_13 < 18; i_13 += 1) 
                {
                    arr_50 [(unsigned char)9] [i_3 - 3] [(unsigned char)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (((_Bool)1) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))), (arr_10 [i_2 + 2] [i_2 + 2])))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))), (min((((/* implicit */unsigned long long int) (signed char)-10)), (var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_10)) != (arr_23 [i_2] [(short)0] [i_2] [(unsigned char)2] [i_13])))), (arr_11 [i_13 + 2] [i_13 + 1])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_14 = 2; i_14 < 16; i_14 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_15 = 0; i_15 < 20; i_15 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_14]))) == (var_5)))))))));
                            arr_56 [i_14] [i_14] [i_13 + 1] [i_3 - 2] [i_2] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_54 [i_2 - 1] [i_14] [i_3 + 1] [i_3 - 2] [i_13 + 1] [i_2 - 1])) ? (((/* implicit */int) arr_54 [i_2] [i_14] [i_2 + 1] [i_3 - 2] [i_13 + 1] [i_13 - 1])) : (((/* implicit */int) arr_54 [i_2] [i_14] [i_14] [i_3 - 2] [i_13 + 1] [i_15]))));
                            arr_57 [i_2 + 1] [i_3 + 2] [i_15] [i_14] [(unsigned char)18] [i_14] = ((/* implicit */int) (unsigned char)174);
                            var_27 *= ((/* implicit */short) ((unsigned int) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_29 [i_15] [i_3] [(unsigned char)6] [i_3] [i_3])))));
                        }
                        var_28 |= ((/* implicit */short) (+(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)3739))))));
                    }
                    arr_58 [i_13 - 1] [i_13 - 1] [(_Bool)1] [i_13] = ((/* implicit */unsigned short) -9223372036854775799LL);
                    /* LoopSeq 3 */
                    for (unsigned short i_16 = 1; i_16 < 18; i_16 += 3) 
                    {
                        arr_63 [16ULL] [i_3 - 1] [i_3] [i_3 - 3] = ((/* implicit */unsigned char) var_6);
                        arr_64 [(unsigned short)6] [i_13] [(signed char)4] [i_3] [i_2] = ((/* implicit */unsigned short) arr_24 [1] [i_3 - 1] [i_3 - 1] [1] [i_3 - 1]);
                        var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((((/* implicit */int) arr_52 [i_2 + 1])) << (((/* implicit */int) arr_52 [i_2]))))) == (((unsigned int) arr_62 [i_2] [i_2] [i_2 - 1])))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_39 [i_2] [i_3 - 1])) ? (arr_25 [(signed char)10] [i_3] [(unsigned char)2] [i_16 + 2] [(_Bool)1] [i_13] [(short)6]) : (((/* implicit */unsigned long long int) 648550202)))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_13 [i_13] [i_16 + 2] [i_16 + 2])) & (((/* implicit */int) arr_12 [i_13]))))))));
                        var_30 |= ((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_60 [i_2] [i_3] [i_13] [i_3] [(_Bool)1] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) : (arr_25 [i_2] [i_3 - 1] [(short)18] [i_2] [(short)2] [(unsigned char)10] [i_3])))))));
                        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) 3151383273183592165ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)24551)))))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 4) 
                    {
                        var_32 = ((((/* implicit */int) ((unsigned char) 3151383273183592165ULL))) > (max((((/* implicit */int) (unsigned char)45)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_38 [i_2] [i_2 - 1] [(signed char)15])) : (((/* implicit */int) arr_13 [12] [i_3] [(signed char)12])))))));
                        arr_69 [i_2 - 1] [i_2 - 1] [(short)15] [(unsigned short)9] = ((/* implicit */signed char) (!(((((((/* implicit */_Bool) arr_23 [i_2] [i_3] [18] [i_17] [(unsigned short)2])) ? (((/* implicit */int) arr_61 [i_13] [(unsigned char)5] [i_13 - 1] [i_13] [(unsigned char)5] [i_13])) : (((/* implicit */int) var_8)))) < (((/* implicit */int) arr_30 [i_17]))))));
                    }
                    for (int i_18 = 2; i_18 < 19; i_18 += 2) 
                    {
                        arr_73 [i_2] [i_3 - 1] [i_13] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_12 [3ULL])) : (((/* implicit */int) arr_36 [i_2 + 2] [(unsigned char)2] [i_2 + 2] [8] [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (min((((/* implicit */unsigned long long int) var_0)), (var_5))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_2] [i_2] [(unsigned short)15] [i_3] [i_13] [15LL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_72 [i_18] [i_3] [(short)8] [i_3])))))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [1])) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_45 [i_3] [(_Bool)1] [i_3] [i_3])) & (((/* implicit */int) var_12))))), (((arr_67 [i_2] [i_2] [i_2 + 2] [(unsigned char)16] [i_2 + 2]) ? (arr_25 [i_2 + 1] [(_Bool)1] [i_18] [12ULL] [(_Bool)1] [i_3] [(unsigned char)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (1647327212))))));
                        arr_74 [(unsigned short)11] [i_3] [i_18 - 1] = ((/* implicit */int) ((unsigned long long int) ((unsigned char) ((unsigned long long int) var_1))));
                    }
                    var_34 = ((/* implicit */unsigned int) ((short) var_0));
                }
            }
        } 
    } 
    var_35 = ((/* implicit */short) max((4095), (2147483634)));
    var_36 = ((/* implicit */signed char) min((((/* implicit */int) ((short) max((-2147483620), (((/* implicit */int) (signed char)-24)))))), (1073741824)));
}
