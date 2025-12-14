/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220398
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_11 ^= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-92))))) % (1053291880)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned int) (((+(1053291883))) & (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (arr_3 [i_0])))));
            arr_7 [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 5817677953802692886LL)) ? (-5817677953802692887LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29310))))) / (((/* implicit */long long int) ((/* implicit */int) var_1)))));
        }
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 5817677953802692892LL)) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (1053291901)))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + ((~(arr_6 [i_0] [i_2] [(signed char)19])))))));
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_9 [i_0]), (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (min((((((/* implicit */long long int) 1053291898)) + (5817677953802692886LL))), (((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-92)))))))))));
            /* LoopSeq 1 */
            for (signed char i_3 = 2; i_3 < 21; i_3 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) (signed char)124)) + (((/* implicit */int) (_Bool)0)))));
                        arr_20 [i_0] [i_2] [i_3 - 1] [i_3 - 1] [i_0] [i_5] [i_3 - 1] = ((signed char) (unsigned short)65535);
                        var_15 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_3 - 1])) * (((/* implicit */int) (signed char)-92))));
                        var_16 = ((/* implicit */unsigned char) (signed char)30);
                    }
                    var_17 = ((/* implicit */int) arr_11 [17LL] [i_2] [i_2] [(signed char)17]);
                    arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1678652520)) ? ((-(((/* implicit */int) arr_4 [i_0] [14] [14])))) : ((((_Bool)0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))))) + (((arr_0 [i_4]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))) : (3449052898U)))));
                    arr_22 [i_3] [i_3] [i_3] [i_2] [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_6)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 845914370U)) ? (4243092128U) : (arr_10 [i_0] [i_3 + 1] [(_Bool)1])));
                    }
                }
                /* vectorizable */
                for (signed char i_7 = 1; i_7 < 20; i_7 += 4) 
                {
                    arr_29 [i_2] [(unsigned short)17] [i_7] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_3 [i_0]);
                    /* LoopSeq 1 */
                    for (int i_8 = 2; i_8 < 20; i_8 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_3)))) >= (((((/* implicit */int) var_8)) & (((/* implicit */int) arr_5 [i_2] [i_2] [i_7]))))));
                        arr_34 [i_0] [i_2] [i_3] [i_2] [i_7] [i_0] [i_8] = ((/* implicit */signed char) arr_33 [i_2] [i_2]);
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((-1678652520) != (((/* implicit */int) (unsigned char)8)))))));
                    }
                }
                /* LoopSeq 1 */
                for (int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    arr_37 [i_2] [i_9] = ((/* implicit */_Bool) ((unsigned int) ((_Bool) arr_30 [i_2] [i_9] [i_0] [i_3 - 2] [i_0] [i_3 + 1])));
                    arr_38 [(signed char)14] [0U] [0U] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_15 [i_2] [i_2] [(_Bool)1] [(signed char)13] [(_Bool)1] [(_Bool)1])) + (((/* implicit */int) var_9))))));
                    arr_39 [i_0] [i_0] [i_0] [i_3 - 1] [i_9] = ((/* implicit */unsigned int) var_6);
                    var_22 = ((/* implicit */signed char) 1678652511);
                }
            }
            var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned int) max(((~(((/* implicit */int) (signed char)0)))), (((/* implicit */int) (unsigned char)17))))), (((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (1892837902U)))));
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_31 [2] [i_10] [i_2] [i_2] [i_2] [i_0] [i_0])) != (((/* implicit */int) var_6))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_11 = 3; i_11 < 21; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_12 = 1; i_12 < 21; i_12 += 4) 
                    {
                        arr_49 [i_12] [i_11] [i_11] [3LL] [i_12] = ((/* implicit */unsigned char) 4243092134U);
                        arr_50 [i_2] [i_11] [(_Bool)1] [i_2] [i_2] &= ((-6961388530483533940LL) * (((/* implicit */long long int) ((/* implicit */int) ((1131682476) < (((/* implicit */int) (signed char)-10)))))));
                        arr_51 [i_11] [i_2] [i_2] [i_11] = (!(((arr_13 [i_2] [i_0]) != (((/* implicit */unsigned int) arr_23 [i_2] [(_Bool)1])))));
                        var_25 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (1892837916U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8))))));
                    }
                    arr_52 [i_11] [i_11] [i_11] [i_0] [i_0] = ((/* implicit */long long int) ((arr_23 [i_0] [i_11 - 3]) + (-261979272)));
                    var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_10] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (2348902711U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_10])) ? (((/* implicit */int) arr_4 [i_2] [(unsigned char)5] [i_2])) : (31)))));
                }
                arr_53 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) -8638647398581438154LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_0]))) : (1015763044U))));
                arr_54 [21LL] [21LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [12] [i_2] [(_Bool)1] [i_10]))))) ? (min((max((1678652511), (((/* implicit */int) (signed char)77)))), (((/* implicit */int) (signed char)-55)))) : (((((/* implicit */int) arr_28 [(unsigned char)15] [i_2] [(signed char)2] [i_2])) * (((((/* implicit */int) var_2)) + (((/* implicit */int) var_10))))))));
            }
        }
    }
    /* vectorizable */
    for (long long int i_13 = 0; i_13 < 22; i_13 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */int) ((_Bool) 2402129379U));
        var_28 = ((signed char) 1678652511);
        var_29 = (~(arr_13 [i_13] [i_13]));
        /* LoopSeq 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) ((var_3) ? (((/* implicit */int) ((_Bool) arr_8 [i_13]))) : (((/* implicit */int) var_9))));
            /* LoopSeq 2 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_16 = 0; i_16 < 22; i_16 += 2) 
                {
                    var_31 ^= ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (((((/* implicit */unsigned int) ((/* implicit */int) arr_62 [4U] [(_Bool)1] [i_13]))) & (2402129379U))));
                    var_32 = ((/* implicit */long long int) ((1678652488) & (((/* implicit */int) ((signed char) var_2)))));
                }
                for (signed char i_17 = 2; i_17 < 19; i_17 += 2) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_18 = 2; i_18 < 21; i_18 += 4) 
                    {
                        var_33 ^= ((/* implicit */long long int) ((signed char) 67104768U));
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (signed char i_19 = 0; i_19 < 22; i_19 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) < (-4419467362872381172LL)));
                        arr_76 [i_15] [i_15] [(unsigned short)20] [(unsigned short)20] [i_15] [(unsigned short)20] = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
                    }
                    for (signed char i_20 = 2; i_20 < 20; i_20 += 1) 
                    {
                        arr_79 [i_13] [i_14] [(signed char)6] [i_15] [9LL] = ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */int) (unsigned char)84)) + (((/* implicit */int) (unsigned char)250)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_66 [i_14] [i_17 + 3] [i_14] [i_14]))))));
                        var_36 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_56 [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))) % (((/* implicit */int) arr_31 [i_13] [i_14] [i_15] [i_20 + 2] [i_20 + 2] [i_17 - 1] [i_17 - 1]))));
                        arr_80 [i_13] [i_14] [i_15] [i_15] [(unsigned short)19] = ((/* implicit */unsigned short) (_Bool)1);
                        var_37 = ((/* implicit */long long int) var_2);
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        arr_84 [i_15] [i_15] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_17 - 2] [i_17 - 2] [i_17 - 2] [i_17 - 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_3)))))));
                        var_38 = ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)124))) ^ (4243092134U)));
                    }
                    arr_85 [i_15] [i_15] [i_15] [i_17] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_9)) * (((/* implicit */int) var_2)))) % (((/* implicit */int) (signed char)5))));
                    arr_86 [i_13] [i_15] [i_17 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_13] [i_13] [i_17 + 2] [i_17 + 2] [i_13])) ? (((/* implicit */int) arr_26 [i_17 + 1] [i_15] [i_17 - 1] [i_17 + 1])) : (((/* implicit */int) arr_26 [i_17 + 1] [i_15] [i_17 + 3] [i_17 - 2]))));
                    /* LoopSeq 2 */
                    for (signed char i_22 = 2; i_22 < 19; i_22 += 4) 
                    {
                        arr_90 [i_15] = ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
                        arr_91 [i_13] [i_13] [i_15] [i_15] [(unsigned short)18] [i_17 + 2] [(unsigned short)18] = ((/* implicit */long long int) (signed char)48);
                    }
                    for (unsigned char i_23 = 2; i_23 < 19; i_23 += 4) 
                    {
                        arr_95 [i_15] [(_Bool)1] [(unsigned char)3] [i_14] [i_15] [i_15] [(signed char)18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_43 [i_17 + 3] [i_17 + 1] [i_17 - 1] [i_17] [i_17 - 1] [i_17])) : (((/* implicit */int) arr_36 [(_Bool)1] [i_23 - 1] [11U] [i_17 - 1]))));
                        arr_96 [i_15] = ((/* implicit */signed char) arr_68 [i_23 - 1] [i_23 + 2] [i_23] [i_23 + 1] [(_Bool)1] [i_23]);
                        var_39 = ((/* implicit */unsigned short) ((unsigned int) (unsigned char)37));
                        var_40 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (1131682476) : (arr_27 [i_14] [i_17 + 3] [i_23 - 1])));
                    }
                    var_41 = ((/* implicit */_Bool) (signed char)-77);
                }
                var_42 = ((/* implicit */signed char) (unsigned char)49);
            }
            for (signed char i_24 = 0; i_24 < 22; i_24 += 4) 
            {
                var_43 += ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-3951090598440379194LL)));
                var_44 = ((/* implicit */unsigned short) arr_59 [i_13] [i_13]);
            }
            arr_99 [i_13] [i_14] = ((/* implicit */_Bool) ((signed char) arr_56 [i_13]));
            /* LoopSeq 2 */
            for (unsigned short i_25 = 2; i_25 < 20; i_25 += 2) /* same iter space */
            {
                arr_102 [i_13] [i_14] [20] [(_Bool)1] = var_4;
                arr_103 [i_13] [i_13] [i_13] = 4294967295U;
                arr_104 [i_25] [21U] [1U] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_47 [i_13] [i_13] [i_13] [4U] [4U] [(_Bool)1])) : (((/* implicit */int) (signed char)0)))));
                var_45 ^= (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_13] [i_13] [i_13])) : (((/* implicit */int) (unsigned char)255)))));
                var_46 = arr_33 [i_25 + 2] [i_25];
            }
            for (unsigned short i_26 = 2; i_26 < 20; i_26 += 2) /* same iter space */
            {
                var_47 -= ((/* implicit */unsigned short) arr_6 [9U] [i_14] [i_26]);
                arr_109 [i_13] [(signed char)4] [i_26] = ((/* implicit */unsigned int) ((signed char) var_6));
                /* LoopSeq 2 */
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    arr_112 [i_13] [i_13] [i_13] [i_13] [i_27] [(_Bool)1] = ((/* implicit */signed char) -1131682477);
                    arr_113 [i_13] [i_14] [i_13] [i_26] [i_27] [i_27] = ((/* implicit */unsigned int) ((signed char) var_1));
                }
                for (unsigned short i_28 = 2; i_28 < 21; i_28 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_29 = 3; i_29 < 20; i_29 += 4) 
                    {
                        arr_121 [i_13] [i_29] [i_26] [(_Bool)1] [i_29] = ((long long int) arr_56 [i_14]);
                        var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_47 [i_13] [i_13] [i_14] [i_28] [i_29] [(_Bool)1]))));
                    }
                    /* LoopSeq 3 */
                    for (int i_30 = 0; i_30 < 22; i_30 += 4) /* same iter space */
                    {
                        arr_124 [i_13] [i_14] [i_13] [(_Bool)1] [i_30] [i_14] [i_28] = ((/* implicit */unsigned short) ((long long int) arr_8 [i_30]));
                        arr_125 [i_30] [i_28] [i_26] [i_14] [i_13] = ((/* implicit */unsigned int) 1678652525);
                        var_49 ^= ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned char)168)));
                        arr_126 [i_13] [i_13] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_118 [i_13] [i_13] [(signed char)15] [i_13])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_6)))));
                        arr_127 [i_13] = ((/* implicit */unsigned char) ((long long int) arr_94 [i_28 - 2] [i_28 + 1] [i_26 - 2] [i_26 - 1] [i_26]));
                    }
                    for (int i_31 = 0; i_31 < 22; i_31 += 4) /* same iter space */
                    {
                        var_50 = arr_83 [i_13] [i_14] [i_14] [i_13] [i_28] [(signed char)17];
                        var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_26 [i_28 + 1] [i_26] [i_26] [i_13])) : (((/* implicit */int) (signed char)-77)))))));
                    }
                    for (int i_32 = 0; i_32 < 22; i_32 += 4) /* same iter space */
                    {
                        var_52 *= ((/* implicit */unsigned char) ((_Bool) arr_46 [i_14] [i_14] [i_14] [i_32]));
                        arr_133 [i_13] [i_13] [(unsigned short)10] [i_13] [i_13] = ((/* implicit */long long int) var_9);
                    }
                    var_53 = ((/* implicit */_Bool) ((signed char) arr_35 [i_26 - 2] [i_26 + 2] [i_26 + 2] [i_28 - 2]));
                }
            }
            var_54 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1131682477)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-12))))) ? ((((_Bool)1) ? (arr_6 [i_13] [i_13] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))));
        }
        for (signed char i_33 = 3; i_33 < 20; i_33 += 2) 
        {
            arr_136 [i_33] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) -1131682477)) ? (1678652511) : (((/* implicit */int) (unsigned char)100))))));
            arr_137 [i_33] [i_33] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-12)) + (((/* implicit */int) (unsigned short)24576))))) ? (2794070700U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)0))))));
        }
    }
    var_55 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_1))));
}
