/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221602
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 16; i_1 += 1) /* same iter space */
        {
            var_11 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -1166590901704884788LL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)127)))), (((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 + 3])) : (((/* implicit */int) var_4))))));
            arr_4 [(_Bool)1] [(_Bool)1] |= ((/* implicit */int) var_3);
        }
        for (int i_2 = 2; i_2 < 16; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_12 = ((/* implicit */unsigned short) (-(12646650649043718725ULL)));
                arr_10 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) ((min((var_10), (arr_7 [i_3]))) ? (arr_3 [i_0 + 1]) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (18446744073709551615ULL)))))));
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_3]);
                var_13 *= ((/* implicit */int) (_Bool)1);
            }
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_3 [i_2])))) ? (((/* implicit */long long int) (~(-535918858)))) : (9223372036854775807LL)));
        }
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((signed char) var_4)))));
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_15 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) (unsigned short)0)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_5 = 3; i_5 < 16; i_5 += 1) 
            {
                var_16 = ((/* implicit */unsigned char) arr_18 [i_0] [i_0] [i_0]);
                var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [(_Bool)1])) ? (((/* implicit */int) arr_7 [i_5 - 1])) : (((((/* implicit */_Bool) -535918883)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_7 [i_0]))))));
            }
            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */unsigned long long int) -535918883)), (16876994462398477091ULL))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_4))) ? (max((((((/* implicit */_Bool) 11074070646747408793ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113))) : (arr_17 [i_0]))), (((unsigned long long int) arr_22 [i_6])))) : (min((min((((/* implicit */unsigned long long int) (short)32767)), (3821275824095923321ULL))), (((/* implicit */unsigned long long int) ((int) arr_5 [i_6])))))));
            arr_23 [i_0] = ((/* implicit */long long int) 18446744073709551615ULL);
        }
        arr_24 [i_0] = ((/* implicit */signed char) -3369548990567945178LL);
        arr_25 [i_0] [(_Bool)1] &= ((/* implicit */short) min((((((_Bool) var_6)) ? (arr_2 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) ((_Bool) 12646650649043718725ULL)))));
    }
    for (int i_7 = 2; i_7 < 12; i_7 += 1) 
    {
        arr_28 [i_7] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_7]))))) ? (((((/* implicit */_Bool) arr_22 [i_7])) ? (var_1) : (var_7))) : (arr_2 [i_7 + 2]))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_7 + 1]))) | (((arr_3 [i_7]) << (((var_2) - (16992565776924489369ULL)))))))));
        arr_29 [i_7] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_7]))))) ? (6520345335081884260ULL) : (var_1)))) ? (((/* implicit */int) arr_1 [i_7])) : (((/* implicit */int) arr_22 [i_7]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 16017179385707287885ULL)) ? (arr_2 [i_7 + 4]) : (arr_2 [i_7 + 3])));
            arr_34 [i_7] [i_8] [i_7] = ((/* implicit */unsigned short) (~(arr_2 [i_7 + 2])));
            /* LoopSeq 1 */
            for (unsigned short i_9 = 2; i_9 < 14; i_9 += 1) 
            {
                arr_37 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) var_10)))));
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        var_20 = ((unsigned long long int) var_6);
                        arr_44 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [(short)6] |= ((arr_42 [i_11] [i_11] [i_11] [i_11 + 1] [(signed char)6]) ? (((/* implicit */int) (unsigned short)65512)) : (((/* implicit */int) arr_8 [i_7] [i_7 + 4])));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_12 = 1; i_12 < 14; i_12 += 3) 
                    {
                        arr_48 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) ((var_0) ? (((/* implicit */int) arr_35 [i_8] [i_9 + 1] [i_8])) : (((/* implicit */int) arr_35 [i_8] [i_9 - 2] [i_9 - 2]))));
                        arr_49 [i_7] [i_8] = ((/* implicit */int) ((var_10) ? (arr_3 [i_12 - 1]) : (arr_3 [i_12 - 1])));
                    }
                }
                arr_50 [i_7] [i_8] [i_7] [i_8] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5))) : (var_5)))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (arr_15 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)52877))))));
                arr_51 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((_Bool) arr_16 [i_7 + 1] [i_7 + 2]));
            }
            /* LoopSeq 1 */
            for (int i_13 = 1; i_13 < 13; i_13 += 2) 
            {
                arr_56 [i_8] [i_8] [i_8] = ((signed char) ((unsigned char) (unsigned short)65518));
                var_22 = ((/* implicit */short) ((_Bool) 535918883));
                var_23 = ((/* implicit */int) arr_53 [i_7] [(unsigned short)14] [(unsigned short)14] [i_7]);
                var_24 &= ((/* implicit */_Bool) (~(8935141660703064064ULL)));
            }
            arr_57 [i_8] [i_8] = ((/* implicit */int) ((unsigned long long int) var_3));
        }
        for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_15 = 0; i_15 < 16; i_15 += 3) 
            {
                var_25 += ((/* implicit */short) max((((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) arr_36 [i_7 + 3] [i_7 - 2] [i_7 + 1])) : (((/* implicit */int) arr_7 [i_7 + 3]))))), (((unsigned long long int) arr_15 [i_14]))));
                arr_64 [i_7] [i_15] [i_7] [i_15] = ((/* implicit */long long int) (short)-3092);
                var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_7])) + (((/* implicit */int) var_9))))) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) arr_59 [i_7] [i_7])) : (((/* implicit */int) arr_58 [i_14]))))))) ? (max((((/* implicit */unsigned long long int) ((var_9) || (((/* implicit */_Bool) (short)764))))), (((var_1) ^ (arr_63 [i_7] [i_7] [i_7] [i_7]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_36 [i_7 - 2] [i_7 + 2] [i_7 - 2]))))));
                var_27 = ((((/* implicit */_Bool) arr_14 [i_7] [i_7])) ? ((+(((((/* implicit */_Bool) arr_3 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_7] [i_7]))) : (arr_52 [i_7] [i_15] [i_15] [i_7]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_61 [i_14] [i_14] [i_14] [i_7 + 1]))));
                var_28 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_14])) ? (((((/* implicit */int) arr_35 [i_15] [i_15] [i_15])) >> (((/* implicit */int) var_9)))) : ((-(((/* implicit */int) var_0))))))));
            }
            arr_65 [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_0 [i_14]);
        }
        /* vectorizable */
        for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 2) /* same iter space */
        {
            var_29 = ((/* implicit */long long int) var_6);
            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)17283)))))));
        }
    }
    /* LoopSeq 2 */
    for (int i_17 = 2; i_17 < 24; i_17 += 3) 
    {
        var_31 = ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_70 [i_17] [i_17]))))))), (arr_70 [i_17] [i_17])));
        arr_71 [i_17] [i_17] = ((/* implicit */unsigned long long int) arr_69 [i_17] [i_17]);
    }
    /* vectorizable */
    for (unsigned short i_18 = 0; i_18 < 19; i_18 += 4) 
    {
        var_32 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (short)-1)) < (((/* implicit */int) (short)764))));
        var_33 = ((/* implicit */unsigned short) ((((arr_7 [i_18]) ? (2ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17277))))) > (0ULL)));
        arr_74 [i_18] [i_18] = ((/* implicit */signed char) ((unsigned short) (_Bool)1));
    }
    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)17277))))) ? (((/* implicit */int) (short)-2966)) : (((/* implicit */int) var_9))));
    var_35 = ((/* implicit */_Bool) var_2);
}
