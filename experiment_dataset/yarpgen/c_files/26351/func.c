/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26351
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
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)145))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_0 [i_0 - 1] [i_0])))) ? ((-(arr_0 [i_0] [i_0 + 1]))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0 - 2] [i_0]) : (arr_0 [i_0 + 2] [i_0 + 2])))));
        var_20 -= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (+(var_18)))) ? ((+(((/* implicit */int) (unsigned char)165)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (arr_0 [i_0] [i_0])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(signed char)8] [i_1] [i_2] [i_2]))))) & (((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) (signed char)127)) - (121)))))));
                        var_22 &= ((/* implicit */unsigned char) var_5);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)142))) : (arr_12 [i_1] [i_1] [(unsigned char)14])));
                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_7 [i_4] [i_1] [i_1] [(signed char)0]))) ? ((~(17706586491720556711ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 740157581988994905ULL))))))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    arr_21 [9ULL] [3ULL] [i_4] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))));
                    arr_22 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) (signed char)-118)))) + ((+(((/* implicit */int) var_0))))));
                }
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)2] [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) var_10))))))))));
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 12727048687514993824ULL)) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */int) (unsigned char)127)) >> (((((/* implicit */int) (unsigned char)134)) - (127))))))))));
            }
            arr_23 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
        }
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
        {
            arr_28 [i_0] [i_6] [(unsigned char)1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)132))));
            var_26 ^= ((((/* implicit */int) (signed char)-90)) != (((/* implicit */int) (unsigned char)12)));
        }
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            arr_35 [i_7] [(signed char)10] [19ULL] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-119)) || (((/* implicit */_Bool) (signed char)119)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 740157581988994934ULL)) ? (((/* implicit */int) arr_33 [i_7] [(unsigned char)14])) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_17)) ? (17706586491720556676ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_8] [(unsigned char)0])))))));
            arr_36 [5ULL] = ((/* implicit */signed char) arr_31 [i_7]);
        }
        for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 4) 
        {
            arr_40 [(unsigned char)11] [(unsigned char)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) arr_33 [i_7] [i_9])) & (((/* implicit */int) arr_32 [i_7] [i_7]))))));
            arr_41 [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_7]))));
            arr_42 [i_9] = ((/* implicit */_Bool) arr_32 [i_9] [i_7]);
            arr_43 [(_Bool)1] [i_9] = ((arr_29 [i_9 + 1]) ? (arr_31 [i_9 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9 - 1]))));
        }
        var_27 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)254)) / ((-(((/* implicit */int) arr_39 [(_Bool)1]))))));
        /* LoopSeq 3 */
        for (unsigned char i_10 = 1; i_10 < 20; i_10 += 4) 
        {
            arr_46 [i_7] [i_10 + 2] [(unsigned char)3] = ((/* implicit */unsigned char) (-(arr_31 [i_10])));
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)72)))))));
        }
        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
        {
            arr_51 [i_11] = var_1;
            /* LoopNest 3 */
            for (unsigned char i_12 = 0; i_12 < 23; i_12 += 1) 
            {
                for (unsigned char i_13 = 1; i_13 < 21; i_13 += 3) 
                {
                    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_39 [i_7]))) - (((/* implicit */int) (signed char)-106))));
                            arr_60 [i_11] [i_11] [i_12] [13ULL] [13ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(5ULL)))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)12)))) : (((/* implicit */int) var_7))));
                            arr_61 [i_7] [i_7] [i_12] [i_7] [i_13] [i_11] [i_14] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_59 [i_13 - 1] [i_13 + 2] [i_11]))));
                        }
                    } 
                } 
            } 
            arr_62 [i_7] [(signed char)4] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(25ULL))))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_63 [i_7] [i_15]))));
            /* LoopSeq 4 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_31 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_54 [(signed char)12] [i_15] [i_16] [(unsigned char)4])) < (((/* implicit */int) arr_54 [(unsigned char)14] [i_15] [(unsigned char)14] [(unsigned char)14]))));
                /* LoopSeq 3 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_32 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_53 [i_17] [(signed char)8]))));
                    arr_71 [i_7] [i_15] [i_15] = (!(((/* implicit */_Bool) arr_64 [1ULL] [i_17])));
                }
                for (unsigned char i_18 = 0; i_18 < 23; i_18 += 2) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_76 [i_7] [i_19] [i_19] [(_Bool)1] [(signed char)13])))) ? ((-(((/* implicit */int) (signed char)96)))) : (((/* implicit */int) ((17706586491720556711ULL) <= (arr_31 [i_7]))))));
                        arr_77 [i_7] [i_15] [i_7] [i_19] [i_19] = 0ULL;
                        arr_78 [i_7] [i_15] [i_16] [(unsigned char)1] [i_19] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_33 [i_7] [i_19]))));
                        var_34 *= ((/* implicit */_Bool) ((arr_66 [i_7] [i_7]) ? ((~(((/* implicit */int) arr_73 [i_7] [i_15] [i_15] [(_Bool)1] [(_Bool)1])))) : (((/* implicit */int) (!((_Bool)1))))));
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 4) /* same iter space */
                    {
                        var_35 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_52 [i_18] [i_18]))))) != ((((_Bool)1) ? (5719695386194557792ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)138)))))));
                        arr_82 [(unsigned char)2] [i_16] [i_16] [i_20] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_44 [i_7] [(_Bool)1])))) < (((/* implicit */int) (unsigned char)33))));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_18])) ? (arr_38 [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_7]))))))));
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [(unsigned char)8] [(unsigned char)18] [i_16])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) : (((/* implicit */int) ((((/* implicit */_Bool) 3912629634607274517ULL)) && (((/* implicit */_Bool) (unsigned char)27)))))));
                        arr_86 [i_7] [i_7] [i_7] [(unsigned char)3] [(unsigned char)14] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))));
                    }
                    arr_87 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_44 [i_16] [i_15])) ? (((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_73 [i_18] [i_18] [i_18] [i_18] [(_Bool)1])))) : (((/* implicit */int) arr_85 [i_18] [i_18] [i_16] [i_18] [(signed char)0] [i_15] [(unsigned char)2]))));
                    arr_88 [i_7] [i_16] [i_16] &= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_18]))))) <= (((/* implicit */int) (_Bool)1))));
                    var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((signed char) var_0)))));
                }
                for (unsigned long long int i_22 = 1; i_22 < 22; i_22 += 2) 
                {
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) : (arr_38 [i_15]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)200))) | (arr_89 [i_22])))));
                    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_58 [i_7] [i_22] [i_16])) & ((+(((/* implicit */int) var_12))))));
                    var_41 = ((/* implicit */unsigned long long int) var_11);
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_23 = 0; i_23 < 23; i_23 += 3) 
                {
                    arr_94 [i_23] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_23])))));
                    /* LoopSeq 1 */
                    for (signed char i_24 = 3; i_24 < 21; i_24 += 3) 
                    {
                        var_42 &= ((/* implicit */_Bool) ((unsigned char) (signed char)-105));
                        var_43 += ((/* implicit */unsigned char) ((_Bool) arr_75 [(unsigned char)8] [i_24 - 2] [i_24] [i_24 + 1] [i_24]));
                        var_44 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_13)) ? (arr_31 [(unsigned char)19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                        var_45 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)244))));
                    }
                    arr_99 [i_7] [i_23] = (!(((/* implicit */_Bool) arr_32 [i_7] [i_15])));
                }
                for (unsigned long long int i_25 = 0; i_25 < 23; i_25 += 3) 
                {
                    arr_104 [i_7] [(unsigned char)6] [(unsigned char)6] [(unsigned char)12] [12ULL] [(unsigned char)12] &= ((/* implicit */_Bool) ((unsigned long long int) arr_39 [i_25]));
                    var_46 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_18) + (arr_89 [i_25]))))));
                    arr_105 [i_25] [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_16] = ((/* implicit */_Bool) (signed char)96);
                }
            }
            for (unsigned long long int i_26 = 0; i_26 < 23; i_26 += 3) 
            {
                var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_67 [i_7] [(unsigned char)9] [i_26])) ? (((/* implicit */int) arr_33 [i_15] [i_7])) : (((/* implicit */int) arr_45 [i_7]))));
                var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)142)) ? (((/* implicit */int) arr_39 [i_15])) : (((/* implicit */int) (signed char)-71))));
                var_49 ^= ((/* implicit */_Bool) var_18);
            }
            for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
            {
                arr_110 [i_7] [i_15] [i_27] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (unsigned char)170)))));
                var_50 = (~(arr_92 [(_Bool)1]));
            }
            for (unsigned char i_28 = 0; i_28 < 23; i_28 += 3) 
            {
                var_51 |= ((/* implicit */signed char) ((unsigned char) (signed char)109));
                /* LoopSeq 1 */
                for (unsigned long long int i_29 = 0; i_29 < 23; i_29 += 1) 
                {
                    arr_115 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) (unsigned char)240)))))));
                    var_52 *= ((/* implicit */unsigned char) ((arr_98 [i_28] [i_15] [(_Bool)0] [i_29] [(unsigned char)22]) == (arr_31 [i_29])));
                    arr_116 [i_28] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (!(arr_113 [i_7] [i_15] [(_Bool)1] [i_28] [(unsigned char)18])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_69 [(unsigned char)19] [(unsigned char)13] [i_15])))))));
                }
                var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_66 [(_Bool)1] [21ULL]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [(_Bool)1] [i_15] [(_Bool)1] [i_28]))) : (((unsigned long long int) var_0)))))));
            }
        }
    }
}
