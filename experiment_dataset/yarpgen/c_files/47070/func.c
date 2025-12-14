/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47070
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
    var_17 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_18 ^= ((/* implicit */long long int) ((_Bool) (unsigned char)148));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            var_19 = ((int) ((unsigned char) 443893120U));
                            arr_12 [(unsigned char)2] [i_2] [(signed char)3] [10LL] [i_4] = ((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_3] [i_4]);
                        }
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_20 = ((/* implicit */long long int) arr_14 [i_2] [i_1] [i_0] [i_0] [i_1]);
                            arr_15 [i_0] [7] [i_0] [i_0] [i_2] = ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_4 [4U] [i_1] [i_1] [i_1])));
                        }
                    }
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) arr_5 [i_2] [i_1] [(_Bool)1] [i_1]))))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 1940377365U)) ? (3851074166U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)148))))), (443893115U)));
                    var_23 = ((/* implicit */unsigned long long int) arr_3 [i_6] [(unsigned char)10]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        for (short i_8 = 3; i_8 < 10; i_8 += 4) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_1] [i_1] [i_8 - 3] = ((/* implicit */unsigned long long int) var_7);
                                arr_23 [i_6] [i_1] [i_6] = ((/* implicit */unsigned short) max((3851074175U), (((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) 3851074184U)) != (var_2))), (((_Bool) 2676172511478933629LL)))))));
                                arr_24 [i_0] [i_0] [(short)8] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_4 [i_0] [(unsigned char)0] [i_7] [(signed char)0])), (((unsigned int) arr_8 [i_0] [i_0] [i_0]))))), (((unsigned long long int) (signed char)-8))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 3; i_9 < 9; i_9 += 4) 
                    {
                        var_24 = ((/* implicit */int) min((var_24), ((~(max((((/* implicit */int) (unsigned char)107)), (-1)))))));
                        arr_27 [7U] [(signed char)10] [i_6] [i_9] = ((/* implicit */int) var_7);
                        arr_28 [i_0] [9] [i_6] [i_9 - 2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65517)))))) % ((-(((unsigned int) arr_5 [i_0] [i_0] [i_6] [7LL]))))));
                        arr_29 [i_0] [i_1] [i_6] [i_9] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0])) * ((~(((/* implicit */int) arr_6 [i_0] [(short)4] [1LL])))))));
                    }
                }
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    /* LoopSeq 3 */
                    for (short i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        var_25 += ((/* implicit */int) max((((unsigned char) arr_34 [i_0] [(unsigned short)2] [i_0] [(_Bool)1] [4ULL] [i_0])), (((/* implicit */unsigned char) (((-(((/* implicit */int) var_4)))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_10] [(short)8]))))))))));
                        /* LoopSeq 1 */
                        for (int i_12 = 3; i_12 < 10; i_12 += 2) 
                        {
                            arr_39 [i_12] [i_12] [i_10] [i_12] [i_0] = ((/* implicit */unsigned int) (+(var_2)));
                            arr_40 [i_1] [i_11] [i_10] [i_1] [i_1] &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1960122293)), (18446744073709551600ULL)));
                            var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -7206085132269167443LL))));
                        }
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_27 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned int) arr_41 [i_13 - 1] [i_13 - 1] [i_13] [i_13]))), (max((((/* implicit */unsigned long long int) arr_7 [i_13 - 1] [i_13 - 1] [i_10] [i_13 - 1])), (var_15)))));
                        var_28 = ((/* implicit */_Bool) max((var_28), (((_Bool) (short)32767))));
                        arr_44 [i_0] [i_1] [i_10] = ((/* implicit */unsigned int) max((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) (((-(arr_32 [(signed char)2]))) < (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))))));
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        arr_47 [i_0] [i_14] [i_0] [i_10] [i_14 - 1] [i_14 - 1] = ((/* implicit */_Bool) ((signed char) ((unsigned long long int) max((var_16), (((/* implicit */int) var_13))))));
                        arr_48 [i_14] [(unsigned short)4] = ((/* implicit */signed char) ((((/* implicit */int) arr_37 [i_14] [i_1] [i_10])) == ((+(((((/* implicit */_Bool) arr_16 [10LL] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_10] [i_14 - 1])) : (var_11)))))));
                    }
                    arr_49 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_42 [i_0] [i_1] [i_10] [i_0])) ? (((/* implicit */int) arr_43 [i_0] [i_0] [i_1] [i_10])) : (arr_3 [(_Bool)1] [i_1]))) & (((/* implicit */int) ((short) ((unsigned int) var_8))))));
                    arr_50 [i_0] [i_0] [i_0] [2LL] = ((/* implicit */short) var_10);
                    var_29 = ((/* implicit */unsigned char) ((signed char) ((unsigned short) arr_35 [(unsigned short)3] [i_1] [0U] [(unsigned short)3])));
                    /* LoopSeq 3 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_30 &= ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [5ULL] [(_Bool)1]))))))));
                        arr_53 [i_15] [(_Bool)1] [i_1] [i_0] = arr_30 [i_0] [i_0] [(signed char)2] [i_15];
                        var_31 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((unsigned int) (short)-22269))), (arr_36 [i_15])));
                        /* LoopSeq 2 */
                        for (unsigned int i_16 = 2; i_16 < 8; i_16 += 4) 
                        {
                            arr_57 [(unsigned char)3] [(unsigned char)3] [0] [i_15] [(unsigned short)0] [(unsigned char)2] = ((/* implicit */unsigned long long int) var_1);
                            arr_58 [i_15] [i_1] [i_10] [i_15] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) arr_25 [i_16 - 1] [i_16] [i_16 + 1] [i_16 - 2] [2LL])));
                            arr_59 [i_0] [(unsigned short)3] [i_0] [i_0] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)32767)), ((unsigned short)65505)))) || (((/* implicit */_Bool) max((arr_25 [i_16 + 1] [i_16] [i_16 + 1] [i_16] [(unsigned short)7]), (arr_25 [i_16 + 1] [i_16 + 2] [i_16] [i_16] [i_16]))))));
                            var_32 = ((/* implicit */signed char) ((short) (_Bool)1));
                            arr_60 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) ((signed char) var_7))) ^ (((/* implicit */int) var_3)))));
                        }
                        for (unsigned short i_17 = 0; i_17 < 11; i_17 += 1) 
                        {
                            var_33 = ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned int) arr_3 [(unsigned short)1] [i_1])), (var_6))));
                            arr_63 [i_0] [i_1] [(_Bool)1] [i_17] [i_17] [(_Bool)1] [i_17] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)4))));
                            var_34 = ((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_10] [4U] [i_10] [i_17]);
                            arr_64 [i_1] [i_17] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 4) /* same iter space */
                    {
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((signed char) 1698127754U)))));
                        var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_30 [i_0] [(signed char)9] [i_10] [8])), (var_15))), (((/* implicit */unsigned long long int) ((_Bool) arr_3 [10LL] [8]))))))));
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 4) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((_Bool) var_0)))));
                        /* LoopSeq 2 */
                        for (long long int i_20 = 0; i_20 < 11; i_20 += 4) 
                        {
                            arr_72 [(unsigned short)7] [i_10] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) max(((unsigned short)1725), (((/* implicit */unsigned short) (unsigned char)58)))))))) ^ (43183589U)));
                            arr_73 [i_20] [i_19] [i_19] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_46 [i_0] [i_1] [i_10] [i_19]))))), (var_6)));
                            var_38 = ((/* implicit */_Bool) max(((~(((/* implicit */int) ((((/* implicit */int) arr_42 [i_0] [i_10] [i_19] [i_20])) > (((/* implicit */int) var_4))))))), (((/* implicit */int) var_10))));
                            var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) arr_33 [i_0] [i_1] [i_0]))));
                        }
                        for (long long int i_21 = 0; i_21 < 11; i_21 += 4) 
                        {
                            var_40 = ((/* implicit */unsigned char) max((((int) 1614126194)), (((/* implicit */int) max((arr_37 [i_21] [i_21] [i_19]), (arr_37 [i_1] [i_10] [i_1]))))));
                            arr_78 [i_0] [(unsigned char)4] [i_1] [(signed char)0] [2ULL] [i_21] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) arr_75 [i_0] [i_1] [(_Bool)1] [6U] [i_1] [i_0] [i_1])));
                            arr_79 [10ULL] [10ULL] [i_10] = ((/* implicit */unsigned char) ((unsigned long long int) (+(var_12))));
                            var_41 = ((/* implicit */unsigned short) ((unsigned char) ((long long int) (unsigned short)127)));
                        }
                        var_42 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned char) min((((/* implicit */unsigned long long int) 1152921504606846975LL)), (var_0)))));
                    }
                }
                for (unsigned int i_22 = 0; i_22 < 11; i_22 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_23 = 2; i_23 < 10; i_23 += 4) 
                    {
                        var_43 -= ((/* implicit */int) arr_62 [i_0] [i_1] [i_0] [i_23 - 1] [(unsigned short)10]);
                        var_44 = ((/* implicit */unsigned int) ((unsigned short) arr_80 [i_1] [(short)3] [(unsigned char)10]));
                        arr_84 [i_0] [(signed char)6] [i_22] &= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_45 [i_23] [(short)2] [i_23]))))))));
                        /* LoopSeq 2 */
                        for (int i_24 = 0; i_24 < 11; i_24 += 3) 
                        {
                            arr_88 [i_22] [(_Bool)1] [i_22] [2U] [i_24] [i_0] [i_24] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_70 [(_Bool)1] [4ULL] [4ULL] [i_23] [i_24]))));
                            var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) ((_Bool) (signed char)13)))));
                        }
                        for (unsigned char i_25 = 0; i_25 < 11; i_25 += 3) 
                        {
                            arr_93 [i_0] [i_1] [i_0] [i_0] [i_25] = ((/* implicit */_Bool) max((7206085132269167461LL), (((/* implicit */long long int) (_Bool)1))));
                            var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -480555170)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7206085132269167462LL)));
                        }
                    }
                    arr_94 [i_0] [i_1] = ((/* implicit */unsigned int) var_15);
                    /* LoopSeq 2 */
                    for (unsigned char i_26 = 0; i_26 < 11; i_26 += 4) 
                    {
                        var_47 = ((/* implicit */unsigned int) ((long long int) (unsigned short)1686));
                        var_48 = ((/* implicit */short) ((unsigned int) max(((+(((/* implicit */int) var_14)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) > (arr_31 [i_0] [i_0] [i_0] [i_0])))))));
                        var_49 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)32761))));
                        var_50 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_61 [(_Bool)1] [2] [i_22] [i_1] [7U] [(_Bool)1])) >> (((((/* implicit */int) arr_70 [0LL] [i_0] [i_0] [4LL] [10])) - (68)))));
                        var_51 |= ((unsigned int) ((unsigned int) (_Bool)1));
                    }
                    for (short i_27 = 2; i_27 < 7; i_27 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_28 = 0; i_28 < 11; i_28 += 1) 
                        {
                            var_52 = ((/* implicit */unsigned long long int) min((var_52), (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_96 [i_27 + 4])), ((-(9223372036854775807LL))))), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [8U] [i_22] [i_22] [(signed char)3]))) > (var_0))))))))))));
                            var_53 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)2861))))) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), ((short)21848)))))));
                            arr_104 [3U] [i_1] [i_1] [i_1] [i_28] [0ULL] [i_1] = ((/* implicit */long long int) max((max((((unsigned long long int) (_Bool)1)), (arr_85 [i_28] [i_28] [i_22] [i_27 + 4] [i_27 + 2] [i_27] [(signed char)3]))), (((/* implicit */unsigned long long int) (-(2354589919U))))));
                            var_54 = ((/* implicit */unsigned int) ((int) (unsigned char)255));
                        }
                        for (int i_29 = 0; i_29 < 11; i_29 += 1) 
                        {
                            arr_108 [(unsigned short)6] [i_1] [i_1] [i_1] [0U] [i_29] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((signed char) -1798115229))), (((((/* implicit */_Bool) -245879902187835066LL)) ? (((/* implicit */unsigned long long int) 7206085132269167461LL)) : (13237798094504301086ULL)))));
                            var_55 = ((/* implicit */unsigned long long int) min((var_55), (min((((((/* implicit */_Bool) arr_7 [i_27 + 4] [10] [i_27 + 4] [i_27])) ? (var_2) : (((/* implicit */unsigned long long int) arr_81 [(_Bool)1] [i_27 + 2] [i_29])))), (((/* implicit */unsigned long long int) ((unsigned int) 2147483136U)))))));
                        }
                        var_56 = ((/* implicit */_Bool) var_16);
                    }
                    var_57 = ((/* implicit */int) arr_97 [i_0] [i_0] [i_22] [(signed char)5]);
                }
            }
        } 
    } 
}
