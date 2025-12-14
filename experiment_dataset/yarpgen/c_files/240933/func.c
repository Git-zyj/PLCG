/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240933
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((((/* implicit */int) var_3)) >> (((((/* implicit */int) arr_1 [i_0])) - (59746)))))))) ? (max((((/* implicit */unsigned int) var_12)), (arr_0 [i_0]))) : (((((/* implicit */_Bool) min((arr_0 [6U]), (((/* implicit */unsigned int) var_11))))) ? (max((((/* implicit */unsigned int) var_11)), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) var_9))))))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((+(((/* implicit */int) arr_1 [i_0])))) + (((((/* implicit */int) var_3)) - (((/* implicit */int) var_8)))))))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(3854852741U)))) - (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (arr_1 [i_0])))) ? (((((/* implicit */_Bool) 3854852769U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_3 [i_1] [(_Bool)1]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_1])))))))));
            var_14 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(var_3))))))) / (arr_3 [(_Bool)1] [(_Bool)1])));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    arr_15 [i_0] [i_2] [i_4] [i_4] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_13)))) ? ((+(((/* implicit */int) arr_1 [i_4])))) : (((((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_4] [i_3] [i_2])) : (((/* implicit */int) var_8))))));
                    arr_16 [i_3] [i_3] [i_4] [i_4] [i_3] = ((/* implicit */unsigned short) 440114559U);
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_20 [i_4] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_10 [i_0] [i_2] [i_3]))));
                        arr_21 [i_0] [i_4] [i_0] [i_4] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                        var_15 += ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) | ((~(((/* implicit */int) arr_18 [(unsigned char)0] [(unsigned char)0]))))));
                        arr_22 [i_4] = ((/* implicit */unsigned char) var_2);
                        arr_23 [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_4 [i_0]))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
                    {
                        arr_26 [i_4] [i_2] [i_3] [(unsigned char)9] [i_6] = ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_13 [i_4] [i_2] [i_3] [i_4])));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_3])) != (((/* implicit */int) arr_14 [i_0] [i_3] [i_0]))));
                        arr_27 [i_0] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))));
                        arr_28 [i_4] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [3ULL] [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_0] [(_Bool)1])))));
                        arr_29 [i_0] [i_4] [i_2] [i_2] [i_4] [i_0] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_6] [i_2] [i_4] [(unsigned short)9])) != (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                    {
                        arr_32 [i_7] [i_4] [i_3] [i_2] [i_4] [i_0] = ((((/* implicit */int) arr_10 [i_3] [(unsigned char)6] [i_7])) > (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
                        var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))));
                        var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        arr_37 [i_4] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_8] [i_4] [(unsigned short)5] [i_2] [(_Bool)1])) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_3] [i_4] [i_8])) : (((/* implicit */int) var_4))))) ? (((var_3) ? (((/* implicit */int) arr_17 [i_0] [i_2] [i_3] [i_2] [i_8] [i_4] [i_2])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((unsigned char) arr_35 [i_0] [i_4] [i_3] [i_3] [(unsigned char)5])))));
                        arr_38 [(_Bool)0] &= ((/* implicit */unsigned char) var_6);
                        arr_39 [i_0] [i_4] = arr_7 [i_0] [i_0] [(_Bool)1];
                    }
                    var_19 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_0)) || (arr_7 [i_0] [i_2] [i_3])))));
                }
                arr_40 [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (+((-(((/* implicit */int) var_12))))))), (((((_Bool) arr_1 [i_3])) ? (max((((/* implicit */unsigned int) arr_13 [i_0] [i_2] [(_Bool)1] [i_2])), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned char) (_Bool)1))))))))));
            }
            var_20 ^= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) max((1325681031U), (((/* implicit */unsigned int) (unsigned char)83))))) + (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_31 [i_0] [(unsigned short)8] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
            var_21 = ((/* implicit */unsigned char) (~(max((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2])), (((((/* implicit */int) var_13)) & (((/* implicit */int) var_4))))))));
            arr_41 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [(unsigned short)2] [i_0] [i_2] [(unsigned short)2] [i_2])) != (((/* implicit */int) var_13))))) - (((/* implicit */int) min((arr_8 [i_0] [i_2] [i_2]), (((/* implicit */unsigned short) (_Bool)1))))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        }
        for (unsigned char i_9 = 1; i_9 < 9; i_9 += 4) 
        {
            arr_46 [i_0] [i_0] [i_9] = ((/* implicit */_Bool) max((((/* implicit */int) ((var_2) && (arr_25 [i_9 - 1] [i_9 - 1] [i_9] [i_9 + 1] [i_9 + 1])))), (((var_2) ? (((/* implicit */int) arr_25 [i_9 - 1] [i_9 - 1] [i_9] [i_9 + 1] [i_9 + 1])) : (((/* implicit */int) arr_25 [i_9 - 1] [i_9 - 1] [7U] [i_9 + 1] [i_9 + 1]))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-(((/* implicit */int) var_5)))))));
                    arr_51 [i_0] [i_9] [(_Bool)1] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((2305949250U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_9]))))) || (((_Bool) var_2))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */_Bool) ((unsigned short) ((unsigned int) arr_17 [i_0] [(unsigned char)2] [(unsigned char)2] [i_9] [i_9 + 1] [i_9] [i_12])));
                    var_24 = ((/* implicit */unsigned char) arr_42 [i_9] [i_12] [(_Bool)1]);
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9] [(unsigned short)7])) < (((/* implicit */int) (!(arr_25 [i_0] [i_9] [(_Bool)1] [i_12] [i_12]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        arr_56 [i_0] [i_12] [i_9] [i_12] [i_13 - 1] [i_13] [i_9 + 1] = ((/* implicit */unsigned short) ((((unsigned int) arr_19 [i_0] [i_0] [i_13])) | (((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) arr_1 [i_12])) : (((/* implicit */int) var_7)))))));
                        var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
                        arr_57 [i_0] [i_0] [i_9] [i_12] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 + 1]))));
                    }
                }
                var_27 = ((/* implicit */unsigned short) arr_42 [i_9] [i_9] [i_9]);
            }
            for (unsigned char i_14 = 0; i_14 < 10; i_14 += 4) 
            {
                arr_60 [i_9] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_35 [i_0] [i_9] [i_9] [i_14] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))), (min((var_10), (((/* implicit */unsigned long long int) arr_0 [i_14]))))));
                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((var_3) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_59 [i_0] [i_9] [i_14]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_58 [i_9] [i_9])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
            }
            for (unsigned long long int i_15 = 1; i_15 < 7; i_15 += 2) 
            {
                var_29 = (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 1) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_9 + 1] [i_9] [i_16] [i_16] [i_15 + 2])) >= (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_5)))))));
                    arr_65 [i_0] [i_9] [i_9] [i_16] [i_9] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */int) var_0)) + (((/* implicit */int) var_2))))));
                }
                for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) /* same iter space */
                {
                    var_31 = var_12;
                    /* LoopSeq 3 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                    {
                        arr_71 [i_0] [i_0] [i_9] = ((/* implicit */_Bool) ((((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_15 - 1] [i_17] [i_9] [i_9] [i_15 + 3]))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_14 [i_0] [i_9] [i_15 + 2])) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_61 [i_0] [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_9]))) % (arr_63 [i_18] [i_17] [(unsigned short)9] [(unsigned char)3] [i_0])))))));
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_11)), (arr_62 [i_0] [i_0] [(unsigned short)8]))))));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        arr_74 [(unsigned char)1] [i_9 + 1] [i_15] [i_9] [i_17] [i_19] [i_19] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(max((var_7), (var_4))))))));
                        arr_75 [(_Bool)1] [i_9] [i_15] [(_Bool)0] [i_19] = (~(var_10));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (unsigned char)56)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7716010981221344559ULL)));
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) <= (((/* implicit */int) arr_30 [i_0] [i_9] [i_9 + 1] [9ULL] [i_15 + 3]))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        arr_79 [i_0] [i_9] [i_15 + 3] [i_17] [i_9] = (!(((/* implicit */_Bool) (((!(arr_34 [i_0] [i_0] [i_9] [i_15] [i_17] [i_20]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))) : (arr_19 [i_20] [i_15] [i_15])))));
                        var_35 = arr_42 [i_9] [i_17] [i_20];
                        arr_80 [i_0] [i_9] [i_9] [(unsigned char)5] [(unsigned short)2] [i_20] [i_9] = ((/* implicit */_Bool) (-((~(((/* implicit */int) arr_47 [i_20] [i_9 + 1] [i_9 + 1] [i_15 + 3]))))));
                    }
                    arr_81 [i_0] [i_9 + 1] [i_9] [i_0] [i_0] [i_17] = ((/* implicit */_Bool) var_0);
                    arr_82 [(_Bool)1] [(unsigned char)2] [i_15] [i_17] |= ((/* implicit */unsigned short) arr_63 [i_15 - 1] [i_15 + 3] [i_15 + 3] [i_9 + 1] [i_9 + 1]);
                    /* LoopSeq 2 */
                    for (unsigned short i_21 = 0; i_21 < 10; i_21 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) arr_31 [i_15 + 2] [i_17] [(_Bool)0] [i_9 - 1] [i_21]))));
                        var_37 = ((/* implicit */_Bool) var_12);
                    }
                    for (unsigned short i_22 = 0; i_22 < 10; i_22 += 2) 
                    {
                        var_38 += ((/* implicit */unsigned char) (~((+(max((((/* implicit */unsigned long long int) var_3)), (var_10)))))));
                        var_39 = ((((_Bool) arr_58 [i_9] [i_9 + 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1])) ? (arr_73 [i_0] [i_9] [i_15 - 1] [i_17] [i_9]) : (((/* implicit */unsigned long long int) arr_52 [i_22] [i_17] [i_9] [i_9] [(unsigned short)6] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5)))) : (arr_31 [(_Bool)1] [i_22] [(unsigned short)6] [i_15 - 1] [i_9 - 1])))));
                        arr_88 [i_9] [i_9] [i_15 + 3] [i_17] [i_22] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_47 [i_0] [i_9] [i_9 + 1] [i_9 + 1]))))));
                        arr_89 [i_9] [i_22] [(_Bool)1] [i_17] [i_15 - 1] [(unsigned short)0] [i_9] = ((/* implicit */unsigned char) arr_7 [(unsigned short)1] [(_Bool)1] [i_22]);
                    }
                }
                arr_90 [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_64 [i_0] [i_0] [i_9 - 1] [i_15 - 1]);
            }
            /* vectorizable */
            for (unsigned short i_23 = 0; i_23 < 10; i_23 += 4) 
            {
                var_40 *= ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_13))))));
                var_41 = ((/* implicit */_Bool) var_5);
                var_42 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
            }
        }
    }
    /* vectorizable */
    for (unsigned int i_24 = 0; i_24 < 17; i_24 += 3) 
    {
        var_43 = ((/* implicit */unsigned short) ((arr_94 [i_24]) ? (((/* implicit */int) arr_94 [i_24])) : (((/* implicit */int) arr_94 [i_24]))));
        arr_95 [i_24] = ((((/* implicit */int) arr_93 [i_24] [(_Bool)1])) != (((((/* implicit */_Bool) 3854852741U)) ? (((/* implicit */int) (unsigned short)7276)) : (((/* implicit */int) (_Bool)1)))));
        arr_96 [i_24] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) || (((/* implicit */_Bool) ((440114517U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        arr_97 [i_24] = ((/* implicit */unsigned char) ((arr_94 [i_24]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_94 [i_24]))));
        arr_98 [i_24] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_3)))))));
    }
    var_44 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) var_5)))) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_4)))))) < (((unsigned int) var_2)))))));
}
