/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25753
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned int) (unsigned short)48);
        arr_2 [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (unsigned short)48)))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 4; i_2 < 11; i_2 += 2) 
        {
            arr_8 [i_1] [(signed char)4] [i_1] = ((/* implicit */unsigned char) arr_1 [i_1]);
            var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_2]))))) & ((-(((/* implicit */int) arr_7 [i_2 + 1] [i_2] [i_1]))))))) ? (((unsigned int) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_2] [i_2])) ? (arr_6 [i_1] [i_1] [i_1]) : (((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) arr_6 [i_2 - 2] [i_1 + 1] [i_1 + 1])))))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_11 [i_1 + 1] [i_1] = ((/* implicit */unsigned short) arr_5 [(_Bool)1] [i_1]);
                var_12 = ((/* implicit */_Bool) (-(6055188074030810711LL)));
                arr_12 [i_1] = ((/* implicit */unsigned char) (+(1276713439U)));
                arr_13 [(signed char)7] [(signed char)7] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_10 [i_1 + 1] [i_1]), (arr_10 [i_1 + 1] [i_1])))) ? (6055188074030810696LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40)))));
                var_13 = ((unsigned short) arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1]);
            }
            arr_14 [i_1] [11U] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_1 [i_1]) & (arr_1 [i_1])))), (((12328579559882848223ULL) << (((arr_0 [i_1] [i_1]) - (144896543596439321ULL)))))))) : (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_1 [i_1]) & (arr_1 [i_1])))), (((12328579559882848223ULL) << (((((arr_0 [i_1] [i_1]) - (144896543596439321ULL))) - (5992069199206017831ULL))))))));
        }
        var_14 = ((/* implicit */signed char) ((unsigned short) min((((/* implicit */long long int) (+(((/* implicit */int) arr_7 [(signed char)11] [i_1] [i_1 + 1]))))), (min((((/* implicit */long long int) arr_4 [i_1])), (-6055188074030810711LL))))));
    }
    for (unsigned int i_4 = 2; i_4 < 19; i_4 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 41701895)))))) - (arr_0 [i_4 + 1] [0]))));
        arr_17 [i_4] [i_4 + 3] = ((/* implicit */unsigned short) ((((min((arr_15 [i_4]), (((/* implicit */long long int) var_4)))) / (max((-6055188074030810697LL), (-6055188074030810712LL))))) & ((~(arr_15 [i_4 - 2])))));
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) ((int) arr_16 [i_4] [i_4]))), (((((/* implicit */unsigned int) arr_1 [(short)10])) & (1276713439U))))) << (((((((arr_15 [i_4 + 2]) + (9223372036854775807LL))) >> (((min((arr_16 [i_4] [(unsigned char)6]), (((/* implicit */unsigned int) (unsigned short)65488)))) - (65486U))))) - (323494535060240550LL)))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_5 = 2; i_5 < 15; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_6 = 2; i_6 < 13; i_6 += 2) 
        {
            var_16 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_5 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6 + 3]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_5] [10]))) & (arr_16 [i_5] [i_5])))));
            arr_25 [i_5] [i_5 + 1] [i_5 + 1] = ((/* implicit */unsigned char) ((int) arr_22 [i_6 - 1] [i_6 + 3] [i_6]));
            var_17 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) & (((/* implicit */int) arr_23 [i_5] [i_6 + 2] [i_6 + 2])))) == (((/* implicit */int) arr_24 [i_5 - 2] [i_6 + 1]))));
            arr_26 [i_5] [i_5 - 2] [i_5] = ((/* implicit */int) arr_21 [i_5 - 1]);
        }
        /* LoopSeq 2 */
        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                var_18 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-9075))));
                arr_32 [i_5 + 2] [i_5 + 2] [i_8] = ((/* implicit */long long int) arr_21 [i_5 + 2]);
                arr_33 [i_5 - 2] [i_7] [2LL] = ((/* implicit */signed char) (+(arr_30 [i_5 + 2])));
            }
            arr_34 [i_5] [i_5] = ((/* implicit */unsigned int) arr_15 [i_7]);
            arr_35 [i_5 - 2] [i_5 - 2] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
        }
        for (short i_9 = 0; i_9 < 17; i_9 += 2) 
        {
            arr_38 [i_5] [i_5] [i_5 - 2] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_5] [16]))));
            var_19 += (+(arr_22 [i_5 - 2] [i_5 - 2] [i_5 - 1]));
            arr_39 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned int) ((arr_0 [i_5] [i_5]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [8U]))))));
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                var_20 &= ((/* implicit */short) (~(-6055188074030810697LL)));
                /* LoopSeq 1 */
                for (long long int i_11 = 1; i_11 < 16; i_11 += 4) 
                {
                    var_21 = ((/* implicit */unsigned char) arr_16 [(signed char)20] [i_9]);
                    var_22 += ((/* implicit */signed char) (-((+(arr_16 [i_9] [i_9])))));
                    arr_44 [i_5] [i_5] [i_5] [i_5] [i_11] [(short)5] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_27 [i_5] [i_5 - 2] [i_5 + 2]))));
                    arr_45 [i_11] [i_11 + 1] = ((/* implicit */unsigned int) var_2);
                    arr_46 [i_5 - 2] [i_11] [i_10] [i_11 - 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_10])) % (((/* implicit */int) var_4))))) & ((+(9784526884950564386ULL)))));
                }
                /* LoopSeq 4 */
                for (signed char i_12 = 0; i_12 < 17; i_12 += 4) 
                {
                    arr_50 [i_10] [i_10] = ((unsigned long long int) 2988649141U);
                    arr_51 [(signed char)15] [(signed char)15] [i_9] [(signed char)15] [i_10] [(signed char)15] = ((/* implicit */signed char) (!(((1676933439) != (((/* implicit */int) arr_24 [i_5] [i_5]))))));
                }
                for (unsigned int i_13 = 0; i_13 < 17; i_13 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_58 [i_5] [i_9] [i_10] [i_10] [i_14] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_5 + 2] [i_5 + 1]))));
                        arr_59 [i_5] [i_5] [i_5] [i_5] [i_14] |= ((/* implicit */unsigned char) ((signed char) arr_37 [i_5 - 2]));
                    }
                    arr_60 [i_5] [i_5 + 1] [i_5] [i_5] [i_10] [i_5] = arr_57 [i_5 + 2] [i_9] [i_9] [i_5 + 2] [i_5 + 2];
                    /* LoopSeq 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
                        var_24 = ((/* implicit */_Bool) arr_52 [i_9] [i_9] [i_9] [i_9]);
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 2) /* same iter space */
                    {
                        arr_65 [i_5] [i_5 - 2] [i_5] [i_5 + 2] [i_5 - 2] [i_5 - 2] [i_5 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_22 [i_9] [i_9] [i_9]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239)))))) ? (((/* implicit */int) (_Bool)1)) : (((((((/* implicit */int) arr_23 [i_9] [i_10] [(short)12])) + (2147483647))) >> (((arr_61 [i_9] [i_10] [i_13]) - (3325743818U)))))));
                        var_25 &= ((/* implicit */signed char) ((unsigned int) arr_48 [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 + 2] [i_5 + 2]));
                        arr_66 [i_5] [(unsigned char)10] [(unsigned char)10] [i_5] [i_13] [i_5] [i_16] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_54 [i_5 - 2] [(unsigned char)3] [i_5 - 2] [i_10] [i_10])) >= (((/* implicit */int) arr_52 [6] [6] [(_Bool)1] [6])))));
                    }
                }
                for (int i_17 = 3; i_17 < 15; i_17 += 2) 
                {
                    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_5 - 1]))) : (arr_0 [i_9] [i_9]))))));
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((unsigned char) arr_36 [i_5 - 2] [i_5 - 2]))));
                    var_28 += ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (unsigned short)65485)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))) : (-1340464354017580637LL))));
                    arr_69 [i_5 - 2] [i_5 - 2] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-16569))))) & ((~(arr_42 [i_17] [i_9])))));
                }
                for (int i_18 = 0; i_18 < 17; i_18 += 4) 
                {
                    arr_74 [(short)16] [i_9] [(short)16] [(short)16] [(short)16] = arr_28 [i_5 + 1] [i_5 + 1] [i_5 - 1];
                    /* LoopSeq 3 */
                    for (long long int i_19 = 0; i_19 < 17; i_19 += 3) 
                    {
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (!(((/* implicit */_Bool) arr_40 [i_5 + 2] [i_9] [i_19])))))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_5] [i_5 + 2] [i_5 + 2] [i_5]))) / (((((/* implicit */_Bool) 749518157)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65488))) : (1276713447U)))));
                        arr_77 [2LL] [2LL] = ((/* implicit */unsigned int) ((unsigned char) arr_63 [i_5] [i_5] [i_5 + 1] [i_5 + 2] [i_5 + 2]));
                    }
                    for (unsigned int i_20 = 3; i_20 < 16; i_20 += 2) 
                    {
                        arr_82 [i_5] [i_5] [i_10] [(short)8] [i_10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_52 [i_9] [i_10] [i_10] [(short)6]))));
                        var_31 -= ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned long long int i_21 = 3; i_21 < 13; i_21 += 2) 
                    {
                        arr_85 [i_5] [i_9] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_21 + 4] [i_21 + 4] [i_21 + 4] [i_21 + 4])) ? ((+(((/* implicit */int) arr_70 [i_5] [i_5] [i_9] [i_5] [i_18] [i_21])))) : (arr_80 [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_21 + 2] [i_21 + 2])));
                        arr_86 [i_21] [i_21] [9ULL] [9ULL] [9ULL] = ((/* implicit */unsigned int) arr_43 [i_9] [i_18] [i_9] [i_9]);
                        var_32 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_70 [i_5] [i_5 - 2] [i_5] [i_5 - 2] [i_5 - 2] [i_5 - 2]))));
                    }
                    var_33 *= ((/* implicit */unsigned long long int) -6055188074030810711LL);
                    arr_87 [i_5] [i_5] [i_10] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_84 [4LL] [4LL] [4LL] [4LL] [4LL] [4LL])) >= ((~(((/* implicit */int) arr_53 [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                }
                var_34 = ((/* implicit */unsigned short) (unsigned char)166);
            }
            arr_88 [i_5] [i_5] [i_9] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((3018253848U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_9] [i_9] [15LL] [i_9] [i_9])))))) / (((/* implicit */int) arr_27 [i_5] [i_5] [i_5]))));
        }
    }
    for (int i_22 = 2; i_22 < 15; i_22 += 2) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned int) ((((6055188074030810725LL) / (-2770473755655920977LL))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -1))))));
        /* LoopSeq 2 */
        for (short i_23 = 0; i_23 < 17; i_23 += 4) 
        {
            arr_94 [i_22] [(unsigned short)16] [i_22] = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_72 [i_22] [i_22] [(signed char)14] [i_22] [i_22 - 2]))))) / (((long long int) max((((/* implicit */long long int) (short)-19222)), (-6055188074030810711LL))))));
            arr_95 [i_22] [i_23] [(short)7] = max((((/* implicit */unsigned long long int) (-(1276713475U)))), (min((((/* implicit */unsigned long long int) max((arr_91 [i_22 + 2] [i_22 + 2]), (((/* implicit */long long int) arr_54 [10] [i_22 - 1] [i_22 - 1] [i_22 + 2] [10]))))), ((+(1925267144212044355ULL))))));
        }
        for (unsigned long long int i_24 = 0; i_24 < 17; i_24 += 3) 
        {
            var_36 = ((/* implicit */unsigned short) (-(max((((((/* implicit */int) var_2)) * (((/* implicit */int) arr_31 [i_22] [i_24] [i_22])))), (((/* implicit */int) arr_29 [i_22] [i_22 + 2] [i_22 + 1] [i_22]))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_25 = 2; i_25 < 15; i_25 += 1) 
            {
                var_37 = ((/* implicit */int) ((unsigned int) arr_49 [i_22] [i_22 - 1] [i_22 + 2]));
                arr_102 [i_24] [i_24] = ((/* implicit */unsigned int) arr_52 [i_25 + 2] [(_Bool)1] [(_Bool)1] [(_Bool)1]);
                arr_103 [i_22 - 2] [14ULL] [14ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_53 [i_22 - 1] [i_22 + 1] [i_22 - 2] [i_25 + 1] [i_25 + 1])) >> (((/* implicit */int) arr_53 [i_22 - 1] [i_22 + 1] [i_22 - 2] [i_25 + 1] [i_25 + 1]))));
            }
            for (int i_26 = 3; i_26 < 14; i_26 += 4) 
            {
                var_38 = ((((/* implicit */_Bool) ((unsigned short) arr_23 [i_22 + 1] [i_26 + 3] [i_26 + 2]))) ? (((/* implicit */int) max(((short)8), (((/* implicit */short) (unsigned char)123))))) : ((+(((/* implicit */int) arr_23 [i_22 + 1] [i_26 - 3] [i_26 - 2])))));
                var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((var_6) >> ((+(18U))))))));
            }
            var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) min((max((arr_55 [i_22] [i_24] [(short)8] [i_24] [i_22]), (arr_55 [i_22] [i_22 - 2] [i_22 + 2] [i_24] [i_22]))), (min((arr_55 [i_22] [i_24] [i_22 - 1] [i_22 - 1] [i_22]), (arr_55 [i_22] [i_22] [i_22] [i_24] [i_22]))))))));
            arr_107 [i_22 - 1] = ((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_22]));
            var_41 = ((/* implicit */unsigned char) (-((+(arr_16 [(unsigned short)8] [(unsigned short)8])))));
        }
    }
}
