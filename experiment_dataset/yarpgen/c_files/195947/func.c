/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195947
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
    var_17 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) (~(718527508)))) / (min((var_7), (var_7))))) << (((((((/* implicit */_Bool) max((-718527486), (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : (((((/* implicit */unsigned long long int) 718527508)) - (var_7))))) - (53054ULL)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_18 = ((/* implicit */int) var_8);
            var_19 = ((/* implicit */int) ((signed char) var_13));
            arr_5 [i_1] [i_1] [(short)8] = ((/* implicit */long long int) (+(((/* implicit */int) ((max((718527510), (((/* implicit */int) var_12)))) > (max((((/* implicit */int) arr_3 [i_0] [i_1])), (718527498))))))));
        }
        for (int i_2 = 3; i_2 < 15; i_2 += 2) 
        {
            arr_10 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_5) - (var_10)))), (((((/* implicit */_Bool) (-(718527508)))) ? (((((/* implicit */unsigned long long int) var_15)) + (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((718527485) / (((/* implicit */int) var_12)))))))));
            var_20 = ((/* implicit */signed char) (_Bool)0);
        }
        /* LoopSeq 1 */
        for (int i_3 = 4; i_3 < 12; i_3 += 3) 
        {
            arr_14 [i_0] [1LL] = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_3 - 2])), (var_12)))) >> ((((~(((/* implicit */int) arr_0 [i_3 + 4])))) + (11)))));
            arr_15 [i_3] [i_3] [(_Bool)0] = ((/* implicit */signed char) var_2);
            /* LoopSeq 2 */
            for (long long int i_4 = 1; i_4 < 13; i_4 += 1) 
            {
                var_21 *= ((/* implicit */_Bool) (~(((/* implicit */int) min((var_0), (((/* implicit */unsigned char) arr_1 [i_3 + 3] [i_4 + 3])))))));
                /* LoopSeq 2 */
                for (signed char i_5 = 3; i_5 < 15; i_5 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_20 [i_5] [2LL] [i_5 - 3] [i_5 - 3] [i_5]))));
                    /* LoopSeq 1 */
                    for (short i_6 = 4; i_6 < 13; i_6 += 4) 
                    {
                        arr_23 [i_0] [i_0] [i_0] [5ULL] [(short)13] = ((/* implicit */short) arr_20 [i_5] [i_5] [i_4] [(short)13] [(signed char)8]);
                        arr_24 [i_0] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255))))), (((arr_22 [i_0] [i_4] [i_4] [i_4] [i_4 - 1]) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                        arr_25 [4LL] [i_5] [i_4 + 2] [i_3] [5LL] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 718527512)) : (18446744073709551604ULL)))))) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned char) arr_13 [i_3 + 4] [i_3] [15]))))) : (((/* implicit */int) arr_11 [2U] [2U]))));
                        arr_26 [i_4 + 1] [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_4] = ((/* implicit */_Bool) ((short) ((((/* implicit */long long int) var_1)) / (arr_21 [i_3 + 3] [i_5 - 2] [i_6 - 4] [i_5] [i_6]))));
                    }
                }
                for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    arr_30 [2] [2] [i_7] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) -718527486)) && (((/* implicit */_Bool) 0ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_20 [i_0] [i_0] [i_4] [i_0] [i_0])), (var_12))))))) : (18446744073709551615ULL)));
                    var_23 = var_16;
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        arr_33 [i_7] [12ULL] [i_7] [2ULL] [i_3 + 1] [i_7] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) != (var_14)))), (((718527508) / (((/* implicit */int) (short)4652))))))), (-5322203632823118166LL)));
                        var_24 = ((/* implicit */short) (~(((/* implicit */int) ((short) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_0))))))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        arr_36 [i_0] [i_3] [i_3] [i_7] [i_9] = ((/* implicit */short) (-(((/* implicit */int) ((-5322203632823118166LL) >= (((/* implicit */long long int) var_15)))))));
                        arr_37 [i_9] [i_7] [(short)2] [i_0] [i_4 + 2] [i_7] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(max((-718527510), (((/* implicit */int) var_11))))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_28 [i_3 - 3] [i_3 + 4] [i_4] [i_4 + 3] [i_7])) * ((~(18446744073709551615ULL))))))));
                    }
                    var_25 = ((/* implicit */_Bool) (((!((!(((/* implicit */_Bool) 0ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_3])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_15))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0])) || (((/* implicit */_Bool) var_2))))) : (var_3))) : (((/* implicit */int) (((!(((/* implicit */_Bool) 718527509)))) || (((/* implicit */_Bool) var_9)))))));
                }
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_3 + 1] [i_4 + 2] [i_4 + 1]))))) ? ((-(718527498))) : (((/* implicit */int) max((arr_13 [i_3 + 3] [i_4 - 1] [i_4 + 2]), (arr_13 [i_3 - 4] [i_4 + 2] [i_4 - 1])))))))));
            }
            for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    arr_43 [i_11] [i_10] [(unsigned char)9] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_4 [i_3 + 3] [i_11] [i_11]))) - (((((/* implicit */_Bool) -718527505)) ? (1764520548) : (((/* implicit */int) (short)4658))))));
                    /* LoopSeq 2 */
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) max((((/* implicit */int) arr_46 [i_3 - 3] [(short)0] [i_3] [i_3 + 3] [(short)0])), (min((((/* implicit */int) arr_46 [i_3 - 3] [i_3] [i_3] [i_3 - 2] [i_3])), (718527487)))));
                        arr_47 [i_11] [i_11] [i_11] [i_3] [i_3] [i_11] = ((/* implicit */unsigned char) 718527501);
                        arr_48 [i_11] = ((/* implicit */_Bool) var_2);
                    }
                    for (unsigned short i_13 = 3; i_13 < 14; i_13 += 1) 
                    {
                        arr_51 [i_0] [i_11] [i_11] [8U] [i_11] [i_0] = ((/* implicit */_Bool) (~((~((~(var_7)))))));
                        var_28 ^= ((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [(short)0] [i_10])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))), (max((((/* implicit */unsigned long long int) var_2)), (9ULL))))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_29 [i_0] [i_3] [i_3 + 2] [i_11])))))));
                    }
                }
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    var_29 = (-(min((arr_22 [i_14] [i_14] [i_14] [i_14] [i_14 + 1]), (arr_22 [i_14 + 1] [(signed char)3] [i_14] [i_14] [i_14]))));
                    var_30 = var_14;
                    arr_56 [i_14] [(signed char)6] [i_3] [15LL] = ((/* implicit */int) (short)-4634);
                }
                arr_57 [i_0] [i_0] [i_3 - 3] = (-(((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */unsigned long long int) arr_28 [(short)4] [14LL] [i_3 - 1] [i_3 + 4] [(short)4])))));
            }
        }
        var_31 = ((unsigned char) (-(((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) : (var_4)))));
    }
    for (unsigned char i_15 = 0; i_15 < 12; i_15 += 2) 
    {
        /* LoopSeq 4 */
        for (int i_16 = 1; i_16 < 8; i_16 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_17 = 1; i_17 < 10; i_17 += 3) 
            {
                arr_65 [i_17 + 1] [(signed char)0] [i_16 + 4] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)3870)) ? (((/* implicit */int) var_9)) : (-718527484)));
                /* LoopSeq 4 */
                for (unsigned char i_18 = 0; i_18 < 12; i_18 += 4) 
                {
                    var_32 = ((/* implicit */unsigned char) ((signed char) 4346567679542412480ULL));
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_17 + 2] [i_18] [i_16 + 3])) ? (var_7) : (((/* implicit */unsigned long long int) var_3))));
                }
                for (int i_19 = 0; i_19 < 12; i_19 += 3) 
                {
                    var_34 = ((/* implicit */unsigned char) (+(9ULL)));
                    /* LoopSeq 4 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_35 = ((/* implicit */signed char) ((int) var_13));
                        arr_75 [i_16] [i_19] [(_Bool)1] [1U] = ((/* implicit */unsigned long long int) ((unsigned short) var_0));
                        arr_76 [i_20] [i_19] [i_19] [i_15] = ((((/* implicit */_Bool) arr_34 [i_15] [i_16 + 3] [6U] [i_17 + 1] [i_17 + 1] [i_19] [i_17 + 1])) ? (((/* implicit */long long int) var_15)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 718527507)) : (-5800823670810892385LL))));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        arr_79 [i_15] [i_19] [i_19] [i_15] [i_15] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3863))) >= (5800823670810892384LL))));
                        var_36 *= (-(((unsigned long long int) var_13)));
                        arr_80 [i_15] [i_15] [9] [i_15] [i_15] [i_19] = ((/* implicit */unsigned char) arr_70 [(_Bool)1] [i_19] [i_17 - 1] [(short)1]);
                        arr_81 [(_Bool)1] [i_16] [i_17] [i_17] [i_19] [i_21] = ((/* implicit */unsigned long long int) var_12);
                    }
                    for (short i_22 = 2; i_22 < 9; i_22 += 3) /* same iter space */
                    {
                        arr_84 [i_15] [i_15] [i_15] [i_15] [i_15] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_46 [i_17 - 1] [i_17 - 1] [i_16 + 2] [i_19] [i_22 + 1])) ? (8ULL) : (((/* implicit */unsigned long long int) var_3))));
                        var_37 = ((/* implicit */short) var_2);
                    }
                    for (short i_23 = 2; i_23 < 9; i_23 += 3) /* same iter space */
                    {
                        arr_87 [(signed char)10] [i_16] [i_15] [i_19] &= ((/* implicit */int) 5800823670810892384LL);
                        var_38 = ((/* implicit */short) -5800823670810892384LL);
                        arr_88 [i_16] [(_Bool)1] [i_17] [i_19] [i_17] = ((/* implicit */int) (-((+(arr_22 [i_15] [i_16] [i_17 + 1] [i_17 + 1] [i_23 + 2])))));
                    }
                    arr_89 [i_15] [i_15] [i_16] [i_16] [i_19] [i_15] = ((/* implicit */short) var_7);
                }
                for (signed char i_24 = 0; i_24 < 12; i_24 += 4) 
                {
                    var_39 = ((/* implicit */signed char) 14100176394167139135ULL);
                    arr_94 [(short)3] [i_16] = ((/* implicit */_Bool) -5800823670810892376LL);
                    /* LoopSeq 2 */
                    for (unsigned char i_25 = 0; i_25 < 12; i_25 += 1) 
                    {
                        var_40 = ((/* implicit */_Bool) (-((-(var_3)))));
                        arr_97 [i_15] [i_16] [i_17 + 2] [i_17] [i_17 + 2] [i_25] = ((/* implicit */unsigned long long int) var_6);
                        var_41 = (~(-5800823670810892365LL));
                    }
                    for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                    {
                        arr_100 [i_15] [(unsigned char)0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) 718527512)))));
                        var_42 = ((/* implicit */_Bool) min((var_42), (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 9223372036854775794LL))))));
                        arr_101 [i_26] = ((/* implicit */unsigned char) 2069032327);
                    }
                    var_43 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) var_13)))));
                }
                for (long long int i_27 = 0; i_27 < 12; i_27 += 4) 
                {
                    arr_105 [i_15] [i_16] [i_17 + 1] [i_27] = ((/* implicit */short) (~(((/* implicit */int) var_0))));
                    arr_106 [i_17] [i_16] [i_17] [i_16] = ((/* implicit */long long int) (~(arr_102 [i_16] [i_16] [i_16 + 1] [(_Bool)1])));
                    var_44 = ((/* implicit */_Bool) ((((/* implicit */int) arr_95 [(signed char)6] [i_17] [i_17] [i_17] [i_17] [i_17 + 1] [5ULL])) / (arr_96 [i_16 + 2])));
                    arr_107 [i_27] [i_17] = ((/* implicit */_Bool) var_10);
                }
            }
            arr_108 [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) ((int) max((((arr_39 [i_15] [i_15]) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-26599))))), (((/* implicit */unsigned int) -718527484)))));
        }
        for (unsigned short i_28 = 0; i_28 < 12; i_28 += 3) 
        {
            var_45 = ((/* implicit */long long int) min((var_45), ((+((~(((((/* implicit */long long int) ((/* implicit */int) var_6))) | (arr_45 [i_15] [i_15] [i_15] [i_15])))))))));
            var_46 = ((/* implicit */int) ((8ULL) * (((/* implicit */unsigned long long int) -718527473))));
            var_47 = ((/* implicit */long long int) (!(min(((!(arr_92 [i_28] [i_28] [i_28] [i_28]))), (((((/* implicit */_Bool) var_7)) && (arr_99 [i_15] [i_15])))))));
        }
        for (unsigned short i_29 = 3; i_29 < 11; i_29 += 1) 
        {
            arr_113 [5] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_67 [i_15] [i_15] [i_15] [4U] [i_15]))))))))) : ((+(3939442125207563343ULL)))));
            var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5800823670810892399LL)) ? ((-(((((/* implicit */_Bool) arr_2 [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-5800823670810892381LL))))) : (((/* implicit */long long int) (~(max((-718527497), (((/* implicit */int) var_12)))))))));
            arr_114 [2LL] [i_29] [i_15] = (((+(((unsigned long long int) -718527484)))) < (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_8))))))));
        }
        for (long long int i_30 = 0; i_30 < 12; i_30 += 4) 
        {
            var_49 = ((/* implicit */unsigned char) (-(max((var_13), (((/* implicit */long long int) (-(((/* implicit */int) arr_99 [i_15] [i_15])))))))));
            var_50 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_0 [i_15]) ? (((/* implicit */int) arr_0 [i_30])) : (((/* implicit */int) arr_0 [i_15])))))));
            var_51 = ((/* implicit */_Bool) var_8);
        }
        var_52 = ((((/* implicit */_Bool) min(((unsigned short)17340), (((/* implicit */unsigned short) arr_42 [i_15] [i_15] [i_15]))))) ? (((/* implicit */unsigned long long int) var_4)) : (var_7));
    }
}
