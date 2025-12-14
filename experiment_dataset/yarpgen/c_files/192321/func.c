/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192321
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */_Bool) (short)-1413);
            var_17 = ((/* implicit */unsigned short) var_16);
        }
        for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            arr_11 [i_2] [(_Bool)1] [i_2] &= ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) ((unsigned char) var_5)))))) ? (((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_2]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_0] [i_0])) ? ((~(((/* implicit */int) arr_10 [i_2] [i_2])))) : (((2039150861) / (((/* implicit */int) (signed char)110))))))));
            /* LoopSeq 3 */
            for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                var_18 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1126851755)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_3])))))) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_6 [i_0] [(short)15] [i_3]))))))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((min((((/* implicit */unsigned int) (unsigned char)60)), (((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_2]))) : (2252868800U))))), (((/* implicit */unsigned int) (_Bool)1)))))));
            }
            /* vectorizable */
            for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) arr_5 [i_4] [i_0] [i_0]);
                var_21 = arr_1 [i_2] [i_4];
                arr_18 [i_0] [i_2] [(short)14] = ((/* implicit */signed char) ((long long int) arr_17 [(short)15] [i_2] [i_4]));
                /* LoopSeq 1 */
                for (signed char i_5 = 2; i_5 < 16; i_5 += 1) 
                {
                    var_22 = ((/* implicit */unsigned char) 656813992593237079LL);
                    var_23 ^= ((/* implicit */unsigned char) ((signed char) (~(16945561784934563022ULL))));
                    arr_22 [i_0] [i_2] [i_4] [i_4] [i_0] [i_5] = ((/* implicit */_Bool) arr_1 [i_2] [i_2]);
                    arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_5] [i_5 + 2] [i_5 - 1]))));
                }
            }
            /* vectorizable */
            for (long long int i_6 = 2; i_6 < 16; i_6 += 1) 
            {
                var_24 = ((/* implicit */long long int) var_7);
                arr_27 [i_0] = ((/* implicit */short) ((unsigned char) arr_6 [i_0] [i_2] [(_Bool)1]));
            }
        }
        /* LoopSeq 2 */
        for (short i_7 = 2; i_7 < 16; i_7 += 4) 
        {
            arr_31 [i_0] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) arr_20 [i_0] [i_7 + 1] [i_7 + 1] [i_7 - 1])))));
            arr_32 [i_0] [i_7] [i_0] |= ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_7] [i_7 - 2]))))), (((((/* implicit */_Bool) ((((/* implicit */int) (short)-7446)) / (((/* implicit */int) arr_14 [i_0] [i_7] [i_7 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [15] [i_0] [i_0]))) : (((unsigned long long int) arr_16 [i_0] [i_7 - 2]))))));
        }
        for (long long int i_8 = 2; i_8 < 16; i_8 += 1) 
        {
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (+(((((/* implicit */_Bool) (short)15524)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_8 + 1]))) : (-7762562737722930515LL))))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
                {
                    arr_41 [8] [i_8 + 1] [i_8 - 2] [i_8] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)38531)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (unsigned short)52682))));
                    arr_42 [1U] [i_0] = ((/* implicit */_Bool) arr_20 [i_0] [i_8 - 2] [i_8 - 1] [i_0]);
                }
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_8 - 1] [i_8 + 1])) ? (arr_1 [i_8 - 1] [i_8 - 1]) : (arr_1 [i_8 - 1] [i_8 + 2]))))));
                    arr_46 [i_0] [i_8] [i_0] [i_0] [i_11] [i_11] = ((/* implicit */long long int) (_Bool)0);
                }
                /* vectorizable */
                for (unsigned char i_12 = 0; i_12 < 18; i_12 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned char) arr_20 [i_0] [i_9] [i_8] [i_0]);
                    arr_50 [i_0] [i_0] [i_8] [i_9] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_8 - 2] [i_8 - 2] [i_8 - 2])) ? (arr_0 [i_0] [i_8]) : (arr_0 [i_0] [i_8])));
                    arr_51 [i_0] [i_8] [i_9] [(unsigned char)2] [i_0] [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) arr_28 [i_0] [i_8 - 2]))));
                }
                /* vectorizable */
                for (unsigned char i_13 = 0; i_13 < 18; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_14 = 0; i_14 < 18; i_14 += 1) 
                    {
                        arr_57 [i_0] [i_14] [i_9] [i_8] [i_14] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_56 [i_8 + 1] [(unsigned short)6] [i_8] [i_8 + 1] [i_8 - 2] [i_8 - 1])));
                        arr_58 [i_0] [(_Bool)1] [16U] [(_Bool)1] [i_13] [(signed char)16] [i_0] = (+(arr_48 [i_0] [i_0] [i_9] [i_13] [i_14]));
                    }
                    for (signed char i_15 = 0; i_15 < 18; i_15 += 4) 
                    {
                        arr_63 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_49 [i_8 - 2] [i_8 - 2] [i_8 + 1] [i_8 - 2]))));
                        var_28 |= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)13)))))));
                    }
                    arr_64 [i_0] [i_8] [(unsigned char)16] [i_13] &= ((/* implicit */short) (~(((/* implicit */int) arr_16 [i_0] [i_8 - 1]))));
                }
                /* LoopNest 2 */
                for (unsigned short i_16 = 0; i_16 < 18; i_16 += 1) 
                {
                    for (unsigned char i_17 = 4; i_17 < 16; i_17 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (+(((/* implicit */int) (short)15521)))))));
                            arr_71 [i_0] = (~((-((-(((/* implicit */int) arr_15 [i_0])))))));
                            var_30 *= ((/* implicit */unsigned short) (~(arr_67 [i_17 + 2] [i_17 - 2] [i_8 + 1] [i_0])));
                        }
                    } 
                } 
                arr_72 [i_0] [1U] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1428657469)) ? (((/* implicit */int) (signed char)26)) : (((((/* implicit */_Bool) -828182225)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (signed char)107))))));
            }
            for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_19 = 3; i_19 < 17; i_19 += 4) 
                {
                    for (short i_20 = 0; i_20 < 18; i_20 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((unsigned short) max((min((((/* implicit */int) arr_52 [12] [i_18] [12] [(short)10])), (arr_34 [i_0]))), (max((((/* implicit */int) (_Bool)1)), (arr_34 [i_0])))))))));
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) -656813992593237079LL))));
                        }
                    } 
                } 
                var_33 &= ((/* implicit */int) (((~(var_8))) & (((/* implicit */long long int) min((((/* implicit */int) arr_5 [i_0] [(signed char)4] [i_8 + 2])), (((var_6) ? (((/* implicit */int) (unsigned short)27005)) : (arr_20 [10] [i_8] [i_8] [10]))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)111)) ? (arr_25 [i_0] [i_8 + 2] [i_8 - 2] [i_0]) : (arr_25 [i_0] [i_8 - 2] [14] [i_0])));
                var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (+(((18446744073709551615ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
            }
        }
    }
    for (unsigned short i_22 = 0; i_22 < 14; i_22 += 3) 
    {
        arr_86 [i_22] = ((/* implicit */unsigned char) max((((/* implicit */int) min((arr_6 [(unsigned char)16] [i_22] [i_22]), (((/* implicit */unsigned short) arr_4 [i_22] [i_22]))))), (((int) 4917148391498401842ULL))));
        arr_87 [i_22] = ((/* implicit */unsigned char) arr_5 [i_22] [(signed char)4] [i_22]);
        arr_88 [i_22] [i_22] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_77 [i_22] [(signed char)10] [i_22] [(signed char)8])) ? (((((/* implicit */_Bool) (unsigned short)15005)) ? (((/* implicit */int) (unsigned short)14413)) : (((/* implicit */int) arr_79 [i_22] [i_22] [i_22] [i_22] [i_22])))) : (((int) (unsigned char)111)))));
    }
    for (signed char i_23 = 2; i_23 < 16; i_23 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_24 = 2; i_24 < 16; i_24 += 4) 
        {
            var_36 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_24])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_23 + 2])))))) && (((/* implicit */_Bool) arr_4 [i_24 - 2] [i_23 - 2]))));
            var_37 = (~(arr_44 [i_23] [i_24 - 1] [i_23 + 2] [i_24]));
            arr_94 [i_23 - 2] [i_23 - 2] = ((/* implicit */long long int) var_13);
            var_38 = ((/* implicit */signed char) var_2);
            var_39 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_93 [i_23] [i_24]))) ? (arr_40 [i_23 + 2] [i_23 + 2]) : (((/* implicit */int) (_Bool)0))));
        }
        var_40 = ((/* implicit */long long int) arr_70 [i_23] [i_23] [i_23] [i_23 - 2] [i_23]);
    }
    for (unsigned int i_25 = 0; i_25 < 22; i_25 += 4) 
    {
        var_41 = ((/* implicit */unsigned int) arr_96 [i_25] [i_25]);
        var_42 = ((/* implicit */unsigned short) arr_95 [i_25]);
    }
    var_43 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
    {
        for (unsigned char i_27 = 4; i_27 < 9; i_27 += 1) 
        {
            {
                arr_105 [i_26] [(unsigned char)7] [(unsigned char)6] = ((/* implicit */unsigned short) min((7339767608089653634LL), (((/* implicit */long long int) ((((/* implicit */int) arr_65 [(signed char)9] [i_27 - 1] [i_27 - 3] [i_27 - 1])) ^ (((/* implicit */int) arr_65 [i_27] [i_27 - 4] [i_27 - 1] [i_27 - 3])))))));
                var_44 = (i_26 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) >> (((max((arr_74 [i_26] [i_27 - 4] [i_27 - 3] [i_26]), (((/* implicit */unsigned long long int) var_1)))) - (584368360761581710ULL)))))) : (((/* implicit */long long int) ((((/* implicit */int) var_0)) >> (((((max((arr_74 [i_26] [i_27 - 4] [i_27 - 3] [i_26]), (((/* implicit */unsigned long long int) var_1)))) - (584368360761581710ULL))) - (18226555188952884063ULL))))));
            }
        } 
    } 
    var_45 = ((/* implicit */signed char) min(((-(((/* implicit */int) var_6)))), (max((((/* implicit */int) var_15)), ((+(((/* implicit */int) (signed char)11))))))));
}
