/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41544
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
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) ((int) (((+(((/* implicit */int) (unsigned char)235)))) ^ (((/* implicit */int) arr_0 [(unsigned char)5] [i_0])))));
        var_20 += ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_2 [(short)10])) : (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))))), (((((((((/* implicit */long long int) ((/* implicit */int) (short)-21677))) | (arr_3 [(unsigned short)2]))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (short)21699)) : (((/* implicit */int) arr_0 [(signed char)10] [i_0])))) - (21699)))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) (+(((((((((/* implicit */_Bool) var_18)) ? (arr_3 [i_1]) : (((/* implicit */long long int) arr_1 [i_1])))) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) var_9)) ? (arr_3 [i_0]) : (((/* implicit */long long int) var_17)))) + (2367672105649117704LL))) - (5LL)))))));
            var_21 = ((/* implicit */int) ((signed char) arr_0 [(_Bool)1] [3LL]));
        }
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 1; i_3 < 8; i_3 += 3) 
            {
                var_22 |= ((/* implicit */unsigned long long int) 251833903U);
                var_23 = ((/* implicit */int) ((arr_10 [i_3] [i_2] [i_0 - 2]) != (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)71)))))));
            }
            arr_12 [i_0] [i_0] [(unsigned short)5] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (_Bool)0))))));
        }
    }
    var_24 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((var_6) / (var_6)))) / (((var_18) / (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) / (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15)))) * (((/* implicit */int) (signed char)71)))))));
    /* LoopSeq 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_16 [(unsigned short)4] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) arr_14 [i_4])))));
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_13 [i_4])))) - (arr_14 [i_4])));
        /* LoopNest 2 */
        for (unsigned int i_5 = 4; i_5 < 22; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_25 = ((/* implicit */_Bool) arr_13 [i_4]);
                    arr_25 [i_4] [i_5] [i_4] [(unsigned short)8] = ((/* implicit */_Bool) var_12);
                }
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                for (signed char i_10 = 1; i_10 < 12; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (((+(2779380242880122262LL))) == (((/* implicit */long long int) max((((/* implicit */int) arr_35 [i_7] [i_7] [i_7] [8] [i_7] [i_7])), (-1010336878))))))) * (((/* implicit */int) arr_36 [i_7] [i_7] [(signed char)11] [i_11]))));
                            arr_40 [i_7] [i_8] [(short)3] [i_7] [i_10 + 1] [i_11] = ((/* implicit */_Bool) min((((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_11)))) && (min((arr_36 [i_11] [i_10] [i_8] [i_8]), (arr_21 [i_7] [i_8] [i_9] [i_11])))))), (max((((signed char) 131064U)), (arr_35 [7] [i_10 - 1] [i_10] [5U] [i_10] [i_10])))));
                            var_27 = ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10))))), (arr_24 [i_11] [i_7] [i_8]))) << (((((((((/* implicit */int) var_14)) << (((var_17) - (1814130130))))) << (((((/* implicit */int) arr_19 [1LL] [i_7])) - (66))))) - (536870881))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_12 = 3; i_12 < 12; i_12 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_36 [11U] [i_12 - 2] [i_12 - 1] [i_12]))));
                    arr_46 [i_7] [(short)12] [i_8] [(signed char)4] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_12 + 1] [i_12 - 2] [i_12 - 3])) % ((~(((/* implicit */int) arr_21 [i_7] [(_Bool)1] [(_Bool)1] [i_13]))))));
                    var_29 = ((/* implicit */_Bool) ((((int) var_0)) ^ (((/* implicit */int) arr_30 [i_12 + 1] [i_12] [i_12 + 1]))));
                }
                /* LoopSeq 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_30 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)134)) < (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (unsigned short i_15 = 2; i_15 < 11; i_15 += 3) 
                    {
                        var_31 = arr_28 [i_7] [i_12 + 1];
                        arr_55 [i_7] [i_7] [i_12] [(unsigned short)6] [(unsigned short)6] [(unsigned short)6] = ((/* implicit */unsigned int) arr_18 [0U]);
                    }
                    for (int i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        arr_59 [i_7] [i_8] [i_7] [(unsigned short)5] [(short)0] = ((/* implicit */signed char) ((((/* implicit */int) arr_30 [i_12 - 2] [i_8] [8U])) % (((/* implicit */int) arr_49 [i_12 - 2] [i_7] [i_12 - 3] [i_12 - 3]))));
                        var_32 |= ((/* implicit */signed char) ((unsigned char) arr_21 [i_12] [i_12 - 1] [i_12 - 3] [i_12 - 2]));
                    }
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_49 [i_7] [i_8] [i_7] [i_7])))))));
                }
                for (unsigned int i_17 = 0; i_17 < 13; i_17 += 2) 
                {
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_7] [i_7] [i_12] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3217267896U)));
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 0; i_18 < 13; i_18 += 4) 
                    {
                        var_35 = ((((/* implicit */_Bool) arr_51 [i_12] [i_12 - 1] [i_12 - 1] [i_12] [i_12 - 2] [i_12 - 3] [8])) ? (arr_51 [i_12 - 2] [i_12 - 1] [(_Bool)1] [i_12 - 2] [i_12 - 3] [i_12 - 1] [i_12 - 2]) : (arr_51 [i_12] [i_12 + 1] [i_12 - 1] [(signed char)9] [i_12 - 1] [i_12 - 1] [i_12]));
                        var_36 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_8] [i_12 - 1] [i_8] [i_18])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15))))) ? (((arr_34 [0LL] [i_8] [i_8] [(unsigned short)2] [i_8] [i_8]) ? (var_6) : (((/* implicit */int) arr_28 [(unsigned char)7] [i_12])))) : (((/* implicit */int) arr_43 [i_12] [i_12 - 3] [i_18] [i_12 - 3]))));
                        var_37 *= ((/* implicit */short) (+(arr_60 [i_12 + 1])));
                        var_38 = ((/* implicit */signed char) arr_21 [i_18] [i_12 - 1] [i_8] [i_7]);
                    }
                    var_39 = ((/* implicit */signed char) ((var_2) % (((/* implicit */int) arr_42 [(short)3] [i_7] [i_7] [(unsigned char)10]))));
                }
                var_40 = ((unsigned int) arr_54 [i_7] [i_7] [i_7] [i_7] [(unsigned short)3]);
            }
            arr_65 [4] [2LL] [i_7] = ((/* implicit */unsigned short) max((var_1), (((/* implicit */unsigned int) arr_28 [i_7] [i_8]))));
        }
        for (signed char i_19 = 0; i_19 < 13; i_19 += 3) 
        {
            var_41 += arr_24 [i_19] [(short)8] [i_7];
            /* LoopSeq 2 */
            for (unsigned long long int i_20 = 1; i_20 < 11; i_20 += 1) 
            {
                var_42 = ((/* implicit */unsigned short) arr_19 [i_19] [(unsigned short)17]);
                var_43 = ((/* implicit */_Bool) arr_47 [i_7] [i_20] [6] [i_7]);
                arr_71 [i_7] [i_7] [i_20] = ((/* implicit */int) max((((long long int) 131043U)), (((/* implicit */long long int) (!(((7449931895128541954ULL) == (((/* implicit */unsigned long long int) arr_61 [i_7] [(short)4] [i_19] [i_7])))))))));
                arr_72 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)120)) | (((/* implicit */int) arr_67 [i_7] [i_7])))) | (((/* implicit */int) (short)-25310))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (3217267894U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15772)))))) ? (((/* implicit */int) arr_67 [i_7] [i_7])) : ((~(var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)-1)), (var_10)))))))));
                var_44 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_63 [i_20 + 1] [i_20] [i_20] [i_20 + 1] [i_20 + 1] [i_20 + 2]))))), (var_13));
            }
            for (unsigned short i_21 = 0; i_21 < 13; i_21 += 2) 
            {
                arr_75 [i_7] [i_7] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) var_11)) & (arr_22 [i_7] [i_7] [(_Bool)0] [i_7])))), ((+(var_0)))));
                /* LoopNest 2 */
                for (signed char i_22 = 0; i_22 < 13; i_22 += 2) 
                {
                    for (signed char i_23 = 0; i_23 < 13; i_23 += 1) 
                    {
                        {
                            arr_80 [i_7] [i_19] [i_21] [i_21] [i_7] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_76 [i_7] [(signed char)9] [i_21] [(short)7])) : (((/* implicit */int) arr_76 [i_7] [(_Bool)1] [i_21] [i_7])))));
                            var_45 = ((/* implicit */unsigned char) var_4);
                        }
                    } 
                } 
            }
        }
        for (short i_24 = 0; i_24 < 13; i_24 += 3) /* same iter space */
        {
            var_46 = ((/* implicit */signed char) max((((((arr_26 [i_7]) | (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) || (((/* implicit */_Bool) arr_79 [i_7] [i_7] [i_7]))))));
            var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_69 [i_7] [i_24] [0] [i_24])) ? (arr_69 [i_7] [i_7] [(unsigned char)0] [i_7]) : (arr_69 [i_7] [i_7] [(unsigned char)0] [i_24])))))));
            var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6)))) != (((((/* implicit */_Bool) arr_74 [(unsigned short)8])) ? (arr_74 [(signed char)12]) : (arr_74 [10U]))))))));
            arr_83 [i_7] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((signed char)-102), ((signed char)122))))));
        }
        for (short i_25 = 0; i_25 < 13; i_25 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_26 = 1; i_26 < 12; i_26 += 1) 
            {
                var_49 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                var_50 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((int) arr_63 [(_Bool)1] [i_25] [11] [i_25] [(signed char)7] [6LL]))) < (arr_24 [i_26 + 1] [i_7] [i_26 - 1])));
                var_51 += ((/* implicit */int) ((((((/* implicit */int) var_12)) > (((/* implicit */int) (signed char)-120)))) ? (arr_57 [(signed char)4] [(signed char)4] [(signed char)4] [i_7] [12LL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_76 [(short)2] [i_26 - 1] [i_26] [(_Bool)1])))));
            }
            arr_88 [i_7] [i_25] = ((int) min((arr_21 [i_7] [i_7] [i_25] [i_25]), (arr_21 [i_25] [i_25] [i_7] [i_7])));
        }
        var_52 = ((/* implicit */int) ((short) ((((/* implicit */int) (signed char)118)) - (((/* implicit */int) (_Bool)1)))));
        var_53 = ((/* implicit */_Bool) arr_47 [i_7] [i_7] [i_7] [i_7]);
    }
    for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
    {
        var_54 = ((/* implicit */unsigned int) var_12);
        var_55 += ((/* implicit */_Bool) max((((/* implicit */int) ((min((var_1), (arr_89 [i_27]))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (-78217649) : (((/* implicit */int) (_Bool)1)))))))), (((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (min((((/* implicit */int) var_16)), (arr_90 [i_27]))) : (((/* implicit */int) min(((unsigned short)48163), (var_3))))))));
        arr_91 [i_27] = (signed char)-1;
        var_56 = ((/* implicit */signed char) min((((/* implicit */int) var_10)), (min((((/* implicit */int) var_15)), (((((/* implicit */int) (signed char)0)) * (((/* implicit */int) (signed char)118))))))));
    }
}
