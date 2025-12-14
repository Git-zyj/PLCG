/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216092
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
    var_18 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((10020004363083822988ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (var_11)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_7))))) : (var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((2147483647), (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_7)) << (((var_14) + (4023922533259488790LL))))))))));
    var_19 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) 63U))) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) (signed char)-48)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(unsigned short)19])) | (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
            arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((/* implicit */unsigned long long int) ((arr_4 [i_1]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)7596))))) : (((((/* implicit */_Bool) arr_3 [i_1] [(unsigned char)20] [i_0])) ? (4684180941651974174ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251)))))));
            var_22 = ((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0]));
        }
        /* LoopSeq 4 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            var_23 = 65U;
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (int i_4 = 4; i_4 < 18; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_5] [16] [i_2] [i_2] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0]))))) : (((/* implicit */int) arr_10 [i_0] [i_2]))));
                            arr_18 [i_0] [(unsigned char)6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_5] [i_4 + 2] [i_2] [i_0])) ? (((/* implicit */int) ((signed char) arr_3 [i_0] [i_2] [(unsigned char)20]))) : (((((/* implicit */int) var_1)) | (((/* implicit */int) (unsigned char)24))))));
                        }
                        for (int i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_2]))) + (var_6)));
                            var_25 = (-(arr_14 [i_4 + 1] [i_4 - 3]));
                        }
                        for (int i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 27019097U))) ? (arr_23 [i_4 + 1] [i_4] [i_4] [(unsigned short)2]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_4] [i_7])))))));
                            arr_26 [i_0] [i_0] [i_3] = arr_10 [(unsigned char)11] [i_2];
                        }
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_0] [i_2] [i_3] [i_0] [i_0] [i_4 + 3])) << (((/* implicit */int) arr_20 [i_0] [i_2] [i_3] [(short)5] [i_4]))));
                    }
                } 
            } 
            arr_27 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7572))) <= (arr_22 [7LL] [(signed char)5] [i_0] [i_2] [i_2])));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                arr_32 [i_0] [i_0] [i_9] [i_0] = ((((/* implicit */_Bool) arr_3 [i_9] [i_8] [i_0])) ? (((unsigned long long int) arr_9 [i_0] [i_0] [i_9])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -409626639)) ? (((/* implicit */int) arr_29 [i_9])) : (((/* implicit */int) var_12))))));
                arr_33 [i_8] [i_8] = ((/* implicit */int) (short)32759);
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (-(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [17U])))))));
            }
            /* LoopSeq 4 */
            for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                arr_36 [i_0] [i_8] &= ((/* implicit */unsigned int) arr_14 [i_0] [i_0]);
                arr_37 [i_0] [i_0] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) 16544935645029871352ULL)) ? (((/* implicit */int) arr_4 [i_10])) : (((/* implicit */int) arr_3 [i_0] [(short)12] [i_10])))) < (((/* implicit */int) ((unsigned short) arr_19 [i_0] [i_8] [i_0] [i_8] [i_8] [i_0])))));
            }
            for (unsigned char i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
            {
                arr_41 [i_0] [i_8] = ((/* implicit */unsigned short) arr_14 [i_0] [5U]);
                arr_42 [i_0] [i_8] [i_8] = ((((var_13) - (((/* implicit */long long int) ((/* implicit */int) var_3))))) >> (((((/* implicit */int) (unsigned char)78)) - (22))));
            }
            for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (short)32752)) % (((/* implicit */int) var_0)))));
                var_29 = ((400586549U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_8] [i_12] [i_12] [i_8] [i_8] [i_8]))));
                var_30 = ((/* implicit */unsigned long long int) ((arr_9 [i_8] [i_8] [i_12]) - (((/* implicit */int) arr_1 [i_0]))));
                /* LoopSeq 3 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_31 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_29 [i_0]))))) - ((+(13762563132057577416ULL)))));
                    var_32 = arr_8 [i_8] [i_13];
                    var_33 = ((/* implicit */_Bool) ((unsigned char) var_13));
                    var_34 = ((/* implicit */unsigned short) ((arr_7 [i_8]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_8] [i_8] [i_8] [i_13] [i_8] [(_Bool)1] [i_0])))));
                }
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    arr_52 [i_0] [i_8] [i_12] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_22 [(signed char)20] [i_8] [i_8] [i_14] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)34)))))) ? ((+(8426739710625728629ULL))) : (arr_7 [i_8])));
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) arr_20 [i_0] [i_8] [i_0] [i_8] [i_14]))));
                    var_36 = ((/* implicit */short) ((signed char) arr_46 [i_14 - 1] [i_12] [i_12] [(_Bool)0]));
                }
                for (signed char i_15 = 0; i_15 < 21; i_15 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_16 = 3; i_16 < 18; i_16 += 1) 
                    {
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_0] [i_8] [i_16 + 3] [i_8] [(unsigned short)10] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [18U] [i_16 + 1] [i_15] [i_16] [i_12]))) : (2919423353U)));
                        arr_58 [i_0] [i_0] [i_0] [i_12] [i_15] [i_16] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)42)) + (((/* implicit */int) (_Bool)1)))) >> (((var_13) - (8222061437781452353LL)))));
                        var_38 = ((/* implicit */short) ((((/* implicit */int) arr_15 [i_0] [i_8] [i_12] [i_12] [i_8])) > (((/* implicit */int) arr_53 [i_0] [i_8] [i_0] [(unsigned char)0] [i_16] [i_16 + 1]))));
                    }
                    for (int i_17 = 0; i_17 < 21; i_17 += 2) 
                    {
                        var_39 += ((/* implicit */short) (+(arr_59 [i_8] [i_8] [i_12] [i_15] [20U] [i_12])));
                        arr_61 [i_8] [i_8] [i_8] [i_15] [i_15] [i_17] = ((/* implicit */signed char) (+(((/* implicit */int) arr_19 [i_17] [(_Bool)0] [i_12] [i_8] [i_0] [i_0]))));
                        arr_62 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_38 [i_0] [i_12] [(unsigned short)6] [i_15]);
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_40 += ((/* implicit */unsigned char) arr_13 [i_0] [i_0] [16U] [i_0] [i_0]);
                        var_41 = ((/* implicit */signed char) ((unsigned char) arr_14 [i_0] [i_8]));
                    }
                    for (unsigned int i_19 = 3; i_19 < 20; i_19 += 1) 
                    {
                        var_42 ^= ((/* implicit */unsigned int) ((arr_35 [i_19 - 1]) ? (4684180941651974185ULL) : (((/* implicit */unsigned long long int) arr_6 [i_19 - 1] [i_19 + 1]))));
                        var_43 = arr_19 [i_19 + 1] [i_19] [i_19 - 1] [i_19] [(short)16] [i_19 - 3];
                        var_44 = ((/* implicit */int) arr_46 [18] [i_12] [(unsigned short)20] [i_19]);
                    }
                    var_45 = ((((/* implicit */_Bool) arr_65 [i_0])) ? (arr_47 [i_0] [i_8] [18ULL] [i_15]) : (arr_47 [i_0] [i_0] [i_12] [i_15]));
                }
            }
            for (unsigned int i_20 = 0; i_20 < 21; i_20 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_21 = 0; i_21 < 21; i_21 += 1) 
                {
                    var_46 &= arr_57 [i_0] [i_0] [(_Bool)1] [i_0];
                    var_47 += ((/* implicit */signed char) (+(var_13)));
                }
                /* LoopSeq 3 */
                for (unsigned int i_22 = 0; i_22 < 21; i_22 += 1) 
                {
                    arr_76 [i_0] [i_8] [i_20] [i_22] = ((/* implicit */signed char) var_14);
                    var_48 = ((/* implicit */short) ((unsigned char) var_9));
                    var_49 += ((/* implicit */unsigned short) 2616660371U);
                    /* LoopSeq 1 */
                    for (int i_23 = 0; i_23 < 21; i_23 += 4) 
                    {
                        var_50 = ((/* implicit */_Bool) min((var_50), (((/* implicit */_Bool) arr_0 [i_8]))));
                        arr_80 [i_0] [i_8] [i_20] &= ((/* implicit */short) arr_35 [i_0]);
                        arr_81 [i_8] [(unsigned char)14] = ((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                }
                for (signed char i_24 = 1; i_24 < 20; i_24 += 2) 
                {
                    arr_86 [(short)18] [i_8] [i_20] [i_24] [(short)18] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_82 [i_24 - 1] [i_8] [i_20] [i_24] [i_8]))));
                    var_51 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) (unsigned char)150)))));
                }
                for (unsigned int i_25 = 0; i_25 < 21; i_25 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_26 = 3; i_26 < 19; i_26 += 4) 
                    {
                        var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) 4294967236U))));
                        var_53 = ((/* implicit */short) (~(((/* implicit */int) arr_50 [i_26 + 1]))));
                        var_54 ^= ((/* implicit */unsigned long long int) ((63U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_26] [i_26 - 3] [(signed char)5] [i_26 - 2] [(signed char)5] [i_26])))));
                    }
                    var_55 = (i_25 % 2 == zero) ? (((4294967234U) << (((/* implicit */int) arr_64 [i_25])))) : (((4294967234U) << (((((/* implicit */int) arr_64 [i_25])) + (75)))));
                    var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_0] [(short)14])) + (((/* implicit */int) arr_3 [i_0] [i_0] [i_20]))));
                    /* LoopSeq 4 */
                    for (unsigned short i_27 = 2; i_27 < 19; i_27 += 1) 
                    {
                        var_57 = ((/* implicit */unsigned long long int) ((_Bool) arr_49 [i_0] [i_27 - 2] [i_27] [12ULL]));
                        arr_95 [i_27] [(signed char)20] [i_20] [(_Bool)1] [i_27] [i_0] [i_25] = ((/* implicit */unsigned short) ((signed char) arr_67 [i_0] [i_8] [i_27 - 1] [i_27 - 1] [i_27 - 1] [9]));
                    }
                    for (unsigned short i_28 = 0; i_28 < 21; i_28 += 1) /* same iter space */
                    {
                        arr_99 [i_28] [i_25] [i_20] [i_25] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_49 [i_8] [i_20] [i_25] [20ULL])) ? (4684180941651974174ULL) : (13762563132057577450ULL)))));
                        var_58 = ((/* implicit */unsigned short) (unsigned char)16);
                        arr_100 [i_25] [i_25] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_39 [(short)4] [(short)4] [i_25])) <= (((/* implicit */int) arr_10 [i_0] [i_8])))));
                    }
                    for (unsigned short i_29 = 0; i_29 < 21; i_29 += 1) /* same iter space */
                    {
                        arr_103 [i_0] [i_8] [i_20] [i_25] [i_29] = ((/* implicit */short) ((((((/* implicit */int) arr_38 [i_25] [i_25] [i_20] [i_25])) <= (((/* implicit */int) arr_46 [i_0] [i_25] [i_0] [i_25])))) ? ((+(((/* implicit */int) (unsigned char)62)))) : (((/* implicit */int) arr_28 [i_0] [i_0]))));
                        arr_104 [i_25] [i_20] [i_20] [i_20] [6ULL] [(short)17] [i_25] = (!(((/* implicit */_Bool) arr_50 [i_29])));
                    }
                    for (unsigned short i_30 = 0; i_30 < 21; i_30 += 1) /* same iter space */
                    {
                        arr_109 [i_0] [(signed char)10] [i_0] [(signed char)10] [(signed char)10] [i_25] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)117))));
                        var_59 = ((/* implicit */short) ((arr_22 [i_0] [i_8] [i_20] [i_25] [(unsigned char)13]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    }
                }
            }
        }
        for (unsigned char i_31 = 2; i_31 < 17; i_31 += 1) 
        {
            var_60 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_56 [i_0] [i_31 - 2] [i_0] [i_31])) : (((/* implicit */int) arr_56 [i_0] [i_31 - 1] [i_0] [i_31]))));
            var_61 *= ((/* implicit */unsigned char) var_8);
        }
        for (unsigned int i_32 = 1; i_32 < 18; i_32 += 1) 
        {
            arr_116 [i_32] [i_32] = ((/* implicit */unsigned int) (-(var_14)));
            var_62 = ((/* implicit */_Bool) ((arr_55 [i_32 - 1]) ? (((/* implicit */int) arr_31 [i_32] [i_32 - 1])) : (((/* implicit */int) arr_31 [i_0] [i_32 + 3]))));
        }
        arr_117 [i_0] [i_0] = ((/* implicit */int) ((arr_63 [(signed char)4]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)2423)) : (((/* implicit */int) arr_29 [i_0])))))));
        var_63 = ((/* implicit */unsigned short) min((var_63), (((/* implicit */unsigned short) ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned char)253)))))));
    }
    /* vectorizable */
    for (unsigned int i_33 = 0; i_33 < 21; i_33 += 1) /* same iter space */
    {
        arr_120 [18U] [i_33] &= ((/* implicit */unsigned char) arr_15 [i_33] [i_33] [i_33] [i_33] [i_33]);
        var_64 = ((/* implicit */_Bool) (-(13762563132057577431ULL)));
    }
}
